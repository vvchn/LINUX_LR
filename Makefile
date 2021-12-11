obj-m := h.o
KDIR := /home/billgates/BUILD/linux-5.10.76
all:
	$(MAKE) -C $(KDIR) M=$$PWD
