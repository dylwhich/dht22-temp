temp: temp.c pi_dht_read.c pi_mmio.c common_dht_read.c
	gcc -Wall --std=gnu99 -lrt $? -o temp

install: temp
	install -m 4755 temp /usr/local/bin/temp
