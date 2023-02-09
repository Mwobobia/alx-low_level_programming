#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>

#define ELF_MAGIC 0x7f454c46
#define ELF_CLASS 32
#define ELF_CLASS64 64
#define ELF_DATA2LSB 1
#define ELF_VERSION 1
#define ELF_OSABI_SYSV 0
#define ELF_ABIVERSION 0
#define ELF_TYPE_EXEC 2

const char *elf_class_str(unsigned char elf_class)
{
    switch (elf_class) {
        case ELFCLASS32:
            return "ELF32";
        case ELF_CLASS64:
            return "ELF64";
        default:
            return "unknown";
    }
}

const char *elf_data_str(unsigned char elf_data)
{
    switch (elf_data) {
        case ELF_DATA2LSB:
            return "2's complement, little endian";
        default:
            return "unknown";
    }
}

const char *elf_osabi_str(unsigned char elf_osabi)
{
    switch (elf_osabi) {
        case ELF_OSABI_SYSV:
            return "UNIX - System V";
        default:
            return "unknown";
    }
}

const char *elf_type_str(unsigned short elf_type)
{
    switch (elf_type) {
        case ELF_TYPE_EXEC:
            return "EXEC (Executable file)";
        default:
            return "unknown";
    }
}

int main(int argc, char **argv)
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }
char *filename = argv[1];
int fd = open(filename, O_RDONLY);
if (fd == -1) {
        perror("open");
            exit(98);
}

unsigned char e_ident[EI_NIDENT];
ssize_t bytes_read = read(fd, e_ident, EI_NIDENT);
if (bytes_read == -1) {
        perror("read");
            exit(98);
}
if (bytes_read != EI_NIDENT) {
        fprintf(stderr, "Error: failed to read ELF header\n");
            exit(98);
}

if (*(unsigned int *)e_ident != ELF_MAGIC) {
        fprintf(stderr, "Error: not an ELF file\n");
            exit(98);
}

printf("ELF Header:\n");
printf("  Magic:   %02x %02x %02x %02x\n", e_ident[0], e_ident[1], e)
