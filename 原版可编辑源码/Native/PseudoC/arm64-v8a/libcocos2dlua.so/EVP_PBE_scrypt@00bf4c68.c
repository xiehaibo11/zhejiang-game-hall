
bool EVP_PBE_scrypt(char *param_1,int param_2,uchar *param_3,int param_4,ulong param_5,ulong param_6
                   ,ulong param_7,ulong param_8,uchar *param_9,int param_10)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  uint3 uVar8;
  bool bVar9;
  int iVar10;
  uchar *out;
  EVP_MD *pEVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  uchar *puVar15;
  uint *puVar16;
  ulong uVar17;
  byte *pbVar18;
  long lVar19;
  uint *puVar20;
  ulong uVar21;
  uint *puVar22;
  uchar *puVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  uint *puVar29;
  byte *pbVar30;
  ulong uVar31;
  ulong uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  
  if (param_5 < 2) {
    return false;
  }
  if (param_6 == 0) {
    return false;
  }
  if (param_7 == 0) {
    return false;
  }
  uVar21 = param_5 - 1;
  if ((uVar21 & param_5) == 0) {
    uVar12 = 0;
    if (param_6 != 0) {
      uVar12 = 0x3fffffff / param_6;
    }
    if ((param_7 <= uVar12) &&
       ((0x3f < param_6 * 0x10 || (param_5 < (ulong)(1L << (param_6 * 0x10 & 0x3f)))))) {
      uVar12 = 0;
      if (param_6 != 0) {
        uVar12 = 0x1ffffffffffffff / param_6;
      }
      if (param_5 + 2 <= uVar12) {
        uVar31 = param_6 * 0x20;
        lVar28 = param_7 * 0x80;
        uVar12 = (param_5 + 2) * uVar31 * 4;
        uVar24 = lVar28 * param_6;
        uVar17 = ~uVar12;
        if (uVar24 < uVar17 || uVar24 - uVar17 == 0) {
          uVar12 = uVar24 + uVar12;
          uVar17 = 0x2000000;
          if (param_8 != 0) {
            uVar17 = param_8;
          }
          if (uVar17 < uVar12) {
            ERR_put_error(6,0xb5,0xac,"crypto/evp/scrypt.c",0xdb);
            return false;
          }
          if (param_9 == (uchar *)0x0) {
            return true;
          }
          out = CRYPTO_malloc((int)uVar12,"crypto/evp/scrypt.c",0xe3);
          if (out != (uchar *)0x0) {
            pEVar11 = EVP_sha256();
            iVar10 = PKCS5_PBKDF2_HMAC(param_1,param_2,param_3,param_4,1,pEVar11,(int)uVar24,out);
            if (iVar10 == 0) {
              bVar9 = false;
            }
            else {
              puVar2 = (uint *)(out + uVar24);
              puVar3 = puVar2 + param_6 * 0x20;
              puVar4 = puVar3 + param_6 * 0x20;
              if (uVar31 == 0) {
                uVar17 = 0;
                do {
                  uVar31 = uVar21;
                  if (1 < param_5) {
                    do {
                      FUN_00bf512c(puVar4,puVar4 + param_6 * -0x20,param_6);
                      uVar31 = uVar31 - 1;
                    } while (uVar31 != 0);
                  }
                  FUN_00bf512c(puVar2,puVar4 + (param_5 * 0x20 + -0x20) * param_6,param_6);
                  for (uVar31 = param_5; uVar31 != 0; uVar31 = uVar31 - 1) {
                    FUN_00bf512c(puVar2,puVar3,param_6);
                  }
                  uVar17 = uVar17 + 1;
                } while (uVar17 != param_7);
              }
              else {
                puVar29 = (uint *)(out + (lVar28 + 0x80) * param_6);
                lVar27 = (lVar28 + 0x100) * param_6;
                uVar17 = 0;
                do {
                  pbVar30 = out + param_6 * 0x80 * uVar17;
                  uVar13 = uVar31;
                  pbVar18 = pbVar30;
                  puVar16 = puVar4;
                  do {
                    bVar6 = *pbVar18;
                    uVar13 = uVar13 - 1;
                    *puVar16 = (uint)bVar6;
                    uVar7 = CONCAT11(pbVar18[1],bVar6);
                    *puVar16 = (uint)uVar7;
                    uVar8 = CONCAT12(pbVar18[2],uVar7);
                    *puVar16 = (uint)uVar8;
                    pbVar1 = pbVar18 + 3;
                    pbVar18 = pbVar18 + 4;
                    *puVar16 = CONCAT13(*pbVar1,uVar8);
                    puVar16 = puVar16 + 1;
                  } while (uVar13 != 0);
                  puVar23 = out;
                  uVar13 = uVar21;
                  if (1 < param_5) {
                    do {
                      FUN_00bf512c(puVar23 + param_6 * (lVar28 + 0x180),puVar23 + lVar27,param_6);
                      uVar13 = uVar13 - 1;
                      puVar23 = puVar23 + param_6 * 0x80;
                    } while (uVar13 != 0);
                  }
                  FUN_00bf512c(puVar2,puVar4 + (param_5 * 0x20 + -0x20) * param_6,param_6);
                  puVar16 = puVar2;
                  uVar13 = uVar31;
                  if (param_5 != 0) {
                    uVar32 = 0;
                    do {
                      uVar25 = 0;
                      if (param_5 != 0) {
                        uVar25 = puVar2[uVar31 - 0x10] / param_5;
                      }
                      lVar19 = (ulong)puVar2[uVar31 - 0x10] - uVar25 * param_5;
                      puVar14 = puVar4 + lVar19 * uVar31;
                      puVar20 = puVar2;
                      puVar22 = puVar29;
                      uVar25 = uVar31;
                      if ((uVar31 < 8) ||
                         ((lVar19 = lVar19 * 0x80, lVar26 = (lVar28 + 0x100 + lVar19) * param_6,
                          puVar29 < out + (lVar28 + 0x180 + lVar19) * param_6 &&
                          (out + lVar26 < out + lVar27)))) {
                        do {
                          uVar25 = uVar25 - 1;
                          *puVar22 = *puVar14 ^ *puVar20;
                          puVar14 = puVar14 + 1;
                          puVar20 = puVar20 + 1;
                          puVar22 = puVar22 + 1;
                        } while (uVar25 != 0);
                      }
                      else {
                        puVar15 = out + lVar26 + 0x10;
                        puVar14 = puVar29 + 4;
                        puVar23 = out + uVar24 + 0x10;
                        do {
                          uVar34 = *(undefined8 *)(puVar23 + -8);
                          uVar33 = *(undefined8 *)(puVar23 + -0x10);
                          uVar36 = *(undefined8 *)(puVar23 + 8);
                          uVar35 = *(undefined8 *)puVar23;
                          uVar38 = *(undefined8 *)(puVar15 + -8);
                          uVar37 = *(undefined8 *)(puVar15 + -0x10);
                          uVar40 = *(undefined8 *)(puVar15 + 8);
                          uVar39 = *(undefined8 *)puVar15;
                          uVar25 = uVar25 - 8;
                          puVar23 = puVar23 + 0x20;
                          puVar15 = puVar15 + 0x20;
                          *(ulong *)(puVar14 + -2) =
                               CONCAT17((byte)((ulong)uVar38 >> 0x38) ^
                                        (byte)((ulong)uVar34 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar38 >> 0x30) ^
                                                 (byte)((ulong)uVar34 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                                          (byte)((ulong)uVar34 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                                   (byte)((ulong)uVar34 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar38 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar34 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar38 >> 0x10) ^ (byte)((ulong)uVar34 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar38 >> 8) ^
                                                           (byte)((ulong)uVar34 >> 8),
                                                           (byte)uVar38 ^ (byte)uVar34)))))));
                          *(ulong *)(puVar14 + -4) =
                               CONCAT17((byte)((ulong)uVar37 >> 0x38) ^
                                        (byte)((ulong)uVar33 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar37 >> 0x30) ^
                                                 (byte)((ulong)uVar33 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                                          (byte)((ulong)uVar33 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                                                   (byte)((ulong)uVar33 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar37 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar33 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar37 >> 0x10) ^ (byte)((ulong)uVar33 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar37 >> 8) ^
                                                           (byte)((ulong)uVar33 >> 8),
                                                           (byte)uVar37 ^ (byte)uVar33)))))));
                          *(ulong *)(puVar14 + 2) =
                               CONCAT17((byte)((ulong)uVar40 >> 0x38) ^
                                        (byte)((ulong)uVar36 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar40 >> 0x30) ^
                                                 (byte)((ulong)uVar36 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar40 >> 0x28) ^
                                                          (byte)((ulong)uVar36 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar40 >> 0x20) ^
                                                                   (byte)((ulong)uVar36 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar40 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar36 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar40 >> 0x10) ^ (byte)((ulong)uVar36 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar40 >> 8) ^
                                                           (byte)((ulong)uVar36 >> 8),
                                                           (byte)uVar40 ^ (byte)uVar36)))))));
                          *(ulong *)puVar14 =
                               CONCAT17((byte)((ulong)uVar39 >> 0x38) ^
                                        (byte)((ulong)uVar35 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar39 >> 0x30) ^
                                                 (byte)((ulong)uVar35 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar39 >> 0x28) ^
                                                          (byte)((ulong)uVar35 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar39 >> 0x20) ^
                                                                   (byte)((ulong)uVar35 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar39 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar35 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar39 >> 0x10) ^ (byte)((ulong)uVar35 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar39 >> 8) ^
                                                           (byte)((ulong)uVar35 >> 8),
                                                           (byte)uVar39 ^ (byte)uVar35)))))));
                          puVar14 = puVar14 + 8;
                        } while (uVar25 != 0);
                      }
                      FUN_00bf512c(puVar2,puVar3,param_6);
                      uVar32 = uVar32 + 1;
                    } while (uVar32 != param_5);
                  }
                  do {
                    uVar5 = *puVar16;
                    uVar13 = uVar13 - 1;
                    *pbVar30 = (byte)uVar5;
                    pbVar30[1] = (byte)(uVar5 >> 8);
                    pbVar30[2] = (byte)(uVar5 >> 0x10);
                    pbVar30[3] = (byte)(uVar5 >> 0x18);
                    pbVar30 = pbVar30 + 4;
                    puVar16 = puVar16 + 1;
                  } while (uVar13 != 0);
                  uVar17 = uVar17 + 1;
                } while (uVar17 != param_7);
              }
              pEVar11 = EVP_sha256();
              iVar10 = PKCS5_PBKDF2_HMAC(param_1,param_2,out,(int)uVar24,1,pEVar11,param_10,param_9)
              ;
              bVar9 = iVar10 != 0;
            }
            CRYPTO_clear_free(out,uVar12,"crypto/evp/scrypt.c",0xf5);
            return bVar9;
          }
        }
      }
    }
  }
  return false;
}

