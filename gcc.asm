
tmpmain-gcc.out:     file format elf64-x86-64


Disassembly of section .init:

0000000000001000 <_init>:
    1000:	f3 0f 1e fa          	endbr64 
    1004:	48 83 ec 08          	sub    $0x8,%rsp
    1008:	48 8b 05 d9 2f 00 00 	mov    0x2fd9(%rip),%rax        # 3fe8 <__gmon_start__>
    100f:	48 85 c0             	test   %rax,%rax
    1012:	74 02                	je     1016 <_init+0x16>
    1014:	ff d0                	callq  *%rax
    1016:	48 83 c4 08          	add    $0x8,%rsp
    101a:	c3                   	retq   

Disassembly of section .plt:

0000000000001020 <.plt>:
    1020:	ff 35 8a 2f 00 00    	pushq  0x2f8a(%rip)        # 3fb0 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	f2 ff 25 8b 2f 00 00 	bnd jmpq *0x2f8b(%rip)        # 3fb8 <_GLOBAL_OFFSET_TABLE_+0x10>
    102d:	0f 1f 00             	nopl   (%rax)
    1030:	f3 0f 1e fa          	endbr64 
    1034:	68 00 00 00 00       	pushq  $0x0
    1039:	f2 e9 e1 ff ff ff    	bnd jmpq 1020 <.plt>
    103f:	90                   	nop
    1040:	f3 0f 1e fa          	endbr64 
    1044:	68 01 00 00 00       	pushq  $0x1
    1049:	f2 e9 d1 ff ff ff    	bnd jmpq 1020 <.plt>
    104f:	90                   	nop
    1050:	f3 0f 1e fa          	endbr64 
    1054:	68 02 00 00 00       	pushq  $0x2
    1059:	f2 e9 c1 ff ff ff    	bnd jmpq 1020 <.plt>
    105f:	90                   	nop

Disassembly of section .plt.got:

0000000000001060 <__cxa_finalize@plt>:
    1060:	f3 0f 1e fa          	endbr64 
    1064:	f2 ff 25 8d 2f 00 00 	bnd jmpq *0x2f8d(%rip)        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    106b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .plt.sec:

0000000000001070 <puts@plt>:
    1070:	f3 0f 1e fa          	endbr64 
    1074:	f2 ff 25 45 2f 00 00 	bnd jmpq *0x2f45(%rip)        # 3fc0 <puts@GLIBC_2.2.5>
    107b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000001080 <__stack_chk_fail@plt>:
    1080:	f3 0f 1e fa          	endbr64 
    1084:	f2 ff 25 3d 2f 00 00 	bnd jmpq *0x2f3d(%rip)        # 3fc8 <__stack_chk_fail@GLIBC_2.4>
    108b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000001090 <malloc@plt>:
    1090:	f3 0f 1e fa          	endbr64 
    1094:	f2 ff 25 35 2f 00 00 	bnd jmpq *0x2f35(%rip)        # 3fd0 <malloc@GLIBC_2.2.5>
    109b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .text:

00000000000010a0 <main>:
    10a0:	f3 0f 1e fa          	endbr64 
    10a4:	55                   	push   %rbp
    10a5:	48 89 e5             	mov    %rsp,%rbp
    10a8:	41 54                	push   %r12
    10aa:	53                   	push   %rbx
    10ab:	48 83 ec 40          	sub    $0x40,%rsp
    10af:	49 89 e4             	mov    %rsp,%r12
    10b2:	4c 89 e7             	mov    %r12,%rdi
    10b5:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    10bc:	00 00 
    10be:	48 89 44 24 38       	mov    %rax,0x38(%rsp)
    10c3:	31 c0                	xor    %eax,%eax
    10c5:	e8 a6 09 00 00       	callq  1a70 <formura_initialize>
    10ca:	85 c0                	test   %eax,%eax
    10cc:	0f 84 5b 01 00 00    	je     122d <main+0x18d>
    10d2:	c5 fd 28 05 e6 0f 00 	vmovapd 0xfe6(%rip),%ymm0        # 20c0 <_IO_stdin_used+0xc0>
    10d9:	00 
    10da:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    10df:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
    10e6:	00 
    10e7:	bb 00 e1 f5 05       	mov    $0x5f5e100,%ebx
    10ec:	48 8b 0d 15 10 00 00 	mov    0x1015(%rip),%rcx        # 2108 <_IO_stdin_used+0x108>
    10f3:	48 c7 80 08 03 00 00 	movq   $0x0,0x308(%rax)
    10fa:	00 00 00 00 
    10fe:	48 c7 80 10 03 00 00 	movq   $0x0,0x310(%rax)
    1105:	00 00 00 00 
    1109:	48 c7 80 18 03 00 00 	movq   $0x0,0x318(%rax)
    1110:	00 00 00 00 
    1114:	48 89 08             	mov    %rcx,(%rax)
    1117:	c5 fd 11 40 08       	vmovupd %ymm0,0x8(%rax)
    111c:	c5 fd 11 40 28       	vmovupd %ymm0,0x28(%rax)
    1121:	c5 fd 11 40 48       	vmovupd %ymm0,0x48(%rax)
    1126:	c5 fd 11 40 68       	vmovupd %ymm0,0x68(%rax)
    112b:	c5 fd 11 80 88 00 00 	vmovupd %ymm0,0x88(%rax)
    1132:	00 
    1133:	c5 f9 57 c0          	vxorpd %xmm0,%xmm0,%xmm0
    1137:	c5 fd 11 80 a8 00 00 	vmovupd %ymm0,0xa8(%rax)
    113e:	00 
    113f:	c5 fd 11 80 c8 00 00 	vmovupd %ymm0,0xc8(%rax)
    1146:	00 
    1147:	c5 fd 11 80 e8 00 00 	vmovupd %ymm0,0xe8(%rax)
    114e:	00 
    114f:	c5 fd 11 80 08 01 00 	vmovupd %ymm0,0x108(%rax)
    1156:	00 
    1157:	c5 fd 11 80 28 01 00 	vmovupd %ymm0,0x128(%rax)
    115e:	00 
    115f:	c5 fd 11 80 48 01 00 	vmovupd %ymm0,0x148(%rax)
    1166:	00 
    1167:	c5 fd 11 80 68 01 00 	vmovupd %ymm0,0x168(%rax)
    116e:	00 
    116f:	c5 fd 11 80 88 01 00 	vmovupd %ymm0,0x188(%rax)
    1176:	00 
    1177:	c5 fd 11 80 a8 01 00 	vmovupd %ymm0,0x1a8(%rax)
    117e:	00 
    117f:	c5 fd 11 80 c8 01 00 	vmovupd %ymm0,0x1c8(%rax)
    1186:	00 
    1187:	c5 fd 11 80 e8 01 00 	vmovupd %ymm0,0x1e8(%rax)
    118e:	00 
    118f:	c5 fd 11 80 08 02 00 	vmovupd %ymm0,0x208(%rax)
    1196:	00 
    1197:	c5 fd 11 80 28 02 00 	vmovupd %ymm0,0x228(%rax)
    119e:	00 
    119f:	c5 fd 11 80 48 02 00 	vmovupd %ymm0,0x248(%rax)
    11a6:	00 
    11a7:	c5 fd 11 80 68 02 00 	vmovupd %ymm0,0x268(%rax)
    11ae:	00 
    11af:	c5 fd 11 80 88 02 00 	vmovupd %ymm0,0x288(%rax)
    11b6:	00 
    11b7:	c5 fd 11 80 a8 02 00 	vmovupd %ymm0,0x2a8(%rax)
    11be:	00 
    11bf:	c5 fd 11 80 c8 02 00 	vmovupd %ymm0,0x2c8(%rax)
    11c6:	00 
    11c7:	c5 fd 11 80 e8 02 00 	vmovupd %ymm0,0x2e8(%rax)
    11ce:	00 
    11cf:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
    11d4:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
    11d9:	48 89 54 24 08       	mov    %rdx,0x8(%rsp)
    11de:	c5 f8 77             	vzeroupper 
    11e1:	66 66 2e 0f 1f 84 00 	data16 nopw %cs:0x0(%rax,%rax,1)
    11e8:	00 00 00 00 
    11ec:	0f 1f 40 00          	nopl   0x0(%rax)
    11f0:	4c 89 e7             	mov    %r12,%rdi
    11f3:	e8 38 01 00 00       	callq  1330 <formura_step>
    11f8:	c5 f8 10 4c 24 08    	vmovups 0x8(%rsp),%xmm1
    11fe:	48 ff 04 24          	incq   (%rsp)
    1202:	ff cb                	dec    %ebx
    1204:	c4 e3 71 0f c1 08    	vpalignr $0x8,%xmm1,%xmm1,%xmm0
    120a:	c5 f8 11 44 24 08    	vmovups %xmm0,0x8(%rsp)
    1210:	75 de                	jne    11f0 <main+0x150>
    1212:	48 8b 44 24 38       	mov    0x38(%rsp),%rax
    1217:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    121e:	00 00 
    1220:	75 19                	jne    123b <main+0x19b>
    1222:	48 83 c4 40          	add    $0x40,%rsp
    1226:	31 c0                	xor    %eax,%eax
    1228:	5b                   	pop    %rbx
    1229:	41 5c                	pop    %r12
    122b:	5d                   	pop    %rbp
    122c:	c3                   	retq   
    122d:	48 8d 3d d0 0d 00 00 	lea    0xdd0(%rip),%rdi        # 2004 <_IO_stdin_used+0x4>
    1234:	e8 37 fe ff ff       	callq  1070 <puts@plt>
    1239:	eb d7                	jmp    1212 <main+0x172>
    123b:	e8 40 fe ff ff       	callq  1080 <__stack_chk_fail@plt>

0000000000001240 <_start>:
    1240:	f3 0f 1e fa          	endbr64 
    1244:	31 ed                	xor    %ebp,%ebp
    1246:	49 89 d1             	mov    %rdx,%r9
    1249:	5e                   	pop    %rsi
    124a:	48 89 e2             	mov    %rsp,%rdx
    124d:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    1251:	50                   	push   %rax
    1252:	54                   	push   %rsp
    1253:	4c 8d 05 46 0a 00 00 	lea    0xa46(%rip),%r8        # 1ca0 <__libc_csu_fini>
    125a:	48 8d 0d cf 09 00 00 	lea    0x9cf(%rip),%rcx        # 1c30 <__libc_csu_init>
    1261:	48 8d 3d 38 fe ff ff 	lea    -0x1c8(%rip),%rdi        # 10a0 <main>
    1268:	ff 15 72 2d 00 00    	callq  *0x2d72(%rip)        # 3fe0 <__libc_start_main@GLIBC_2.2.5>
    126e:	f4                   	hlt    
    126f:	90                   	nop

0000000000001270 <deregister_tm_clones>:
    1270:	48 8d 3d 99 2d 00 00 	lea    0x2d99(%rip),%rdi        # 4010 <__TMC_END__>
    1277:	48 8d 05 92 2d 00 00 	lea    0x2d92(%rip),%rax        # 4010 <__TMC_END__>
    127e:	48 39 f8             	cmp    %rdi,%rax
    1281:	74 15                	je     1298 <deregister_tm_clones+0x28>
    1283:	48 8b 05 4e 2d 00 00 	mov    0x2d4e(%rip),%rax        # 3fd8 <_ITM_deregisterTMCloneTable>
    128a:	48 85 c0             	test   %rax,%rax
    128d:	74 09                	je     1298 <deregister_tm_clones+0x28>
    128f:	ff e0                	jmpq   *%rax
    1291:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    1298:	c3                   	retq   
    1299:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000012a0 <register_tm_clones>:
    12a0:	48 8d 3d 69 2d 00 00 	lea    0x2d69(%rip),%rdi        # 4010 <__TMC_END__>
    12a7:	48 8d 35 62 2d 00 00 	lea    0x2d62(%rip),%rsi        # 4010 <__TMC_END__>
    12ae:	48 29 fe             	sub    %rdi,%rsi
    12b1:	48 89 f0             	mov    %rsi,%rax
    12b4:	48 c1 ee 3f          	shr    $0x3f,%rsi
    12b8:	48 c1 f8 03          	sar    $0x3,%rax
    12bc:	48 01 c6             	add    %rax,%rsi
    12bf:	48 d1 fe             	sar    %rsi
    12c2:	74 14                	je     12d8 <register_tm_clones+0x38>
    12c4:	48 8b 05 25 2d 00 00 	mov    0x2d25(%rip),%rax        # 3ff0 <_ITM_registerTMCloneTable>
    12cb:	48 85 c0             	test   %rax,%rax
    12ce:	74 08                	je     12d8 <register_tm_clones+0x38>
    12d0:	ff e0                	jmpq   *%rax
    12d2:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    12d8:	c3                   	retq   
    12d9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000012e0 <__do_global_dtors_aux>:
    12e0:	f3 0f 1e fa          	endbr64 
    12e4:	80 3d 25 2d 00 00 00 	cmpb   $0x0,0x2d25(%rip)        # 4010 <__TMC_END__>
    12eb:	75 2b                	jne    1318 <__do_global_dtors_aux+0x38>
    12ed:	55                   	push   %rbp
    12ee:	48 83 3d 02 2d 00 00 	cmpq   $0x0,0x2d02(%rip)        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    12f5:	00 
    12f6:	48 89 e5             	mov    %rsp,%rbp
    12f9:	74 0c                	je     1307 <__do_global_dtors_aux+0x27>
    12fb:	48 8b 3d 06 2d 00 00 	mov    0x2d06(%rip),%rdi        # 4008 <__dso_handle>
    1302:	e8 59 fd ff ff       	callq  1060 <__cxa_finalize@plt>
    1307:	e8 64 ff ff ff       	callq  1270 <deregister_tm_clones>
    130c:	c6 05 fd 2c 00 00 01 	movb   $0x1,0x2cfd(%rip)        # 4010 <__TMC_END__>
    1313:	5d                   	pop    %rbp
    1314:	c3                   	retq   
    1315:	0f 1f 00             	nopl   (%rax)
    1318:	c3                   	retq   
    1319:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001320 <frame_dummy>:
    1320:	f3 0f 1e fa          	endbr64 
    1324:	e9 77 ff ff ff       	jmpq   12a0 <register_tm_clones>
    1329:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001330 <formura_step>:
    1330:	f3 0f 1e fa          	endbr64 
    1334:	55                   	push   %rbp
    1335:	ba 08 00 00 00       	mov    $0x8,%edx
    133a:	48 89 e5             	mov    %rsp,%rbp
    133d:	41 57                	push   %r15
    133f:	41 56                	push   %r14
    1341:	41 55                	push   %r13
    1343:	41 54                	push   %r12
    1345:	53                   	push   %rbx
    1346:	48 8b 4f 28          	mov    0x28(%rdi),%rcx
    134a:	48 8b 47 10          	mov    0x10(%rdi),%rax
    134e:	4c 8d 59 08          	lea    0x8(%rcx),%r11
    1352:	4c 8d 51 28          	lea    0x28(%rcx),%r10
    1356:	4c 8d 48 28          	lea    0x28(%rax),%r9
    135a:	4d 39 d9             	cmp    %r11,%r9
    135d:	76 09                	jbe    1368 <formura_step+0x38>
    135f:	4c 39 d0             	cmp    %r10,%rax
    1362:	0f 82 a9 05 00 00    	jb     1911 <formura_step+0x5e1>
    1368:	c5 fd 28 2d b0 0c 00 	vmovapd 0xcb0(%rip),%ymm5        # 2020 <_IO_stdin_used+0x20>
    136f:	00 
    1370:	c5 fd 28 25 c8 0c 00 	vmovapd 0xcc8(%rip),%ymm4        # 2040 <_IO_stdin_used+0x40>
    1377:	00 
    1378:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    137f:	00 
    1380:	c5 fd 10 54 10 f8    	vmovupd -0x8(%rax,%rdx,1),%ymm2
    1386:	c5 ed 5c 04 10       	vsubpd (%rax,%rdx,1),%ymm2,%ymm0
    138b:	c5 fd 59 c5          	vmulpd %ymm5,%ymm0,%ymm0
    138f:	c5 fd 5e c4          	vdivpd %ymm4,%ymm0,%ymm0
    1393:	c5 fd 11 04 11       	vmovupd %ymm0,(%rcx,%rdx,1)
    1398:	48 83 c2 20          	add    $0x20,%rdx
    139c:	48 81 fa 08 03 00 00 	cmp    $0x308,%rdx
    13a3:	75 db                	jne    1380 <formura_step+0x50>
    13a5:	c5 fb 10 80 00 03 00 	vmovsd 0x300(%rax),%xmm0
    13ac:	00 
    13ad:	c5 fb 10 0d 2b 0d 00 	vmovsd 0xd2b(%rip),%xmm1        # 20e0 <_IO_stdin_used+0xe0>
    13b4:	00 
    13b5:	c5 fb 5c 80 08 03 00 	vsubsd 0x308(%rax),%xmm0,%xmm0
    13bc:	00 
    13bd:	c5 fb 10 15 23 0d 00 	vmovsd 0xd23(%rip),%xmm2        # 20e8 <_IO_stdin_used+0xe8>
    13c4:	00 
    13c5:	c5 fb 59 c1          	vmulsd %xmm1,%xmm0,%xmm0
    13c9:	c5 fb 5e c2          	vdivsd %xmm2,%xmm0,%xmm0
    13cd:	c5 fb 11 81 08 03 00 	vmovsd %xmm0,0x308(%rcx)
    13d4:	00 
    13d5:	c5 fb 10 80 08 03 00 	vmovsd 0x308(%rax),%xmm0
    13dc:	00 
    13dd:	c5 fb 5c 80 10 03 00 	vsubsd 0x310(%rax),%xmm0,%xmm0
    13e4:	00 
    13e5:	c5 fb 59 c1          	vmulsd %xmm1,%xmm0,%xmm0
    13e9:	c5 fb 5e c2          	vdivsd %xmm2,%xmm0,%xmm0
    13ed:	c5 fb 11 81 10 03 00 	vmovsd %xmm0,0x310(%rcx)
    13f4:	00 
    13f5:	c5 fb 10 80 10 03 00 	vmovsd 0x310(%rax),%xmm0
    13fc:	00 
    13fd:	c5 fb 5c 80 18 03 00 	vsubsd 0x318(%rax),%xmm0,%xmm0
    1404:	00 
    1405:	c5 fb 59 c1          	vmulsd %xmm1,%xmm0,%xmm0
    1409:	c5 fb 5e c2          	vdivsd %xmm2,%xmm0,%xmm0
    140d:	c5 fb 11 81 18 03 00 	vmovsd %xmm0,0x318(%rcx)
    1414:	00 
    1415:	48 8b 77 20          	mov    0x20(%rdi),%rsi
    1419:	48 c7 01 00 00 00 00 	movq   $0x0,(%rcx)
    1420:	4c 8d 66 08          	lea    0x8(%rsi),%r12
    1424:	48 8d 5e 28          	lea    0x28(%rsi),%rbx
    1428:	4d 39 cc             	cmp    %r9,%r12
    142b:	0f 93 c2             	setae  %dl
    142e:	48 39 d8             	cmp    %rbx,%rax
    1431:	41 0f 93 c0          	setae  %r8b
    1435:	44 09 c2             	or     %r8d,%edx
    1438:	83 e2 01             	and    $0x1,%edx
    143b:	0f 84 db 05 00 00    	je     1a1c <formura_step+0x6ec>
    1441:	4d 39 d4             	cmp    %r10,%r12
    1444:	0f 93 c2             	setae  %dl
    1447:	48 39 d9             	cmp    %rbx,%rcx
    144a:	41 0f 93 c0          	setae  %r8b
    144e:	44 09 c2             	or     %r8d,%edx
    1451:	83 e2 01             	and    $0x1,%edx
    1454:	0f 84 c2 05 00 00    	je     1a1c <formura_step+0x6ec>
    145a:	c5 fd 28 2d be 0b 00 	vmovapd 0xbbe(%rip),%ymm5        # 2020 <_IO_stdin_used+0x20>
    1461:	00 
    1462:	c5 fd 28 25 d6 0b 00 	vmovapd 0xbd6(%rip),%ymm4        # 2040 <_IO_stdin_used+0x40>
    1469:	00 
    146a:	ba 08 00 00 00       	mov    $0x8,%edx
    146f:	c5 fd 28 35 e9 0b 00 	vmovapd 0xbe9(%rip),%ymm6        # 2060 <_IO_stdin_used+0x60>
    1476:	00 
    1477:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    147e:	00 00 
    1480:	c5 fd 10 44 11 f8    	vmovupd -0x8(%rcx,%rdx,1),%ymm0
    1486:	c5 fd 10 1c 11       	vmovupd (%rcx,%rdx,1),%ymm3
    148b:	c4 e2 cd a8 44 10 f8 	vfmadd213pd -0x8(%rax,%rdx,1),%ymm6,%ymm0
    1492:	c4 e2 cd a8 1c 10    	vfmadd213pd (%rax,%rdx,1),%ymm6,%ymm3
    1498:	c5 fd 5c c3          	vsubpd %ymm3,%ymm0,%ymm0
    149c:	c5 fd 59 c5          	vmulpd %ymm5,%ymm0,%ymm0
    14a0:	c5 fd 5e c4          	vdivpd %ymm4,%ymm0,%ymm0
    14a4:	c5 fd 11 04 16       	vmovupd %ymm0,(%rsi,%rdx,1)
    14a9:	48 83 c2 20          	add    $0x20,%rdx
    14ad:	48 81 fa 08 03 00 00 	cmp    $0x308,%rdx
    14b4:	75 ca                	jne    1480 <formura_step+0x150>
    14b6:	c5 fb 10 1d 32 0c 00 	vmovsd 0xc32(%rip),%xmm3        # 20f0 <_IO_stdin_used+0xf0>
    14bd:	00 
    14be:	c5 fb 10 81 00 03 00 	vmovsd 0x300(%rcx),%xmm0
    14c5:	00 
    14c6:	c5 fb 10 a1 08 03 00 	vmovsd 0x308(%rcx),%xmm4
    14cd:	00 
    14ce:	c4 e2 e1 a9 80 00 03 	vfmadd213sd 0x300(%rax),%xmm3,%xmm0
    14d5:	00 00 
    14d7:	c4 e2 e1 a9 a0 08 03 	vfmadd213sd 0x308(%rax),%xmm3,%xmm4
    14de:	00 00 
    14e0:	c5 fb 5c c4          	vsubsd %xmm4,%xmm0,%xmm0
    14e4:	c5 fb 59 c1          	vmulsd %xmm1,%xmm0,%xmm0
    14e8:	c5 fb 5e c2          	vdivsd %xmm2,%xmm0,%xmm0
    14ec:	c5 fb 11 86 08 03 00 	vmovsd %xmm0,0x308(%rsi)
    14f3:	00 
    14f4:	c5 fb 10 81 08 03 00 	vmovsd 0x308(%rcx),%xmm0
    14fb:	00 
    14fc:	c5 fb 10 a1 10 03 00 	vmovsd 0x310(%rcx),%xmm4
    1503:	00 
    1504:	c4 e2 e1 a9 a0 10 03 	vfmadd213sd 0x310(%rax),%xmm3,%xmm4
    150b:	00 00 
    150d:	c4 e2 e1 a9 80 08 03 	vfmadd213sd 0x308(%rax),%xmm3,%xmm0
    1514:	00 00 
    1516:	c5 fb 5c c4          	vsubsd %xmm4,%xmm0,%xmm0
    151a:	c5 fb 59 c1          	vmulsd %xmm1,%xmm0,%xmm0
    151e:	c5 fb 5e c2          	vdivsd %xmm2,%xmm0,%xmm0
    1522:	c5 fb 11 86 10 03 00 	vmovsd %xmm0,0x310(%rsi)
    1529:	00 
    152a:	c5 fb 10 81 10 03 00 	vmovsd 0x310(%rcx),%xmm0
    1531:	00 
    1532:	c5 fb 10 a1 18 03 00 	vmovsd 0x318(%rcx),%xmm4
    1539:	00 
    153a:	c4 e2 e1 a9 80 10 03 	vfmadd213sd 0x310(%rax),%xmm3,%xmm0
    1541:	00 00 
    1543:	c4 e2 e1 a9 a0 18 03 	vfmadd213sd 0x318(%rax),%xmm3,%xmm4
    154a:	00 00 
    154c:	c5 fb 5c c4          	vsubsd %xmm4,%xmm0,%xmm0
    1550:	c5 fb 59 c1          	vmulsd %xmm1,%xmm0,%xmm0
    1554:	c5 fb 5e c2          	vdivsd %xmm2,%xmm0,%xmm0
    1558:	c5 fb 11 86 18 03 00 	vmovsd %xmm0,0x318(%rsi)
    155f:	00 
    1560:	4c 8b 47 18          	mov    0x18(%rdi),%r8
    1564:	48 c7 06 00 00 00 00 	movq   $0x0,(%rsi)
    156b:	4d 8d 70 08          	lea    0x8(%r8),%r14
    156f:	4d 8d 68 28          	lea    0x28(%r8),%r13
    1573:	4d 39 ce             	cmp    %r9,%r14
    1576:	0f 93 c2             	setae  %dl
    1579:	4c 39 e8             	cmp    %r13,%rax
    157c:	41 0f 93 c7          	setae  %r15b
    1580:	44 09 fa             	or     %r15d,%edx
    1583:	83 e2 01             	and    $0x1,%edx
    1586:	0f 84 4e 04 00 00    	je     19da <formura_step+0x6aa>
    158c:	49 39 de             	cmp    %rbx,%r14
    158f:	0f 93 c2             	setae  %dl
    1592:	4c 39 ee             	cmp    %r13,%rsi
    1595:	41 0f 93 c6          	setae  %r14b
    1599:	44 09 f2             	or     %r14d,%edx
    159c:	83 e2 01             	and    $0x1,%edx
    159f:	0f 84 35 04 00 00    	je     19da <formura_step+0x6aa>
    15a5:	c5 fd 28 2d 73 0a 00 	vmovapd 0xa73(%rip),%ymm5        # 2020 <_IO_stdin_used+0x20>
    15ac:	00 
    15ad:	c5 fd 28 25 8b 0a 00 	vmovapd 0xa8b(%rip),%ymm4        # 2040 <_IO_stdin_used+0x40>
    15b4:	00 
    15b5:	ba 08 00 00 00       	mov    $0x8,%edx
    15ba:	c5 fd 28 35 9e 0a 00 	vmovapd 0xa9e(%rip),%ymm6        # 2060 <_IO_stdin_used+0x60>
    15c1:	00 
    15c2:	66 66 2e 0f 1f 84 00 	data16 nopw %cs:0x0(%rax,%rax,1)
    15c9:	00 00 00 00 
    15cd:	0f 1f 00             	nopl   (%rax)
    15d0:	c5 fd 10 44 16 f8    	vmovupd -0x8(%rsi,%rdx,1),%ymm0
    15d6:	c5 fd 10 3c 16       	vmovupd (%rsi,%rdx,1),%ymm7
    15db:	c4 e2 cd a8 44 10 f8 	vfmadd213pd -0x8(%rax,%rdx,1),%ymm6,%ymm0
    15e2:	c4 e2 cd a8 3c 10    	vfmadd213pd (%rax,%rdx,1),%ymm6,%ymm7
    15e8:	c5 fd 5c c7          	vsubpd %ymm7,%ymm0,%ymm0
    15ec:	c5 fd 59 c5          	vmulpd %ymm5,%ymm0,%ymm0
    15f0:	c5 fd 5e c4          	vdivpd %ymm4,%ymm0,%ymm0
    15f4:	c4 c1 7d 11 04 10    	vmovupd %ymm0,(%r8,%rdx,1)
    15fa:	48 83 c2 20          	add    $0x20,%rdx
    15fe:	48 81 fa 08 03 00 00 	cmp    $0x308,%rdx
    1605:	75 c9                	jne    15d0 <formura_step+0x2a0>
    1607:	c5 fb 10 86 00 03 00 	vmovsd 0x300(%rsi),%xmm0
    160e:	00 
    160f:	c5 fb 10 a6 08 03 00 	vmovsd 0x308(%rsi),%xmm4
    1616:	00 
    1617:	c4 e2 e1 a9 a0 08 03 	vfmadd213sd 0x308(%rax),%xmm3,%xmm4
    161e:	00 00 
    1620:	c4 e2 e1 a9 80 00 03 	vfmadd213sd 0x300(%rax),%xmm3,%xmm0
    1627:	00 00 
    1629:	c5 fb 5c c4          	vsubsd %xmm4,%xmm0,%xmm0
    162d:	c5 fb 59 c1          	vmulsd %xmm1,%xmm0,%xmm0
    1631:	c5 fb 5e c2          	vdivsd %xmm2,%xmm0,%xmm0
    1635:	c4 c1 7b 11 80 08 03 	vmovsd %xmm0,0x308(%r8)
    163c:	00 00 
    163e:	c5 fb 10 86 08 03 00 	vmovsd 0x308(%rsi),%xmm0
    1645:	00 
    1646:	c5 fb 10 a6 10 03 00 	vmovsd 0x310(%rsi),%xmm4
    164d:	00 
    164e:	c4 e2 e1 a9 80 08 03 	vfmadd213sd 0x308(%rax),%xmm3,%xmm0
    1655:	00 00 
    1657:	c4 e2 e1 a9 a0 10 03 	vfmadd213sd 0x310(%rax),%xmm3,%xmm4
    165e:	00 00 
    1660:	c5 fb 5c c4          	vsubsd %xmm4,%xmm0,%xmm0
    1664:	c5 fb 59 c1          	vmulsd %xmm1,%xmm0,%xmm0
    1668:	c5 fb 5e c2          	vdivsd %xmm2,%xmm0,%xmm0
    166c:	c4 c1 7b 11 80 10 03 	vmovsd %xmm0,0x310(%r8)
    1673:	00 00 
    1675:	c5 fb 10 86 10 03 00 	vmovsd 0x310(%rsi),%xmm0
    167c:	00 
    167d:	c5 fb 10 a8 18 03 00 	vmovsd 0x318(%rax),%xmm5
    1684:	00 
    1685:	c4 e2 e1 a9 80 10 03 	vfmadd213sd 0x310(%rax),%xmm3,%xmm0
    168c:	00 00 
    168e:	c4 e2 d1 99 9e 18 03 	vfmadd132sd 0x318(%rsi),%xmm5,%xmm3
    1695:	00 00 
    1697:	c5 fb 5c c3          	vsubsd %xmm3,%xmm0,%xmm0
    169b:	c5 fb 59 c1          	vmulsd %xmm1,%xmm0,%xmm0
    169f:	c5 fb 5e c2          	vdivsd %xmm2,%xmm0,%xmm0
    16a3:	c4 c1 7b 11 80 18 03 	vmovsd %xmm0,0x318(%r8)
    16aa:	00 00 
    16ac:	48 8b 7f 08          	mov    0x8(%rdi),%rdi
    16b0:	49 c7 00 00 00 00 00 	movq   $0x0,(%r8)
    16b7:	4c 8d 7f 28          	lea    0x28(%rdi),%r15
    16bb:	4c 8d 77 08          	lea    0x8(%rdi),%r14
    16bf:	4d 39 f8             	cmp    %r15,%r8
    16c2:	0f 93 c2             	setae  %dl
    16c5:	4d 39 ee             	cmp    %r13,%r14
    16c8:	41 0f 93 c5          	setae  %r13b
    16cc:	44 09 ea             	or     %r13d,%edx
    16cf:	4d 39 e7             	cmp    %r12,%r15
    16d2:	41 0f 96 c4          	setbe  %r12b
    16d6:	49 39 de             	cmp    %rbx,%r14
    16d9:	0f 93 c3             	setae  %bl
    16dc:	44 09 e3             	or     %r12d,%ebx
    16df:	21 da                	and    %ebx,%edx
    16e1:	83 e2 01             	and    $0x1,%edx
    16e4:	0f 84 70 02 00 00    	je     195a <formura_step+0x62a>
    16ea:	4d 39 df             	cmp    %r11,%r15
    16ed:	0f 96 c2             	setbe  %dl
    16f0:	4d 39 d6             	cmp    %r10,%r14
    16f3:	41 0f 93 c2          	setae  %r10b
    16f7:	44 09 d2             	or     %r10d,%edx
    16fa:	4c 39 f8             	cmp    %r15,%rax
    16fd:	41 0f 93 c2          	setae  %r10b
    1701:	4d 39 ce             	cmp    %r9,%r14
    1704:	41 0f 93 c1          	setae  %r9b
    1708:	45 09 d1             	or     %r10d,%r9d
    170b:	44 21 ca             	and    %r9d,%edx
    170e:	83 e2 01             	and    $0x1,%edx
    1711:	0f 84 43 02 00 00    	je     195a <formura_step+0x62a>
    1717:	c5 fd 28 2d 01 09 00 	vmovapd 0x901(%rip),%ymm5        # 2020 <_IO_stdin_used+0x20>
    171e:	00 
    171f:	c5 fd 28 25 19 09 00 	vmovapd 0x919(%rip),%ymm4        # 2040 <_IO_stdin_used+0x40>
    1726:	00 
    1727:	ba 08 00 00 00       	mov    $0x8,%edx
    172c:	c5 fd 28 3d 4c 09 00 	vmovapd 0x94c(%rip),%ymm7        # 2080 <_IO_stdin_used+0x80>
    1733:	00 
    1734:	c5 fd 28 35 64 09 00 	vmovapd 0x964(%rip),%ymm6        # 20a0 <_IO_stdin_used+0xa0>
    173b:	00 
    173c:	0f 1f 40 00          	nopl   0x0(%rax)
    1740:	c5 fd 10 5c 10 f8    	vmovupd -0x8(%rax,%rdx,1),%ymm3
    1746:	c5 7d 10 0c 11       	vmovupd (%rcx,%rdx,1),%ymm9
    174b:	c4 c1 65 58 44 10 f8 	vaddpd -0x8(%r8,%rdx,1),%ymm3,%ymm0
    1752:	c5 fd 10 1c 10       	vmovupd (%rax,%rdx,1),%ymm3
    1757:	c4 c1 65 58 1c 10    	vaddpd (%r8,%rdx,1),%ymm3,%ymm3
    175d:	c4 41 7d 10 14 10    	vmovupd (%r8,%rdx,1),%ymm10
    1763:	c5 35 5e c7          	vdivpd %ymm7,%ymm9,%ymm8
    1767:	c5 fd 5c c3          	vsubpd %ymm3,%ymm0,%ymm0
    176b:	c5 fd 10 1c 16       	vmovupd (%rsi,%rdx,1),%ymm3
    1770:	c5 fd 59 c5          	vmulpd %ymm5,%ymm0,%ymm0
    1774:	c5 e5 5e de          	vdivpd %ymm6,%ymm3,%ymm3
    1778:	c5 fd 5e c4          	vdivpd %ymm4,%ymm0,%ymm0
    177c:	c4 c1 65 58 d8       	vaddpd %ymm8,%ymm3,%ymm3
    1781:	c5 2d 5e c6          	vdivpd %ymm6,%ymm10,%ymm8
    1785:	c5 fd 5e c7          	vdivpd %ymm7,%ymm0,%ymm0
    1789:	c4 c1 65 58 d8       	vaddpd %ymm8,%ymm3,%ymm3
    178e:	c5 fd 58 c3          	vaddpd %ymm3,%ymm0,%ymm0
    1792:	c5 fd 58 04 10       	vaddpd (%rax,%rdx,1),%ymm0,%ymm0
    1797:	c5 fd 11 04 17       	vmovupd %ymm0,(%rdi,%rdx,1)
    179c:	48 83 c2 20          	add    $0x20,%rdx
    17a0:	48 81 fa 08 03 00 00 	cmp    $0x308,%rdx
    17a7:	75 97                	jne    1740 <formura_step+0x410>
    17a9:	c5 fb 10 b0 08 03 00 	vmovsd 0x308(%rax),%xmm6
    17b0:	00 
    17b1:	c4 c1 7b 10 b8 08 03 	vmovsd 0x308(%r8),%xmm7
    17b8:	00 00 
    17ba:	c5 fb 10 80 00 03 00 	vmovsd 0x300(%rax),%xmm0
    17c1:	00 
    17c2:	c5 fb 10 25 2e 09 00 	vmovsd 0x92e(%rip),%xmm4        # 20f8 <_IO_stdin_used+0xf8>
    17c9:	00 
    17ca:	c4 c1 7b 58 80 00 03 	vaddsd 0x300(%r8),%xmm0,%xmm0
    17d1:	00 00 
    17d3:	c5 fb 10 a9 08 03 00 	vmovsd 0x308(%rcx),%xmm5
    17da:	00 
    17db:	c5 7b 10 86 08 03 00 	vmovsd 0x308(%rsi),%xmm8
    17e2:	00 
    17e3:	c5 cb 58 df          	vaddsd %xmm7,%xmm6,%xmm3
    17e7:	c5 d3 5e ec          	vdivsd %xmm4,%xmm5,%xmm5
    17eb:	c5 fb 5c c3          	vsubsd %xmm3,%xmm0,%xmm0
    17ef:	c5 fb 10 1d 09 09 00 	vmovsd 0x909(%rip),%xmm3        # 2100 <_IO_stdin_used+0x100>
    17f6:	00 
    17f7:	c5 fb 59 c1          	vmulsd %xmm1,%xmm0,%xmm0
    17fb:	c5 fb 5e c2          	vdivsd %xmm2,%xmm0,%xmm0
    17ff:	c5 3b 5e c3          	vdivsd %xmm3,%xmm8,%xmm8
    1803:	c5 c3 5e fb          	vdivsd %xmm3,%xmm7,%xmm7
    1807:	c4 c1 53 58 e8       	vaddsd %xmm8,%xmm5,%xmm5
    180c:	c5 fb 5e c4          	vdivsd %xmm4,%xmm0,%xmm0
    1810:	c5 d3 58 ef          	vaddsd %xmm7,%xmm5,%xmm5
    1814:	c5 fb 58 c5          	vaddsd %xmm5,%xmm0,%xmm0
    1818:	c5 fb 58 c6          	vaddsd %xmm6,%xmm0,%xmm0
    181c:	c5 fb 11 87 08 03 00 	vmovsd %xmm0,0x308(%rdi)
    1823:	00 
    1824:	c5 fb 10 b0 10 03 00 	vmovsd 0x310(%rax),%xmm6
    182b:	00 
    182c:	c4 c1 7b 10 b8 10 03 	vmovsd 0x310(%r8),%xmm7
    1833:	00 00 
    1835:	c5 fb 10 80 08 03 00 	vmovsd 0x308(%rax),%xmm0
    183c:	00 
    183d:	c4 c1 7b 58 80 08 03 	vaddsd 0x308(%r8),%xmm0,%xmm0
    1844:	00 00 
    1846:	c5 7b 10 86 10 03 00 	vmovsd 0x310(%rsi),%xmm8
    184d:	00 
    184e:	c5 c3 58 ee          	vaddsd %xmm6,%xmm7,%xmm5
    1852:	c5 c3 5e fb          	vdivsd %xmm3,%xmm7,%xmm7
    1856:	c5 fb 5c c5          	vsubsd %xmm5,%xmm0,%xmm0
    185a:	c5 fb 10 a9 10 03 00 	vmovsd 0x310(%rcx),%xmm5
    1861:	00 
    1862:	c5 fb 59 c1          	vmulsd %xmm1,%xmm0,%xmm0
    1866:	c5 fb 5e c2          	vdivsd %xmm2,%xmm0,%xmm0
    186a:	c5 d3 5e ec          	vdivsd %xmm4,%xmm5,%xmm5
    186e:	c5 3b 5e c3          	vdivsd %xmm3,%xmm8,%xmm8
    1872:	c5 fb 5e c4          	vdivsd %xmm4,%xmm0,%xmm0
    1876:	c4 c1 53 58 e8       	vaddsd %xmm8,%xmm5,%xmm5
    187b:	c5 d3 58 ef          	vaddsd %xmm7,%xmm5,%xmm5
    187f:	c5 fb 58 c5          	vaddsd %xmm5,%xmm0,%xmm0
    1883:	c5 fb 58 c6          	vaddsd %xmm6,%xmm0,%xmm0
    1887:	c5 fb 11 87 10 03 00 	vmovsd %xmm0,0x310(%rdi)
    188e:	00 
    188f:	c5 fb 10 a8 18 03 00 	vmovsd 0x318(%rax),%xmm5
    1896:	00 
    1897:	c4 c1 7b 10 b0 18 03 	vmovsd 0x318(%r8),%xmm6
    189e:	00 00 
    18a0:	c4 c1 7b 10 80 10 03 	vmovsd 0x310(%r8),%xmm0
    18a7:	00 00 
    18a9:	c5 fb 58 80 10 03 00 	vaddsd 0x310(%rax),%xmm0,%xmm0
    18b0:	00 
    18b1:	c5 cb 58 fd          	vaddsd %xmm5,%xmm6,%xmm7
    18b5:	c5 fb 5c c7          	vsubsd %xmm7,%xmm0,%xmm0
    18b9:	c5 fb 59 c1          	vmulsd %xmm1,%xmm0,%xmm0
    18bd:	c5 fb 10 8e 18 03 00 	vmovsd 0x318(%rsi),%xmm1
    18c4:	00 
    18c5:	c5 fb 5e c2          	vdivsd %xmm2,%xmm0,%xmm0
    18c9:	c5 fb 10 91 18 03 00 	vmovsd 0x318(%rcx),%xmm2
    18d0:	00 
    18d1:	c5 fb 5e c4          	vdivsd %xmm4,%xmm0,%xmm0
    18d5:	c5 f3 5e cb          	vdivsd %xmm3,%xmm1,%xmm1
    18d9:	c5 eb 5e e4          	vdivsd %xmm4,%xmm2,%xmm4
    18dd:	c5 cb 5e db          	vdivsd %xmm3,%xmm6,%xmm3
    18e1:	c5 f3 58 cc          	vaddsd %xmm4,%xmm1,%xmm1
    18e5:	c5 f3 58 cb          	vaddsd %xmm3,%xmm1,%xmm1
    18e9:	c5 fb 58 c1          	vaddsd %xmm1,%xmm0,%xmm0
    18ed:	c5 fb 58 c5          	vaddsd %xmm5,%xmm0,%xmm0
    18f1:	c5 fb 11 87 18 03 00 	vmovsd %xmm0,0x318(%rdi)
    18f8:	00 
    18f9:	48 8b 05 08 08 00 00 	mov    0x808(%rip),%rax        # 2108 <_IO_stdin_used+0x108>
    1900:	48 89 07             	mov    %rax,(%rdi)
    1903:	c5 f8 77             	vzeroupper 
    1906:	5b                   	pop    %rbx
    1907:	41 5c                	pop    %r12
    1909:	41 5d                	pop    %r13
    190b:	41 5e                	pop    %r14
    190d:	41 5f                	pop    %r15
    190f:	5d                   	pop    %rbp
    1910:	c3                   	retq   
    1911:	c5 fb 10 0d c7 07 00 	vmovsd 0x7c7(%rip),%xmm1        # 20e0 <_IO_stdin_used+0xe0>
    1918:	00 
    1919:	c5 fb 10 15 c7 07 00 	vmovsd 0x7c7(%rip),%xmm2        # 20e8 <_IO_stdin_used+0xe8>
    1920:	00 
    1921:	66 66 2e 0f 1f 84 00 	data16 nopw %cs:0x0(%rax,%rax,1)
    1928:	00 00 00 00 
    192c:	0f 1f 40 00          	nopl   0x0(%rax)
    1930:	c5 fb 10 44 10 f8    	vmovsd -0x8(%rax,%rdx,1),%xmm0
    1936:	c5 fb 5c 04 10       	vsubsd (%rax,%rdx,1),%xmm0,%xmm0
    193b:	c5 fb 59 c1          	vmulsd %xmm1,%xmm0,%xmm0
    193f:	c5 fb 5e c2          	vdivsd %xmm2,%xmm0,%xmm0
    1943:	c5 fb 11 04 11       	vmovsd %xmm0,(%rcx,%rdx,1)
    1948:	48 83 c2 08          	add    $0x8,%rdx
    194c:	48 81 fa 20 03 00 00 	cmp    $0x320,%rdx
    1953:	75 db                	jne    1930 <formura_step+0x600>
    1955:	e9 bb fa ff ff       	jmpq   1415 <formura_step+0xe5>
    195a:	c5 fb 10 2d 96 07 00 	vmovsd 0x796(%rip),%xmm5        # 20f8 <_IO_stdin_used+0xf8>
    1961:	00 
    1962:	c5 fb 10 25 96 07 00 	vmovsd 0x796(%rip),%xmm4        # 2100 <_IO_stdin_used+0x100>
    1969:	00 
    196a:	ba 08 00 00 00       	mov    $0x8,%edx
    196f:	90                   	nop
    1970:	c5 fb 10 34 10       	vmovsd (%rax,%rdx,1),%xmm6
    1975:	c4 c1 7b 10 3c 10    	vmovsd (%r8,%rdx,1),%xmm7
    197b:	c4 c1 7b 10 44 10 f8 	vmovsd -0x8(%r8,%rdx,1),%xmm0
    1982:	c5 7b 10 04 11       	vmovsd (%rcx,%rdx,1),%xmm8
    1987:	c5 fb 58 44 10 f8    	vaddsd -0x8(%rax,%rdx,1),%xmm0,%xmm0
    198d:	c5 c3 58 de          	vaddsd %xmm6,%xmm7,%xmm3
    1991:	c5 c3 5e fc          	vdivsd %xmm4,%xmm7,%xmm7
    1995:	c5 fb 5c c3          	vsubsd %xmm3,%xmm0,%xmm0
    1999:	c5 fb 10 1c 16       	vmovsd (%rsi,%rdx,1),%xmm3
    199e:	c5 fb 59 c1          	vmulsd %xmm1,%xmm0,%xmm0
    19a2:	c5 fb 5e c2          	vdivsd %xmm2,%xmm0,%xmm0
    19a6:	c5 e3 5e dc          	vdivsd %xmm4,%xmm3,%xmm3
    19aa:	c5 3b 5e c5          	vdivsd %xmm5,%xmm8,%xmm8
    19ae:	c5 fb 5e c5          	vdivsd %xmm5,%xmm0,%xmm0
    19b2:	c4 c1 63 58 d8       	vaddsd %xmm8,%xmm3,%xmm3
    19b7:	c5 e3 58 df          	vaddsd %xmm7,%xmm3,%xmm3
    19bb:	c5 fb 58 c3          	vaddsd %xmm3,%xmm0,%xmm0
    19bf:	c5 fb 58 c6          	vaddsd %xmm6,%xmm0,%xmm0
    19c3:	c5 fb 11 04 17       	vmovsd %xmm0,(%rdi,%rdx,1)
    19c8:	48 83 c2 08          	add    $0x8,%rdx
    19cc:	48 81 fa 20 03 00 00 	cmp    $0x320,%rdx
    19d3:	75 9b                	jne    1970 <formura_step+0x640>
    19d5:	e9 1f ff ff ff       	jmpq   18f9 <formura_step+0x5c9>
    19da:	ba 08 00 00 00       	mov    $0x8,%edx
    19df:	90                   	nop
    19e0:	c5 fb 10 44 16 f8    	vmovsd -0x8(%rsi,%rdx,1),%xmm0
    19e6:	c5 fb 10 24 16       	vmovsd (%rsi,%rdx,1),%xmm4
    19eb:	c4 e2 e1 a9 44 10 f8 	vfmadd213sd -0x8(%rax,%rdx,1),%xmm3,%xmm0
    19f2:	c4 e2 e1 a9 24 10    	vfmadd213sd (%rax,%rdx,1),%xmm3,%xmm4
    19f8:	c5 fb 5c c4          	vsubsd %xmm4,%xmm0,%xmm0
    19fc:	c5 fb 59 c1          	vmulsd %xmm1,%xmm0,%xmm0
    1a00:	c5 fb 5e c2          	vdivsd %xmm2,%xmm0,%xmm0
    1a04:	c4 c1 7b 11 04 10    	vmovsd %xmm0,(%r8,%rdx,1)
    1a0a:	48 83 c2 08          	add    $0x8,%rdx
    1a0e:	48 81 fa 20 03 00 00 	cmp    $0x320,%rdx
    1a15:	75 c9                	jne    19e0 <formura_step+0x6b0>
    1a17:	e9 90 fc ff ff       	jmpq   16ac <formura_step+0x37c>
    1a1c:	c5 fb 10 1d cc 06 00 	vmovsd 0x6cc(%rip),%xmm3        # 20f0 <_IO_stdin_used+0xf0>
    1a23:	00 
    1a24:	ba 08 00 00 00       	mov    $0x8,%edx
    1a29:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    1a30:	c5 fb 10 44 11 f8    	vmovsd -0x8(%rcx,%rdx,1),%xmm0
    1a36:	c5 fb 10 24 11       	vmovsd (%rcx,%rdx,1),%xmm4
    1a3b:	c4 e2 e1 a9 44 10 f8 	vfmadd213sd -0x8(%rax,%rdx,1),%xmm3,%xmm0
    1a42:	c4 e2 e1 a9 24 10    	vfmadd213sd (%rax,%rdx,1),%xmm3,%xmm4
    1a48:	c5 fb 5c c4          	vsubsd %xmm4,%xmm0,%xmm0
    1a4c:	c5 fb 59 c1          	vmulsd %xmm1,%xmm0,%xmm0
    1a50:	c5 fb 5e c2          	vdivsd %xmm2,%xmm0,%xmm0
    1a54:	c5 fb 11 04 16       	vmovsd %xmm0,(%rsi,%rdx,1)
    1a59:	48 83 c2 08          	add    $0x8,%rdx
    1a5d:	48 81 fa 20 03 00 00 	cmp    $0x320,%rdx
    1a64:	75 ca                	jne    1a30 <formura_step+0x700>
    1a66:	e9 f5 fa ff ff       	jmpq   1560 <formura_step+0x230>
    1a6b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000001a70 <formura_initialize>:
    1a70:	f3 0f 1e fa          	endbr64 
    1a74:	53                   	push   %rbx
    1a75:	48 89 fb             	mov    %rdi,%rbx
    1a78:	bf 20 03 00 00       	mov    $0x320,%edi
    1a7d:	e8 0e f6 ff ff       	callq  1090 <malloc@plt>
    1a82:	48 89 43 08          	mov    %rax,0x8(%rbx)
    1a86:	48 85 c0             	test   %rax,%rax
    1a89:	74 52                	je     1add <formura_initialize+0x6d>
    1a8b:	bf 20 03 00 00       	mov    $0x320,%edi
    1a90:	e8 fb f5 ff ff       	callq  1090 <malloc@plt>
    1a95:	48 89 43 10          	mov    %rax,0x10(%rbx)
    1a99:	48 85 c0             	test   %rax,%rax
    1a9c:	74 3f                	je     1add <formura_initialize+0x6d>
    1a9e:	bf 20 03 00 00       	mov    $0x320,%edi
    1aa3:	e8 e8 f5 ff ff       	callq  1090 <malloc@plt>
    1aa8:	48 89 43 18          	mov    %rax,0x18(%rbx)
    1aac:	48 85 c0             	test   %rax,%rax
    1aaf:	74 2c                	je     1add <formura_initialize+0x6d>
    1ab1:	bf 20 03 00 00       	mov    $0x320,%edi
    1ab6:	e8 d5 f5 ff ff       	callq  1090 <malloc@plt>
    1abb:	48 89 43 20          	mov    %rax,0x20(%rbx)
    1abf:	48 85 c0             	test   %rax,%rax
    1ac2:	74 19                	je     1add <formura_initialize+0x6d>
    1ac4:	bf 20 03 00 00       	mov    $0x320,%edi
    1ac9:	e8 c2 f5 ff ff       	callq  1090 <malloc@plt>
    1ace:	48 85 c0             	test   %rax,%rax
    1ad1:	48 89 43 28          	mov    %rax,0x28(%rbx)
    1ad5:	5b                   	pop    %rbx
    1ad6:	0f 95 c0             	setne  %al
    1ad9:	0f b6 c0             	movzbl %al,%eax
    1adc:	c3                   	retq   
    1add:	5b                   	pop    %rbx
    1ade:	31 c0                	xor    %eax,%eax
    1ae0:	c3                   	retq   
    1ae1:	66 66 2e 0f 1f 84 00 	data16 nopw %cs:0x0(%rax,%rax,1)
    1ae8:	00 00 00 00 
    1aec:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000001af0 <formura_setup>:
    1af0:	f3 0f 1e fa          	endbr64 
    1af4:	c5 fd 28 05 c4 05 00 	vmovapd 0x5c4(%rip),%ymm0        # 20c0 <_IO_stdin_used+0xc0>
    1afb:	00 
    1afc:	48 8b 47 08          	mov    0x8(%rdi),%rax
    1b00:	48 c7 07 00 00 00 00 	movq   $0x0,(%rdi)
    1b07:	48 8b 0d fa 05 00 00 	mov    0x5fa(%rip),%rcx        # 2108 <_IO_stdin_used+0x108>
    1b0e:	55                   	push   %rbp
    1b0f:	48 89 e5             	mov    %rsp,%rbp
    1b12:	48 c7 80 08 03 00 00 	movq   $0x0,0x308(%rax)
    1b19:	00 00 00 00 
    1b1d:	48 c7 80 10 03 00 00 	movq   $0x0,0x310(%rax)
    1b24:	00 00 00 00 
    1b28:	48 89 08             	mov    %rcx,(%rax)
    1b2b:	c5 fd 11 40 08       	vmovupd %ymm0,0x8(%rax)
    1b30:	c5 fd 11 40 28       	vmovupd %ymm0,0x28(%rax)
    1b35:	c5 fd 11 40 48       	vmovupd %ymm0,0x48(%rax)
    1b3a:	c5 fd 11 40 68       	vmovupd %ymm0,0x68(%rax)
    1b3f:	c5 fd 11 80 88 00 00 	vmovupd %ymm0,0x88(%rax)
    1b46:	00 
    1b47:	c5 f9 57 c0          	vxorpd %xmm0,%xmm0,%xmm0
    1b4b:	c5 fd 11 80 a8 00 00 	vmovupd %ymm0,0xa8(%rax)
    1b52:	00 
    1b53:	c5 fd 11 80 c8 00 00 	vmovupd %ymm0,0xc8(%rax)
    1b5a:	00 
    1b5b:	c5 fd 11 80 e8 00 00 	vmovupd %ymm0,0xe8(%rax)
    1b62:	00 
    1b63:	c5 fd 11 80 08 01 00 	vmovupd %ymm0,0x108(%rax)
    1b6a:	00 
    1b6b:	c5 fd 11 80 28 01 00 	vmovupd %ymm0,0x128(%rax)
    1b72:	00 
    1b73:	c5 fd 11 80 48 01 00 	vmovupd %ymm0,0x148(%rax)
    1b7a:	00 
    1b7b:	c5 fd 11 80 68 01 00 	vmovupd %ymm0,0x168(%rax)
    1b82:	00 
    1b83:	c5 fd 11 80 88 01 00 	vmovupd %ymm0,0x188(%rax)
    1b8a:	00 
    1b8b:	c5 fd 11 80 a8 01 00 	vmovupd %ymm0,0x1a8(%rax)
    1b92:	00 
    1b93:	c5 fd 11 80 c8 01 00 	vmovupd %ymm0,0x1c8(%rax)
    1b9a:	00 
    1b9b:	c5 fd 11 80 e8 01 00 	vmovupd %ymm0,0x1e8(%rax)
    1ba2:	00 
    1ba3:	c5 fd 11 80 08 02 00 	vmovupd %ymm0,0x208(%rax)
    1baa:	00 
    1bab:	c5 fd 11 80 28 02 00 	vmovupd %ymm0,0x228(%rax)
    1bb2:	00 
    1bb3:	c5 fd 11 80 48 02 00 	vmovupd %ymm0,0x248(%rax)
    1bba:	00 
    1bbb:	c5 fd 11 80 68 02 00 	vmovupd %ymm0,0x268(%rax)
    1bc2:	00 
    1bc3:	c5 fd 11 80 88 02 00 	vmovupd %ymm0,0x288(%rax)
    1bca:	00 
    1bcb:	c5 fd 11 80 a8 02 00 	vmovupd %ymm0,0x2a8(%rax)
    1bd2:	00 
    1bd3:	c5 fd 11 80 c8 02 00 	vmovupd %ymm0,0x2c8(%rax)
    1bda:	00 
    1bdb:	c5 fd 11 80 e8 02 00 	vmovupd %ymm0,0x2e8(%rax)
    1be2:	00 
    1be3:	48 c7 80 18 03 00 00 	movq   $0x0,0x318(%rax)
    1bea:	00 00 00 00 
    1bee:	48 8b 57 10          	mov    0x10(%rdi),%rdx
    1bf2:	48 89 47 10          	mov    %rax,0x10(%rdi)
    1bf6:	48 89 57 08          	mov    %rdx,0x8(%rdi)
    1bfa:	c5 f8 77             	vzeroupper 
    1bfd:	5d                   	pop    %rbp
    1bfe:	c3                   	retq   
    1bff:	90                   	nop

0000000000001c00 <formura_forward>:
    1c00:	f3 0f 1e fa          	endbr64 
    1c04:	53                   	push   %rbx
    1c05:	48 89 fb             	mov    %rdi,%rbx
    1c08:	e8 23 f7 ff ff       	callq  1330 <formura_step>
    1c0d:	c5 f8 10 4b 08       	vmovups 0x8(%rbx),%xmm1
    1c12:	48 ff 03             	incq   (%rbx)
    1c15:	c4 e3 71 0f c1 08    	vpalignr $0x8,%xmm1,%xmm1,%xmm0
    1c1b:	c5 f8 11 43 08       	vmovups %xmm0,0x8(%rbx)
    1c20:	5b                   	pop    %rbx
    1c21:	c3                   	retq   
    1c22:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    1c29:	00 00 00 
    1c2c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000001c30 <__libc_csu_init>:
    1c30:	f3 0f 1e fa          	endbr64 
    1c34:	41 57                	push   %r15
    1c36:	4c 8d 3d 6b 21 00 00 	lea    0x216b(%rip),%r15        # 3da8 <__frame_dummy_init_array_entry>
    1c3d:	41 56                	push   %r14
    1c3f:	49 89 d6             	mov    %rdx,%r14
    1c42:	41 55                	push   %r13
    1c44:	49 89 f5             	mov    %rsi,%r13
    1c47:	41 54                	push   %r12
    1c49:	41 89 fc             	mov    %edi,%r12d
    1c4c:	55                   	push   %rbp
    1c4d:	48 8d 2d 5c 21 00 00 	lea    0x215c(%rip),%rbp        # 3db0 <__do_global_dtors_aux_fini_array_entry>
    1c54:	53                   	push   %rbx
    1c55:	4c 29 fd             	sub    %r15,%rbp
    1c58:	48 83 ec 08          	sub    $0x8,%rsp
    1c5c:	e8 9f f3 ff ff       	callq  1000 <_init>
    1c61:	48 c1 fd 03          	sar    $0x3,%rbp
    1c65:	74 1f                	je     1c86 <__libc_csu_init+0x56>
    1c67:	31 db                	xor    %ebx,%ebx
    1c69:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    1c70:	4c 89 f2             	mov    %r14,%rdx
    1c73:	4c 89 ee             	mov    %r13,%rsi
    1c76:	44 89 e7             	mov    %r12d,%edi
    1c79:	41 ff 14 df          	callq  *(%r15,%rbx,8)
    1c7d:	48 83 c3 01          	add    $0x1,%rbx
    1c81:	48 39 dd             	cmp    %rbx,%rbp
    1c84:	75 ea                	jne    1c70 <__libc_csu_init+0x40>
    1c86:	48 83 c4 08          	add    $0x8,%rsp
    1c8a:	5b                   	pop    %rbx
    1c8b:	5d                   	pop    %rbp
    1c8c:	41 5c                	pop    %r12
    1c8e:	41 5d                	pop    %r13
    1c90:	41 5e                	pop    %r14
    1c92:	41 5f                	pop    %r15
    1c94:	c3                   	retq   
    1c95:	66 66 2e 0f 1f 84 00 	data16 nopw %cs:0x0(%rax,%rax,1)
    1c9c:	00 00 00 00 

0000000000001ca0 <__libc_csu_fini>:
    1ca0:	f3 0f 1e fa          	endbr64 
    1ca4:	c3                   	retq   

Disassembly of section .fini:

0000000000001ca8 <_fini>:
    1ca8:	f3 0f 1e fa          	endbr64 
    1cac:	48 83 ec 08          	sub    $0x8,%rsp
    1cb0:	48 83 c4 08          	add    $0x8,%rsp
    1cb4:	c3                   	retq   
