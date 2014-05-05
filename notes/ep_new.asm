# bgez		2
# jal		1
# c.le.d	2
# move		2
# bc1f		1
# lbu		2
# sw		2
# add.d		2
# bc1t		1
# jalr		1
# sub.s		2, 3
# bnez		2
# lwc1		2
# slti		3
# sra		3
# dmtc1		2
# beq		3
# cvt.s.d	2
# c.lt.d	2
# c.eq.s	2
# ldc1		2
# c.le.s	2
# dmfc1		2
# mov.s		2
# sdc1		2
# addiu		2, 3
# trunc.w.d	2
# mul.d		2, 3
# b		1
# sll		2, 3
# li		2
# lw		2
# jr		1
# sd		2
# nop		0
# beqz		2
# div.d		2, 3
# bne		3
# sltiu		3
# subu		2, 3
# cvt.d.s	2
# mul.s		2, 3
# bnezl		2
# mtc1		2
# la		2
# c.lt.s	2
# blez		2
# addu		2, 3
# slt		2, 3
# sb		2
# div.s		2
# add.s		2, 3
# xor		2, 3
# lui		2
# ld		2
# cvt.s.w	2
# mov.d		2
# swc1		2
# andi		2

		li	$v0, 0xD980
		addu	$at, $t9, $v0
		lwc1	$f7, (flt_10009290 - 0x10010F9C)($at)
		c.lt.s	$f7, $f14
		ldc1	$f3, (dbl_100092D0 - 0x10010F9C)($at)
		bc1f	loc_10003640
		lwc1	$f0, (flt_10009294 - 0x10010F9C)($at)
		add.s	$f14, $f0
		mtc1	$zero, $f1
		nop
		c.lt.s	$f14, $f1
		lwc1	$f0, (flt_1000929C - 0x10010F9C)($at)
		lwc1	$f5, (flt_100092A4 - 0x10010F9C)($at)
		bc1f	loc_10003660
		lwc1	$f6, (flt_100092A0 - 0x10010F9C)($at)
		add.s	$f14, $f7
		c.lt.s	$f14, $f0
		nop
		bc1t	loc_100036C0
		mov.s	$f0, $f13
		c.lt.s	$f14, $f6
		nop
		bc1t	locret_100036E8
		nop
		c.lt.s	$f14, $f5
		nop
		bc1f	locret_100036B8
		mov.s	$f0, $f12
		sub.s	$f2, $f5, $f14
		cvt.d.s	$f2, $f2
		div.d	$f2, $f3
		sub.s	$f1, $f13, $f12
		cvt.d.s	$f1, $f1
		cvt.d.s	$f0, $f12
		mul.d	$f1, $f2
		add.d	$f0, $f1
		jr	$ra
		cvt.s.d	$f0, $f0
		jr	$ra
		nop
		ldc1	$f3, (dbl_100092D0 - 0x10010F9C)($at)
		cvt.d.s	$f2, $f14
		div.d	$f2, $f3
		sub.s	$f1, $f13, $f12
		cvt.d.s	$f1, $f1
		cvt.d.s	$f0, $f12
		mul.d	$f1, $f2
		add.d	$f0, $f1
		jr	$ra
		cvt.s.d	$f0, $f0
		jr	$ra
		nop
		lui	$at, 1
		addiu	$sp, -0x50
		li	$at, 0xD8AC
		sd	$gp, 0x50+var_20($sp)
		addu	$gp, $t9, $at
		ldc1	$f1, dbl_100092D8
		cvt.d.s	$f0, $f13
		sdc1	$f20, 0x50+var_18($sp)
		sd	$s2, 0x50+var_28($sp)
		c.le.d	$f0, $f1
		mov.s	$f4, $f13
		sd	$s1, 0x50+var_30($sp)
		mov.s	$f5, $f12
		move	$s1, $a5
		sd	$s0, 0x50+var_38($sp)
		move	$s0, $a4
		move	$s2, $a3
		bc1f	loc_10003748
		lwc1	$f6, flt_100092A8
		add.s	$f20, $f14, $f6
		b	loc_10003754
		mul.s	$f20, $f13, $f20
		mul.s	$f21, $f13, $f14
		add.s	$f20, $f13, $f14
		sub.s	$f20, $f21
		mtc1	$zero, $f23
		nop
		c.eq.s	$f14, $f23
		nop
		bc1f	loc_10003794
		sd	$ra, 0x50+var_10($sp)
		swc1	$f4, 0($s1)
		swc1	$f4, 0($s0)
		swc1	$f4, 0($s2)
		ld	$s0, 0x50+var_38($sp)
		ld	$s1, 0x50+var_30($sp)
		ld	$s2, 0x50+var_28($sp)
		ldc1	$f20, 0x50+var_18($sp)
		ld	$gp, 0x50+var_20($sp)
		jr	$ra
		addiu	$sp, 0x50
		ldc1	$f15, dbl_100092E0
		cvt.d.s	$f14, $f5
		mul.d	$f14, $f15
		lwc1	$f12, flt_100092AC
		cvt.s.d	$f14, $f14
		ldc1	$f15, dbl_100092E8
		sdc1	$f14, 0x50+var_50($sp)
		cvt.d.s	$f14, $f14
		la	$t9, value__GfN21
		mul.s	$f12, $f4, $f12
		sdc1	$f14, 0x50+var_48($sp)
		add.d	$f14, $f15
		sub.s	$f12, $f20
		mov.s	$f13, $f20
		sdc1	$f12, 0x50+var_40($sp)
		jal	value__GfN21
		cvt.s.d	$f14, $f14
		la	$t9, value__GfN21
		swc1	$f0, 0($s2)
		ldc1	$f12, 0x50+var_40($sp)
		mov.s	$f13, $f20
		jal	value__GfN21
		ldc1	$f14, 0x50+var_50($sp)
		ldc1	$f15, dbl_100092F0
		ldc1	$f14, 0x50+var_48($sp)
		la	$t9, value__GfN21
		add.d	$f14, $f15
		ldc1	$f12, 0x50+var_40($sp)
		swc1	$f0, 0($s0)
		mov.s	$f13, $f20
		jal	value__GfN21
		cvt.s.d	$f14, $f14
		ld	$ra, 0x50+var_10($sp)
		b	loc_10003778
		swc1	$f0, 0($s1)
		dmtc1	$zero, $f0
		addiu	$sp, -0x20
		sdc1	$f30, 0x20+var_20($sp)
		cvt.d.s	$f30, $f12
		c.lt.d	$f0, $f30
		lui	$at, 1
		sd	$ra, 0x20+var_10($sp)
		li	$at, 0xD77C
		sd	$gp, 0x20+var_18($sp)
		bc1f	loc_10003890
		addu	$gp, $t9, $at
		la	$t9, drand48
		jalr	$t9
		nop
		la	$t9, expm1
		jalr	$t9
		mul.d	$f12, $f0, $f30
		la	$t9, expm1
		mov.d	$f30, $f0
		jalr	$t9
		ldc1	$f12, dbl_10009300
		div.d	$f0, $f30, $f0
		ld	$ra, 0x20+var_10($sp)
		ld	$gp, 0x20+var_18($sp)
		ldc1	$f30, 0x20+var_20($sp)
		addiu	$sp, 0x20
		jr	$ra
		cvt.s.d	$f0, $f0
		la	$t9, __assert
		li	$a2, 0x108
		la	$a1, aEp_c
		jalr	$t9
		la	$a0, aM0_0
		b	loc_10003850
		la	$t9, drand48
		lui	$v0, 1
		addiu	$sp, -0x10
		li	$v0, 0xD6F0
		sd	$gp, 0x10+var_8($sp)
		addu	$gp, $t9, $v0
		ldc1	$f1, dbl_10009300
		cvt.d.s	$f0, $f12
		la	$at, 0x10010000
		sd	$ra, 0x10+var_10($sp)
		la	$t9, glMultMatrixf
		addiu	$at, (aflag - 0x10010000)
		add.d	$f0, $f1
		swc1	$f13, (flt_10008EAC - 0x10008E48)($at)
		swc1	$f14, (flt_10008EC0 - 0x10008E48)($at)
		cvt.s.d	$f0, $f0
		addiu	$a0, $at, (flt_10008EA8 - 0x10008E48)
		jalr	$t9
		swc1	$f0, (flt_10008EA8 - 0x10008E48)($at)
		ld	$ra, 0x10+var_10($sp)
		ld	$gp, 0x10+var_8($sp)
		jr	$ra
		addiu	$sp, 0x10
		sw	$a0, 0x10($a1)
		lw	$a4, 0x18($a0)
		beqz	$a4, loc_10003994
		lwc1	$f4, 8($a1)
		lwc1	$f0, 8($a4)
		c.lt.s	$f4, $f0
		nop
		bc1t	loc_10003988
		lw	$a3, 0x14($a4)
		beqz	$a3, loc_100039A0
		nop
		lwc1	$f1, 8($a3)
		c.lt.s	$f4, $f1
		nop
		bc1t	loc_1000395C
		nop
		move	$a4, $a3
		lw	$a3, 0x14($a3)
		bnez	$a3, loc_10003930
		nop
		b	loc_10003968
		lw	$at, 0x14($a1)
		sw	$a3, 0x14($a1)
		sw	$a1, 0x14($a4)
		lw	$at, 0x14($a1)
		bnez	$at, locret_10003980
		nop
		lw	$v0, 0x20($a0)
		sw	$a1, 0x14($v0)
		jr	$ra
		sw	$a1, 0x20($a0)
		jr	$ra
		nop
		sw	$a4, 0x14($a1)
		jr	$ra
		sw	$a1, 0x18($a0)
		sw	$a1, 0x20($a0)
		jr	$ra
		sw	$a1, 0x18($a0)
		sw	$a1, 0x14($a4)
		jr	$ra
		sw	$a1, 0x20($a0)
		addiu	$sp, -0x2E0
		sd	$s3, 0x2E0+var_C0($sp)
		li	$s3, 0xD5F0
		sd	$gp, 0x2E0+var_D0($sp)
		addu	$gp, $t9, $s3
		la	$s3, oflag
		sd	$s0, 0x2E0+var_C8($sp)
		lbu	$a0, (oflag - 0x1000A3B8)($s3)
		la	$s0, defaultScript
		sd	$ra, 0x2E0+var_18($sp)
		beqz	$a0, loc_100039F4
		lw	$s0, (defaultScript - 0x10008F2C)($s0)
		la	$t9, printf
		la	$a0, 0x10010000
		jalr	$t9
		addiu	$a0, (aReadingAnimati - 0x10010000)
		lbu	$a0, (oflag - 0x1000A3B8)($s3)
		sdc1	$f20, 0x2E0+var_50($sp)
		sd	$s5, 0x2E0+var_8($sp)
		sd	$s1, 0x2E0+var_10($sp)
		beqz	$a0, loc_10003A14
		sd	$s6, 0x2E0+var_20($sp)
		la	$t9, printf
		jalr	$t9
		la	$a0, asc_10009338
		la	$s5, sscanf
		la	$s1, strcmp
		la	$s6, strcspn
		sd	$s7, 0x2E0+var_30($sp)
		sd	$s4, 0x2E0+var_38($sp)
		sd	$fp, 0x2E0+var_40($sp)
		sd	$s2, 0x2E0+var_48($sp)
		mtc1	$zero, $f20
		lw	$a1, 0x2E0+var_2E0($sp)
		b	loc_10003B54
		sd	$a1, 0x2E0+var_A8($sp)
		la	$a0, asc_10009388
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		li	$a2, 1
		beqz	$v0, loc_100047C0
		lbu	$a0, 0($s3)
		beqz	$a0, loc_10003A78
		la	$t9, free
		la	$t9, printf
		la	$a0, 0x10010000
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		addiu	$a0, (aBadCommandS - 0x10010000)
		la	$t9, free
		jalr	$t9
		move	$a0, $s2
		li	$a1, 1
		sd	$a1, 0x2E0+var_58($sp)
		ld	$a2, 0x2E0+var_58($sp)
		sd	$a2, 0x2E0+var_60($sp)
		ld	$a3, 0x2E0+var_60($sp)
		sd	$a3, 0x2E0+var_68($sp)
		ld	$a4, 0x2E0+var_68($sp)
		sd	$a4, 0x2E0+var_70($sp)
		ld	$a5, 0x2E0+var_70($sp)
		sd	$a5, 0x2E0+var_78($sp)
		ld	$a6, 0x2E0+var_78($sp)
		sd	$a6, 0x2E0+var_80($sp)
		ld	$a7, 0x2E0+var_80($sp)
		sd	$a7, 0x2E0+var_88($sp)
		ld	$fp, 0x2E0+var_88($sp)
		move	$s7, $fp
		move	$s4, $s7
		move	$fp, $s4
		move	$s7, $fp
		move	$s4, $s7
		move	$s7, $s4
		move	$fp, $s7
		move	$s7, $fp
		move	$s4, $s7
		beqz	$s4, loc_10003DA4
		move	$t9, $s5
		move	$a0, $s0
		addiu	$a2, $sp, 0x2E0+var_1D8
		jalr	$t9
		la	$a1, asc_10009390
		lbu	$t4, 0($s3)
		beqz	$t4, loc_10003B18
		la	$t5, bflag
		la	$t9, printf
		addiu	$a1, $sp, 0x2E0+var_1D8
		jalr	$t9
		la	$a0, aS_0
		la	$t5, bflag
		lbu	$t5, (bflag - 0x10008E49)($t5)
		la	$s2, strlen
		beqz	$t5, loc_10003DD8
		sb	$zero, 0x2E0+var_1D8($sp)
		move	$t9, $s6
		move	$a0, $s0
		jalr	$t9
		la	$a1, asc_10009338
		move	$t9, $s2
		addu	$s0, $v0, $s0
		addiu	$s0, 1
		jalr	$t9
		move	$a0, $s0
		beqz	$v0, loc_100041A4
		la	$a1, seqList
		sd	$zero, 0x2E0+var_58($sp)
		sd	$zero, 0x2E0+var_60($sp)
		sd	$zero, 0x2E0+var_68($sp)
		sd	$zero, 0x2E0+var_70($sp)
		sd	$zero, 0x2E0+var_78($sp)
		sd	$zero, 0x2E0+var_80($sp)
		sd	$zero, 0x2E0+var_88($sp)
		sd	$zero, 0x2E0+var_90($sp)
		sd	$zero, 0x2E0+var_98($sp)
		move	$s2, $zero
		sd	$zero, 0x2E0+var_A0($sp)
		move	$fp, $zero
		move	$s7, $zero
		sd	$zero, 0x2E0+var_B0($sp)
		move	$s4, $zero
		move	$t9, $s5
		sd	$zero, 0x2E0+var_B8($sp)
		move	$a0, $s0
		addiu	$a2, $sp, 0x2E0+var_2D8
		sd	$zero, 0x2E0+var_D8($sp)
		jalr	$t9
		la	$a1, aS
		move	$t9, $s6
		move	$a0, $s0
		la	$a1, asc_10009340
		jalr	$t9
		sd	$s2, 0x2E0+var_28($sp)
		la	$t9, malloc
		li	$a0, 0x18
		jalr	$t9
		addu	$s0, $v0, $s0
		la	$t8, absFrame
		move	$t9, $s1
		lwc1	$f0, (absFrame - 0x1000A3C8)($t8)
		move	$s2, $v0
		addiu	$a1, $sp, 0x2E0+var_2D8
		la	$a0, aFrame
		jalr	$t9
		swc1	$f0, 8($v0)
		beqz	$v0, loc_10003D30
		move	$t9, $s5
		la	$a0, 0x10010000
		move	$t9, $s1
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		addiu	$a0, (aRelframe - 0x10010000)
		beqz	$v0, loc_10003E58
		move	$t9, $s5
		la	$a0, 0x10010000
		move	$t9, $s1
		addiu	$a1, $sp, 0x2E0+var_2D8
		ld	$s4, 0x2E0+var_D8($sp)
		jalr	$t9
		addiu	$a0, (aAbsframe - 0x10010000)
		beqz	$v0, loc_10003ED0
		la	$a0, 0x10010000
		move	$t9, $s1
		addiu	$a1, $sp, 0x2E0+var_2D8
		ld	$s7, 0x2E0+var_B8($sp)
		jalr	$t9
		addiu	$a0, (aRanddelay - 0x10010000)
		beqz	$v0, loc_10003F48
		la	$a0, 0x10010000
		move	$t9, $s1
		addiu	$a1, $sp, 0x2E0+var_2D8
		ld	$fp, 0x2E0+var_B0($sp)
		jalr	$t9
		addiu	$a0, (aDuration - 0x10010000)
		beqz	$v0, loc_10004014
		la	$a0, 0x10010000
		move	$t9, $s1
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		addiu	$a0, (aVariance - 0x10010000)
		beqz	$v0, loc_10004074
		la	$a0, 0x10010000
		move	$t9, $s1
		addiu	$a1, $sp, 0x2E0+var_2D8
		ld	$s4, 0x2E0+var_A0($sp)
		jalr	$t9
		addiu	$a0, (aActlim1 - 0x10010000)
		beqz	$v0, loc_100040D0
		la	$a0, 0x10010000
		move	$t9, $s1
		addiu	$a1, $sp, 0x2E0+var_2D8
		ld	$s7, 0x2E0+var_98($sp)
		jalr	$t9
		addiu	$a0, (aActlim2 - 0x10010000)
		beqz	$v0, loc_10004138
		move	$t9, $s1
		addiu	$a1, $sp, 0x2E0+var_2D8
		ld	$fp, 0x2E0+var_90($sp)
		jalr	$t9
		la	$a0, aActset
		beqz	$v0, loc_100042C0
		la	$a0, 0x10010000
		move	$t9, $s1
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		addiu	$a0, (aActreset - 0x10010000)
		beqz	$v0, loc_100043B4
		la	$a0, 0x10010000
		move	$t9, $s1
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		addiu	$a0, (aActresetall - 0x10010000)
		bnez	$v0, loc_10003DFC
		la	$a0, 0x10010000
		li	$a2, 6
		sw	$a2, 0($s2)
		lbu	$a1, 0($s3)
		beqz	$a1, loc_10003AC0
		move	$s7, $fp
		la	$t9, printf
		la	$a0, aS
		jalr	$t9
		addiu	$a1, $sp, 0x2E0+var_2D8
		b	loc_10003AC0
		move	$s7, $fp
		addiu	$a2, $s2, 0xC
		la	$a1, aF
		move	$a0, $s0
		jalr	$t9
		sw	$zero, 0($s2)
		move	$t9, $s6
		move	$a0, $s0
		jalr	$t9
		la	$a1, asc_10009340
		lbu	$a3, 0($s3)
		beqz	$a3, loc_10003D7C
		addu	$s0, $v0, $s0
		lwc1	$f1, 0xC($s2)
		la	$t9, printf
		cvt.d.s	$f1, $f1
		addiu	$a1, $sp, 0x2E0+var_2D8
		dmfc1	$a2, $f1
		jalr	$t9
		la	$a0, aSF
		lwc1	$f4, 0xC($s2)
		la	$a5, relFrame
		la	$a6, baseFrame
		lwc1	$f3, (relFrame - 0x1000A3C0)($a5)
		lwc1	$f2, (baseFrame - 0x1000A3C4)($a6)
		add.s	$f3, $f4
		la	$a4, absFrame
		swc1	$f3, (relFrame - 0x1000A3C0)($a5)
		add.s	$f2, $f3
		swc1	$f2, (absFrame - 0x1000A3C8)($a4)
		la	$a0, editSeq
		lw	$a0, (editSeq - 0x1000BF7C)($a0)
		beqz	$a0, loc_1000445C
		la	$s4, addToSeq__GP7animSeqP11animCommand
		move	$t9, $s4
		jal	addToSeq__GP7animSeqP11animCommand
		move	$a1, $s2
		la	$a1, editSeq
		la	$a2, relFrame
		lw	$a1, (editSeq - 0x1000BF7C)($a1)
		lwc1	$f5, (relFrame - 0x1000A3C0)($a2)
		b	loc_10003AE4
		swc1	$f5, 0xC($a1)
		la	$t9, scanf
		li	$s0, 0xFFFFFFFF
		la	$a0, asc_10009390
		jalr	$t9
		ld	$a1, 0x2E0+var_A8($sp)
		beq	$v0, $s0, loc_100041A4
		la	$a1, seqList
		b	loc_10003B54
		ld	$s0, 0x2E0+var_A8($sp)
		move	$t9, $s1
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		addiu	$a0, (aActstop - 0x10010000)
		beqz	$v0, loc_10004408
		la	$a0, 0x10010000
		move	$t9, $s1
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		addiu	$a0, (aActstopall - 0x10010000)
		bnez	$v0, loc_10003FA4
		la	$a0, 0x10010000
		li	$a2, 8
		sw	$a2, 0($s2)
		lbu	$a1, 0($s3)
		beqz	$a1, loc_10003AB4
		ld	$a7, 0x2E0+var_80($sp)
		la	$t9, printf
		la	$a0, aS
		jalr	$t9
		addiu	$a1, $sp, 0x2E0+var_2D8
		b	loc_10003AB4
		ld	$a7, 0x2E0+var_80($sp)
		addiu	$a2, $s2, 0xC
		la	$a1, aF
		move	$a0, $s0
		jalr	$t9
		sw	$zero, 0($s2)
		move	$t9, $s6
		move	$a0, $s0
		jalr	$t9
		la	$a1, asc_10009340
		lbu	$a3, 0($s3)
		beqz	$a3, loc_10003EA4
		addu	$s0, $v0, $s0
		lwc1	$f6, 0xC($s2)
		la	$t9, printf
		cvt.d.s	$f6, $f6
		addiu	$a1, $sp, 0x2E0+var_2D8
		dmfc1	$a2, $f6
		jalr	$t9
		la	$a0, aSF
		lwc1	$f9, 0xC($s2)
		la	$a5, relFrame
		la	$a6, baseFrame
		lwc1	$f8, (relFrame - 0x1000A3C0)($a5)
		lwc1	$f7, (baseFrame - 0x1000A3C4)($a6)
		add.s	$f8, $f9
		la	$a4, absFrame
		swc1	$f8, (relFrame - 0x1000A3C0)($a5)
		add.s	$f7, $f8
		b	loc_10003AE0
		swc1	$f7, (absFrame - 0x1000A3C8)($a4)
		addiu	$a2, $s2, 0xC
		move	$t9, $s5
		la	$a1, aF
		move	$a0, $s0
		li	$s4, 1
		jalr	$t9
		sw	$s4, 0($s2)
		move	$t9, $s6
		move	$a0, $s0
		jalr	$t9
		la	$a1, asc_10009340
		lbu	$a7, 0($s3)
		beqz	$a7, loc_10003F24
		addu	$s0, $v0, $s0
		lwc1	$f10, 0xC($s2)
		la	$t9, printf
		cvt.d.s	$f10, $f10
		addiu	$a1, $sp, 0x2E0+var_2D8
		dmfc1	$a2, $f10
		jalr	$t9
		la	$a0, aSF
		la	$t6, relFrame
		la	$t5, baseFrame
		swc1	$f20, (relFrame - 0x1000A3C0)($t6)
		lwc1	$f12, 0xC($s2)
		la	$t4, absFrame
		swc1	$f12, (baseFrame - 0x1000A3C4)($t5)
		lwc1	$f11, 0xC($s2)
		b	loc_10003ADC
		swc1	$f11, (absFrame - 0x1000A3C8)($t4)
		addiu	$a2, $s2, 0xC
		move	$t9, $s5
		la	$a1, aF
		move	$a0, $s0
		li	$s4, 0x67
		jalr	$t9
		sw	$s4, 0($s2)
		move	$t9, $s6
		move	$a0, $s0
		jalr	$t9
		la	$a1, asc_10009340
		lbu	$t7, 0($s3)
		beqz	$t7, loc_10003AD8
		addu	$s0, $v0, $s0
		lwc1	$f13, 0xC($s2)
		la	$t9, printf
		cvt.d.s	$f13, $f13
		addiu	$a1, $sp, 0x2E0+var_2D8
		dmfc1	$a2, $f13
		jalr	$t9
		la	$a0, aSF
		b	loc_10003ADC
		move	$s7, $fp
		move	$t9, $s1
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		addiu	$a0, (aSeqname - 0x10010000)
		beqz	$v0, loc_100044F8
		move	$t9, $s1
		la	$a0, aSeqdo
		jalr	$t9
		addiu	$a1, $sp, 0x2E0+var_2D8
		beqz	$v0, loc_10004630
		la	$a0, 0x10010000
		move	$t9, $s1
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		addiu	$a0, (aSeqloop - 0x10010000)
		bnez	$v0, loc_10004328
		la	$a0, 0x10010000
		li	$a2, 0xC
		sw	$a2, 0($s2)
		lbu	$a1, 0($s3)
		beqz	$a1, loc_10003AA4
		ld	$a5, 0x2E0+var_70($sp)
		la	$t9, printf
		la	$a0, aS
		jalr	$t9
		addiu	$a1, $sp, 0x2E0+var_2D8
		b	loc_10003AA4
		ld	$a5, 0x2E0+var_70($sp)
		move	$a0, $s0
		move	$t9, $s5
		ld	$s7, 0x2E0+var_28($sp)
		la	$a1, aF
		li	$s4, 0x65
		sw	$s4, 0($s2)
		jalr	$t9
		addiu	$a2, $s2, 0xC
		move	$t9, $s6
		move	$a0, $s0
		jalr	$t9
		la	$a1, asc_10009340
		lbu	$a3, 0($s3)
		beqz	$a3, loc_10003AD4
		addu	$s0, $v0, $s0
		lwc1	$f14, 0xC($s2)
		la	$t9, printf
		cvt.d.s	$f14, $f14
		la	$a0, aSF
		dmfc1	$a2, $f14
		jalr	$t9
		addiu	$a1, $sp, 0x2E0+var_2D8
		b	loc_10003AD8
		move	$fp, $s7
		move	$a0, $s0
		move	$t9, $s5
		la	$a1, aF
		li	$s7, 0x66
		sw	$s7, 0($s2)
		jalr	$t9
		addiu	$a2, $s2, 0xC
		move	$t9, $s6
		move	$a0, $s0
		jalr	$t9
		la	$a1, asc_10009340
		lbu	$a4, 0($s3)
		beqz	$a4, loc_10003AD0
		addu	$s0, $v0, $s0
		lwc1	$f15, 0xC($s2)
		la	$t9, printf
		cvt.d.s	$f15, $f15
		la	$a0, aSF
		dmfc1	$a2, $f15
		jalr	$t9
		addiu	$a1, $sp, 0x2E0+var_2D8
		b	loc_10003AD4
		move	$s7, $s4
		move	$a0, $s0
		la	$a1, aDF
		move	$t9, $s5
		addiu	$a2, $s2, 4
		li	$s4, 2
		sw	$s4, 0($s2)
		jalr	$t9
		addiu	$a3, $s2, 0xC
		move	$t9, $s6
		move	$a0, $s0
		jalr	$t9
		la	$a1, asc_10009340
		lbu	$a5, 0($s3)
		beqz	$a5, loc_10003ACC
		addu	$s0, $v0, $s0
		lwc1	$f16, 0xC($s2)
		la	$t9, printf
		la	$a0, 0x10010000
		cvt.d.s	$f16, $f16
		addiu	$a1, $sp, 0x2E0+var_2D8
		lw	$a2, 4($s2)
		dmfc1	$a3, $f16
		jalr	$t9
		addiu	$a0, (aSDF - 0x10010000)
		b	loc_10003AD0
		move	$s4, $s7
		move	$a0, $s0
		la	$a1, aDF
		move	$t9, $s5
		addiu	$a2, $s2, 4
		li	$s4, 3
		sw	$s4, 0($s2)
		jalr	$t9
		addiu	$a3, $s2, 0xC
		move	$t9, $s6
		move	$a0, $s0
		jalr	$t9
		la	$a1, asc_10009340
		lbu	$a1, 0($s3)
		beqz	$a1, loc_10003AC8
		addu	$s0, $v0, $s0
		lwc1	$f17, 0xC($s2)
		la	$t9, printf
		la	$a0, 0x10010000
		cvt.d.s	$f17, $f17
		addiu	$a1, $sp, 0x2E0+var_2D8
		lw	$a2, 4($s2)
		dmfc1	$a3, $f17
		jalr	$t9
		addiu	$a0, (aSDF - 0x10010000)
		b	loc_10003ACC
		move	$s7, $fp
		la	$a1, seqList
		lw	$a1, (seqList - 0x1000BF78)($a1)
		beqz	$a1, loc_100041C4
		move	$s4, $a1
		lw	$a2, 0($s4)
		beqz	$a2, loc_10004624
		nop
		lw	$s4, 0x24($s4)
		bnez	$s4, loc_100041B0
		lbu	$a3, 0($s3)
		beqz	$a3, loc_100041E4
		la	$a1, seqList
		la	$t9, printf
		la	$a0, 0x10010000
		jalr	$t9
		addiu	$a0, (aDoneReadingAni - 0x10010000)
		la	$a1, seqList
		lw	$a1, (seqList - 0x1000BF78)($a1)
		la	$s1, printf
		beqz	$a1, loc_10004288
		move	$s4, $a1
		b	loc_1000424C
		lbu	$a1, 0($s3)
		lw	$s0, 0x14($s0)
		beqz	$s0, loc_10004240
		nop
		beqz	$a0, loc_100041FC
		nop
		lwc1	$f18, 0xC($s0)
		la	$a0, 0x10010000
		move	$t9, $s1
		cvt.d.s	$f18, $f18
		lw	$a1, 0($s0)
		lw	$a2, 4($s0)
		dmfc1	$a3, $f18
		jalr	$t9
		addiu	$a0, (aCmdDDF - 0x10010000)
		lw	$s0, 0x14($s0)
		bnez	$s0, loc_10004280
		nop
		lw	$s4, 0x24($s4)
		beqz	$s4, loc_10004288
		lbu	$a1, 0($s3)
		beqz	$a1, loc_10004274
		nop
		lwc1	$f19, 8($s4)
		la	$a0, 0x10010000
		move	$t9, $s1
		cvt.d.s	$f19, $f19
		lw	$a1, 0($s4)
		dmfc1	$a2, $f19
		jalr	$t9
		addiu	$a0, (aSeqDAt_2f - 0x10010000)
		lw	$s0, 0x18($s4)
		beqz	$s0, loc_10004240
		la	$s1, printf
		b	loc_10004208
		lbu	$a0, 0($s3)
		ld	$s5, 0x2E0+var_8($sp)
		ld	$s1, 0x2E0+var_10($sp)
		ld	$s6, 0x2E0+var_20($sp)
		ld	$s7, 0x2E0+var_30($sp)
		ld	$s4, 0x2E0+var_38($sp)
		ld	$fp, 0x2E0+var_40($sp)
		ld	$s2, 0x2E0+var_48($sp)
		ldc1	$f20, 0x2E0+var_50($sp)
		ld	$ra, 0x2E0+var_18($sp)
		ld	$gp, 0x2E0+var_D0($sp)
		ld	$s0, 0x2E0+var_C8($sp)
		ld	$s3, 0x2E0+var_C0($sp)
		jr	$ra
		addiu	$sp, 0x2E0
		move	$a0, $s0
		la	$a1, aDF
		move	$t9, $s5
		addiu	$a2, $s2, 4
		li	$s7, 4
		sw	$s7, 0($s2)
		jalr	$t9
		addiu	$a3, $s2, 0xC
		move	$t9, $s6
		move	$a0, $s0
		jalr	$t9
		la	$a1, asc_10009340
		lbu	$a1, 0($s3)
		beqz	$a1, loc_10003AC4
		addu	$s0, $v0, $s0
		lwc1	$f21, 0xC($s2)
		la	$t9, printf
		la	$a0, 0x10010000
		cvt.d.s	$f21, $f21
		addiu	$a1, $sp, 0x2E0+var_2D8
		lw	$a2, 4($s2)
		dmfc1	$a3, $f21
		jalr	$t9
		addiu	$a0, (aSDF - 0x10010000)
		b	loc_10003AC8
		move	$fp, $s4
		move	$t9, $s1
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		addiu	$a0, (aSeqstop - 0x10010000)
		beqz	$v0, loc_1000469C
		la	$a0, 0x10010000
		move	$t9, $s1
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		addiu	$a0, (aSeqrepeat - 0x10010000)
		beqz	$v0, loc_100046F0
		la	$a0, 0x10010000
		move	$t9, $s1
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		addiu	$a0, (aSeqkill - 0x10010000)
		beqz	$v0, loc_1000476C
		la	$a0, 0x10010000
		move	$t9, $s1
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		addiu	$a0, (aSeqkillall - 0x10010000)
		bnez	$v0, loc_10003A40
		la	$t9, strncmp
		li	$a2, 0xF
		sw	$a2, 0($s2)
		lbu	$a1, 0($s3)
		beqz	$a1, loc_10003A8C
		ld	$a2, 0x2E0+var_58($sp)
		la	$t9, printf
		la	$a0, aS
		jalr	$t9
		addiu	$a1, $sp, 0x2E0+var_2D8
		b	loc_10003A8C
		ld	$a2, 0x2E0+var_58($sp)
		move	$a0, $s0
		move	$t9, $s5
		la	$a1, aD
		li	$a3, 5
		sw	$a3, 0($s2)
		jalr	$t9
		addiu	$a2, $s2, 4
		move	$t9, $s6
		move	$a0, $s0
		jalr	$t9
		la	$a1, asc_10009340
		lbu	$a4, 0($s3)
		beqz	$a4, loc_10003AC0
		addu	$s0, $v0, $s0
		la	$t9, printf
		la	$a0, aSD
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		lw	$a2, 4($s2)
		b	loc_10003AC4
		move	$s4, $s7
		move	$a0, $s0
		move	$t9, $s5
		la	$a1, aD
		li	$a5, 7
		sw	$a5, 0($s2)
		jalr	$t9
		addiu	$a2, $s2, 4
		move	$t9, $s6
		move	$a0, $s0
		jalr	$t9
		la	$a1, asc_10009340
		lbu	$a6, 0($s3)
		beqz	$a6, loc_10003AB8
		addu	$s0, $v0, $s0
		la	$t9, printf
		la	$a0, aSD
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		lw	$a2, 4($s2)
		b	loc_10003ABC
		ld	$fp, 0x2E0+var_88($sp)
		la	$t9, malloc
		jalr	$t9
		li	$a0, 0x28
		la	$a4, editSeq
		sw	$v0, (editSeq - 0x1000BF7C)($a4)
		li	$t8, 1
		sb	$t8, 4($v0)
		lw	$t7, (editSeq - 0x1000BF7C)($a4)
		sw	$zero, 0($t7)
		lw	$t6, (editSeq - 0x1000BF7C)($a4)
		lwc1	$f25, flt_100092B0
		swc1	$f20, 8($t6)
		lw	$t5, (editSeq - 0x1000BF7C)($a4)
		lwc1	$f23, flt_100092A8
		swc1	$f25, 0x10($t5)
		lw	$t4, (editSeq - 0x1000BF7C)($a4)
		swc1	$f23, 0x14($t4)
		lw	$a7, (editSeq - 0x1000BF7C)($a4)
		swc1	$f25, 0x10($a7)
		lw	$a6, (editSeq - 0x1000BF7C)($a4)
		swc1	$f23, 0x14($a6)
		lw	$a5, (editSeq - 0x1000BF7C)($a4)
		sw	$zero, 0x20($a5)
		lw	$a3, (editSeq - 0x1000BF7C)($a4)
		sw	$zero, 0x1C($a3)
		lw	$a2, (editSeq - 0x1000BF7C)($a4)
		sw	$zero, 0x18($a2)
		lw	$a1, (editSeq - 0x1000BF7C)($a4)
		la	$a0, seqList
		sw	$zero, 0x24($a1)
		lw	$a0, (seqList - 0x1000BF78)($a0)
		la	$t9, seqList
		beqz	$a0, loc_100044E8
		lw	$a4, (editSeq - 0x1000BF7C)($a4)
		sw	$a0, 0x24($a4)
		la	$a0, editSeq
		lw	$a0, (editSeq - 0x1000BF7C)($a0)
		b	loc_10003DB0
		sw	$a0, (seqList - 0x1000BF78)($t9)
		move	$a0, $s0
		move	$t9, $s5
		li	$a1, 9
		sw	$a1, 0($s2)
		la	$a1, aD
		jalr	$t9
		addiu	$a2, $s2, 4
		move	$t9, $s6
		move	$a0, $s0
		jalr	$t9
		la	$a1, asc_10009340
		lbu	$a2, 0($s3)
		beqz	$a2, loc_10004544
		addu	$s0, $v0, $s0
		la	$t9, printf
		la	$a0, aSD
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		lw	$a2, 4($s2)
		la	$a4, relFrame
		la	$a5, absFrame
		la	$a3, seqList
		la	$a6, baseFrame
		lw	$a3, (seqList - 0x1000BF78)($a3)
		swc1	$f20, (baseFrame - 0x1000A3C4)($a6)
		swc1	$f20, (absFrame - 0x1000A3C8)($a5)
		swc1	$f20, (relFrame - 0x1000A3C0)($a4)
		beqz	$a3, loc_1000468C
		move	$s4, $a3
		lw	$v0, 4($s2)
		lw	$a7, 0($s4)
		beq	$a7, $v0, loc_10004684
		nop
		lw	$s4, 0x24($s4)
		bnez	$s4, loc_10004570
		la	$t9, malloc
		jalr	$t9
		li	$a0, 0x28
		la	$a4, editSeq
		sw	$v0, (editSeq - 0x1000BF7C)($a4)
		lw	$t7, 4($s2)
		sw	$t7, 0($v0)
		lw	$t6, (editSeq - 0x1000BF7C)($a4)
		li	$t5, 1
		sb	$t5, 4($t6)
		lw	$t4, (editSeq - 0x1000BF7C)($a4)
		lwc1	$f29, flt_100092B0
		swc1	$f20, 8($t4)
		lw	$a7, (editSeq - 0x1000BF7C)($a4)
		lwc1	$f27, flt_100092A8
		swc1	$f29, 0x10($a7)
		lw	$a6, (editSeq - 0x1000BF7C)($a4)
		swc1	$f27, 0x14($a6)
		lw	$a5, (editSeq - 0x1000BF7C)($a4)
		sw	$zero, 0x18($a5)
		lw	$a3, (editSeq - 0x1000BF7C)($a4)
		sw	$zero, 0x1C($a3)
		lw	$a2, (editSeq - 0x1000BF7C)($a4)
		sw	$zero, 0x20($a2)
		lw	$a1, (editSeq - 0x1000BF7C)($a4)
		la	$a0, seqList
		sw	$zero, 0x24($a1)
		lw	$a0, (seqList - 0x1000BF78)($a0)
		la	$t8, editSeq
		la	$t9, seqList
		beqz	$a0, loc_10004608
		lw	$a4, (editSeq - 0x1000BF7C)($a4)
		sw	$a0, 0x24($a4)
		lw	$t8, (editSeq - 0x1000BF7C)($t8)
		sw	$t8, (seqList - 0x1000BF78)($t9)
		la	$t9, free
		jalr	$t9
		move	$a0, $s2
		b	loc_10003AE8
		move	$t9, $s5
		lw	$t9, 0x18($s4)
		b	loc_100041C4
		sw	$t9, 0x1C($s4)
		move	$a0, $s0
		move	$t9, $s5
		la	$a1, aD
		li	$ra, 0xA
		sw	$ra, 0($s2)
		jalr	$t9
		addiu	$a2, $s2, 4
		move	$t9, $s6
		move	$a0, $s0
		jalr	$t9
		la	$a1, asc_10009340
		lbu	$at, 0($s3)
		beqz	$at, loc_10003AA8
		addu	$s0, $v0, $s0
		la	$t9, printf
		la	$a0, aSD
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		lw	$a2, 4($s2)
		b	loc_10003AAC
		ld	$a6, 0x2E0+var_78($sp)
		la	$v0, editSeq
		sw	$s4, (editSeq - 0x1000BF7C)($v0)
		bnez	$s4, loc_10004614
		la	$t9, free
		b	loc_10004588
		la	$t9, malloc
		move	$a0, $s0
		move	$t9, $s5
		la	$a1, aD
		li	$v1, 0xB
		sw	$v1, 0($s2)
		jalr	$t9
		addiu	$a2, $s2, 4
		move	$t9, $s6
		move	$a0, $s0
		jalr	$t9
		la	$a1, asc_10009340
		lbu	$a0, 0($s3)
		beqz	$a0, loc_10003A98
		addu	$s0, $v0, $s0
		la	$t9, printf
		la	$a0, aSD
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		lw	$a2, 4($s2)
		b	loc_10003A9C
		ld	$a4, 0x2E0+var_68($sp)
		move	$a0, $s0
		move	$t9, $s5
		li	$a1, 0xD
		sw	$a1, 0($s2)
		la	$a1, aD
		jalr	$t9
		addiu	$a2, $s2, 4
		move	$t9, $s6
		move	$a0, $s0
		jalr	$t9
		la	$a1, asc_10009340
		lbu	$a2, 0($s3)
		beqz	$a2, loc_10004758
		addu	$s0, $v0, $s0
		la	$t9, printf
		la	$a0, aSD
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		lw	$a2, 4($s2)
		lbu	$a3, 0($s3)
		beqz	$a3, loc_10004758
		la	$t9, printf
		la	$a0, 0x10010000
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		addiu	$a0, (aWarningSNotImp - 0x10010000)
		la	$t9, free
		jalr	$t9
		move	$a0, $s2
		b	loc_10003AE8
		move	$t9, $s5
		move	$a0, $s0
		move	$t9, $s5
		li	$a1, 0xE
		sw	$a1, 0($s2)
		la	$a1, aD
		jalr	$t9
		addiu	$a2, $s2, 4
		move	$t9, $s6
		move	$a0, $s0
		jalr	$t9
		la	$a1, asc_10009340
		lbu	$a2, 0($s3)
		beqz	$a2, loc_10003A90
		addu	$s0, $v0, $s0
		la	$t9, printf
		la	$a0, aSD
		addiu	$a1, $sp, 0x2E0+var_2D8
		jalr	$t9
		lw	$a2, 4($s2)
		b	loc_10003A94
		ld	$a3, 0x2E0+var_60($sp)
		beqz	$a0, loc_100047DC
		la	$t9, free
		la	$t9, printf
		la	$a0, aS
		jalr	$t9
		addiu	$a1, $sp, 0x2E0+var_2D8
		la	$t9, free
		jalr	$t9
		move	$a0, $s2
		b	loc_10003AE8
		move	$t9, $s5
		li	$v0, 0xC7B0
		addu	$at, $t9, $v0
		move	$a3, $zero
		lw	$a2, (acttable_ptr - 0x10010F9C)($at)
		lw	$a5, 0($a2)
		addiu	$a2, 4
		addiu	$a3, 1
		beqz	$a5, loc_10004818
		slti	$a4, $a3, 0x400
		sb	$zero, 0($a5)
		bnezl	$a4, loc_10004804
		lw	$a5, 0($a2)
		jr	$ra
		nop
		addiu	$sp, -0x30
		sd	$s1, 0x30+var_20($sp)
		sd	$ra, 0x30+var_18($sp)
		sd	$s0, 0x30+var_30($sp)
		lui	$at, 1
		move	$s0, $a0
		sd	$s2, 0x30+var_10($sp)
		li	$at, 0xC774
		sd	$gp, 0x30+var_28($sp)
		beqz	$a0, loc_10004904
		addu	$gp, $t9, $at
		la	$s1, seqList
		sb	$zero, 4($a0)
		lw	$a3, (seqList - 0x1000BF78)($s1)
		bne	$a0, $a3, loc_100048A4
		la	$s2, free
		lw	$a0, 0x24($a3)
		sw	$a0, (seqList - 0x1000BF78)($s1)
		lw	$a0, 0x18($a0)
		beqz	$a0, loc_10004894
		move	$t9, $s2
		move	$t9, $s2
		jalr	$t9
		lw	$s1, 0x14($a0)
		bnez	$s1, loc_1000487C
		move	$a0, $s1
		move	$t9, $s2
		la	$s1, seqList
		jalr	$t9
		move	$a0, $s0
		lw	$a3, (seqList - 0x1000BF78)($s1)
		lw	$a2, 0x24($a3)
		beqz	$a2, loc_10004904
		la	$s2, free
		beq	$a2, $s0, loc_100048D0
		nop
		move	$a3, $a2
		lw	$a2, 0x24($a2)
		bnez	$a2, loc_100048B0
		nop
		b	loc_10004908
		ld	$s2, 0x30+var_10($sp)
		lw	$a2, 0x24($s0)
		sw	$a2, 0x24($a3)
		lw	$a1, 0x18($s0)
		beqz	$a1, loc_100048F8
		move	$a0, $a1
		move	$t9, $s2
		jalr	$t9
		lw	$s1, 0x14($a0)
		bnez	$s1, loc_100048E4
		move	$a0, $s1
		move	$t9, $s2
		jalr	$t9
		move	$a0, $s0
		ld	$s2, 0x30+var_10($sp)
		ld	$ra, 0x30+var_18($sp)
		ld	$s0, 0x30+var_30($sp)
		ld	$s1, 0x30+var_20($sp)
		ld	$gp, 0x30+var_28($sp)
		jr	$ra
		addiu	$sp, 0x30
		lui	$v0, 1
		addiu	$sp, -0x20
		li	$v0, 0xC67C
		sd	$gp, 0x20+var_18($sp)
		addu	$gp, $t9, $v0
		la	$at, oflag
		lbu	$at, (oflag - 0x1000A3B8)($at)
		sd	$s0, 0x20+var_20($sp)
		move	$s0, $a0
		beqz	$at, loc_10004990
		sd	$ra, 0x20+var_10($sp)
		lwc1	$f2, 8($a0)
		lw	$a2, 0x10($a0)
		la	$a3, currentFrame
		lwc1	$f1, 8($a2)
		lwc1	$f0, (currentFrame - 0x1000A3BC)($a3)
		lw	$a4, 0($a0)
		cvt.d.s	$f2, $f2
		la	$t9, printf
		cvt.d.s	$f1, $f1
		la	$a0, 0x10010000
		dmfc1	$a5, $f2
		cvt.d.s	$f0, $f0
		dmfc1	$a3, $f1
		lw	$a2, 0($a2)
		dmfc1	$a1, $f0
		jalr	$t9
		addiu	$a0, (aProcCurrentfra - 0x10010000)
		lw	$a1, 0($s0)
		la	$a0, 0x10010000
		sltiu	$a5, $a1, 0x68
		sll	$a2, $a1, 2
		addiu	$a0, (jpt_100049B4 - 0x10010000)
		la	$a4, currentFrame
		beqz	$a5, loc_100049C8
		addu	$a0, $a2
		lw	$a2, 0($a0)
		jr	$a2
		la	$t9, exprand__Gf
		jal	killSeq__GP7animSeq
		nop
		lw	$a1, 0($s0)
		la	$t9, printf
		la	$a0, 0x10010000
		lw	$a2, 0x10($s0)
		jalr	$t9
		addiu	$a0, (aWarningBadComm - 0x10010000)
		lw	$a2, 0x10($s0)
		lw	$a1, 0x1C($a2)
		lw	$a1, 0x14($a1)
		sw	$a1, 0x1C($a2)
		ld	$ra, 0x20+var_10($sp)
		ld	$s0, 0x20+var_20($sp)
		ld	$gp, 0x20+var_18($sp)
		jr	$ra
		addiu	$sp, 0x20
		lw	$a3, 0x10($s0)
		lw	$a2, 0x1C($a3)
		lw	$a2, 0x14($a2)
		b	loc_100049EC
		sw	$a2, 0x1C($a3)
		jal	exprand__Gf
		lwc1	$f12, flt_100092A8
		lwc1	$f8, flt_100092A8
		lwc1	$f4, 0xC($s0)
		lw	$a4, 0x10($s0)
		ldc1	$f9, dbl_10009308
		cvt.d.s	$f7, $f0
		lwc1	$f5, 0x14($a4)
		mul.d	$f7, $f9
		cvt.d.s	$f6, $f4
		sub.s	$f8, $f5
		mul.d	$f6, $f7
		lwc1	$f3, 8($a4)
		cvt.d.s	$f5, $f5
		mul.s	$f4, $f8
		mul.d	$f5, $f6
		cvt.d.s	$f4, $f4
		cvt.d.s	$f3, $f3
		add.d	$f4, $f5
		add.d	$f3, $f4
		cvt.s.d	$f3, $f3
		swc1	$f3, 8($a4)
		lw	$a4, 0x10($s0)
		lw	$a3, 0x1C($a4)
		lw	$a3, 0x14($a3)
		b	loc_100049EC
		sw	$a3, 0x1C($a4)
		lwc1	$f4, 0xC($s0)
		dmtc1	$zero, $f6
		cvt.d.s	$f4, $f4
		c.lt.d	$f4, $f6
		nop
		bc1f	loc_10004E0C
		ldc1	$f5, dbl_10009300
		b	loc_10004E20
		mov.d	$f4, $f6
		lwc1	$f4, 0xC($s0)
		ldc1	$f5, dbl_10009300
		cvt.d.s	$f4, $f4
		c.lt.d	$f4, $f5
		nop
		bc1f	loc_10004DEC
		nop
		b	loc_10004DEC
		mov.d	$f4, $f5
		la	$a5, seqList
		lw	$a5, (seqList - 0x1000BF78)($a5)
		beqz	$a5, loc_100049C8
		move	$a0, $a5
		lw	$a1, 0x10($s0)
		bne	$a1, $a0, loc_100049BC
		la	$t9, killSeq__GP7animSeq
		lw	$a6, 0x1C($a1)
		lw	$a6, 0x14($a6)
		sw	$a6, 0x1C($a1)
		lw	$a0, 0x24($a0)
		bnez	$a0, loc_10004AD8
		nop
		b	loc_100049C8
		lw	$a1, 0($s0)
		la	$a7, seqList
		lw	$a7, (seqList - 0x1000BF78)($a7)
		beqz	$a7, loc_10004D24
		move	$a0, $a7
		b	loc_10004D18
		lw	$a1, 4($s0)
		lw	$t5, 0x10($s0)
		lw	$t4, 0x1C($t5)
		lw	$t4, 0x14($t4)
		b	loc_100049EC
		sw	$t4, 0x1C($t5)
		lw	$t7, 0x10($s0)
		lw	$t6, 0x18($t7)
		sw	$t6, 0x1C($t7)
		lw	$t5, 0x10($s0)
		lwc1	$f6, 0xC($t5)
		lwc1	$f5, 8($t5)
		add.s	$f5, $f6
		b	loc_100049EC
		swc1	$f5, 8($t5)
		la	$t8, seqList
		lw	$t8, (seqList - 0x1000BF78)($t8)
		beqz	$t8, loc_10004D60
		move	$a0, $t8
		b	loc_10004D54
		lw	$a1, 4($s0)
		la	$t9, seqList
		lw	$t9, (seqList - 0x1000BF78)($t9)
		beqz	$t9, loc_10004DA0
		move	$a0, $t9
		b	loc_10004D94
		lw	$a1, 4($s0)
		lw	$at, 0x10($s0)
		lw	$ra, 0x1C($at)
		lw	$ra, 0x14($ra)
		b	loc_100049EC
		sw	$ra, 0x1C($at)
		la	$t9, stopAnimation__Gv
		jal	stopAnimation__Gv
		nop
		lw	$v0, 0x10($s0)
		lw	$at, 0x1C($v0)
		lw	$at, 0x14($at)
		b	loc_100049EC
		sw	$at, 0x1C($v0)
		lw	$a1, 4($s0)
		la	$a0, acttable
		sll	$a1, 2
		addu	$a0, $a1
		lw	$a0, 0($a0)
		beqz	$a0, loc_10004BD8
		nop
		sb	$zero, 0($a0)
		lw	$a3, 0x10($s0)
		lw	$a2, 0x1C($a3)
		lw	$a2, 0x14($a2)
		b	loc_100049EC
		sw	$a2, 0x1C($a3)
		lw	$a4, 0x10($s0)
		lw	$a3, 0x1C($a4)
		lw	$a3, 0x14($a3)
		b	loc_100049EC
		sw	$a3, 0x1C($a4)
		lw	$a1, 4($s0)
		la	$a0, acttable
		sll	$a1, 2
		addu	$a0, $a1
		lw	$a0, 0($a0)
		beqz	$a0, loc_10004C24
		nop
		lwc1	$f7, 0x24($a0)
		swc1	$f7, 0x18($a0)
		lw	$a3, 0x10($s0)
		lw	$a2, 0x1C($a3)
		lw	$a2, 0x14($a2)
		b	loc_100049EC
		sw	$a2, 0x1C($a3)
		lw	$a1, 4($s0)
		la	$a0, acttable
		sll	$a1, 2
		addu	$a0, $a1
		lw	$a0, 0($a0)
		beqz	$a0, loc_10004C5C
		nop
		lwc1	$f8, 0xC($s0)
		swc1	$f8, 0x18($a0)
		lw	$a3, 0x10($s0)
		lw	$a2, 0x1C($a3)
		lw	$a2, 0x14($a2)
		b	loc_100049EC
		sw	$a2, 0x1C($a3)
		lw	$a1, 4($s0)
		la	$a0, acttable
		sll	$a1, 2
		addu	$a0, $a1
		lw	$a0, 0($a0)
		beqz	$a0, loc_10004E6C
		nop
		lwc1	$f5, 0xC($s0)
		lwc1	$f4, 0x10($a0)
		c.lt.s	$f4, $f5
		nop
		bc1f	loc_10004E80
		lwc1	$f6, 0xC($a0)
		c.lt.s	$f5, $f6
		nop
		bc1f	loc_10004E40
		nop
		b	loc_10004E40
		mov.s	$f5, $f6
		lw	$a1, 4($s0)
		la	$a0, acttable
		sll	$a1, 2
		addu	$a0, $a1
		lw	$a0, 0($a0)
		beqz	$a0, loc_10004DD8
		nop
		lwc1	$f5, 0xC($s0)
		lwc1	$f4, 0x10($a0)
		c.lt.s	$f4, $f5
		nop
		bc1f	loc_10004DD4
		nop
		b	loc_10004DD4
		mov.s	$f5, $f4
		lw	$a3, 0x10($s0)
		lw	$a2, 0x1C($a3)
		lw	$a2, 0x14($a2)
		b	loc_100049EC
		sw	$a2, 0x1C($a3)
		lw	$a0, 0x24($a0)
		beqz	$a0, loc_10004D24
		nop
		lw	$a3, 0($a0)
		bne	$a3, $a1, loc_10004D0C
		nop
		lw	$a1, 0x10($s0)
		bne	$a1, $a0, loc_100049F0
		ld	$ra, 0x20+var_10($sp)
		beqz	$a0, loc_10004EB4
		la	$t9, killSeq__GP7animSeq
		jal	killSeq__GP7animSeq
		nop
		b	loc_100049F0
		ld	$ra, 0x20+var_10($sp)
		lw	$a0, 0x24($a0)
		beqz	$a0, loc_10004D6C
		nop
		lw	$a4, 0($a0)
		bne	$a4, $a1, loc_10004D48
		nop
		beqz	$a0, loc_10004D6C
		nop
		sw	$zero, 0x1C($a0)
		lw	$a1, 0x10($s0)
		beq	$a1, $a0, loc_100049F0
		ld	$ra, 0x20+var_10($sp)
		lw	$a5, 0x1C($a1)
		lw	$a5, 0x14($a5)
		b	loc_100049EC
		sw	$a5, 0x1C($a1)
		lw	$a0, 0x24($a0)
		beqz	$a0, loc_10004DB8
		nop
		lw	$a6, 0($a0)
		bne	$a6, $a1, loc_10004D88
		nop
		beqz	$a0, loc_10004DB8
		nop
		lw	$a7, 0x18($a0)
		sw	$a7, 0x1C($a0)
		lwc1	$f9, 0($a4)
		swc1	$f9, 8($a0)
		lw	$a1, 0x10($s0)
		beq	$a1, $a0, loc_100049F0
		ld	$ra, 0x20+var_10($sp)
		lw	$t4, 0x1C($a1)
		lw	$t4, 0x14($t4)
		b	loc_100049EC
		sw	$t4, 0x1C($a1)
		swc1	$f5, 0x10($a0)
		lw	$t6, 0x10($s0)
		lw	$t5, 0x1C($t6)
		lw	$t5, 0x14($t5)
		b	loc_100049EC
		sw	$t5, 0x1C($t6)
		lw	$t7, 0x10($s0)
		cvt.s.d	$f10, $f4
		swc1	$f10, 0x10($t7)
		lw	$t7, 0x10($s0)
		lw	$t6, 0x1C($t7)
		lw	$t6, 0x14($t6)
		b	loc_100049EC
		sw	$t6, 0x1C($t7)
		c.lt.d	$f5, $f4
		nop
		bc1f	loc_10004E20
		nop
		mov.d	$f4, $f5
		lw	$t9, 0x10($s0)
		cvt.s.d	$f11, $f4
		swc1	$f11, 0x14($t9)
		lw	$t9, 0x10($s0)
		lw	$t8, 0x1C($t9)
		lw	$t8, 0x14($t8)
		b	loc_100049EC
		sw	$t8, 0x1C($t9)
		b	loc_10004E4C
		swc1	$f5, 0xC($a0)
		swc1	$f5, 0x10($a0)
		lw	$v0, 0x10($s0)
		lwc1	$f13, 0x10($v0)
		swc1	$f13, 0x1C($a0)
		lw	$at, 0x10($s0)
		lwc1	$f12, 0x14($at)
		li	$ra, 1
		sb	$ra, 0($a0)
		swc1	$f12, 0x20($a0)
		lw	$a0, 0x10($s0)
		lw	$v1, 0x1C($a0)
		lw	$v1, 0x14($v1)
		b	loc_100049EC
		sw	$v1, 0x1C($a0)
		c.lt.s	$f4, $f6
		nop
		bc1f	loc_10004E94
		mov.s	$f5, $f4
		mov.s	$f5, $f6
		swc1	$f5, 0xC($a0)
		lwc1	$f6, 0xC($s0)
		c.lt.s	$f4, $f6
		nop
		bc1f	loc_10004E48
		mov.s	$f5, $f6
		b	loc_10004E48
		mov.s	$f5, $f4
		lw	$a0, 0x1C($a1)
		lw	$a0, 0x14($a0)
		b	loc_100049EC
		sw	$a0, 0x1C($a1)
		addiu	$sp, -0x30
		sd	$ra, 0x30+var_8($sp)
		sd	$s0, 0x30+var_18($sp)
		sdc1	$f20, 0x30+var_30($sp)
		sd	$s2, 0x30+var_10($sp)
		lui	$v0, 1
		sd	$s1, 0x30+var_20($sp)
		li	$v0, 0xC0D8
		sd	$gp, 0x30+var_28($sp)
		addu	$gp, $t9, $v0
		lwc1	$f1, flt_100092A8
		la	$s1, currentFrame
		la	$at, seqList
		lwc1	$f0, (currentFrame - 0x1000A3BC)($s1)
		lw	$at, (seqList - 0x1000BF78)($at)
		la	$s2, processCommand__GP11animCommand
		ldc1	$f20, dbl_100092D8
		add.s	$f0, $f1
		move	$s0, $at
		beqz	$at, loc_10004FCC
		swc1	$f0, (currentFrame - 0x1000A3BC)($s1)
		b	loc_10004F2C
		lwc1	$f4, (currentFrame - 0x1000A3BC)($s1)
		lw	$s0, 0x24($s0)
		beqz	$s0, loc_10004FCC
		lwc1	$f4, 0($s1)
		lwc1	$f5, 8($s0)
		cvt.d.s	$f4, $f4
		cvt.d.s	$f2, $f5
		add.d	$f4, $f20
		c.lt.d	$f2, $f4
		lw	$a0, 0x1C($s0)
		bc1f	loc_10004F20
		lbu	$a2, 4($s0)
		beqz	$a2, loc_10004F20
		nop
		beqz	$a0, loc_10004F20
		nop
		lwc1	$f6, 8($a0)
		add.s	$f6, $f5
		cvt.d.s	$f6, $f6
		c.lt.d	$f6, $f4
		nop
		bc1f	loc_10004F20
		nop
		move	$t9, $s2
		jal	processCommand__GP11animCommand
		nop
		lbu	$v1, 4($s0)
		lwc1	$f9, 8($s0)
		lwc1	$f8, 0($s1)
		beqz	$v1, loc_10004FC4
		lw	$a0, 0x1C($s0)
		beqz	$a0, loc_10004FC4
		nop
		lwc1	$f7, 8($a0)
		cvt.d.s	$f8, $f8
		add.s	$f7, $f9
		add.d	$f8, $f20
		cvt.d.s	$f7, $f7
		c.lt.d	$f7, $f8
		nop
		bc1t	loc_10004F7C
		move	$t9, $s2
		b	loc_10004F24
		lw	$s0, 0x24($s0)
		ld	$gp, 0x30+var_28($sp)
		ld	$s0, 0x30+var_18($sp)
		ld	$ra, 0x30+var_8($sp)
		ld	$s1, 0x30+var_20($sp)
		ld	$s2, 0x30+var_10($sp)
		ldc1	$f20, 0x30+var_30($sp)
		jr	$ra
		addiu	$sp, 0x30
		addiu	$sp, -0x30
		sd	$s2, 0x30+var_28($sp)
		sd	$ra, 0x30+var_18($sp)
		sdc1	$f20, 0x30+var_30($sp)
		sd	$s1, 0x30+var_20($sp)
		lui	$at, 1
		sd	$s0, 0x30+var_10($sp)
		li	$at, 0xBFB0
		sd	$gp, 0x30+var_8($sp)
		addu	$gp, $t9, $at
		la	$s0, acttable
		move	$s1, $zero
		b	loc_10005034
		lwc1	$f20, flt_100092A8
		addiu	$s1, 1
		slti	$v0, $s1, 0x400
		beqz	$v0, loc_10005108
		addiu	$s0, 4
		lw	$s2, 0($s0)
		beqz	$s2, loc_10005024
		nop
		lbu	$v1, 0($s2)
		beqz	$v1, loc_10005024
		lbu	$a1, 1($s2)
		bnez	$a1, loc_10005024
		la	$t9, drand48
		li	$a0, 1
		jalr	$t9
		sb	$a0, 1($s2)
		lwc1	$f3, 0xC($s2)
		cvt.s.d	$f0, $f0
		lwc1	$f1, 0x10($s2)
		sub.s	$f2, $f20, $f0
		mul.s	$f0, $f3, $f0
		la	$t9, exprand__Gf
		mul.s	$f1, $f2
		add.s	$f0, $f1
		mov.s	$f12, $f20
		jal	exprand__Gf
		swc1	$f0, 8($s2)
		lwc1	$f6, flt_100092AC
		lwc1	$f2, 0x20($s2)
		lwc1	$f1, 0x1C($s2)
		mul.s	$f3, $f0, $f6
		sub.s	$f4, $f20, $f2
		mul.s	$f3, $f1, $f3
		mul.s	$f1, $f4
		mul.s	$f2, $f3
		add.s	$f1, $f2
		c.lt.s	$f1, $f20
		nop
		bc1f	loc_10005128
		mov.s	$f5, $f20
		lwc1	$f7, 0x14($s2)
		lwc1	$f4, 8($s2)
		sub.s	$f4, $f7
		div.s	$f4, $f5
		mtc1	$zero, $f7
		nop
		c.lt.s	$f7, $f4
		addiu	$s0, 4
		addiu	$a2, $s1, 1
		slti	$a1, $s1, 0x3FF
		move	$s1, $a2
		bc1f	loc_100050FC
		swc1	$f4, 0x14($s2)
		b	loc_10005100
		mov.s	$f4, $f20
		lwc1	$f4, flt_100092B4
		bnez	$a1, loc_10005034
		swc1	$f4, 4($s2)
		ld	$gp, 0x30+var_8($sp)
		ld	$s0, 0x30+var_10($sp)
		ld	$ra, 0x30+var_18($sp)
		ld	$s1, 0x30+var_20($sp)
		ld	$s2, 0x30+var_28($sp)
		ldc1	$f20, 0x30+var_30($sp)
		jr	$ra
		addiu	$sp, 0x30
		la	$t9, exprand__Gf
		jal	exprand__Gf
		mov.s	$f12, $f20
		lwc1	$f6, flt_100092AC
		lwc1	$f7, 0x20($s2)
		lwc1	$f5, 0x1C($s2)
		mul.s	$f8, $f0, $f6
		sub.s	$f9, $f20, $f7
		mul.s	$f8, $f5, $f8
		mul.s	$f5, $f9
		mul.s	$f7, $f8
		b	loc_100050C0
		add.s	$f5, $f7
		addiu	$a4, $a0, -1
		sll	$a6, $a0, 2
		lui	$v0, 1
		addu	$a5, $a1, $a6
		li	$v0, 0xBE40
		blez	$a0, loc_100051A0
		addu	$at, $t9, $v0
		lwc1	$f2, (flt_100092A8 - 0x10010F9C)($at)
		sll	$v1, $a4, 2
		lwc1	$f0, 0($a5)
		addu	$v1, $a1, $v1
		lwc1	$f1, 0($v1)
		sub.s	$f2, $f14
		mul.s	$f0, $f14
		mul.s	$f1, $f2
		jr	$ra
		add.s	$f0, $f1
		b	loc_10005178
		addiu	$a4, 0x80
		addiu	$a4, $a0, -1
		lui	$v0, 1
		sll	$a5, $a0, 2
		li	$v0, 0xBDF4
		blez	$a0, loc_10005238
		addu	$at, $t9, $v0
		addu	$a2, $a5, $a1
		lwc1	$f5, 0($a2)
		sll	$v1, $a4, 2
		lwc1	$f8, (flt_100092B8 - 0x10010F9C)($at)
		addu	$v1, $a1
		lwc1	$f6, 0($v1)
		mul.s	$f8, $f15, $f8
		sub.s	$f4, $f5, $f6
		lwc1	$f7, (flt_100092A8 - 0x10010F9C)($at)
		c.lt.s	$f8, $f4
		lwc1	$f9, (flt_100092BC - 0x10010F9C)($at)
		bc1t	loc_10005224
		sub.s	$f7, $f14
		mul.s	$f10, $f15, $f9
		c.lt.s	$f4, $f10
		nop
		bc1f	loc_10005218
		mul.s	$f8, $f7, $f6
		add.s	$f0, $f5, $f15
		mul.s	$f0, $f14, $f0
		jr	$ra
		add.s	$f0, $f8, $f0
		mul.s	$f0, $f5, $f14
		jr	$ra
		add.s	$f0, $f8, $f0
		add.s	$f0, $f6, $f15
		mul.s	$f1, $f5, $f14
		mul.s	$f0, $f7, $f0
		jr	$ra
		add.s	$f0, $f1
		b	loc_100051C0
		addiu	$a4, 0x80
		addiu	$sp, -0x20
		sd	$s0, 0x20+var_18($sp)
		sd	$s1, 0x20+var_10($sp)
		lui	$at, 1
		sd	$ra, 0x20+var_8($sp)
		li	$at, 0xBD5C
		sd	$gp, 0x20+var_20($sp)
		beqz	$a1, loc_100052DC
		addu	$gp, $t9, $at
		la	$t9, glBegin
		jalr	$t9
		li	$a0, 9
		la	$s0, glVertex2f
		la	$s1, square
		move	$t9, $s0
		lwc1	$f12, (square - 0x10008E50)($s1)
		jalr	$t9
		lwc1	$f13, (square+4 - 0x10008E50)($s1)
		move	$t9, $s0
		lwc1	$f12, (square+8 - 0x10008E50)($s1)
		jalr	$t9
		lwc1	$f13, (square+0xC - 0x10008E50)($s1)
		move	$t9, $s0
		lwc1	$f12, (square+0x10 - 0x10008E50)($s1)
		jalr	$t9
		lwc1	$f13, (square+0x14 - 0x10008E50)($s1)
		move	$t9, $s0
		lwc1	$f12, (square+0x18 - 0x10008E50)($s1)
		jalr	$t9
		lwc1	$f13, (square+0x1C - 0x10008E50)($s1)
		la	$t9, glEnd
		jalr	$t9
		nop
		ld	$ra, 0x20+var_8($sp)
		ld	$s0, 0x20+var_18($sp)
		ld	$s1, 0x20+var_10($sp)
		ld	$gp, 0x20+var_20($sp)
		jr	$ra
		addiu	$sp, 0x20
		la	$t9, glBegin
		jalr	$t9
		li	$a0, 1
		la	$s0, glVertex2f
		la	$s1, square
		move	$t9, $s0
		lwc1	$f12, (square - 0x10008E50)($s1)
		jalr	$t9
		lwc1	$f13, (square+4 - 0x10008E50)($s1)
		move	$t9, $s0
		lwc1	$f12, (square+8 - 0x10008E50)($s1)
		jalr	$t9
		lwc1	$f13, (square+0xC - 0x10008E50)($s1)
		move	$t9, $s0
		lwc1	$f12, (square+8 - 0x10008E50)($s1)
		jalr	$t9
		lwc1	$f13, (square+0xC - 0x10008E50)($s1)
		move	$t9, $s0
		lwc1	$f12, (square+0x10 - 0x10008E50)($s1)
		jalr	$t9
		lwc1	$f13, (square+0x14 - 0x10008E50)($s1)
		move	$t9, $s0
		lwc1	$f12, (square+0x10 - 0x10008E50)($s1)
		jalr	$t9
		lwc1	$f13, (square+0x14 - 0x10008E50)($s1)
		move	$t9, $s0
		lwc1	$f12, (square+0x18 - 0x10008E50)($s1)
		jalr	$t9
		lwc1	$f13, (square+0x1C - 0x10008E50)($s1)
		move	$t9, $s0
		lwc1	$f12, (square+0x18 - 0x10008E50)($s1)
		jalr	$t9
		lwc1	$f13, (square+0x1C - 0x10008E50)($s1)
		move	$t9, $s0
		lwc1	$f12, (square - 0x10008E50)($s1)
		jalr	$t9
		lwc1	$f13, (square+4 - 0x10008E50)($s1)
		la	$t9, glEnd
		jalr	$t9
		nop
		b	loc_100052C8
		ld	$ra, 0x20+var_8($sp)
		addiu	$sp, -0x110
		sdc1	$f22, 0x110+var_F8($sp)
		lui	$at, 1
		sd	$s0, 0x110+var_C0($sp)
		li	$at, 0xBC18
		sd	$gp, 0x110+var_B0($sp)
		addu	$gp, $t9, $at
		lwc1	$f22, flt_100092A8
		la	$s0, glColor3f
		mov.s	$f12, $f22
		move	$t9, $s0
		sd	$s1, 0x110+var_10($sp)
		mov.s	$f13, $f22
		sd	$ra, 0x110+var_B8($sp)
		jalr	$t9
		mov.s	$f14, $f22
		la	$s1, glPushMatrix
		move	$t9, $s1
		sdc1	$f20, 0x110+var_70($sp)
		jalr	$t9
		sd	$fp, 0x110+var_30($sp)
		mtc1	$zero, $f20
		la	$fp, glRotatef
		sdc1	$f24, 0x110+var_58($sp)
		mov.s	$f13, $f22
		la	$v0, wheel
		move	$t9, $fp
		sd	$s3, 0x110+var_40($sp)
		mov.s	$f14, $f20
		lwc1	$f12, (wheel - 0x1000A3CC)($v0)
		jalr	$t9
		mov.s	$f15, $f20
		lwc1	$f24, flt_100092BC
		sdc1	$f26, 0x110+var_68($sp)
		sdc1	$f30, 0x110+var_60($sp)
		sdc1	$f28, 0x110+var_50($sp)
		sd	$s6, 0x110+var_38($sp)
		sd	$s7, 0x110+var_18($sp)
		sd	$s5, 0x110+var_20($sp)
		la	$a3, nlimit
		la	$a1, n
		lw	$v1, (nlimit - 0x1000BF70)($a3)
		sd	$s4, 0x110+var_28($sp)
		lw	$a4, (n - 0x1000BF6C)($a1)
		slt	$v1, $zero, $v1
		sd	$s2, 0x110+var_48($sp)
		sd	$v1, 0x110+var_A8($sp)
		beqz	$v1, loc_100054E4
		move	$s3, $a4
		la	$s2, twixt__GiPff
		la	$s4, glTranslatef
		la	$s5, dzoom
		b	loc_100054B8
		la	$s1, t
		slti	$a0, $s0, 0x80
		bnez	$a0, loc_10005470
		move	$t9, $s2
		addiu	$s0, -0x80
		move	$t9, $s2
		move	$a0, $s0
		move	$a1, $s5
		jal	twixt__GiPff
		lwc1	$f14, 0($s1)
		mov.s	$f12, $f20
		move	$t9, $s4
		mov.s	$f13, $f20
		jalr	$t9
		mul.s	$f14, $f0, $f24
		la	$a3, nlimit
		la	$a1, n
		lw	$a0, (nlimit - 0x1000BF70)($a3)
		lw	$a4, (n - 0x1000BF6C)($a1)
		addiu	$s3, -1
		subu	$a0, $a4, $a0
		slt	$a2, $a0, $s3
		beqz	$a2, loc_100054E0
		slt	$a2, $a0, $a4
		sra	$a2, $s3, 31
		xor	$a0, $s3, $a2
		subu	$a0, $a2
		andi	$a0, 0x7F
		xor	$a0, $a2
		subu	$a0, $a2
		bgez	$a0, loc_1000545C
		move	$s0, $a0
		b	loc_1000545C
		addiu	$s0, $a0, 0x80
		sd	$a2, 0x110+var_A8($sp)
		la	$s5, foldtwixt__GiPffT3
		la	$s1, t
		la	$s4, glTranslatef
		ld	$at, 0x110+var_A8($sp)
		la	$s2, twixt__GiPff
		la	$s7, colRGBA
		la	$s6, outlinecolRGBA
		beqz	$at, loc_10005858
		move	$s3, $a4
		addiu	$a4, $s7, (colRGBA+8 - 0x10008E98)
		sd	$a4, 0x110+var_98($sp)
		addiu	$a2, $s7, (colRGBA+4 - 0x10008E98)
		sd	$a2, 0x110+var_80($sp)
		addiu	$v1, $s6, (outlinecolRGBA+8 - 0x10008E88)
		sd	$v1, 0x110+var_88($sp)
		addiu	$v0, $s6, (outlinecolRGBA+4 - 0x10008E88)
		b	loc_10005C10
		sd	$v0, 0x110+var_90($sp)
		slti	$a5, $s0, 0x80
		bnez	$a5, loc_10005540
		move	$t9, $s2
		addiu	$s0, -0x80
		move	$t9, $s2
		la	$a1, x
		move	$a0, $s0
		jal	twixt__GiPff
		lwc1	$f14, 0($s1)
		move	$t9, $s2
		la	$a1, y
		mov.s	$f30, $f0
		move	$a0, $s0
		jal	twixt__GiPff
		lwc1	$f14, 0($s1)
		sdc1	$f0, 0x110+var_D0($sp)
		move	$t9, $s2
		la	$a1, dzoom
		move	$a0, $s0
		jal	twixt__GiPff
		lwc1	$f14, 0($s1)
		move	$t9, $s2
		la	$a1, arm
		mov.s	$f24, $f0
		move	$a0, $s0
		jal	twixt__GiPff
		lwc1	$f14, 0($s1)
		sdc1	$f0, 0x110+var_C8($sp)
		la	$a1, wrist
		move	$t9, $s2
		lwc1	$f14, 0($s1)
		move	$a0, $s0
		jal	twixt__GiPff
		sdc1	$f24, 0x110+var_100($sp)
		move	$t9, $s2
		la	$a1, size
		mov.s	$f28, $f0
		move	$a0, $s0
		jal	twixt__GiPff
		lwc1	$f14, 0($s1)
		lwc1	$f24, flt_10009290
		move	$t9, $s5
		mov.s	$f26, $f0
		la	$a1, spin
		move	$a0, $s0
		lwc1	$f14, 0($s1)
		jal	foldtwixt__GiPffT3
		mov.s	$f15, $f24
		sdc1	$f0, 0x110+var_E0($sp)
		la	$a1, flip
		move	$t9, $s5
		lwc1	$f14, 0($s1)
		move	$a0, $s0
		mov.s	$f15, $f24
		jal	foldtwixt__GiPffT3
		sdc1	$f26, 0x110+var_108($sp)
		sdc1	$f0, 0x110+var_D8($sp)
		move	$t9, $s2
		la	$a1, dtwist
		move	$a0, $s0
		jal	twixt__GiPff
		lwc1	$f14, 0($s1)
		move	$t9, $s5
		mov.s	$f24, $f0
		la	$a1, hue
		move	$a0, $s0
		lwc1	$f14, 0($s1)
		jal	foldtwixt__GiPffT3
		mov.s	$f15, $f22
		la	$a1, alpha
		move	$t9, $s2
		lwc1	$f14, 0($s1)
		mov.s	$f26, $f0
		move	$a0, $s0
		jal	twixt__GiPff
		sdc1	$f24, 0x110+var_110($sp)
		sdc1	$f0, 0x110+var_E8($sp)
		move	$t9, $s5
		la	$a1, light
		move	$a0, $s0
		lwc1	$f14, 0($s1)
		jal	foldtwixt__GiPffT3
		mov.s	$f15, $f22
		move	$t9, $s2
		la	$a1, alphaout
		mov.s	$f24, $f0
		move	$a0, $s0
		jal	twixt__GiPff
		lwc1	$f14, 0($s1)
		la	$t9, hls_to_rgb__GfN21PfN24
		sdc1	$f0, 0x110+var_F0($sp)
		mov.s	$f12, $f26
		mov.s	$f13, $f24
		ld	$a4, 0x110+var_80($sp)
		mov.s	$f14, $f22
		move	$a3, $s7
		jal	hls_to_rgb__GfN21PfN24
		ld	$a5, 0x110+var_98($sp)
		lwc1	$f7, flt_100092B8
		add.s	$f5, $f26, $f7
		ldc1	$f6, dbl_10009300
		cvt.d.s	$f2, $f5
		ldc1	$f1, 0x110+var_F0($sp)
		c.lt.d	$f6, $f2
		ldc1	$f0, 0x110+var_E8($sp)
		swc1	$f1, 0xC($s6)
		swc1	$f0, 0xC($s7)
		bc1f	loc_100056E8
		mov.s	$f12, $f5
		lwc1	$f12, flt_100092B4
		add.s	$f12, $f5, $f12
		la	$t9, hls_to_rgb__GfN21PfN24
		sub.s	$f13, $f22, $f24
		ld	$a4, 0x110+var_90($sp)
		mov.s	$f14, $f22
		move	$a3, $s6
		jal	hls_to_rgb__GfN21PfN24
		ld	$a5, 0x110+var_88($sp)
		la	$t9, glPushMatrix
		jalr	$t9
		nop
		move	$t9, $s4
		mov.s	$f12, $f30
		ldc1	$f13, 0x110+var_D0($sp)
		jalr	$t9
		mov.s	$f14, $f20
		mov.s	$f13, $f20
		move	$t9, $fp
		mov.s	$f14, $f20
		ldc1	$f12, 0x110+var_E0($sp)
		jalr	$t9
		mov.s	$f15, $f22
		move	$t9, $s4
		mov.s	$f12, $f20
		ldc1	$f13, 0x110+var_C8($sp)
		jalr	$t9
		mov.s	$f14, $f20
		mov.s	$f13, $f20
		move	$t9, $fp
		mov.s	$f14, $f22
		ldc1	$f12, 0x110+var_D8($sp)
		jalr	$t9
		mov.s	$f15, $f20
		mov.s	$f12, $f28
		move	$t9, $s4
		mov.s	$f13, $f20
		jalr	$t9
		mov.s	$f14, $f20
		la	$a6, fill
		addu	$a6, $s0, $a6
		sd	$a6, 0x110+var_78($sp)
		lbu	$a6, 0($a6)
		beqz	$a6, loc_100057BC
		la	$a7, outline
		la	$t9, glColor3f
		lwc1	$f12, 0($s7)
		lwc1	$f13, 4($s7)
		jalr	$t9
		lwc1	$f14, 8($s7)
		la	$t9, drawshape__GiT1
		move	$a0, $s0
		jal	drawshape__GiT1
		li	$a1, 1
		la	$a7, outline
		addu	$a7, $s0, $a7
		sd	$a7, 0x110+var_A0($sp)
		lbu	$a7, 0($a7)
		beqz	$a7, loc_100057F8
		la	$t9, glPopMatrix
		la	$t9, glColor3f
		lwc1	$f12, 0($s6)
		lwc1	$f13, 4($s6)
		jalr	$t9
		lwc1	$f14, 8($s6)
		la	$t9, drawshape__GiT1
		move	$a0, $s0
		jal	drawshape__GiT1
		move	$a1, $zero
		la	$t9, glPopMatrix
		jalr	$t9
		nop
		la	$a1, n
		la	$a3, nlimit
		la	$t4, sflag
		lbu	$t4, (sflag - 0x1000A3B9)($t4)
		beqz	$t4, loc_100058AC
		la	$t9, glScalef
		lw	$t6, (nlimit - 0x1000BF70)($a3)
		addiu	$s3, -1
		lw	$t5, (n - 0x1000BF6C)($a1)
		sra	$a2, $s3, 31
		xor	$a0, $s3, $a2
		subu	$t5, $t6
		subu	$a0, $a2
		slt	$t5, $s3
		andi	$a0, 0x7F
		xor	$a0, $a2
		beqz	$t5, loc_10005858
		subu	$a0, $a2
		bgez	$a0, loc_1000552C
		move	$s0, $a0
		b	loc_1000552C
		addiu	$s0, $a0, 0x80
		ld	$s2, 0x110+var_48($sp)
		ld	$s3, 0x110+var_40($sp)
		ld	$s6, 0x110+var_38($sp)
		ld	$fp, 0x110+var_30($sp)
		ld	$s4, 0x110+var_28($sp)
		ld	$s0, 0x110+var_C0($sp)
		ld	$s5, 0x110+var_20($sp)
		ld	$s7, 0x110+var_18($sp)
		ld	$s1, 0x110+var_10($sp)
		ldc1	$f20, 0x110+var_70($sp)
		ldc1	$f26, 0x110+var_68($sp)
		ldc1	$f30, 0x110+var_60($sp)
		la	$t9, glPopMatrix
		ldc1	$f22, 0x110+var_F8($sp)
		ldc1	$f24, 0x110+var_58($sp)
		jalr	$t9
		ldc1	$f28, 0x110+var_50($sp)
		ld	$ra, 0x110+var_B8($sp)
		ld	$gp, 0x110+var_B0($sp)
		jr	$ra
		addiu	$sp, 0x110
		mov.s	$f12, $f22
		lwc1	$f13, flt_100092B4
		jalr	$t9
		mov.s	$f14, $f22
		la	$t9, glPushMatrix
		jalr	$t9
		nop
		move	$t9, $s4
		mov.s	$f12, $f30
		ldc1	$f13, 0x110+var_D0($sp)
		jalr	$t9
		mov.s	$f14, $f20
		mov.s	$f13, $f20
		move	$t9, $fp
		mov.s	$f14, $f20
		ldc1	$f12, 0x110+var_E0($sp)
		jalr	$t9
		mov.s	$f15, $f22
		move	$t9, $s4
		mov.s	$f12, $f20
		ldc1	$f13, 0x110+var_C8($sp)
		jalr	$t9
		mov.s	$f14, $f20
		mov.s	$f13, $f20
		move	$t9, $fp
		mov.s	$f14, $f22
		ldc1	$f12, 0x110+var_D8($sp)
		jalr	$t9
		mov.s	$f15, $f20
		mov.s	$f12, $f28
		move	$t9, $s4
		mov.s	$f13, $f20
		jalr	$t9
		mov.s	$f14, $f20
		ldc1	$f13, 0x110+var_108($sp)
		la	$t9, glScalef
		mov.s	$f14, $f22
		jalr	$t9
		mov.s	$f12, $f13
		ld	$a1, 0x110+var_78($sp)
		lbu	$a1, 0($a1)
		beqz	$a1, loc_10005980
		ld	$a2, 0x110+var_A0($sp)
		la	$t9, glColor3f
		lwc1	$f12, 0($s7)
		lwc1	$f13, 4($s7)
		jalr	$t9
		lwc1	$f14, 8($s7)
		la	$t9, drawshape__GiT1
		move	$a0, $s0
		jal	drawshape__GiT1
		li	$a1, 1
		ld	$a2, 0x110+var_A0($sp)
		lbu	$a2, 0($a2)
		beqz	$a2, loc_100059B4
		la	$t9, glPopMatrix
		la	$t9, glColor3f
		lwc1	$f12, 0($s6)
		lwc1	$f13, 4($s6)
		jalr	$t9
		lwc1	$f14, 8($s6)
		la	$t9, drawshape__GiT1
		move	$a0, $s0
		jal	drawshape__GiT1
		move	$a1, $zero
		la	$t9, glPopMatrix
		jalr	$t9
		nop
		mov.s	$f13, $f20
		move	$t9, $fp
		mov.s	$f14, $f20
		lwc1	$f12, flt_100092A0
		jalr	$t9
		mov.s	$f15, $f22
		la	$t9, glPushMatrix
		jalr	$t9
		nop
		move	$t9, $s4
		mov.s	$f12, $f30
		ldc1	$f13, 0x110+var_D0($sp)
		jalr	$t9
		mov.s	$f14, $f20
		mov.s	$f13, $f20
		move	$t9, $fp
		mov.s	$f14, $f20
		ldc1	$f12, 0x110+var_E0($sp)
		jalr	$t9
		mov.s	$f15, $f22
		move	$t9, $s4
		mov.s	$f12, $f20
		ldc1	$f13, 0x110+var_C8($sp)
		jalr	$t9
		mov.s	$f14, $f20
		mov.s	$f13, $f20
		move	$t9, $fp
		mov.s	$f14, $f22
		ldc1	$f12, 0x110+var_D8($sp)
		jalr	$t9
		mov.s	$f15, $f20
		mov.s	$f12, $f28
		move	$t9, $s4
		mov.s	$f13, $f20
		jalr	$t9
		mov.s	$f14, $f20
		ldc1	$f13, 0x110+var_108($sp)
		la	$t9, glScalef
		mov.s	$f14, $f22
		jalr	$t9
		mov.s	$f12, $f13
		ld	$a3, 0x110+var_78($sp)
		lbu	$a3, 0($a3)
		beqz	$a3, loc_10005A90
		la	$t9, glColor3f
		lwc1	$f12, 0($s7)
		lwc1	$f13, 4($s7)
		jalr	$t9
		lwc1	$f14, 8($s7)
		la	$t9, drawshape__GiT1
		move	$a0, $s0
		jal	drawshape__GiT1
		li	$a1, 1
		ld	$a4, 0x110+var_A0($sp)
		lbu	$a4, 0($a4)
		beqz	$a4, loc_10005AC0
		la	$t9, glColor3f
		lwc1	$f12, 0($s6)
		lwc1	$f13, 4($s6)
		jalr	$t9
		lwc1	$f14, 8($s6)
		la	$t9, drawshape__GiT1
		move	$a0, $s0
		jal	drawshape__GiT1
		move	$a1, $zero
		la	$t9, glPopMatrix
		jalr	$t9
		nop
		la	$t9, glScalef
		mov.s	$f12, $f22
		lwc1	$f13, flt_100092B4
		jalr	$t9
		mov.s	$f14, $f22
		la	$t9, glPushMatrix
		jalr	$t9
		nop
		move	$t9, $s4
		mov.s	$f12, $f30
		ldc1	$f13, 0x110+var_D0($sp)
		jalr	$t9
		mov.s	$f14, $f20
		mov.s	$f13, $f20
		move	$t9, $fp
		mov.s	$f14, $f20
		ldc1	$f12, 0x110+var_E0($sp)
		jalr	$t9
		mov.s	$f15, $f22
		move	$t9, $s4
		mov.s	$f12, $f20
		ldc1	$f13, 0x110+var_C8($sp)
		jalr	$t9
		mov.s	$f14, $f20
		mov.s	$f13, $f20
		move	$t9, $fp
		mov.s	$f14, $f22
		ldc1	$f12, 0x110+var_D8($sp)
		jalr	$t9
		mov.s	$f15, $f20
		mov.s	$f12, $f28
		move	$t9, $s4
		mov.s	$f13, $f20
		jalr	$t9
		mov.s	$f14, $f20
		ldc1	$f13, 0x110+var_108($sp)
		la	$t9, glScalef
		mov.s	$f14, $f22
		jalr	$t9
		mov.s	$f12, $f13
		ld	$a5, 0x110+var_78($sp)
		lbu	$a5, 0($a5)
		beqz	$a5, loc_10005B9C
		la	$t9, glColor3f
		lwc1	$f12, 0($s7)
		lwc1	$f13, 4($s7)
		jalr	$t9
		lwc1	$f14, 8($s7)
		la	$t9, drawshape__GiT1
		move	$a0, $s0
		jal	drawshape__GiT1
		li	$a1, 1
		ld	$a6, 0x110+var_A0($sp)
		lbu	$a6, 0($a6)
		beqz	$a6, loc_10005BCC
		la	$t9, glColor3f
		lwc1	$f12, 0($s6)
		lwc1	$f13, 4($s6)
		jalr	$t9
		lwc1	$f14, 8($s6)
		la	$t9, drawshape__GiT1
		move	$a0, $s0
		jal	drawshape__GiT1
		move	$a1, $zero
		la	$t9, glPopMatrix
		jalr	$t9
		nop
		mov.s	$f13, $f20
		move	$t9, $fp
		mov.s	$f14, $f20
		ldc1	$f12, 0x110+var_110($sp)
		jalr	$t9
		mov.s	$f15, $f22
		move	$t9, $s4
		mov.s	$f12, $f20
		mov.s	$f13, $f20
		jalr	$t9
		ldc1	$f14, 0x110+var_100($sp)
		la	$a1, n
		b	loc_10005818
		la	$a3, nlimit
		sra	$a2, $s3, 31
		xor	$a0, $s3, $a2
		subu	$a0, $a2
		andi	$a0, 0x7F
		xor	$a0, $a2
		subu	$a0, $a2
		b	loc_10005848
		nop
		li	$v0, 0xB36C
		dmtc1	$zero, $f9
		addu	$at, $t9, $v0
		move	$a3, $zero
		b	loc_10005C54
		lw	$a4, (acttable_ptr - 0x10010F9C)($at)
		swc1	$f5, 0x18($a2)
		beqz	$a5, locret_10005CB8
		addiu	$a3, 1
		lw	$a2, 0($a4)
		addiu	$a4, 4
		beqz	$a2, loc_10005C50
		slti	$a5, $a3, 0x400
		lwc1	$f8, 0x18($a2)
		lwc1	$f7, 4($a2)
		lbu	$v1, 0($a2)
		lwc1	$f4, 8($a2)
		lbu	$a6, 1($a2)
		beqz	$v1, loc_10005C50
		lwc1	$f6, 0x14($a2)
		beqz	$a6, loc_10005C50
		nop
		add.s	$f5, $f6, $f8
		sub.s	$f0, $f4, $f5
		mul.s	$f0, $f7, $f0
		cvt.d.s	$f0, $f0
		c.lt.d	$f0, $f9
		nop
		bc1f	loc_10005C4C
		nop
		mov.s	$f5, $f4
		b	loc_10005C4C
		sb	$zero, 1($a2)
		jr	$ra
		nop
		lui	$at, 1
		addiu	$sp, -0x10
		li	$at, 0xB2DC
		sd	$gp, 0x10+var_8($sp)
		addu	$gp, $t9, $at
		la	$t9, malloc
		sd	$ra, 0x10+var_10($sp)
		jalr	$t9
		li	$a0, 0x28
		lwc1	$f2, flt_100092A8
		lwc1	$f1, flt_100092C0
		ld	$gp, 0x10+var_8($sp)
		mtc1	$zero, $f0
		swc1	$f2, 4($v0)
		swc1	$f0, 8($v0)
		swc1	$f0, 0xC($v0)
		swc1	$f0, 0x10($v0)
		swc1	$f0, 0x14($v0)
		swc1	$f0, 0x18($v0)
		ld	$ra, 0x10+var_10($sp)
		swc1	$f0, 0x1C($v0)
		swc1	$f1, 0x20($v0)
		addiu	$sp, 0x10
		jr	$ra
		swc1	$f0, 0x24($v0)
		addiu	$sp, -0x20
		lui	$at, 1
		sd	$s1, 0x20+var_20($sp)
		li	$at, 0xB278
		sd	$gp, 0x20+var_10($sp)
		addu	$gp, $t9, $at
		la	$s1, createBlankActAnim__Gv
		move	$t9, $s1
		sd	$ra, 0x20+var_18($sp)
		jal	createBlankActAnim__Gv
		sd	$s0, 0x20+var_8($sp)
		la	$s0, acttable
		move	$t9, $s1
		jal	createBlankActAnim__Gv
		sw	$v0, (acttable+0x48 - 0x100093B8)($s0)
		move	$t9, $s1
		jal	createBlankActAnim__Gv
		sw	$v0, (acttable+0x124 - 0x100093B8)($s0)
		move	$t9, $s1
		jal	createBlankActAnim__Gv
		sw	$v0, (acttable+0x7C - 0x100093B8)($s0)
		move	$t9, $s1
		jal	createBlankActAnim__Gv
		sw	$v0, (acttable+0x98 - 0x100093B8)($s0)
		move	$t9, $s1
		jal	createBlankActAnim__Gv
		sw	$v0, (acttable+0x140 - 0x100093B8)($s0)
		move	$t9, $s1
		jal	createBlankActAnim__Gv
		sw	$v0, (acttable+0x1B0 - 0x100093B8)($s0)
		lwc1	$f0, flt_100092C4
		move	$t9, $s1
		swc1	$f0, 0x18($v0)
		jal	createBlankActAnim__Gv
		sw	$v0, (acttable+0xD0 - 0x100093B8)($s0)
		move	$t9, $s1
		jal	createBlankActAnim__Gv
		sw	$v0, (acttable+0x194 - 0x100093B8)($s0)
		move	$t9, $s1
		jal	createBlankActAnim__Gv
		sw	$v0, (acttable+0x1FC - 0x100093B8)($s0)
		move	$t9, $s1
		jal	createBlankActAnim__Gv
		sw	$v0, (acttable+0x1EC - 0x100093B8)($s0)
		move	$t9, $s1
		jal	createBlankActAnim__Gv
		sw	$v0, (acttable+0x15C - 0x100093B8)($s0)
		move	$t9, $s1
		jal	createBlankActAnim__Gv
		sw	$v0, (acttable+0x178 - 0x100093B8)($s0)
		lwc1	$f1, flt_100092A8
		move	$t9, $s1
		swc1	$f1, 0x18($v0)
		jal	createBlankActAnim__Gv
		sw	$v0, (acttable+0xB4 - 0x100093B8)($s0)
		ld	$s1, 0x20+var_20($sp)
		ld	$ra, 0x20+var_18($sp)
		ld	$gp, 0x20+var_10($sp)
		sw	$v0, (acttable+0x208 - 0x100093B8)($s0)
		ld	$s0, 0x20+var_8($sp)
		jr	$ra
		addiu	$sp, 0x20
		lui	$at, 1
		addiu	$sp, -0x20
		li	$at, 0xB180
		sd	$gp, 0x20+var_10($sp)
		addu	$gp, $t9, $at
		la	$t9, glViewport
		move	$a3, $a1
		sd	$s3, 0x20+var_20($sp)
		move	$s3, $a0
		move	$a0, $zero
		sd	$a1, 0x20+var_8($sp)
		move	$a1, $zero
		sd	$ra, 0x20+var_18($sp)
		jalr	$t9
		move	$a2, $s3
		la	$t9, glMatrixMode
		jalr	$t9
		li	$a0, 0x1701
		la	$t9, glLoadIdentity
		jalr	$t9
		nop
		ld	$v0, 0x20+var_8($sp)
		mtc1	$s3, $f13
		mtc1	$v0, $f14
		cvt.s.w	$f13, $f13
		cvt.s.w	$f14, $f14
		div.s	$f13, $f14
		la	$t9, gluPerspective
		ldc1	$f15, dbl_10009320
		ldc1	$f12, dbl_10009310
		ldc1	$f14, dbl_10009318
		jalr	$t9
		cvt.d.s	$f13, $f13
		mtc1	$zero, $f12
		la	$t9, glTranslatef
		ld	$s3, 0x20+var_20($sp)
		lwc1	$f14, flt_100092C8
		jalr	$t9
		mov.s	$f13, $f12
		la	$t9, glMatrixMode
		jalr	$t9
		li	$a0, 0x1700
		ld	$ra, 0x20+var_18($sp)
		ld	$gp, 0x20+var_10($sp)
		jr	$ra
		addiu	$sp, 0x20
		lui	$at, 1
		addiu	$sp, -0x50
		li	$at, 0xB0C8
		sd	$gp, 0x50+var_30($sp)
		addu	$gp, $t9, $at
		la	$t9, glClear
		sd	$ra, 0x50+var_38($sp)
		li	$a0, 0x4000
		jalr	$t9
		sdc1	$f20, 0x50+var_28($sp)
		lwc1	$f20, flt_100092A8
		la	$t9, glColor3f
		mov.s	$f14, $f20
		mov.s	$f13, $f20
		sd	$s0, 0x50+var_8($sp)
		jalr	$t9
		mov.s	$f12, $f20
		la	$s0, acttable
		la	$v1, t
		lw	$v0, (acttable+0xB4 - 0x100093B8)($s0)
		lwc1	$f1, (t - 0x1000BF74)($v1)
		lwc1	$f2, 0x18($v0)
		sd	$s1, 0x50+var_20($sp)
		la	$s1, n
		ldc1	$f0, dbl_10009300
		add.s	$f1, $f2
		lw	$a0, (n - 0x1000BF6C)($s1)
		cvt.d.s	$f1, $f1
		addiu	$a0, 1
		sd	$s2, 0x50+var_18($sp)
		sra	$a3, $a0, 31
		c.le.d	$f0, $f1
		la	$a2, aflag
		xor	$a0, $a3
		sd	$s3, 0x50+var_10($sp)
		li	$s3, 1
		subu	$a0, $a3
		lbu	$a1, (aflag - 0x10008E48)($a2)
		mtc1	$zero, $f0
		bc1f	loc_10005F8C
		andi	$a0, 0x7F
		swc1	$f0, (t - 0x1000BF74)($v1)
		xor	$a0, $a3
		subu	$a0, $a3
		b	loc_10005F90
		sw	$a0, (n - 0x1000BF6C)($s1)
		move	$s3, $zero
		beqz	$a1, loc_10005FB8
		la	$t9, tasteQueue__Gv
		jal	tasteQueue__Gv
		nop
		la	$t9, setacttargets__Gv
		jal	setacttargets__Gv
		nop
		la	$t9, animateacts__Gv
		jal	animateacts__Gv
		nop
		la	$t9, floor
		la	$a2, dtwist
		la	$a4, dwheel
		la	$a6, wrist
		la	$t4, arm
		la	$s2, n
		la	$t6, dzoom
		lw	$s2, (n - 0x1000BF6C)($s2)
		mtc1	$zero, $f18
		la	$t8, y
		la	$ra, x
		sll	$s1, $s2, 2
		lw	$t7, (acttable+0x7C - 0x100093B8)($s0)
		addu	$t8, $s1, $t8
		addu	$ra, $s1, $ra
		swc1	$f18, 0($t8)
		swc1	$f18, 0($ra)
		lwc1	$f17, 0x18($t7)
		lw	$t5, (acttable+0x178 - 0x100093B8)($s0)
		addu	$t6, $s1, $t6
		swc1	$f17, 0($t6)
		lwc1	$f16, 0x18($t5)
		lw	$a7, (acttable+0x194 - 0x100093B8)($s0)
		addu	$t4, $s1, $t4
		swc1	$f16, 0($t4)
		lwc1	$f15, 0x18($a7)
		lw	$a5, (acttable+0x124 - 0x100093B8)($s0)
		addu	$a6, $s1, $a6
		swc1	$f15, 0($a6)
		lwc1	$f14, 0x18($a5)
		lw	$a3, (acttable+0x98 - 0x100093B8)($s0)
		swc1	$f14, (dwheel - 0x1000A3D0)($a4)
		lwc1	$f13, 0x18($a3)
		lw	$a1, (acttable+0xD0 - 0x100093B8)($s0)
		addu	$a2, $s1, $a2
		swc1	$f13, 0($a2)
		lwc1	$f12, 0x18($a1)
		sdc1	$f14, 0x50+var_50($sp)
		jalr	$t9
		cvt.d.s	$f12, $f12
		la	$a6, nlimit
		trunc.w.d	$f23, $f0
		swc1	$f23, (nlimit - 0x1000BF70)($a6)
		lw	$a5, (acttable+0x48 - 0x100093B8)($s0)
		lwc1	$f21, 0x18($a5)
		dmtc1	$zero, $f19
		cvt.d.s	$f21, $f21
		la	$a4, outline
		c.lt.d	$f19, $f21
		li	$a3, 1
		addu	$a4, $s2, $a4
		lw	$a2, (acttable+0x1EC - 0x100093B8)($s0)
		bc1t	loc_10006094
		nop
		move	$a3, $zero
		sb	$a3, 0($a4)
		lwc1	$f5, 0x18($a2)
		lwc1	$f6, flt_100092B4
		la	$a1, hue
		c.le.s	$f20, $f5
		la	$a3, light
		addu	$a1, $s1, $a1
		lw	$a2, (acttable+0x208 - 0x100093B8)($s0)
		addu	$a7, $s1, $a3
		bc1f	loc_100060C8
		swc1	$f5, 0($a1)
		add.s	$f5, $f6
		swc1	$f5, 0($a1)
		c.le.s	$f5, $f20
		nop
		bc1f	loc_100060E0
		nop
		add.s	$f25, $f5, $f20
		swc1	$f25, 0($a1)
		lwc1	$f27, 0x18($a2)
		lwc1	$f20, flt_10009290
		beqz	$s3, loc_10006194
		swc1	$f27, 0($a7)
		lw	$t5, 0x140($s0)
		la	$t6, dflip
		lw	$t7, 0x15C($s0)
		la	$s3, gflip
		lwc1	$f13, 0x18($t7)
		lwc1	$f12, (gflip - 0x1000BF58)($s3)
		la	$s3, fmodf
		swc1	$f13, (dflip - 0x1000BF5C)($t6)
		lwc1	$f29, 0x18($t5)
		la	$t4, dspin
		move	$t9, $s3
		sdc1	$f29, 0x50+var_48($sp)
		add.s	$f12, $f13
		mov.s	$f13, $f20
		jalr	$t9
		swc1	$f29, (dspin - 0x1000BF64)($t4)
		la	$s1, gspin
		ldc1	$f13, 0x50+var_48($sp)
		lwc1	$f12, (gspin - 0x1000BF60)($s1)
		move	$t9, $s3
		la	$t8, gflip
		sdc1	$f0, 0x50+var_40($sp)
		swc1	$f0, (gflip - 0x1000BF58)($t8)
		add.s	$f12, $f13
		jalr	$t9
		mov.s	$f13, $f20
		sra	$ra, $s2, 31
		xor	$t9, $s2, $ra
		subu	$t9, $ra
		andi	$t9, 0x7F
		ldc1	$f15, 0x50+var_40($sp)
		xor	$t9, $ra
		la	$at, flip
		subu	$t9, $ra
		la	$ra, spin
		sll	$t9, 2
		swc1	$f0, (gspin - 0x1000BF60)($s1)
		addu	$at, $t9, $at
		addu	$t9, $ra
		swc1	$f15, 0($at)
		swc1	$f0, 0($t9)
		la	$t9, fmodf
		la	$ra, wheel
		ldc1	$f13, 0x50+var_50($sp)
		lwc1	$f12, (wheel - 0x1000A3CC)($ra)
		ld	$s1, 0x50+var_20($sp)
		ld	$s2, 0x50+var_18($sp)
		ld	$s3, 0x50+var_10($sp)
		sub.s	$f12, $f13
		jalr	$t9
		mov.s	$f13, $f20
		la	$t9, drawit__Gv
		la	$at, wheel
		ldc1	$f20, 0x50+var_28($sp)
		jal	drawit__Gv
		swc1	$f0, (wheel - 0x1000A3CC)($at)
		lw	$v1, 0xB4($s0)
		la	$v0, t
		lwc1	$f15, 0x18($v1)
		lwc1	$f14, (t - 0x1000BF74)($v0)
		la	$t9, glFinish
		add.s	$f14, $f15
		jalr	$t9
		swc1	$f14, (t - 0x1000BF74)($v0)
		la	$t9, swapBuffers__Q2_10GLXWrapper6windowGv
		la	$a0, theWindow
		ld	$s0, 0x50+var_8($sp)
		jal	swapBuffers__Q2_10GLXWrapper6windowGv
		lw	$a0, (theWindow - 0x1000BF80)($a0)
		la	$t9, sginap
		jalr	$t9
		move	$a0, $zero
		ld	$ra, 0x50+var_38($sp)
		ld	$gp, 0x50+var_30($sp)
		jr	$ra
		addiu	$sp, 0x50
		li	$v1, 0xFF1B
		li	$v0, 0xAD7C
		beq	$a0, $v1, loc_1000623C
		addu	$at, $t9, $v0
		jr	$ra
		nop
		lw	$a0, (theWindow_ptr - 0x10010F9C)($at)
		lw	$a0, 0($a0)
		li	$v1, 1
		jr	$ra
		sb	$v1, 0x28($a0)
		addiu	$sp, -0x20
		lui	$at, 1
		sd	$ra, 0x20+var_8($sp)
		li	$at, 0xAD4C
		sd	$gp, 0x20+var_18($sp)
		addu	$gp, $t9, $at
		move	$a0, $zero
		la	$v0, acttable
		addiu	$a0, 1
		slti	$v1, $a0, 0x400
		addiu	$v0, 4
		bnez	$v1, loc_10006270
		sw	$zero, -4($v0)
		la	$t9, createActTable__Gv
		jal	createActTable__Gv
		sd	$s0, 0x20+var_10($sp)
		la	$a0, outline
		la	$a4, aflag
		move	$v0, $zero
		li	$s0, 1
		la	$a1, fill
		addiu	$v0, 1
		slti	$a2, $v0, 0x80
		addiu	$a1, 1
		sb	$s0, 0($a0)
		addiu	$a0, 1
		bnez	$a2, loc_100062A4
		sb	$s0, -1($a1)
		lbu	$a3, 0($a4)
		beqz	$a3, loc_100062DC
		la	$t9, srand48
		la	$t9, readAnimation__Gv
		jal	readAnimation__Gv
		nop
		la	$t9, srand48
		jalr	$t9
		move	$a0, $zero
		la	$t9, time
		jalr	$t9
		move	$a0, $zero
		la	$t9, srand48
		jalr	$t9
		move	$a0, $v0
		sw	$zero, 0x20+var_20($sp)
		la	$a6, nlimit
		la	$t9, __nw__GUi
		la	$a4, wheel
		mtc1	$zero, $f0
		li	$a5, 0x34
		sw	$a5, (nlimit - 0x1000BF70)($a6)
		li	$a0, 0x4C
		jalr	$t9
		swc1	$f0, (wheel - 0x1000A3CC)($a4)
		beqz	$v0, loc_10006364
		sw	$v0, 0x20+var_1C($sp)
		sw	$s0, 0x20+var_20($sp)
		move	$a0, $v0
		la	$t9, __ct__Q2_10GLXWrapper6windowGPciN32
		move	$a2, $zero
		move	$a3, $zero
		la	$a1, 0x10010000
		li	$a4, 0x280
		li	$a5, 0x1E0
		jal	__ct__Q2_10GLXWrapper6windowGPciN32
		addiu	$a1, (aElectropaint - 0x10010000)
		lw	$v0, 0x20+var_1C($sp)
		sw	$zero, 0x20+var_20($sp)
		b	loc_10006368
		nop
		move	$v0, $zero
		mtc1	$zero, $f12
		la	$t9, glClearColor
		la	$s0, theWindow
		lwc1	$f15, flt_100092A8
		mov.s	$f14, $f12
		sw	$v0, (theWindow - 0x1000BF80)($s0)
		jalr	$t9
		mov.s	$f13, $f12
		la	$t9, glShadeModel
		jalr	$t9
		li	$a0, 0x1D00
		la	$t9, glClear
		jalr	$t9
		li	$a0, 0x4000
		la	$t9, setRedraw__Q2_10GLXWrapper6windowGPGv_v
		la	$a1, display__Gv
		jal	setRedraw__Q2_10GLXWrapper6windowGPGv_v
		lw	$a0, (theWindow - 0x1000BF80)($s0)
		la	$t9, setReshape__Q2_10GLXWrapper6windowGPGiT1_v
		la	$a1, reshape__GiT1
		jal	setReshape__Q2_10GLXWrapper6windowGPGiT1_v
		lw	$a0, (theWindow - 0x1000BF80)($s0)
		la	$t9, setIdle__Q2_10GLXWrapper6windowGPGv_v
		la	$a1, display__Gv
		jal	setIdle__Q2_10GLXWrapper6windowGPGv_v
		lw	$a0, (theWindow - 0x1000BF80)($s0)
		la	$t9, setKeyboard__Q2_10GLXWrapper6windowGPGi_v
		la	$a1, keyboard__Gi
		jal	setKeyboard__Q2_10GLXWrapper6windowGPGi_v
		lw	$a0, (theWindow - 0x1000BF80)($s0)
		la	$t9, mainLoop__Q2_10GLXWrapper6windowGv
		jal	mainLoop__Q2_10GLXWrapper6windowGv
		lw	$a0, (theWindow - 0x1000BF80)($s0)
		lw	$v0, (theWindow - 0x1000BF80)($s0)
		beqz	$v0, loc_10006414
		ld	$ra, 0x20+var_8($sp)
		lw	$a0, 0x48($v0)
		lw	$t9, 0x14($a0)
		lw	$a0, 0xC($a0)
		li	$a1, 3
		jalr	$t9
		addu	$a0, $v0
		ld	$ra, 0x20+var_8($sp)
		move	$v0, $zero
		ld	$s0, 0x20+var_10($sp)
		ld	$gp, 0x20+var_18($sp)
		jr	$ra
		addiu	$sp, 0x20
		lw	$at, 0($a1)
		li	$v0, 0x13
		bne	$at, $v0, locret_10006448
		lw	$v1, 0x14($a1)
		bne	$v1, $a2, locret_10006448
		li	$v0, 1
		jr	$ra
		nop
		jr	$ra
		move	$v0, $zero
		jr	$ra
		li	$v0, 1
		jr	$ra
		nop
