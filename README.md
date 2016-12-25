# Unicore 64bit
### Usage
#### Dependencies
```
/pub/toolchain		# For Cross-Compile
/pub/git/linux		# Linux kernel repository
/pub/git/qemu		# Qemu source
```
#### Preparation
```
make highfive
```
#### Run user mode helloworld
```
make hello-run-trace
```
#### Run system mode helloworld and busybox
```
make qemu-run
```
##### And in qemu console
```
$ /etc/helloworld
```

### Known Issues
#### Linux Kernel 4.4
We try to upgrade the kernel to version 4.4, but compilation can fail at this time due to the unfixable fatal error of missing the *preempt.h* file.
#### Qemu 2.7
We try to upgrade the qemu to version 2.7, but compilation can fail at this time due to version incompatibility. These issues cannot be fixed in the near future.
```
make qemu-27-new
make qemu-make
```
These two command will generate the new 2.7 version of qemu. All modifications are packed as patches in *patches-27-qemu* directory.

### Notice
```
Linux base: 3.7-rc3

patches-3.7:
	arch/unicore64 should be placed under linux/arch/unicore64 dir
	Documentation/DocBook/unicore64-kernel.tmpl should be placed under linux/Documentation/DocBook dir
	patches-fixup/* should be applied
```
### Documents
```
docs/Unicore64A.pdf
docs/Unicore64A-stage2.pdf
```
### Copyright
#### Authors
```
胡越予	1400012817
高煜	1400012705
章嘉晨	1300012792
```
