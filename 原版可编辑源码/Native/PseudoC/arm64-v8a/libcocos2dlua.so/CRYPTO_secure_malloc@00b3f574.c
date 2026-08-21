
long * CRYPTO_secure_malloc(ulong param_1,char *param_2,int param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long local_78;
  
  if ((DAT_01784990 & 1) == 0) {
    plVar16 = CRYPTO_malloc((int)param_1,param_2,param_3);
    return plVar16;
  }
  CRYPTO_THREAD_write_lock(DAT_017849a0);
  lVar1 = DAT_017849d8;
  lVar5 = 0;
  lVar17 = 0;
  lVar18 = -(DAT_017849d8 << 0x20);
  uVar3 = DAT_017849e0;
  do {
    bVar2 = uVar3 < param_1;
    uVar3 = uVar3 << 1;
    lVar18 = lVar18 + 0x100000000;
    lVar17 = lVar17 + -8;
    lVar5 = lVar5 + 1;
  } while (bVar2);
  uVar3 = DAT_017849d8 - lVar5;
  if (0 < (long)(uVar3 + 1)) {
    lVar19 = 0;
    lVar5 = -lVar5;
    local_78 = lVar18;
    lVar20 = lVar17;
    do {
      plVar16 = (long *)DAT_017849d0[DAT_017849d8 + lVar5];
      if (plVar16 != (long *)0x0) {
        lVar8 = DAT_017849d8 * 8;
        lVar15 = -local_78;
        uVar7 = (ulong)((int)DAT_017849d8 + (int)lVar5 + 1);
        local_78 = -local_78;
        goto LAB_00b3f690;
      }
      lVar5 = lVar5 + -1;
      lVar20 = lVar20 + -8;
      lVar19 = lVar19 + 1;
      local_78 = local_78 + 0x100000000;
    } while (0 < DAT_017849d8 + lVar5 + 1);
  }
  plVar16 = (long *)0x0;
  uVar7 = 0;
  goto LAB_00b3fb58;
LAB_00b3f690:
  local_78 = local_78 + 0x100000000;
  if (lVar19 == 0) {
    if (((int)uVar3 < 0) || (DAT_017849d8 <= -lVar18 >> 0x20)) goto LAB_00b3fbc4;
    plVar16 = *(long **)((long)DAT_017849d0 + lVar17 + lVar8);
    uVar7 = DAT_017849c8 >> (uVar3 & 0x3f);
    if ((uVar7 - 1 & (long)plVar16 - (long)DAT_017849c0) != 0) goto LAB_00b3fbdc;
    uVar13 = 0;
    if (uVar7 != 0) {
      uVar13 = (ulong)((long)plVar16 - (long)DAT_017849c0) / uVar7;
    }
    uVar13 = uVar13 + (1L << (uVar3 & 0x3f));
    if ((uVar13 == 0) || (DAT_017849f8 <= uVar13)) goto LAB_00b3fbf4;
    if ((1L << (uVar13 & 7) & (ulong)*(byte *)(DAT_017849e8 + (uVar13 >> 3))) == 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: sh_testbit(chunk, list, sh.bittable)","crypto/mem_sec.c",0x20a)
      ;
    }
    FUN_00b40684(plVar16,uVar3,DAT_017849f0);
    lVar5 = *plVar16;
    if (lVar5 != 0) {
      *(long *)(lVar5 + 8) = plVar16[1];
    }
    *(long *)plVar16[1] = lVar5;
    if (((*plVar16 != 0) &&
        ((plVar6 = *(long **)(*plVar16 + 8), plVar6 < DAT_017849d0 ||
         (DAT_017849d0 + DAT_017849d8 <= plVar6)))) &&
       ((plVar6 < DAT_017849c0 || ((long *)((long)DAT_017849c0 + DAT_017849c8) <= plVar6)))) {
LAB_00b3fc9c:
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: WITHIN_FREELIST(temp2->p_next) || WITHIN_ARENA(temp2->p_next)",
                  "crypto/mem_sec.c",0x14d);
    }
    if ((plVar16 < DAT_017849c0) || ((long *)((long)DAT_017849c0 + DAT_017849c8) <= plVar16)) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: WITHIN_ARENA(chunk)","crypto/mem_sec.c",0x20e);
    }
    uVar7 = (long)plVar16 + (DAT_017849c8 - (long)DAT_017849c0);
    uVar3 = DAT_017849d8 - 1;
    if (DAT_017849e0 <= uVar7) {
      uVar13 = 0;
      if (DAT_017849e0 != 0) {
        uVar13 = uVar7 / DAT_017849e0;
      }
      goto LAB_00b3fb98;
    }
    iVar10 = (int)uVar3;
    goto joined_r0x00b3fbc0;
  }
  uVar13 = lVar1 + lVar5;
  if (((int)uVar13 < 0) || (DAT_017849d8 <= lVar15 >> 0x20)) goto LAB_00b3fbc4;
  uVar9 = DAT_017849c8 >> (uVar13 & 0x3f);
  if ((uVar9 - 1 & (long)plVar16 - (long)DAT_017849c0) != 0) goto LAB_00b3fbdc;
  uVar11 = 0;
  if (uVar9 != 0) {
    uVar11 = (ulong)((long)plVar16 - (long)DAT_017849c0) / uVar9;
  }
  uVar11 = uVar11 + (1L << (uVar13 & 0x3f));
  if ((uVar11 == 0) || (DAT_017849f8 <= uVar11)) goto LAB_00b3fbf4;
  if ((1L << (uVar11 & 7) & (ulong)*(byte *)(DAT_017849f0 + (uVar11 >> 3))) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)","crypto/mem_sec.c",0x1f0)
    ;
  }
  FUN_00b40858(plVar16,uVar13,DAT_017849e8);
  lVar4 = *plVar16;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 8) = plVar16[1];
  }
  *(long *)plVar16[1] = lVar4;
  if (((*plVar16 != 0) &&
      ((plVar6 = *(long **)(*plVar16 + 8), plVar6 < DAT_017849d0 ||
       (DAT_017849d0 + DAT_017849d8 <= plVar6)))) &&
     ((plVar6 < DAT_017849c0 || ((long *)((long)DAT_017849c0 + DAT_017849c8) <= plVar6))))
  goto LAB_00b3fc9c;
  if (plVar16 == (long *)DAT_017849d0[lVar1 + lVar5]) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: temp != sh.freelist[slist]","crypto/mem_sec.c",499);
  }
  uVar13 = lVar1 + lVar5 + 1;
  if (((int)uVar13 < 0) || (DAT_017849d8 <= local_78 >> 0x20)) goto LAB_00b3fbc4;
  uVar9 = DAT_017849c8 >> (uVar7 & 0x3f);
  if ((uVar9 - 1 & (long)plVar16 - (long)DAT_017849c0) != 0) goto LAB_00b3fbdc;
  lVar4 = 1L << (uVar7 & 0x3f);
  uVar11 = 0;
  if (uVar9 != 0) {
    uVar11 = (ulong)((long)plVar16 - (long)DAT_017849c0) / uVar9;
  }
  uVar11 = uVar11 + lVar4;
  if ((uVar11 == 0) || (DAT_017849f8 <= uVar11)) goto LAB_00b3fbf4;
  if ((1L << (uVar11 & 7) & (ulong)*(byte *)(DAT_017849f0 + (uVar11 >> 3))) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)","crypto/mem_sec.c",0x1f9)
    ;
  }
  FUN_00b40684(plVar16,uVar13 & 0xffffffff,DAT_017849e8);
  FUN_00b4076c((long)DAT_017849d0 + lVar20 + lVar8 + 8,plVar16);
  if ((long *)DAT_017849d0[lVar1 + lVar5 + 1] != plVar16) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: sh.freelist[slist] == temp","crypto/mem_sec.c",0x1fc);
  }
  if (DAT_017849d8 <= local_78 >> 0x20) goto LAB_00b3fbc4;
  uVar9 = DAT_017849c8 >> (uVar7 & 0x3f);
  plVar16 = (long *)((long)plVar16 + (DAT_017849c8 >> (uVar13 & 0x3f)));
  if (((long)plVar16 - (long)DAT_017849c0 & uVar9 - 1) != 0) goto LAB_00b3fbdc;
  uVar11 = 0;
  if (uVar9 != 0) {
    uVar11 = (ulong)((long)plVar16 - (long)DAT_017849c0) / uVar9;
  }
  uVar11 = uVar11 + lVar4;
  if ((uVar11 == 0) || (DAT_017849f8 <= uVar11)) goto LAB_00b3fbf4;
  if ((1L << (uVar11 & 7) & (ulong)*(byte *)(DAT_017849f0 + (uVar11 >> 3))) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)","crypto/mem_sec.c",0x200)
    ;
  }
  FUN_00b40684(plVar16,uVar13 & 0xffffffff,DAT_017849e8);
  FUN_00b4076c((long)DAT_017849d0 + lVar20 + lVar8 + 8,plVar16);
  if ((long *)DAT_017849d0[lVar1 + lVar5 + 1] != plVar16) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: sh.freelist[slist] == temp","crypto/mem_sec.c",0x203);
  }
  uVar11 = DAT_017849c8 >> (uVar7 & 0x3f);
  uVar9 = 0;
  if (uVar11 != 0) {
    uVar9 = (ulong)((long)plVar16 - (long)DAT_017849c0) / uVar11;
  }
  uVar12 = uVar9 + lVar4 >> 3;
  uVar9 = uVar9 + lVar4 ^ 1;
  uVar14 = 1L << (uVar9 & 7);
  if (((uVar14 & *(byte *)(DAT_017849e8 + uVar12)) == 0) ||
     ((uVar14 & *(byte *)(DAT_017849f0 + uVar12)) != 0)) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)((long)DAT_017849c0 + (uVar9 & lVar4 - 1U) * uVar11);
  }
  lVar5 = lVar5 + 1;
  lVar20 = lVar20 + 8;
  uVar7 = uVar7 + 1;
  lVar15 = lVar15 + 0x100000000;
  lVar19 = lVar19 + -1;
  if ((long *)((long)plVar16 - (DAT_017849c8 >> (uVar13 & 0x3f))) != plVar6) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: temp-(sh.arena_size >> slist) == sh_find_my_buddy(temp, slist)",
                "crypto/mem_sec.c",0x205);
  }
  goto LAB_00b3f690;
  while( true ) {
    if ((uVar13 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: (bit & 1) == 0","crypto/mem_sec.c",0x103);
    }
    uVar13 = uVar13 >> 1;
    uVar3 = uVar3 - 1;
    if (uVar13 == 0) break;
LAB_00b3fb98:
    if ((1L << (uVar13 & 7) & (ulong)*(byte *)(DAT_017849e8 + (uVar13 >> 3))) != 0) break;
  }
  iVar10 = (int)uVar3;
joined_r0x00b3fbc0:
  if ((iVar10 < 0) || (DAT_017849d8 <= (int)uVar3)) {
LAB_00b3fbc4:
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: list >= 0 && list < sh.freelist_size","crypto/mem_sec.c",0x10e);
  }
  uVar7 = DAT_017849c8 >> (uVar3 & 0x3f);
  if ((uVar7 - 1 & (long)plVar16 - (long)DAT_017849c0) != 0) {
LAB_00b3fbdc:
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                "crypto/mem_sec.c",0x10f);
  }
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar13 = (ulong)((long)plVar16 - (long)DAT_017849c0) / uVar7;
  }
  uVar13 = uVar13 + (1L << (uVar3 & 0x3f));
  if ((uVar13 == 0) || (DAT_017849f8 <= uVar13)) {
LAB_00b3fbf4:
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: bit > 0 && bit < sh.bittable_size","crypto/mem_sec.c",0x111);
  }
  if ((1L << (uVar13 & 7) & (ulong)*(byte *)(DAT_017849e8 + (uVar13 >> 3))) == 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: sh_testbit(ptr, list, sh.bittable)","crypto/mem_sec.c",0x242);
  }
LAB_00b3fb58:
  DAT_017849a8 = DAT_017849a8 + uVar7;
  CRYPTO_THREAD_unlock(DAT_017849a0);
  return plVar16;
}

