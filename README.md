# Unicore 64bit
### Usage
#### Dependencies
```
/pub/toolchain		# For Cross-Compile
/pub/git/linux		# Linux kernel repository
/pub/git/qemu		# Qemu source with Unicore64 support
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
### Notice
```
Linux base: 3.7-rc3

patches-3.7:
	arch/unicore64 should be placed under linux/arch/unicore64 dir
	Documentation/DocBook/unicore64-kernel.tmpl should be placed under linux/Documentation/DocBook dir
	patches-fixup/* should be applied
```
