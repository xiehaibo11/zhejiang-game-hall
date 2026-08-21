
void CRYPTO_secure_free(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if (DAT_01784990 == '\x01') {
    CRYPTO_THREAD_write_lock(DAT_017849a0);
    uVar6 = DAT_017849c8;
    plVar1 = DAT_017849c0;
    CRYPTO_THREAD_unlock(DAT_017849a0);
    if ((plVar1 <= param_1) && (param_1 < (long *)((long)plVar1 + uVar6))) {
      CRYPTO_THREAD_write_lock(DAT_017849a0);
      if ((param_1 < DAT_017849c0) || ((long *)((long)DAT_017849c0 + DAT_017849c8) <= param_1)) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: WITHIN_ARENA(ptr)","crypto/mem_sec.c",0x23e);
      }
      uVar8 = (long)param_1 + (DAT_017849c8 - (long)DAT_017849c0);
      uVar6 = DAT_017849d8 - 1;
      if (uVar8 < DAT_017849e0) {
        iVar5 = (int)uVar6;
      }
      else {
        uVar7 = 0;
        if (DAT_017849e0 != 0) {
          uVar7 = uVar8 / DAT_017849e0;
        }
        do {
          if ((1L << (uVar7 & 7) & (ulong)*(byte *)(DAT_017849e8 + (uVar7 >> 3))) != 0) break;
          if ((uVar7 & 1) != 0) goto LAB_00b40374;
          uVar7 = uVar7 >> 1;
          uVar6 = uVar6 - 1;
        } while (uVar7 != 0);
        iVar5 = (int)uVar6;
      }
      if ((-1 < iVar5) && ((int)uVar6 < DAT_017849d8)) {
        uVar8 = DAT_017849c8 >> (uVar6 & 0x3f);
        if ((uVar8 - 1 & (long)param_1 - (long)DAT_017849c0) != 0) {
LAB_00b4032c:
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                      "crypto/mem_sec.c",0x10f);
        }
        uVar7 = 0;
        if (uVar8 != 0) {
          uVar7 = (ulong)((long)param_1 - (long)DAT_017849c0) / uVar8;
        }
        uVar7 = uVar7 + (1L << (uVar6 & 0x3f));
        if ((uVar7 != 0) && (uVar7 < DAT_017849f8)) {
          if ((1L << (uVar7 & 7) & (ulong)*(byte *)(DAT_017849e8 + (uVar7 >> 3))) == 0) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: sh_testbit(ptr, list, sh.bittable)","crypto/mem_sec.c",
                        0x242);
          }
          OPENSSL_cleanse(param_1,uVar8);
          DAT_017849a8 = DAT_017849a8 - uVar8;
          if ((param_1 < DAT_017849c0) || ((long *)((long)DAT_017849c0 + DAT_017849c8) <= param_1))
          {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: WITHIN_ARENA(ptr)","crypto/mem_sec.c",0x21a);
          }
          uVar8 = (long)param_1 + (DAT_017849c8 - (long)DAT_017849c0);
          uVar6 = DAT_017849d8 - 1;
          if (uVar8 < DAT_017849e0) {
            iVar5 = (int)uVar6;
          }
          else {
            uVar7 = 0;
            if (DAT_017849e0 != 0) {
              uVar7 = uVar8 / DAT_017849e0;
            }
            do {
              if ((1L << (uVar7 & 7) & (ulong)*(byte *)(DAT_017849e8 + (uVar7 >> 3))) != 0) break;
              if ((uVar7 & 1) != 0) {
LAB_00b40374:
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: (bit & 1) == 0","crypto/mem_sec.c",0x103);
              }
              uVar7 = uVar7 >> 1;
              uVar6 = uVar6 - 1;
            } while (uVar7 != 0);
            iVar5 = (int)uVar6;
          }
          if ((iVar5 < 0) || (DAT_017849d8 <= (int)uVar6)) goto LAB_00b40314;
          uVar8 = DAT_017849c8 >> (uVar6 & 0x3f);
          if ((uVar8 - 1 & (long)param_1 - (long)DAT_017849c0) != 0) goto LAB_00b4032c;
          uVar7 = 0;
          if (uVar8 != 0) {
            uVar7 = (ulong)((long)param_1 - (long)DAT_017849c0) / uVar8;
          }
          uVar7 = uVar7 + (1L << (uVar6 & 0x3f));
          if ((uVar7 != 0) && (uVar7 < DAT_017849f8)) {
            if ((1L << (uVar7 & 7) & (ulong)*(byte *)(DAT_017849e8 + (uVar7 >> 3))) == 0) {
                    /* WARNING: Subroutine does not return */
              OPENSSL_die("assertion failed: sh_testbit(ptr, list, sh.bittable)","crypto/mem_sec.c",
                          0x21f);
            }
            FUN_00b40858(param_1,uVar6 & 0xffffffff,DAT_017849f0);
            lVar13 = uVar6 * 8;
            FUN_00b4076c(DAT_017849d0 + uVar6,param_1);
            lVar14 = uVar6 << 0x20;
            do {
              lVar13 = lVar13 + -8;
              uVar12 = uVar6 - 1;
              uVar7 = DAT_017849c8 >> (uVar6 & 0x3f);
              lVar15 = 1L << (uVar6 & 0x3f);
              uVar8 = 0;
              if (uVar7 != 0) {
                uVar8 = (ulong)((long)param_1 - (long)DAT_017849c0) / uVar7;
              }
              uVar8 = uVar8 + lVar15;
              uVar9 = 1L << ((uVar8 ^ 1) & 7);
              if (((uVar9 & *(byte *)(DAT_017849e8 + (uVar8 >> 3))) == 0) ||
                 (uVar4 = (ulong)*(byte *)(DAT_017849f0 + (uVar8 >> 3)), (uVar9 & uVar4) != 0)) {
LAB_00b4027c:
                CRYPTO_THREAD_unlock(DAT_017849a0);
                return;
              }
              uVar9 = ((uVar8 ^ 1) & lVar15 - 1U) * uVar7;
              plVar1 = (long *)((long)DAT_017849c0 + uVar9);
              if (plVar1 == (long *)0x0) goto LAB_00b4027c;
              uVar11 = 0;
              if (uVar7 != 0) {
                uVar11 = uVar9 / uVar7;
              }
              uVar10 = uVar11 + lVar15 >> 3;
              uVar9 = uVar11 + lVar15 ^ 1;
              uVar11 = 1L << (uVar9 & 7);
              if (((uVar11 & *(byte *)(DAT_017849e8 + uVar10)) == 0) ||
                 ((uVar11 & *(byte *)(DAT_017849f0 + uVar10)) != 0)) {
                if (param_1 != (long *)0x0) goto LAB_00b40220;
              }
              else if (param_1 != (long *)((long)DAT_017849c0 + (uVar9 & lVar15 - 1U) * uVar7)) {
LAB_00b40220:
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: ptr == sh_find_my_buddy(buddy, list)",
                            "crypto/mem_sec.c",0x225);
              }
              if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: ptr != NULL","crypto/mem_sec.c",0x226);
              }
              if (((int)uVar6 < 0) || (DAT_017849d8 <= lVar14 >> 0x20)) goto LAB_00b40314;
              if ((uVar7 - 1 & (long)param_1 - (long)DAT_017849c0) != 0) goto LAB_00b4032c;
              if ((uVar8 == 0) || (DAT_017849f8 <= uVar8)) break;
              if ((1L << (uVar8 & 7) & uVar4) != 0) {
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)",
                            "crypto/mem_sec.c",0x227);
              }
              FUN_00b40858(param_1,uVar6 & 0xffffffff);
              lVar2 = *param_1;
              if (lVar2 != 0) {
                *(long *)(lVar2 + 8) = param_1[1];
              }
              *(long *)param_1[1] = lVar2;
              if (((*param_1 != 0) &&
                  ((plVar3 = *(long **)(*param_1 + 8), plVar3 < DAT_017849d0 ||
                   (DAT_017849d0 + DAT_017849d8 <= plVar3)))) &&
                 ((plVar3 < DAT_017849c0 || ((long *)((long)DAT_017849c0 + DAT_017849c8) <= plVar3))
                 )) {
LAB_00b4035c:
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: WITHIN_FREELIST(temp2->p_next) || WITHIN_ARENA(temp2->p_next)"
                            ,"crypto/mem_sec.c",0x14d);
              }
              if (DAT_017849d8 <= lVar14 >> 0x20) goto LAB_00b40314;
              uVar8 = DAT_017849c8 >> (uVar6 & 0x3f);
              if ((uVar8 - 1 & (long)param_1 - (long)DAT_017849c0) != 0) goto LAB_00b4032c;
              uVar7 = 0;
              if (uVar8 != 0) {
                uVar7 = (ulong)((long)param_1 - (long)DAT_017849c0) / uVar8;
              }
              uVar7 = uVar7 + lVar15;
              if ((uVar7 == 0) || (DAT_017849f8 <= uVar7)) break;
              if ((1L << (uVar7 & 7) & (ulong)*(byte *)(DAT_017849f0 + (uVar7 >> 3))) != 0) {
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)",
                            "crypto/mem_sec.c",0x22a);
              }
              FUN_00b40858(plVar1,uVar6 & 0xffffffff,DAT_017849e8);
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                *(long *)(lVar15 + 8) = plVar1[1];
              }
              *(long *)plVar1[1] = lVar15;
              if (((*plVar1 != 0) &&
                  ((plVar3 = *(long **)(*plVar1 + 8), plVar3 < DAT_017849d0 ||
                   (DAT_017849d0 + DAT_017849d8 <= plVar3)))) &&
                 ((plVar3 < DAT_017849c0 || ((long *)((long)DAT_017849c0 + DAT_017849c8) <= plVar3))
                 )) goto LAB_00b4035c;
              if (param_1 <= plVar1) {
                plVar1 = param_1;
              }
              if (((int)uVar12 < 0) || (DAT_017849d8 <= lVar14 + -0x100000000 >> 0x20))
              goto LAB_00b40314;
              uVar6 = DAT_017849c8 >> (uVar12 & 0x3f);
              if ((uVar6 - 1 & (long)plVar1 - (long)DAT_017849c0) != 0) goto LAB_00b4032c;
              uVar8 = 0;
              if (uVar6 != 0) {
                uVar8 = (ulong)((long)plVar1 - (long)DAT_017849c0) / uVar6;
              }
              uVar8 = uVar8 + (1L << (uVar12 & 0x3f));
              if ((uVar8 == 0) || (DAT_017849f8 <= uVar8)) break;
              if ((1L << (uVar8 & 7) & (ulong)*(byte *)(DAT_017849f0 + (uVar8 >> 3))) != 0) {
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)",
                            "crypto/mem_sec.c",0x233);
              }
              FUN_00b40684(plVar1,uVar12 & 0xffffffff,DAT_017849e8);
              FUN_00b4076c((long)DAT_017849d0 + lVar13,plVar1);
              lVar14 = lVar14 + -0x100000000;
              param_1 = plVar1;
              uVar6 = uVar12;
              if ((long *)DAT_017849d0[uVar12] != plVar1) {
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: sh.freelist[list] == ptr","crypto/mem_sec.c",0x236);
              }
            } while( true );
          }
        }
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: bit > 0 && bit < sh.bittable_size","crypto/mem_sec.c",0x111);
      }
LAB_00b40314:
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: list >= 0 && list < sh.freelist_size","crypto/mem_sec.c",0x10e)
      ;
    }
  }
  CRYPTO_free(param_1);
  return;
}

