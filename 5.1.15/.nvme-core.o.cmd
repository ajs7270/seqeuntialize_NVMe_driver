cmd_/root/nvme_new/nvme-core.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o /root/nvme_new/nvme-core.o /root/nvme_new/core.o /root/nvme_new/trace.o /root/nvme_new/lightnvm.o 
