
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
  
  if ((DAT_01d3ac10 & 1) == 0) {
    plVar16 = CRYPTO_malloc((int)param_1,param_2,param_3);
    return plVar16;
  }
  CRYPTO_THREAD_write_lock(DAT_01d3ac20);
  lVar1 = DAT_01d3ac58;
  lVar5 = 0;
  lVar17 = 0;
  lVar18 = -(DAT_01d3ac58 << 0x20);
  uVar3 = DAT_01d3ac60;
  do {
    bVar2 = uVar3 < param_1;
    uVar3 = uVar3 << 1;
    lVar18 = lVar18 + 0x100000000;
    lVar17 = lVar17 + -8;
    lVar5 = lVar5 + 1;
  } while (bVar2);
  uVar3 = DAT_01d3ac58 - lVar5;
  if (0 < (long)(uVar3 + 1)) {
    lVar19 = 0;
    lVar5 = -lVar5;
    local_78 = lVar18;
    lVar20 = lVar17;
    do {
      plVar16 = (long *)DAT_01d3ac50[DAT_01d3ac58 + lVar5];
      if (plVar16 != (long *)0x0) {
        lVar8 = DAT_01d3ac58 * 8;
        lVar15 = -local_78;
        uVar7 = (ulong)((int)DAT_01d3ac58 + (int)lVar5 + 1);
        local_78 = -local_78;
        goto LAB_00b31210;
      }
      lVar5 = lVar5 + -1;
      lVar20 = lVar20 + -8;
      lVar19 = lVar19 + 1;
      local_78 = local_78 + 0x100000000;
    } while (0 < DAT_01d3ac58 + lVar5 + 1);
  }
  plVar16 = (long *)0x0;
  uVar7 = 0;
  goto LAB_00b316d8;
LAB_00b31210:
  local_78 = local_78 + 0x100000000;
  if (lVar19 == 0) {
    if (((int)uVar3 < 0) || (DAT_01d3ac58 <= -lVar18 >> 0x20)) goto LAB_00b31744;
    plVar16 = *(long **)((long)DAT_01d3ac50 + lVar17 + lVar8);
    uVar7 = DAT_01d3ac48 >> (uVar3 & 0x3f);
    if ((uVar7 - 1 & (long)plVar16 - (long)DAT_01d3ac40) != 0) goto LAB_00b3175c;
    uVar13 = 0;
    if (uVar7 != 0) {
      uVar13 = (ulong)((long)plVar16 - (long)DAT_01d3ac40) / uVar7;
    }
    uVar13 = uVar13 + (1L << (uVar3 & 0x3f));
    if ((uVar13 == 0) || (DAT_01d3ac78 <= uVar13)) goto LAB_00b31774;
    if ((1L << (uVar13 & 7) & (ulong)*(byte *)(DAT_01d3ac68 + (uVar13 >> 3))) == 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: sh_testbit(chunk, list, sh.bittable)","crypto/mem_sec.c",0x20a)
      ;
    }
    FUN_00b32204(plVar16,uVar3,DAT_01d3ac70);
    lVar5 = *plVar16;
    if (lVar5 != 0) {
      *(long *)(lVar5 + 8) = plVar16[1];
    }
    *(long *)plVar16[1] = lVar5;
    if (((*plVar16 != 0) &&
        ((plVar6 = *(long **)(*plVar16 + 8), plVar6 < DAT_01d3ac50 ||
         (DAT_01d3ac50 + DAT_01d3ac58 <= plVar6)))) &&
       ((plVar6 < DAT_01d3ac40 || ((long *)((long)DAT_01d3ac40 + DAT_01d3ac48) <= plVar6)))) {
LAB_00b3181c:
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: WITHIN_FREELIST(temp2->p_next) || WITHIN_ARENA(temp2->p_next)",
                  "crypto/mem_sec.c",0x14d);
    }
    if ((plVar16 < DAT_01d3ac40) || ((long *)((long)DAT_01d3ac40 + DAT_01d3ac48) <= plVar16)) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: WITHIN_ARENA(chunk)","crypto/mem_sec.c",0x20e);
    }
    uVar7 = (long)plVar16 + (DAT_01d3ac48 - (long)DAT_01d3ac40);
    uVar3 = DAT_01d3ac58 - 1;
    if (DAT_01d3ac60 <= uVar7) {
      uVar13 = 0;
      if (DAT_01d3ac60 != 0) {
        uVar13 = uVar7 / DAT_01d3ac60;
      }
      goto LAB_00b31718;
    }
    iVar10 = (int)uVar3;
    goto joined_r0x00b31740;
  }
  uVar13 = lVar1 + lVar5;
  if (((int)uVar13 < 0) || (DAT_01d3ac58 <= lVar15 >> 0x20)) goto LAB_00b31744;
  uVar9 = DAT_01d3ac48 >> (uVar13 & 0x3f);
  if ((uVar9 - 1 & (long)plVar16 - (long)DAT_01d3ac40) != 0) goto LAB_00b3175c;
  uVar11 = 0;
  if (uVar9 != 0) {
    uVar11 = (ulong)((long)plVar16 - (long)DAT_01d3ac40) / uVar9;
  }
  uVar11 = uVar11 + (1L << (uVar13 & 0x3f));
  if ((uVar11 == 0) || (DAT_01d3ac78 <= uVar11)) goto LAB_00b31774;
  if ((1L << (uVar11 & 7) & (ulong)*(byte *)(DAT_01d3ac70 + (uVar11 >> 3))) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)","crypto/mem_sec.c",0x1f0)
    ;
  }
  FUN_00b323d8(plVar16,uVar13,DAT_01d3ac68);
  lVar4 = *plVar16;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 8) = plVar16[1];
  }
  *(long *)plVar16[1] = lVar4;
  if (((*plVar16 != 0) &&
      ((plVar6 = *(long **)(*plVar16 + 8), plVar6 < DAT_01d3ac50 ||
       (DAT_01d3ac50 + DAT_01d3ac58 <= plVar6)))) &&
     ((plVar6 < DAT_01d3ac40 || ((long *)((long)DAT_01d3ac40 + DAT_01d3ac48) <= plVar6))))
  goto LAB_00b3181c;
  if (plVar16 == (long *)DAT_01d3ac50[lVar1 + lVar5]) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: temp != sh.freelist[slist]","crypto/mem_sec.c",499);
  }
  uVar13 = lVar1 + lVar5 + 1;
  if (((int)uVar13 < 0) || (DAT_01d3ac58 <= local_78 >> 0x20)) goto LAB_00b31744;
  uVar9 = DAT_01d3ac48 >> (uVar7 & 0x3f);
  if ((uVar9 - 1 & (long)plVar16 - (long)DAT_01d3ac40) != 0) goto LAB_00b3175c;
  lVar4 = 1L << (uVar7 & 0x3f);
  uVar11 = 0;
  if (uVar9 != 0) {
    uVar11 = (ulong)((long)plVar16 - (long)DAT_01d3ac40) / uVar9;
  }
  uVar11 = uVar11 + lVar4;
  if ((uVar11 == 0) || (DAT_01d3ac78 <= uVar11)) goto LAB_00b31774;
  if ((1L << (uVar11 & 7) & (ulong)*(byte *)(DAT_01d3ac70 + (uVar11 >> 3))) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)","crypto/mem_sec.c",0x1f9)
    ;
  }
  FUN_00b32204(plVar16,uVar13 & 0xffffffff,DAT_01d3ac68);
  FUN_00b322ec((long)DAT_01d3ac50 + lVar20 + lVar8 + 8,plVar16);
  if ((long *)DAT_01d3ac50[lVar1 + lVar5 + 1] != plVar16) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: sh.freelist[slist] == temp","crypto/mem_sec.c",0x1fc);
  }
  if (DAT_01d3ac58 <= local_78 >> 0x20) goto LAB_00b31744;
  uVar9 = DAT_01d3ac48 >> (uVar7 & 0x3f);
  plVar16 = (long *)((long)plVar16 + (DAT_01d3ac48 >> (uVar13 & 0x3f)));
  if (((long)plVar16 - (long)DAT_01d3ac40 & uVar9 - 1) != 0) goto LAB_00b3175c;
  uVar11 = 0;
  if (uVar9 != 0) {
    uVar11 = (ulong)((long)plVar16 - (long)DAT_01d3ac40) / uVar9;
  }
  uVar11 = uVar11 + lVar4;
  if ((uVar11 == 0) || (DAT_01d3ac78 <= uVar11)) goto LAB_00b31774;
  if ((1L << (uVar11 & 7) & (ulong)*(byte *)(DAT_01d3ac70 + (uVar11 >> 3))) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)","crypto/mem_sec.c",0x200)
    ;
  }
  FUN_00b32204(plVar16,uVar13 & 0xffffffff,DAT_01d3ac68);
  FUN_00b322ec((long)DAT_01d3ac50 + lVar20 + lVar8 + 8,plVar16);
  if ((long *)DAT_01d3ac50[lVar1 + lVar5 + 1] != plVar16) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: sh.freelist[slist] == temp","crypto/mem_sec.c",0x203);
  }
  uVar11 = DAT_01d3ac48 >> (uVar7 & 0x3f);
  uVar9 = 0;
  if (uVar11 != 0) {
    uVar9 = (ulong)((long)plVar16 - (long)DAT_01d3ac40) / uVar11;
  }
  uVar12 = uVar9 + lVar4 >> 3;
  uVar9 = uVar9 + lVar4 ^ 1;
  uVar14 = 1L << (uVar9 & 7);
  if (((uVar14 & *(byte *)(DAT_01d3ac68 + uVar12)) == 0) ||
     ((uVar14 & *(byte *)(DAT_01d3ac70 + uVar12)) != 0)) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)((long)DAT_01d3ac40 + (uVar9 & lVar4 - 1U) * uVar11);
  }
  lVar5 = lVar5 + 1;
  lVar20 = lVar20 + 8;
  uVar7 = uVar7 + 1;
  lVar15 = lVar15 + 0x100000000;
  lVar19 = lVar19 + -1;
  if ((long *)((long)plVar16 - (DAT_01d3ac48 >> (uVar13 & 0x3f))) != plVar6) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: temp-(sh.arena_size >> slist) == sh_find_my_buddy(temp, slist)",
                "crypto/mem_sec.c",0x205);
  }
  goto LAB_00b31210;
  while( true ) {
    if ((uVar13 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: (bit & 1) == 0","crypto/mem_sec.c",0x103);
    }
    uVar13 = uVar13 >> 1;
    uVar3 = uVar3 - 1;
    if (uVar13 == 0) break;
LAB_00b31718:
    if ((1L << (uVar13 & 7) & (ulong)*(byte *)(DAT_01d3ac68 + (uVar13 >> 3))) != 0) break;
  }
  iVar10 = (int)uVar3;
joined_r0x00b31740:
  if ((iVar10 < 0) || (DAT_01d3ac58 <= (int)uVar3)) {
LAB_00b31744:
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: list >= 0 && list < sh.freelist_size","crypto/mem_sec.c",0x10e);
  }
  uVar7 = DAT_01d3ac48 >> (uVar3 & 0x3f);
  if ((uVar7 - 1 & (long)plVar16 - (long)DAT_01d3ac40) != 0) {
LAB_00b3175c:
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                "crypto/mem_sec.c",0x10f);
  }
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar13 = (ulong)((long)plVar16 - (long)DAT_01d3ac40) / uVar7;
  }
  uVar13 = uVar13 + (1L << (uVar3 & 0x3f));
  if ((uVar13 == 0) || (DAT_01d3ac78 <= uVar13)) {
LAB_00b31774:
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: bit > 0 && bit < sh.bittable_size","crypto/mem_sec.c",0x111);
  }
  if ((1L << (uVar13 & 7) & (ulong)*(byte *)(DAT_01d3ac68 + (uVar13 >> 3))) == 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: sh_testbit(ptr, list, sh.bittable)","crypto/mem_sec.c",0x242);
  }
LAB_00b316d8:
  DAT_01d3ac28 = DAT_01d3ac28 + uVar7;
  CRYPTO_THREAD_unlock(DAT_01d3ac20);
  return plVar16;
}

