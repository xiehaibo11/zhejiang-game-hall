
/* WARNING: Type propagation algorithm not settling */

int a2d_ASN1_OBJECT(uchar *out,int olen,char *buf,int num)

{
  bool bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  ulong *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  int iVar22;
  int iVar23;
  size_t sVar24;
  uchar *ptr;
  int iVar25;
  int iVar26;
  ulong w;
  byte *pbVar27;
  byte *pbVar28;
  long lVar29;
  uint uVar30;
  uchar *puVar31;
  ulong uVar32;
  ulong uVar33;
  ulong *puVar34;
  BIGNUM *a;
  int iVar35;
  ulong uVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uchar auStack_78 [24];
  
  if (num == 0) {
    return 0;
  }
  if (num == -1) {
    sVar24 = strlen(buf);
    num = (int)sVar24;
  }
  bVar6 = *buf;
  if ((byte)(bVar6 - 0x30) < 3) {
    if (1 < num) {
      iVar25 = num + -2;
      if (iVar25 == 0) {
        a = (BIGNUM *)0x0;
        uVar30 = 0;
      }
      else {
        uVar39 = (ulong)(byte)buf[1];
        iVar26 = 0x18;
        a = (BIGNUM *)0x0;
        uVar36 = 0;
        pbVar28 = (byte *)(buf + 2);
        w = (ulong)bVar6 * 0x28 - 0x780;
        ptr = auStack_78;
        do {
          if (((int)uVar39 != 0x2e) && ((int)uVar39 != 0x20)) {
            iVar25 = 0x83;
            iVar26 = 0x4b;
            goto LAB_00af8e84;
          }
          uVar37 = 0;
          do {
            iVar22 = iVar25 + -1;
            iVar35 = (int)uVar36;
            if (iVar25 < 1) {
              bVar1 = false;
              goto joined_r0x00af8e38;
            }
            pbVar27 = pbVar28 + 1;
            bVar5 = *pbVar28;
            uVar39 = (ulong)bVar5;
            iVar25 = iVar22;
            if ((bVar5 == 0x20) || (bVar5 == 0x2e)) {
              bVar1 = false;
              pbVar28 = pbVar28 + 1;
              goto joined_r0x00af8e38;
            }
            if (9 < bVar5 - 0x30) goto LAB_00af8e6c;
            uVar37 = (uVar39 + uVar37 * 10) - 0x30;
            pbVar28 = pbVar27;
          } while (uVar37 < 0x1999999999999991);
          bVar1 = false;
          while (0 < iVar25) {
            bVar5 = *pbVar28;
            uVar39 = (ulong)bVar5;
            if ((bVar5 == 0x20) || (bVar5 == 0x2e)) {
              pbVar28 = pbVar28 + 1;
              iVar25 = iVar25 + -1;
              break;
            }
            if (9 < bVar5 - 0x30) goto LAB_00af8e6c;
            if (!bVar1) {
              if (((a == (BIGNUM *)0x0) && (a = BN_new(), a == (BIGNUM *)0x0)) ||
                 (iVar22 = BN_set_word(a,uVar37), iVar22 == 0)) goto LAB_00af8e88;
              bVar1 = true;
            }
            iVar22 = BN_mul_word(a,10);
            if ((iVar22 == 0) ||
               (iVar22 = BN_add_word(a,uVar39 - 0x30), pbVar28 = pbVar28 + 1, iVar25 = iVar25 + -1,
               iVar22 == 0)) goto LAB_00af8e88;
          }
joined_r0x00af8e38:
          if (iVar35 == 0) {
            if ((bVar6 < 0x32) && (0x27 < uVar37)) {
              iVar25 = 0x93;
              iVar26 = 0x6c;
              goto LAB_00af8e84;
            }
            if (!bVar1) {
              uVar37 = uVar37 + w;
              goto LAB_00af8ce0;
            }
            iVar22 = BN_add_word(a,w);
            if (iVar22 != 0) goto LAB_00af8c10;
            goto LAB_00af8e88;
          }
          if (bVar1) {
LAB_00af8c10:
            iVar23 = BN_num_bits(a);
            iVar22 = (iVar23 + 6) / 7;
            if (iVar22 <= iVar26) {
LAB_00af8c8c:
              if (iVar23 + 0xcU < 0xd) {
                lVar29 = 0;
              }
              else {
                lVar38 = 0;
                do {
                  uVar37 = BN_div_word(a,0x80);
                  if (uVar37 == 0xffffffffffffffff) goto LAB_00af8e88;
                  lVar29 = lVar38 + 1;
                  ptr[lVar38] = (uchar)uVar37;
                  lVar38 = lVar29;
                } while (iVar22 != (int)lVar29);
              }
              goto LAB_00af8cf8;
            }
            if (ptr != auStack_78) {
              CRYPTO_free(ptr);
            }
            iVar26 = iVar22 + 0x20;
            ptr = CRYPTO_malloc(iVar26,"crypto/asn1/a_object.c",0x7e);
            if (ptr != (uchar *)0x0) goto LAB_00af8c8c;
            goto LAB_00af8e94;
          }
LAB_00af8ce0:
          lVar29 = 0;
          do {
            bVar5 = (byte)uVar37;
            uVar37 = uVar37 >> 7;
            ptr[lVar29] = bVar5 & 0x7f;
            lVar29 = lVar29 + 1;
          } while (uVar37 != 0);
LAB_00af8cf8:
          iVar22 = (int)lVar29;
          uVar30 = iVar22 + iVar35;
          if (out != (uchar *)0x0) {
            if (olen < (int)uVar30) {
              iVar25 = 0x6b;
              iVar26 = 0x94;
              goto LAB_00af8e84;
            }
            if (1 < iVar22) {
              uVar37 = (ulong)iVar22;
              uVar36 = 0xfffffffffffffffd;
              if (-3 < (long)~uVar37) {
                uVar36 = ~uVar37;
              }
              uVar3 = uVar36 + uVar37 + 2;
              uVar36 = (ulong)iVar35;
              uVar32 = uVar36;
              if ((0x1f < uVar3) && (uVar33 = uVar3 & 0xffffffffffffffe0, uVar33 != 0)) {
                puVar31 = ptr + uVar37;
                uVar4 = 0xfffffffffffffffd;
                if (-3 < (long)~uVar37) {
                  uVar4 = ~uVar37;
                }
                if ((puVar31 <= out + uVar36) ||
                   (out + uVar4 + uVar37 + uVar36 + 2 <= ptr + (-2 - uVar4))) {
                  uVar32 = uVar33 + uVar36;
                  uVar37 = uVar37 - uVar33;
                  puVar34 = (ulong *)(puVar31 + -0x10);
                  puVar31 = out + uVar36 + 0x10;
                  uVar36 = uVar33;
                  do {
                    puVar2 = puVar34 + -2;
                    puVar14 = puVar34 + -1;
                    pbVar15 = (byte *)((long)puVar34 + -7);
                    pbVar16 = (byte *)((long)puVar34 + -6);
                    pbVar17 = (byte *)((long)puVar34 + -5);
                    pbVar18 = (byte *)((long)puVar34 + -4);
                    pbVar19 = (byte *)((long)puVar34 + -3);
                    pbVar20 = (byte *)((long)puVar34 + -2);
                    pbVar21 = (byte *)((long)puVar34 + -1);
                    uVar4 = *puVar34;
                    puVar7 = puVar34 + 1;
                    pbVar27 = (byte *)((long)puVar34 + 9);
                    pbVar8 = (byte *)((long)puVar34 + 10);
                    pbVar9 = (byte *)((long)puVar34 + 0xb);
                    pbVar10 = (byte *)((long)puVar34 + 0xc);
                    pbVar11 = (byte *)((long)puVar34 + 0xd);
                    pbVar12 = (byte *)((long)puVar34 + 0xe);
                    pbVar13 = (byte *)((long)puVar34 + 0xf);
                    uVar36 = uVar36 - 0x20;
                    puVar34 = puVar34 + -4;
                    auVar40._0_8_ = uVar4 | 0x8080808080808080;
                    auVar40[8] = (byte)*puVar7 | 0x80;
                    auVar40[9] = *pbVar27 | 0x80;
                    auVar40[10] = *pbVar8 | 0x80;
                    auVar40[0xb] = *pbVar9 | 0x80;
                    auVar40[0xc] = *pbVar10 | 0x80;
                    auVar40[0xd] = *pbVar11 | 0x80;
                    auVar40[0xe] = *pbVar12 | 0x80;
                    auVar40[0xf] = *pbVar13 | 0x80;
                    auVar42._0_8_ = *puVar2 | 0x8080808080808080;
                    auVar42[8] = (byte)*puVar14 | 0x80;
                    auVar42[9] = *pbVar15 | 0x80;
                    auVar42[10] = *pbVar16 | 0x80;
                    auVar42[0xb] = *pbVar17 | 0x80;
                    auVar42[0xc] = *pbVar18 | 0x80;
                    auVar42[0xd] = *pbVar19 | 0x80;
                    auVar42[0xe] = *pbVar20 | 0x80;
                    auVar42[0xf] = *pbVar21 | 0x80;
                    auVar41._8_8_ = 0x1020304050607;
                    auVar41._0_8_ = 0x8090a0b0c0d0e0f;
                    auVar41 = a64_TBL(ZEXT816(0),auVar40,auVar41);
                    auVar43._8_8_ = 0x1020304050607;
                    auVar43._0_8_ = 0x8090a0b0c0d0e0f;
                    auVar43 = a64_TBL(ZEXT816(0),auVar42,auVar43);
                    *(long *)(puVar31 + -8) = auVar41._8_8_;
                    *(long *)(puVar31 + -0x10) = auVar41._0_8_;
                    *(long *)(puVar31 + 8) = auVar43._8_8_;
                    *(long *)puVar31 = auVar43._0_8_;
                    puVar31 = puVar31 + 0x20;
                  } while (uVar36 != 0);
                  uVar36 = uVar32;
                  if (uVar3 == uVar33) goto LAB_00af8e08;
                }
              }
              do {
                uVar36 = uVar32 + 1;
                out[uVar32] = ptr[uVar37 - 1] | 0x80;
                bVar1 = 2 < (long)uVar37;
                uVar32 = uVar36;
                uVar37 = uVar37 - 1;
              } while (bVar1);
            }
LAB_00af8e08:
            uVar30 = (int)uVar36 + 1;
            out[(int)uVar36] = *ptr;
          }
          uVar36 = (ulong)uVar30;
        } while (0 < iVar25);
        if (ptr != auStack_78) {
          CRYPTO_free(ptr);
        }
      }
      BN_free(a);
      return uVar30;
    }
    iVar25 = 0x8a;
    iVar26 = 0x42;
  }
  else {
    iVar25 = 0x7a;
    iVar26 = 0x3d;
  }
  ERR_put_error(0xd,100,iVar25,"crypto/asn1/a_object.c",iVar26);
  a = (BIGNUM *)0x0;
LAB_00af8a4c:
  BN_free(a);
  return 0;
LAB_00af8e6c:
  iVar25 = 0x82;
  iVar26 = 0x58;
LAB_00af8e84:
  ERR_put_error(0xd,100,iVar25,"crypto/asn1/a_object.c",iVar26);
LAB_00af8e88:
  if (ptr != auStack_78) {
LAB_00af8e94:
    CRYPTO_free(ptr);
  }
  goto LAB_00af8a4c;
}

