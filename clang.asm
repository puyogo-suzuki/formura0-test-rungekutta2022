
tmpmain-clang.out:     file format elf64-x86-64


Disassembly of section .init:

0000000000401000 <_init>:
  401000:	f3 0f 1e fa          	endbr64 
  401004:	48 83 ec 08          	sub    $0x8,%rsp
  401008:	48 8b 05 e9 2f 00 00 	mov    0x2fe9(%rip),%rax        # 403ff8 <__gmon_start__>
  40100f:	48 85 c0             	test   %rax,%rax
  401012:	74 02                	je     401016 <_init+0x16>
  401014:	ff d0                	callq  *%rax
  401016:	48 83 c4 08          	add    $0x8,%rsp
  40101a:	c3                   	retq   

Disassembly of section .plt:

0000000000401020 <.plt>:
  401020:	ff 35 e2 2f 00 00    	pushq  0x2fe2(%rip)        # 404008 <_GLOBAL_OFFSET_TABLE_+0x8>
  401026:	ff 25 e4 2f 00 00    	jmpq   *0x2fe4(%rip)        # 404010 <_GLOBAL_OFFSET_TABLE_+0x10>
  40102c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000401030 <puts@plt>:
  401030:	ff 25 e2 2f 00 00    	jmpq   *0x2fe2(%rip)        # 404018 <puts@GLIBC_2.2.5>
  401036:	68 00 00 00 00       	pushq  $0x0
  40103b:	e9 e0 ff ff ff       	jmpq   401020 <.plt>

0000000000401040 <malloc@plt>:
  401040:	ff 25 da 2f 00 00    	jmpq   *0x2fda(%rip)        # 404020 <malloc@GLIBC_2.2.5>
  401046:	68 01 00 00 00       	pushq  $0x1
  40104b:	e9 d0 ff ff ff       	jmpq   401020 <.plt>

Disassembly of section .text:

0000000000401050 <_start>:
  401050:	f3 0f 1e fa          	endbr64 
  401054:	31 ed                	xor    %ebp,%ebp
  401056:	49 89 d1             	mov    %rdx,%r9
  401059:	5e                   	pop    %rsi
  40105a:	48 89 e2             	mov    %rsp,%rdx
  40105d:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  401061:	50                   	push   %rax
  401062:	54                   	push   %rsp
  401063:	49 c7 c0 00 1a 40 00 	mov    $0x401a00,%r8
  40106a:	48 c7 c1 90 19 40 00 	mov    $0x401990,%rcx
  401071:	48 c7 c7 90 17 40 00 	mov    $0x401790,%rdi
  401078:	ff 15 72 2f 00 00    	callq  *0x2f72(%rip)        # 403ff0 <__libc_start_main@GLIBC_2.2.5>
  40107e:	f4                   	hlt    
  40107f:	90                   	nop

0000000000401080 <_dl_relocate_static_pie>:
  401080:	f3 0f 1e fa          	endbr64 
  401084:	c3                   	retq   
  401085:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40108c:	00 00 00 
  40108f:	90                   	nop

0000000000401090 <deregister_tm_clones>:
  401090:	b8 38 40 40 00       	mov    $0x404038,%eax
  401095:	48 3d 38 40 40 00    	cmp    $0x404038,%rax
  40109b:	74 13                	je     4010b0 <deregister_tm_clones+0x20>
  40109d:	b8 00 00 00 00       	mov    $0x0,%eax
  4010a2:	48 85 c0             	test   %rax,%rax
  4010a5:	74 09                	je     4010b0 <deregister_tm_clones+0x20>
  4010a7:	bf 38 40 40 00       	mov    $0x404038,%edi
  4010ac:	ff e0                	jmpq   *%rax
  4010ae:	66 90                	xchg   %ax,%ax
  4010b0:	c3                   	retq   
  4010b1:	66 66 2e 0f 1f 84 00 	data16 nopw %cs:0x0(%rax,%rax,1)
  4010b8:	00 00 00 00 
  4010bc:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004010c0 <register_tm_clones>:
  4010c0:	be 38 40 40 00       	mov    $0x404038,%esi
  4010c5:	48 81 ee 38 40 40 00 	sub    $0x404038,%rsi
  4010cc:	48 89 f0             	mov    %rsi,%rax
  4010cf:	48 c1 ee 3f          	shr    $0x3f,%rsi
  4010d3:	48 c1 f8 03          	sar    $0x3,%rax
  4010d7:	48 01 c6             	add    %rax,%rsi
  4010da:	48 d1 fe             	sar    %rsi
  4010dd:	74 11                	je     4010f0 <register_tm_clones+0x30>
  4010df:	b8 00 00 00 00       	mov    $0x0,%eax
  4010e4:	48 85 c0             	test   %rax,%rax
  4010e7:	74 07                	je     4010f0 <register_tm_clones+0x30>
  4010e9:	bf 38 40 40 00       	mov    $0x404038,%edi
  4010ee:	ff e0                	jmpq   *%rax
  4010f0:	c3                   	retq   
  4010f1:	66 66 2e 0f 1f 84 00 	data16 nopw %cs:0x0(%rax,%rax,1)
  4010f8:	00 00 00 00 
  4010fc:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000401100 <__do_global_dtors_aux>:
  401100:	f3 0f 1e fa          	endbr64 
  401104:	80 3d 2d 2f 00 00 00 	cmpb   $0x0,0x2f2d(%rip)        # 404038 <__TMC_END__>
  40110b:	75 13                	jne    401120 <__do_global_dtors_aux+0x20>
  40110d:	55                   	push   %rbp
  40110e:	48 89 e5             	mov    %rsp,%rbp
  401111:	e8 7a ff ff ff       	callq  401090 <deregister_tm_clones>
  401116:	c6 05 1b 2f 00 00 01 	movb   $0x1,0x2f1b(%rip)        # 404038 <__TMC_END__>
  40111d:	5d                   	pop    %rbp
  40111e:	c3                   	retq   
  40111f:	90                   	nop
  401120:	c3                   	retq   
  401121:	66 66 2e 0f 1f 84 00 	data16 nopw %cs:0x0(%rax,%rax,1)
  401128:	00 00 00 00 
  40112c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000401130 <frame_dummy>:
  401130:	f3 0f 1e fa          	endbr64 
  401134:	eb 8a                	jmp    4010c0 <register_tm_clones>
  401136:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40113d:	00 00 00 

0000000000401140 <formura_step>:
  401140:	48 8b 47 10          	mov    0x10(%rdi),%rax
  401144:	4c 8b 47 28          	mov    0x28(%rdi),%r8
  401148:	49 8d 48 08          	lea    0x8(%r8),%rcx
  40114c:	48 8d 90 20 03 00 00 	lea    0x320(%rax),%rdx
  401153:	48 39 d1             	cmp    %rdx,%rcx
  401156:	73 15                	jae    40116d <formura_step+0x2d>
  401158:	49 8d 90 20 03 00 00 	lea    0x320(%r8),%rdx
  40115f:	b9 01 00 00 00       	mov    $0x1,%ecx
  401164:	48 39 d0             	cmp    %rdx,%rax
  401167:	0f 82 0a 03 00 00    	jb     401477 <formura_step+0x337>
  40116d:	c5 fd 10 00          	vmovupd (%rax),%ymm0
  401171:	c4 e2 7d 19 1d 96 0e 	vbroadcastsd 0xe96(%rip),%ymm3        # 402010 <_IO_stdin_used+0x10>
  401178:	00 00 
  40117a:	b9 61 00 00 00       	mov    $0x61,%ecx
  40117f:	c5 fd 5c 48 08       	vsubpd 0x8(%rax),%ymm0,%ymm1
  401184:	c4 e2 7d 19 05 7b 0e 	vbroadcastsd 0xe7b(%rip),%ymm0        # 402008 <_IO_stdin_used+0x8>
  40118b:	00 00 
  40118d:	c5 f5 59 d0          	vmulpd %ymm0,%ymm1,%ymm2
  401191:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  401195:	c4 c1 7d 11 50 08    	vmovupd %ymm2,0x8(%r8)
  40119b:	c5 fd 10 50 20       	vmovupd 0x20(%rax),%ymm2
  4011a0:	c5 ed 5c 50 28       	vsubpd 0x28(%rax),%ymm2,%ymm2
  4011a5:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  4011a9:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  4011ad:	c4 c1 7d 11 50 28    	vmovupd %ymm2,0x28(%r8)
  4011b3:	c5 fd 10 50 40       	vmovupd 0x40(%rax),%ymm2
  4011b8:	c5 ed 5c 50 48       	vsubpd 0x48(%rax),%ymm2,%ymm2
  4011bd:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  4011c1:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  4011c5:	c4 c1 7d 11 50 48    	vmovupd %ymm2,0x48(%r8)
  4011cb:	c5 fd 10 50 60       	vmovupd 0x60(%rax),%ymm2
  4011d0:	c5 ed 5c 50 68       	vsubpd 0x68(%rax),%ymm2,%ymm2
  4011d5:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  4011d9:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  4011dd:	c4 c1 7d 11 50 68    	vmovupd %ymm2,0x68(%r8)
  4011e3:	c5 fd 10 90 80 00 00 	vmovupd 0x80(%rax),%ymm2
  4011ea:	00 
  4011eb:	c5 ed 5c 90 88 00 00 	vsubpd 0x88(%rax),%ymm2,%ymm2
  4011f2:	00 
  4011f3:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  4011f7:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  4011fb:	c4 c1 7d 11 90 88 00 	vmovupd %ymm2,0x88(%r8)
  401202:	00 00 
  401204:	c5 fd 10 90 a0 00 00 	vmovupd 0xa0(%rax),%ymm2
  40120b:	00 
  40120c:	c5 ed 5c 90 a8 00 00 	vsubpd 0xa8(%rax),%ymm2,%ymm2
  401213:	00 
  401214:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  401218:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  40121c:	c4 c1 7d 11 90 a8 00 	vmovupd %ymm2,0xa8(%r8)
  401223:	00 00 
  401225:	c5 fd 10 90 c0 00 00 	vmovupd 0xc0(%rax),%ymm2
  40122c:	00 
  40122d:	c5 ed 5c 90 c8 00 00 	vsubpd 0xc8(%rax),%ymm2,%ymm2
  401234:	00 
  401235:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  401239:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  40123d:	c4 c1 7d 11 90 c8 00 	vmovupd %ymm2,0xc8(%r8)
  401244:	00 00 
  401246:	c5 fd 10 90 e0 00 00 	vmovupd 0xe0(%rax),%ymm2
  40124d:	00 
  40124e:	c5 ed 5c 90 e8 00 00 	vsubpd 0xe8(%rax),%ymm2,%ymm2
  401255:	00 
  401256:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  40125a:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  40125e:	c4 c1 7d 11 90 e8 00 	vmovupd %ymm2,0xe8(%r8)
  401265:	00 00 
  401267:	c5 fd 10 90 00 01 00 	vmovupd 0x100(%rax),%ymm2
  40126e:	00 
  40126f:	c5 ed 5c 90 08 01 00 	vsubpd 0x108(%rax),%ymm2,%ymm2
  401276:	00 
  401277:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  40127b:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  40127f:	c4 c1 7d 11 90 08 01 	vmovupd %ymm2,0x108(%r8)
  401286:	00 00 
  401288:	c5 fd 10 90 20 01 00 	vmovupd 0x120(%rax),%ymm2
  40128f:	00 
  401290:	c5 ed 5c 90 28 01 00 	vsubpd 0x128(%rax),%ymm2,%ymm2
  401297:	00 
  401298:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  40129c:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  4012a0:	c4 c1 7d 11 90 28 01 	vmovupd %ymm2,0x128(%r8)
  4012a7:	00 00 
  4012a9:	c5 fd 10 90 40 01 00 	vmovupd 0x140(%rax),%ymm2
  4012b0:	00 
  4012b1:	c5 ed 5c 90 48 01 00 	vsubpd 0x148(%rax),%ymm2,%ymm2
  4012b8:	00 
  4012b9:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  4012bd:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  4012c1:	c4 c1 7d 11 90 48 01 	vmovupd %ymm2,0x148(%r8)
  4012c8:	00 00 
  4012ca:	c5 fd 10 90 60 01 00 	vmovupd 0x160(%rax),%ymm2
  4012d1:	00 
  4012d2:	c5 ed 5c 90 68 01 00 	vsubpd 0x168(%rax),%ymm2,%ymm2
  4012d9:	00 
  4012da:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  4012de:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  4012e2:	c4 c1 7d 11 90 68 01 	vmovupd %ymm2,0x168(%r8)
  4012e9:	00 00 
  4012eb:	c5 fd 10 90 80 01 00 	vmovupd 0x180(%rax),%ymm2
  4012f2:	00 
  4012f3:	c5 ed 5c 90 88 01 00 	vsubpd 0x188(%rax),%ymm2,%ymm2
  4012fa:	00 
  4012fb:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  4012ff:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  401303:	c4 c1 7d 11 90 88 01 	vmovupd %ymm2,0x188(%r8)
  40130a:	00 00 
  40130c:	c5 fd 10 90 a0 01 00 	vmovupd 0x1a0(%rax),%ymm2
  401313:	00 
  401314:	c5 ed 5c 90 a8 01 00 	vsubpd 0x1a8(%rax),%ymm2,%ymm2
  40131b:	00 
  40131c:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  401320:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  401324:	c4 c1 7d 11 90 a8 01 	vmovupd %ymm2,0x1a8(%r8)
  40132b:	00 00 
  40132d:	c5 fd 10 90 c0 01 00 	vmovupd 0x1c0(%rax),%ymm2
  401334:	00 
  401335:	c5 ed 5c 90 c8 01 00 	vsubpd 0x1c8(%rax),%ymm2,%ymm2
  40133c:	00 
  40133d:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  401341:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  401345:	c4 c1 7d 11 90 c8 01 	vmovupd %ymm2,0x1c8(%r8)
  40134c:	00 00 
  40134e:	c5 fd 10 90 e0 01 00 	vmovupd 0x1e0(%rax),%ymm2
  401355:	00 
  401356:	c5 ed 5c 90 e8 01 00 	vsubpd 0x1e8(%rax),%ymm2,%ymm2
  40135d:	00 
  40135e:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  401362:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  401366:	c4 c1 7d 11 90 e8 01 	vmovupd %ymm2,0x1e8(%r8)
  40136d:	00 00 
  40136f:	c5 fd 10 90 00 02 00 	vmovupd 0x200(%rax),%ymm2
  401376:	00 
  401377:	c5 ed 5c 90 08 02 00 	vsubpd 0x208(%rax),%ymm2,%ymm2
  40137e:	00 
  40137f:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  401383:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  401387:	c4 c1 7d 11 90 08 02 	vmovupd %ymm2,0x208(%r8)
  40138e:	00 00 
  401390:	c5 fd 10 90 20 02 00 	vmovupd 0x220(%rax),%ymm2
  401397:	00 
  401398:	c5 ed 5c 90 28 02 00 	vsubpd 0x228(%rax),%ymm2,%ymm2
  40139f:	00 
  4013a0:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  4013a4:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  4013a8:	c4 c1 7d 11 90 28 02 	vmovupd %ymm2,0x228(%r8)
  4013af:	00 00 
  4013b1:	c5 fd 10 90 40 02 00 	vmovupd 0x240(%rax),%ymm2
  4013b8:	00 
  4013b9:	c5 ed 5c 90 48 02 00 	vsubpd 0x248(%rax),%ymm2,%ymm2
  4013c0:	00 
  4013c1:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  4013c5:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  4013c9:	c4 c1 7d 11 90 48 02 	vmovupd %ymm2,0x248(%r8)
  4013d0:	00 00 
  4013d2:	c5 fd 10 90 60 02 00 	vmovupd 0x260(%rax),%ymm2
  4013d9:	00 
  4013da:	c5 ed 5c 90 68 02 00 	vsubpd 0x268(%rax),%ymm2,%ymm2
  4013e1:	00 
  4013e2:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  4013e6:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  4013ea:	c4 c1 7d 11 90 68 02 	vmovupd %ymm2,0x268(%r8)
  4013f1:	00 00 
  4013f3:	c5 fd 10 90 80 02 00 	vmovupd 0x280(%rax),%ymm2
  4013fa:	00 
  4013fb:	c5 ed 5c 90 88 02 00 	vsubpd 0x288(%rax),%ymm2,%ymm2
  401402:	00 
  401403:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  401407:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  40140b:	c4 c1 7d 11 90 88 02 	vmovupd %ymm2,0x288(%r8)
  401412:	00 00 
  401414:	c5 fd 10 90 a0 02 00 	vmovupd 0x2a0(%rax),%ymm2
  40141b:	00 
  40141c:	c5 ed 5c 90 a8 02 00 	vsubpd 0x2a8(%rax),%ymm2,%ymm2
  401423:	00 
  401424:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  401428:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  40142c:	c4 c1 7d 11 90 a8 02 	vmovupd %ymm2,0x2a8(%r8)
  401433:	00 00 
  401435:	c5 fd 10 90 c0 02 00 	vmovupd 0x2c0(%rax),%ymm2
  40143c:	00 
  40143d:	c5 ed 5c 90 c8 02 00 	vsubpd 0x2c8(%rax),%ymm2,%ymm2
  401444:	00 
  401445:	c5 ed 59 d0          	vmulpd %ymm0,%ymm2,%ymm2
  401449:	c5 ed 5e d3          	vdivpd %ymm3,%ymm2,%ymm2
  40144d:	c4 c1 7d 11 90 c8 02 	vmovupd %ymm2,0x2c8(%r8)
  401454:	00 00 
  401456:	c5 fd 10 90 e0 02 00 	vmovupd 0x2e0(%rax),%ymm2
  40145d:	00 
  40145e:	c5 ed 5c 90 e8 02 00 	vsubpd 0x2e8(%rax),%ymm2,%ymm2
  401465:	00 
  401466:	c5 ed 59 c0          	vmulpd %ymm0,%ymm2,%ymm0
  40146a:	c5 fd 5e c3          	vdivpd %ymm3,%ymm0,%ymm0
  40146e:	c4 c1 7d 11 80 e8 02 	vmovupd %ymm0,0x2e8(%r8)
  401475:	00 00 
  401477:	c5 7b 10 05 89 0b 00 	vmovsd 0xb89(%rip),%xmm8        # 402008 <_IO_stdin_used+0x8>
  40147e:	00 
  40147f:	c5 fb 10 0d 89 0b 00 	vmovsd 0xb89(%rip),%xmm1        # 402010 <_IO_stdin_used+0x10>
  401486:	00 
  401487:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
  40148e:	00 00 
  401490:	c5 fb 10 54 c8 f8    	vmovsd -0x8(%rax,%rcx,8),%xmm2
  401496:	c5 eb 5c 14 c8       	vsubsd (%rax,%rcx,8),%xmm2,%xmm2
  40149b:	c5 bb 59 d2          	vmulsd %xmm2,%xmm8,%xmm2
  40149f:	c5 eb 5e d1          	vdivsd %xmm1,%xmm2,%xmm2
  4014a3:	c4 c1 7b 11 14 c8    	vmovsd %xmm2,(%r8,%rcx,8)
  4014a9:	48 ff c1             	inc    %rcx
  4014ac:	48 83 f9 64          	cmp    $0x64,%rcx
  4014b0:	75 de                	jne    401490 <formura_step+0x350>
  4014b2:	49 c7 00 00 00 00 00 	movq   $0x0,(%r8)
  4014b9:	c5 fb 10 15 57 0b 00 	vmovsd 0xb57(%rip),%xmm2        # 402018 <_IO_stdin_used+0x18>
  4014c0:	00 
  4014c1:	b9 01 00 00 00       	mov    $0x1,%ecx
  4014c6:	c5 e1 57 db          	vxorpd %xmm3,%xmm3,%xmm3
  4014ca:	48 8b 57 20          	mov    0x20(%rdi),%rdx
  4014ce:	66 90                	xchg   %ax,%ax
  4014d0:	c4 c1 6b 59 24 c8    	vmulsd (%r8,%rcx,8),%xmm2,%xmm4
  4014d6:	c5 e3 59 da          	vmulsd %xmm2,%xmm3,%xmm3
  4014da:	c5 e3 58 5c c8 f8    	vaddsd -0x8(%rax,%rcx,8),%xmm3,%xmm3
  4014e0:	c5 db 58 24 c8       	vaddsd (%rax,%rcx,8),%xmm4,%xmm4
  4014e5:	c5 e3 5c dc          	vsubsd %xmm4,%xmm3,%xmm3
  4014e9:	c5 bb 59 db          	vmulsd %xmm3,%xmm8,%xmm3
  4014ed:	c5 e3 5e d9          	vdivsd %xmm1,%xmm3,%xmm3
  4014f1:	c5 fb 11 1c ca       	vmovsd %xmm3,(%rdx,%rcx,8)
  4014f6:	48 83 f9 63          	cmp    $0x63,%rcx
  4014fa:	74 0b                	je     401507 <formura_step+0x3c7>
  4014fc:	c4 c1 7b 10 1c c8    	vmovsd (%r8,%rcx,8),%xmm3
  401502:	48 ff c1             	inc    %rcx
  401505:	eb c9                	jmp    4014d0 <formura_step+0x390>
  401507:	48 c7 02 00 00 00 00 	movq   $0x0,(%rdx)
  40150e:	b9 01 00 00 00       	mov    $0x1,%ecx
  401513:	c5 e1 57 db          	vxorpd %xmm3,%xmm3,%xmm3
  401517:	48 8b 77 18          	mov    0x18(%rdi),%rsi
  40151b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
  401520:	c5 eb 59 24 ca       	vmulsd (%rdx,%rcx,8),%xmm2,%xmm4
  401525:	c5 e3 59 da          	vmulsd %xmm2,%xmm3,%xmm3
  401529:	c5 e3 58 5c c8 f8    	vaddsd -0x8(%rax,%rcx,8),%xmm3,%xmm3
  40152f:	c5 db 58 24 c8       	vaddsd (%rax,%rcx,8),%xmm4,%xmm4
  401534:	c5 e3 5c dc          	vsubsd %xmm4,%xmm3,%xmm3
  401538:	c5 bb 59 db          	vmulsd %xmm3,%xmm8,%xmm3
  40153c:	c5 e3 5e d9          	vdivsd %xmm1,%xmm3,%xmm3
  401540:	c5 fb 11 1c ce       	vmovsd %xmm3,(%rsi,%rcx,8)
  401545:	48 83 f9 63          	cmp    $0x63,%rcx
  401549:	74 0a                	je     401555 <formura_step+0x415>
  40154b:	c5 fb 10 1c ca       	vmovsd (%rdx,%rcx,8),%xmm3
  401550:	48 ff c1             	inc    %rcx
  401553:	eb cb                	jmp    401520 <formura_step+0x3e0>
  401555:	48 c7 06 00 00 00 00 	movq   $0x0,(%rsi)
  40155c:	c5 fb 10 15 bc 0a 00 	vmovsd 0xabc(%rip),%xmm2        # 402020 <_IO_stdin_used+0x20>
  401563:	00 
  401564:	c5 fb 10 1d bc 0a 00 	vmovsd 0xabc(%rip),%xmm3        # 402028 <_IO_stdin_used+0x28>
  40156b:	00 
  40156c:	c5 d9 57 e4          	vxorpd %xmm4,%xmm4,%xmm4
  401570:	31 c9                	xor    %ecx,%ecx
  401572:	48 8b 7f 08          	mov    0x8(%rdi),%rdi
  401576:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40157d:	00 00 00 
  401580:	c5 fb 10 74 0e 08    	vmovsd 0x8(%rsi,%rcx,1),%xmm6
  401586:	c5 fb 10 6c 08 08    	vmovsd 0x8(%rax,%rcx,1),%xmm5
  40158c:	c5 db 58 24 08       	vaddsd (%rax,%rcx,1),%xmm4,%xmm4
  401591:	c4 c1 7b 10 7c 08 08 	vmovsd 0x8(%r8,%rcx,1),%xmm7
  401598:	c5 fb 10 44 0a 08    	vmovsd 0x8(%rdx,%rcx,1),%xmm0
  40159e:	c5 4b 5e cb          	vdivsd %xmm3,%xmm6,%xmm9
  4015a2:	c5 d3 58 f6          	vaddsd %xmm6,%xmm5,%xmm6
  4015a6:	c5 c3 5e fa          	vdivsd %xmm2,%xmm7,%xmm7
  4015aa:	c5 fb 5e c3          	vdivsd %xmm3,%xmm0,%xmm0
  4015ae:	c5 db 5c e6          	vsubsd %xmm6,%xmm4,%xmm4
  4015b2:	c5 bb 59 e4          	vmulsd %xmm4,%xmm8,%xmm4
  4015b6:	c5 db 5e e1          	vdivsd %xmm1,%xmm4,%xmm4
  4015ba:	c5 c3 58 c0          	vaddsd %xmm0,%xmm7,%xmm0
  4015be:	c5 b3 58 c0          	vaddsd %xmm0,%xmm9,%xmm0
  4015c2:	c5 db 5e e2          	vdivsd %xmm2,%xmm4,%xmm4
  4015c6:	c5 fb 58 c4          	vaddsd %xmm4,%xmm0,%xmm0
  4015ca:	c5 d3 58 c0          	vaddsd %xmm0,%xmm5,%xmm0
  4015ce:	c5 fb 11 44 0f 08    	vmovsd %xmm0,0x8(%rdi,%rcx,1)
  4015d4:	48 81 f9 10 03 00 00 	cmp    $0x310,%rcx
  4015db:	74 0c                	je     4015e9 <formura_step+0x4a9>
  4015dd:	c5 fb 10 64 0e 08    	vmovsd 0x8(%rsi,%rcx,1),%xmm4
  4015e3:	48 83 c1 08          	add    $0x8,%rcx
  4015e7:	eb 97                	jmp    401580 <formura_step+0x440>
  4015e9:	48 b8 00 00 00 00 00 	movabs $0x3ff0000000000000,%rax
  4015f0:	00 f0 3f 
  4015f3:	48 89 07             	mov    %rax,(%rdi)
  4015f6:	c5 f8 77             	vzeroupper 
  4015f9:	c3                   	retq   
  4015fa:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000401600 <formura_initialize>:
  401600:	55                   	push   %rbp
  401601:	53                   	push   %rbx
  401602:	50                   	push   %rax
  401603:	48 89 fb             	mov    %rdi,%rbx
  401606:	bf 20 03 00 00       	mov    $0x320,%edi
  40160b:	e8 30 fa ff ff       	callq  401040 <malloc@plt>
  401610:	31 ed                	xor    %ebp,%ebp
  401612:	48 89 43 08          	mov    %rax,0x8(%rbx)
  401616:	48 85 c0             	test   %rax,%rax
  401619:	74 50                	je     40166b <formura_initialize+0x6b>
  40161b:	bf 20 03 00 00       	mov    $0x320,%edi
  401620:	e8 1b fa ff ff       	callq  401040 <malloc@plt>
  401625:	48 89 43 10          	mov    %rax,0x10(%rbx)
  401629:	48 85 c0             	test   %rax,%rax
  40162c:	74 3d                	je     40166b <formura_initialize+0x6b>
  40162e:	bf 20 03 00 00       	mov    $0x320,%edi
  401633:	e8 08 fa ff ff       	callq  401040 <malloc@plt>
  401638:	48 89 43 18          	mov    %rax,0x18(%rbx)
  40163c:	48 85 c0             	test   %rax,%rax
  40163f:	74 2a                	je     40166b <formura_initialize+0x6b>
  401641:	bf 20 03 00 00       	mov    $0x320,%edi
  401646:	e8 f5 f9 ff ff       	callq  401040 <malloc@plt>
  40164b:	48 89 43 20          	mov    %rax,0x20(%rbx)
  40164f:	48 85 c0             	test   %rax,%rax
  401652:	74 17                	je     40166b <formura_initialize+0x6b>
  401654:	bf 20 03 00 00       	mov    $0x320,%edi
  401659:	e8 e2 f9 ff ff       	callq  401040 <malloc@plt>
  40165e:	31 ed                	xor    %ebp,%ebp
  401660:	48 85 c0             	test   %rax,%rax
  401663:	48 89 43 28          	mov    %rax,0x28(%rbx)
  401667:	40 0f 95 c5          	setne  %bpl
  40166b:	89 e8                	mov    %ebp,%eax
  40166d:	48 83 c4 08          	add    $0x8,%rsp
  401671:	5b                   	pop    %rbx
  401672:	5d                   	pop    %rbp
  401673:	c3                   	retq   
  401674:	66 66 66 2e 0f 1f 84 	data16 data16 nopw %cs:0x0(%rax,%rax,1)
  40167b:	00 00 00 00 00 

0000000000401680 <formura_setup>:
  401680:	48 c7 07 00 00 00 00 	movq   $0x0,(%rdi)
  401687:	c4 e2 7d 19 05 a0 09 	vbroadcastsd 0x9a0(%rip),%ymm0        # 402030 <_IO_stdin_used+0x30>
  40168e:	00 00 
  401690:	48 8b 47 08          	mov    0x8(%rdi),%rax
  401694:	c5 fc 11 00          	vmovups %ymm0,(%rax)
  401698:	c5 fc 11 40 20       	vmovups %ymm0,0x20(%rax)
  40169d:	c5 fc 11 40 40       	vmovups %ymm0,0x40(%rax)
  4016a2:	c5 fc 11 40 60       	vmovups %ymm0,0x60(%rax)
  4016a7:	c5 fc 11 80 80 00 00 	vmovups %ymm0,0x80(%rax)
  4016ae:	00 
  4016af:	c5 fb 10 05 79 09 00 	vmovsd 0x979(%rip),%xmm0        # 402030 <_IO_stdin_used+0x30>
  4016b6:	00 
  4016b7:	c5 fc 11 80 a0 00 00 	vmovups %ymm0,0xa0(%rax)
  4016be:	00 
  4016bf:	c5 f8 57 c0          	vxorps %xmm0,%xmm0,%xmm0
  4016c3:	c5 fc 11 80 c0 00 00 	vmovups %ymm0,0xc0(%rax)
  4016ca:	00 
  4016cb:	c5 fc 11 80 e0 00 00 	vmovups %ymm0,0xe0(%rax)
  4016d2:	00 
  4016d3:	c5 fc 11 80 00 01 00 	vmovups %ymm0,0x100(%rax)
  4016da:	00 
  4016db:	c5 fc 11 80 20 01 00 	vmovups %ymm0,0x120(%rax)
  4016e2:	00 
  4016e3:	c5 fc 11 80 40 01 00 	vmovups %ymm0,0x140(%rax)
  4016ea:	00 
  4016eb:	c5 fc 11 80 60 01 00 	vmovups %ymm0,0x160(%rax)
  4016f2:	00 
  4016f3:	c5 fc 11 80 80 01 00 	vmovups %ymm0,0x180(%rax)
  4016fa:	00 
  4016fb:	c5 fc 11 80 a0 01 00 	vmovups %ymm0,0x1a0(%rax)
  401702:	00 
  401703:	c5 fc 11 80 c0 01 00 	vmovups %ymm0,0x1c0(%rax)
  40170a:	00 
  40170b:	c5 fc 11 80 e0 01 00 	vmovups %ymm0,0x1e0(%rax)
  401712:	00 
  401713:	c5 fc 11 80 00 02 00 	vmovups %ymm0,0x200(%rax)
  40171a:	00 
  40171b:	c5 fc 11 80 20 02 00 	vmovups %ymm0,0x220(%rax)
  401722:	00 
  401723:	c5 fc 11 80 40 02 00 	vmovups %ymm0,0x240(%rax)
  40172a:	00 
  40172b:	c5 fc 11 80 60 02 00 	vmovups %ymm0,0x260(%rax)
  401732:	00 
  401733:	c5 fc 11 80 80 02 00 	vmovups %ymm0,0x280(%rax)
  40173a:	00 
  40173b:	c5 fc 11 80 a0 02 00 	vmovups %ymm0,0x2a0(%rax)
  401742:	00 
  401743:	c5 fc 11 80 c0 02 00 	vmovups %ymm0,0x2c0(%rax)
  40174a:	00 
  40174b:	c5 fc 11 80 e0 02 00 	vmovups %ymm0,0x2e0(%rax)
  401752:	00 
  401753:	c5 fc 11 80 00 03 00 	vmovups %ymm0,0x300(%rax)
  40175a:	00 
  40175b:	48 8b 4f 10          	mov    0x10(%rdi),%rcx
  40175f:	48 89 4f 08          	mov    %rcx,0x8(%rdi)
  401763:	48 89 47 10          	mov    %rax,0x10(%rdi)
  401767:	c5 f8 77             	vzeroupper 
  40176a:	c3                   	retq   
  40176b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000401770 <formura_forward>:
  401770:	53                   	push   %rbx
  401771:	48 89 fb             	mov    %rdi,%rbx
  401774:	e8 c7 f9 ff ff       	callq  401140 <formura_step>
  401779:	c4 e3 79 04 43 08 4e 	vpermilps $0x4e,0x8(%rbx),%xmm0
  401780:	c5 f8 11 43 08       	vmovups %xmm0,0x8(%rbx)
  401785:	48 ff 03             	incq   (%rbx)
  401788:	5b                   	pop    %rbx
  401789:	c3                   	retq   
  40178a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000401790 <main>:
  401790:	41 57                	push   %r15
  401792:	41 56                	push   %r14
  401794:	41 55                	push   %r13
  401796:	41 54                	push   %r12
  401798:	53                   	push   %rbx
  401799:	48 83 ec 30          	sub    $0x30,%rsp
  40179d:	bf 20 03 00 00       	mov    $0x320,%edi
  4017a2:	e8 99 f8 ff ff       	callq  401040 <malloc@plt>
  4017a7:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
  4017ac:	48 85 c0             	test   %rax,%rax
  4017af:	0f 84 ba 01 00 00    	je     40196f <main+0x1df>
  4017b5:	bf 20 03 00 00       	mov    $0x320,%edi
  4017ba:	49 89 c4             	mov    %rax,%r12
  4017bd:	e8 7e f8 ff ff       	callq  401040 <malloc@plt>
  4017c2:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
  4017c7:	48 85 c0             	test   %rax,%rax
  4017ca:	0f 84 9f 01 00 00    	je     40196f <main+0x1df>
  4017d0:	bf 20 03 00 00       	mov    $0x320,%edi
  4017d5:	49 89 c6             	mov    %rax,%r14
  4017d8:	e8 63 f8 ff ff       	callq  401040 <malloc@plt>
  4017dd:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
  4017e2:	48 85 c0             	test   %rax,%rax
  4017e5:	0f 84 84 01 00 00    	je     40196f <main+0x1df>
  4017eb:	bf 20 03 00 00       	mov    $0x320,%edi
  4017f0:	e8 4b f8 ff ff       	callq  401040 <malloc@plt>
  4017f5:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
  4017fa:	48 85 c0             	test   %rax,%rax
  4017fd:	0f 84 6c 01 00 00    	je     40196f <main+0x1df>
  401803:	bf 20 03 00 00       	mov    $0x320,%edi
  401808:	e8 33 f8 ff ff       	callq  401040 <malloc@plt>
  40180d:	48 89 44 24 28       	mov    %rax,0x28(%rsp)
  401812:	48 85 c0             	test   %rax,%rax
  401815:	0f 84 54 01 00 00    	je     40196f <main+0x1df>
  40181b:	c4 e2 7d 19 05 0c 08 	vbroadcastsd 0x80c(%rip),%ymm0        # 402030 <_IO_stdin_used+0x30>
  401822:	00 00 
  401824:	bb 01 00 00 00       	mov    $0x1,%ebx
  401829:	49 89 e7             	mov    %rsp,%r15
  40182c:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
  401833:	00 
  401834:	4c 89 74 24 08       	mov    %r14,0x8(%rsp)
  401839:	4c 89 64 24 10       	mov    %r12,0x10(%rsp)
  40183e:	c4 c1 7c 11 04 24    	vmovups %ymm0,(%r12)
  401844:	c4 c1 7c 11 44 24 20 	vmovups %ymm0,0x20(%r12)
  40184b:	c4 c1 7c 11 44 24 40 	vmovups %ymm0,0x40(%r12)
  401852:	c4 c1 7c 11 44 24 60 	vmovups %ymm0,0x60(%r12)
  401859:	c4 c1 7c 11 84 24 80 	vmovups %ymm0,0x80(%r12)
  401860:	00 00 00 
  401863:	c5 fb 10 05 c5 07 00 	vmovsd 0x7c5(%rip),%xmm0        # 402030 <_IO_stdin_used+0x30>
  40186a:	00 
  40186b:	c4 c1 7c 11 84 24 a0 	vmovups %ymm0,0xa0(%r12)
  401872:	00 00 00 
  401875:	c5 f8 57 c0          	vxorps %xmm0,%xmm0,%xmm0
  401879:	c4 c1 7c 11 84 24 c0 	vmovups %ymm0,0xc0(%r12)
  401880:	00 00 00 
  401883:	c4 c1 7c 11 84 24 e0 	vmovups %ymm0,0xe0(%r12)
  40188a:	00 00 00 
  40188d:	c4 c1 7c 11 84 24 00 	vmovups %ymm0,0x100(%r12)
  401894:	01 00 00 
  401897:	c4 c1 7c 11 84 24 20 	vmovups %ymm0,0x120(%r12)
  40189e:	01 00 00 
  4018a1:	c4 c1 7c 11 84 24 40 	vmovups %ymm0,0x140(%r12)
  4018a8:	01 00 00 
  4018ab:	c4 c1 7c 11 84 24 60 	vmovups %ymm0,0x160(%r12)
  4018b2:	01 00 00 
  4018b5:	c4 c1 7c 11 84 24 80 	vmovups %ymm0,0x180(%r12)
  4018bc:	01 00 00 
  4018bf:	c4 c1 7c 11 84 24 a0 	vmovups %ymm0,0x1a0(%r12)
  4018c6:	01 00 00 
  4018c9:	c4 c1 7c 11 84 24 c0 	vmovups %ymm0,0x1c0(%r12)
  4018d0:	01 00 00 
  4018d3:	c4 c1 7c 11 84 24 e0 	vmovups %ymm0,0x1e0(%r12)
  4018da:	01 00 00 
  4018dd:	c4 c1 7c 11 84 24 00 	vmovups %ymm0,0x200(%r12)
  4018e4:	02 00 00 
  4018e7:	c4 c1 7c 11 84 24 20 	vmovups %ymm0,0x220(%r12)
  4018ee:	02 00 00 
  4018f1:	c4 c1 7c 11 84 24 40 	vmovups %ymm0,0x240(%r12)
  4018f8:	02 00 00 
  4018fb:	c4 c1 7c 11 84 24 60 	vmovups %ymm0,0x260(%r12)
  401902:	02 00 00 
  401905:	c4 c1 7c 11 84 24 80 	vmovups %ymm0,0x280(%r12)
  40190c:	02 00 00 
  40190f:	c4 c1 7c 11 84 24 a0 	vmovups %ymm0,0x2a0(%r12)
  401916:	02 00 00 
  401919:	c4 c1 7c 11 84 24 c0 	vmovups %ymm0,0x2c0(%r12)
  401920:	02 00 00 
  401923:	c4 c1 7c 11 84 24 e0 	vmovups %ymm0,0x2e0(%r12)
  40192a:	02 00 00 
  40192d:	c4 c1 7c 11 84 24 00 	vmovups %ymm0,0x300(%r12)
  401934:	03 00 00 
  401937:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
  40193e:	00 00 
  401940:	4c 89 ff             	mov    %r15,%rdi
  401943:	4d 89 e5             	mov    %r12,%r13
  401946:	c5 f8 77             	vzeroupper 
  401949:	e8 f2 f7 ff ff       	callq  401140 <formura_step>
  40194e:	4c 89 64 24 08       	mov    %r12,0x8(%rsp)
  401953:	4c 89 74 24 10       	mov    %r14,0x10(%rsp)
  401958:	48 89 1c 24          	mov    %rbx,(%rsp)
  40195c:	4d 89 f4             	mov    %r14,%r12
  40195f:	48 ff c3             	inc    %rbx
  401962:	4d 89 ee             	mov    %r13,%r14
  401965:	81 fb 01 e1 f5 05    	cmp    $0x5f5e101,%ebx
  40196b:	75 d3                	jne    401940 <main+0x1b0>
  40196d:	eb 0a                	jmp    401979 <main+0x1e9>
  40196f:	bf 38 20 40 00       	mov    $0x402038,%edi
  401974:	e8 b7 f6 ff ff       	callq  401030 <puts@plt>
  401979:	31 c0                	xor    %eax,%eax
  40197b:	48 83 c4 30          	add    $0x30,%rsp
  40197f:	5b                   	pop    %rbx
  401980:	41 5c                	pop    %r12
  401982:	41 5d                	pop    %r13
  401984:	41 5e                	pop    %r14
  401986:	41 5f                	pop    %r15
  401988:	c3                   	retq   
  401989:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000401990 <__libc_csu_init>:
  401990:	f3 0f 1e fa          	endbr64 
  401994:	41 57                	push   %r15
  401996:	4c 8d 3d 73 24 00 00 	lea    0x2473(%rip),%r15        # 403e10 <__frame_dummy_init_array_entry>
  40199d:	41 56                	push   %r14
  40199f:	49 89 d6             	mov    %rdx,%r14
  4019a2:	41 55                	push   %r13
  4019a4:	49 89 f5             	mov    %rsi,%r13
  4019a7:	41 54                	push   %r12
  4019a9:	41 89 fc             	mov    %edi,%r12d
  4019ac:	55                   	push   %rbp
  4019ad:	48 8d 2d 64 24 00 00 	lea    0x2464(%rip),%rbp        # 403e18 <__do_global_dtors_aux_fini_array_entry>
  4019b4:	53                   	push   %rbx
  4019b5:	4c 29 fd             	sub    %r15,%rbp
  4019b8:	48 83 ec 08          	sub    $0x8,%rsp
  4019bc:	e8 3f f6 ff ff       	callq  401000 <_init>
  4019c1:	48 c1 fd 03          	sar    $0x3,%rbp
  4019c5:	74 1f                	je     4019e6 <__libc_csu_init+0x56>
  4019c7:	31 db                	xor    %ebx,%ebx
  4019c9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
  4019d0:	4c 89 f2             	mov    %r14,%rdx
  4019d3:	4c 89 ee             	mov    %r13,%rsi
  4019d6:	44 89 e7             	mov    %r12d,%edi
  4019d9:	41 ff 14 df          	callq  *(%r15,%rbx,8)
  4019dd:	48 83 c3 01          	add    $0x1,%rbx
  4019e1:	48 39 dd             	cmp    %rbx,%rbp
  4019e4:	75 ea                	jne    4019d0 <__libc_csu_init+0x40>
  4019e6:	48 83 c4 08          	add    $0x8,%rsp
  4019ea:	5b                   	pop    %rbx
  4019eb:	5d                   	pop    %rbp
  4019ec:	41 5c                	pop    %r12
  4019ee:	41 5d                	pop    %r13
  4019f0:	41 5e                	pop    %r14
  4019f2:	41 5f                	pop    %r15
  4019f4:	c3                   	retq   
  4019f5:	66 66 2e 0f 1f 84 00 	data16 nopw %cs:0x0(%rax,%rax,1)
  4019fc:	00 00 00 00 

0000000000401a00 <__libc_csu_fini>:
  401a00:	f3 0f 1e fa          	endbr64 
  401a04:	c3                   	retq   

Disassembly of section .fini:

0000000000401a08 <_fini>:
  401a08:	f3 0f 1e fa          	endbr64 
  401a0c:	48 83 ec 08          	sub    $0x8,%rsp
  401a10:	48 83 c4 08          	add    $0x8,%rsp
  401a14:	c3                   	retq   
