
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
  if (DAT_01d3ac10 == '\x01') {
    CRYPTO_THREAD_write_lock(DAT_01d3ac20);
    uVar6 = DAT_01d3ac48;
    plVar1 = DAT_01d3ac40;
    CRYPTO_THREAD_unlock(DAT_01d3ac20);
    if ((plVar1 <= param_1) && (param_1 < (long *)((long)plVar1 + uVar6))) {
      CRYPTO_THREAD_write_lock(DAT_01d3ac20);
      if ((param_1 < DAT_01d3ac40) || ((long *)((long)DAT_01d3ac40 + DAT_01d3ac48) <= param_1)) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: WITHIN_ARENA(ptr)","crypto/mem_sec.c",0x23e);
      }
      uVar8 = (long)param_1 + (DAT_01d3ac48 - (long)DAT_01d3ac40);
      uVar6 = DAT_01d3ac58 - 1;
      if (uVar8 < DAT_01d3ac60) {
        iVar5 = (int)uVar6;
      }
      else {
        uVar7 = 0;
        if (DAT_01d3ac60 != 0) {
          uVar7 = uVar8 / DAT_01d3ac60;
        }
        do {
          if ((1L << (uVar7 & 7) & (ulong)*(byte *)(DAT_01d3ac68 + (uVar7 >> 3))) != 0) break;
          if ((uVar7 & 1) != 0) goto LAB_00b31ef4;
          uVar7 = uVar7 >> 1;
          uVar6 = uVar6 - 1;
        } while (uVar7 != 0);
        iVar5 = (int)uVar6;
      }
      if ((-1 < iVar5) && ((int)uVar6 < DAT_01d3ac58)) {
        uVar8 = DAT_01d3ac48 >> (uVar6 & 0x3f);
        if ((uVar8 - 1 & (long)param_1 - (long)DAT_01d3ac40) != 0) {
LAB_00b31eac:
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                      "crypto/mem_sec.c",0x10f);
        }
        uVar7 = 0;
        if (uVar8 != 0) {
          uVar7 = (ulong)((long)param_1 - (long)DAT_01d3ac40) / uVar8;
        }
        uVar7 = uVar7 + (1L << (uVar6 & 0x3f));
        if ((uVar7 != 0) && (uVar7 < DAT_01d3ac78)) {
          if ((1L << (uVar7 & 7) & (ulong)*(byte *)(DAT_01d3ac68 + (uVar7 >> 3))) == 0) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: sh_testbit(ptr, list, sh.bittable)","crypto/mem_sec.c",
                        0x242);
          }
          OPENSSL_cleanse(param_1,uVar8);
          DAT_01d3ac28 = DAT_01d3ac28 - uVar8;
          if ((param_1 < DAT_01d3ac40) || ((long *)((long)DAT_01d3ac40 + DAT_01d3ac48) <= param_1))
          {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: WITHIN_ARENA(ptr)","crypto/mem_sec.c",0x21a);
          }
          uVar8 = (long)param_1 + (DAT_01d3ac48 - (long)DAT_01d3ac40);
          uVar6 = DAT_01d3ac58 - 1;
          if (uVar8 < DAT_01d3ac60) {
            iVar5 = (int)uVar6;
          }
          else {
            uVar7 = 0;
            if (DAT_01d3ac60 != 0) {
              uVar7 = uVar8 / DAT_01d3ac60;
            }
            do {
              if ((1L << (uVar7 & 7) & (ulong)*(byte *)(DAT_01d3ac68 + (uVar7 >> 3))) != 0) break;
              if ((uVar7 & 1) != 0) {
LAB_00b31ef4:
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: (bit & 1) == 0","crypto/mem_sec.c",0x103);
              }
              uVar7 = uVar7 >> 1;
              uVar6 = uVar6 - 1;
            } while (uVar7 != 0);
            iVar5 = (int)uVar6;
          }
          if ((iVar5 < 0) || (DAT_01d3ac58 <= (int)uVar6)) goto LAB_00b31e94;
          uVar8 = DAT_01d3ac48 >> (uVar6 & 0x3f);
          if ((uVar8 - 1 & (long)param_1 - (long)DAT_01d3ac40) != 0) goto LAB_00b31eac;
          uVar7 = 0;
          if (uVar8 != 0) {
            uVar7 = (ulong)((long)param_1 - (long)DAT_01d3ac40) / uVar8;
          }
          uVar7 = uVar7 + (1L << (uVar6 & 0x3f));
          if ((uVar7 != 0) && (uVar7 < DAT_01d3ac78)) {
            if ((1L << (uVar7 & 7) & (ulong)*(byte *)(DAT_01d3ac68 + (uVar7 >> 3))) == 0) {
                    /* WARNING: Subroutine does not return */
              OPENSSL_die("assertion failed: sh_testbit(ptr, list, sh.bittable)","crypto/mem_sec.c",
                          0x21f);
            }
            FUN_00b323d8(param_1,uVar6 & 0xffffffff,DAT_01d3ac70);
            lVar13 = uVar6 * 8;
            FUN_00b322ec(DAT_01d3ac50 + uVar6,param_1);
            lVar14 = uVar6 << 0x20;
            do {
              lVar13 = lVar13 + -8;
              uVar12 = uVar6 - 1;
              uVar7 = DAT_01d3ac48 >> (uVar6 & 0x3f);
              lVar15 = 1L << (uVar6 & 0x3f);
              uVar8 = 0;
              if (uVar7 != 0) {
                uVar8 = (ulong)((long)param_1 - (long)DAT_01d3ac40) / uVar7;
              }
              uVar8 = uVar8 + lVar15;
              uVar9 = 1L << ((uVar8 ^ 1) & 7);
              if (((uVar9 & *(byte *)(DAT_01d3ac68 + (uVar8 >> 3))) == 0) ||
                 (uVar4 = (ulong)*(byte *)(DAT_01d3ac70 + (uVar8 >> 3)), (uVar9 & uVar4) != 0)) {
LAB_00b31dfc:
                CRYPTO_THREAD_unlock(DAT_01d3ac20);
                return;
              }
              uVar9 = ((uVar8 ^ 1) & lVar15 - 1U) * uVar7;
              plVar1 = (long *)((long)DAT_01d3ac40 + uVar9);
              if (plVar1 == (long *)0x0) goto LAB_00b31dfc;
              uVar11 = 0;
              if (uVar7 != 0) {
                uVar11 = uVar9 / uVar7;
              }
              uVar10 = uVar11 + lVar15 >> 3;
              uVar9 = uVar11 + lVar15 ^ 1;
              uVar11 = 1L << (uVar9 & 7);
              if (((uVar11 & *(byte *)(DAT_01d3ac68 + uVar10)) == 0) ||
                 ((uVar11 & *(byte *)(DAT_01d3ac70 + uVar10)) != 0)) {
                if (param_1 != (long *)0x0) goto LAB_00b31da0;
              }
              else if (param_1 != (long *)((long)DAT_01d3ac40 + (uVar9 & lVar15 - 1U) * uVar7)) {
LAB_00b31da0:
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: ptr == sh_find_my_buddy(buddy, list)",
                            "crypto/mem_sec.c",0x225);
              }
              if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: ptr != NULL","crypto/mem_sec.c",0x226);
              }
              if (((int)uVar6 < 0) || (DAT_01d3ac58 <= lVar14 >> 0x20)) goto LAB_00b31e94;
              if ((uVar7 - 1 & (long)param_1 - (long)DAT_01d3ac40) != 0) goto LAB_00b31eac;
              if ((uVar8 == 0) || (DAT_01d3ac78 <= uVar8)) break;
              if ((1L << (uVar8 & 7) & uVar4) != 0) {
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)",
                            "crypto/mem_sec.c",0x227);
              }
              FUN_00b323d8(param_1,uVar6 & 0xffffffff);
              lVar2 = *param_1;
              if (lVar2 != 0) {
                *(long *)(lVar2 + 8) = param_1[1];
              }
              *(long *)param_1[1] = lVar2;
              if (((*param_1 != 0) &&
                  ((plVar3 = *(long **)(*param_1 + 8), plVar3 < DAT_01d3ac50 ||
                   (DAT_01d3ac50 + DAT_01d3ac58 <= plVar3)))) &&
                 ((plVar3 < DAT_01d3ac40 || ((long *)((long)DAT_01d3ac40 + DAT_01d3ac48) <= plVar3))
                 )) {
LAB_00b31edc:
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: WITHIN_FREELIST(temp2->p_next) || WITHIN_ARENA(temp2->p_next)"
                            ,"crypto/mem_sec.c",0x14d);
              }
              if (DAT_01d3ac58 <= lVar14 >> 0x20) goto LAB_00b31e94;
              uVar8 = DAT_01d3ac48 >> (uVar6 & 0x3f);
              if ((uVar8 - 1 & (long)param_1 - (long)DAT_01d3ac40) != 0) goto LAB_00b31eac;
              uVar7 = 0;
              if (uVar8 != 0) {
                uVar7 = (ulong)((long)param_1 - (long)DAT_01d3ac40) / uVar8;
              }
              uVar7 = uVar7 + lVar15;
              if ((uVar7 == 0) || (DAT_01d3ac78 <= uVar7)) break;
              if ((1L << (uVar7 & 7) & (ulong)*(byte *)(DAT_01d3ac70 + (uVar7 >> 3))) != 0) {
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)",
                            "crypto/mem_sec.c",0x22a);
              }
              FUN_00b323d8(plVar1,uVar6 & 0xffffffff,DAT_01d3ac68);
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                *(long *)(lVar15 + 8) = plVar1[1];
              }
              *(long *)plVar1[1] = lVar15;
              if (((*plVar1 != 0) &&
                  ((plVar3 = *(long **)(*plVar1 + 8), plVar3 < DAT_01d3ac50 ||
                   (DAT_01d3ac50 + DAT_01d3ac58 <= plVar3)))) &&
                 ((plVar3 < DAT_01d3ac40 || ((long *)((long)DAT_01d3ac40 + DAT_01d3ac48) <= plVar3))
                 )) goto LAB_00b31edc;
              if (param_1 <= plVar1) {
                plVar1 = param_1;
              }
              if (((int)uVar12 < 0) || (DAT_01d3ac58 <= lVar14 + -0x100000000 >> 0x20))
              goto LAB_00b31e94;
              uVar6 = DAT_01d3ac48 >> (uVar12 & 0x3f);
              if ((uVar6 - 1 & (long)plVar1 - (long)DAT_01d3ac40) != 0) goto LAB_00b31eac;
              uVar8 = 0;
              if (uVar6 != 0) {
                uVar8 = (ulong)((long)plVar1 - (long)DAT_01d3ac40) / uVar6;
              }
              uVar8 = uVar8 + (1L << (uVar12 & 0x3f));
              if ((uVar8 == 0) || (DAT_01d3ac78 <= uVar8)) break;
              if ((1L << (uVar8 & 7) & (ulong)*(byte *)(DAT_01d3ac70 + (uVar8 >> 3))) != 0) {
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)",
                            "crypto/mem_sec.c",0x233);
              }
              FUN_00b32204(plVar1,uVar12 & 0xffffffff,DAT_01d3ac68);
              FUN_00b322ec((long)DAT_01d3ac50 + lVar13,plVar1);
              lVar14 = lVar14 + -0x100000000;
              param_1 = plVar1;
              uVar6 = uVar12;
              if ((long *)DAT_01d3ac50[uVar12] != plVar1) {
                    /* WARNING: Subroutine does not return */
                OPENSSL_die("assertion failed: sh.freelist[list] == ptr","crypto/mem_sec.c",0x236);
              }
            } while( true );
          }
        }
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: bit > 0 && bit < sh.bittable_size","crypto/mem_sec.c",0x111);
      }
LAB_00b31e94:
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: list >= 0 && list < sh.freelist_size","crypto/mem_sec.c",0x10e)
      ;
    }
  }
  CRYPTO_free(param_1);
  return;
}

