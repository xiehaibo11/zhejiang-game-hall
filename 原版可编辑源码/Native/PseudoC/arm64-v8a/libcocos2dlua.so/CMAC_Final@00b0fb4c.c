
int CMAC_Final(CMAC_CTX *ctx,uchar *out,size_t *poutlen)

{
  CMAC_CTX *pCVar1;
  CMAC_CTX CVar2;
  uint uVar3;
  uint inl;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  CMAC_CTX *pCVar9;
  uchar *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (*(int *)(ctx + 0x88) == -1) {
LAB_00b0fccc:
    iVar4 = 0;
  }
  else {
    inl = EVP_CIPHER_CTX_block_size(*(EVP_CIPHER_CTX **)ctx);
    *poutlen = (long)(int)inl;
    if (out != (uchar *)0x0) {
      uVar3 = *(uint *)(ctx + 0x88);
      if (inl == uVar3) {
        if (0 < (int)inl) {
          uVar5 = (ulong)inl;
          if (inl < 0x20) {
LAB_00b0fbd4:
            lVar7 = 0;
          }
          else {
            lVar7 = uVar5 - (inl & 0x1f);
            if (lVar7 != 0) {
              if ((out < ctx + uVar5 + 0x68) && (ctx + 8 < (CMAC_CTX *)(out + uVar5)))
              goto LAB_00b0fbd4;
              pCVar9 = ctx + 0x78;
              puVar10 = out + 0x10;
              lVar6 = lVar7;
              do {
                uVar12 = *(undefined8 *)(pCVar9 + -8);
                uVar11 = *(undefined8 *)(pCVar9 + -0x10);
                uVar14 = *(undefined8 *)(pCVar9 + 8);
                uVar13 = *(undefined8 *)pCVar9;
                uVar16 = *(undefined8 *)(pCVar9 + -0x68);
                uVar15 = *(undefined8 *)(pCVar9 + -0x70);
                uVar18 = *(undefined8 *)(pCVar9 + -0x58);
                uVar17 = *(undefined8 *)(pCVar9 + -0x60);
                lVar6 = lVar6 + -0x20;
                pCVar9 = pCVar9 + 0x20;
                *(ulong *)(puVar10 + -8) =
                     CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar12 >> 0x38),
                              CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ (byte)((ulong)uVar12 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                                 (byte)((ulong)uVar12 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                          (byte)((ulong)uVar12 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                                   (byte)((ulong)uVar12 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar16 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar12 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar16 >> 8) ^ (byte)((ulong)uVar12 >> 8),
                                                  (byte)uVar16 ^ (byte)uVar12)))))));
                *(ulong *)(puVar10 + -0x10) =
                     CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                              CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)((ulong)uVar11 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar15 >> 0x28) ^
                                                 (byte)((ulong)uVar11 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                                          (byte)((ulong)uVar11 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                                   (byte)((ulong)uVar11 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar15 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar11 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar15 >> 8) ^ (byte)((ulong)uVar11 >> 8),
                                                  (byte)uVar15 ^ (byte)uVar11)))))));
                *(ulong *)(puVar10 + 8) =
                     CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                              CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                                 (byte)((ulong)uVar14 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                          (byte)((ulong)uVar14 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                                   (byte)((ulong)uVar14 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar18 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar14 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar18 >> 8) ^ (byte)((ulong)uVar14 >> 8),
                                                  (byte)uVar18 ^ (byte)uVar14)))))));
                *(ulong *)puVar10 =
                     CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                              CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)((ulong)uVar13 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                                 (byte)((ulong)uVar13 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                          (byte)((ulong)uVar13 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                                   (byte)((ulong)uVar13 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar17 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar13 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar17 >> 8) ^ (byte)((ulong)uVar13 >> 8),
                                                  (byte)uVar17 ^ (byte)uVar13)))))));
                puVar10 = puVar10 + 0x20;
              } while (lVar6 != 0);
              if ((inl & 0x1f) == 0) goto LAB_00b0fca0;
            }
          }
          pCVar9 = ctx + lVar7 + 0x68;
          lVar6 = uVar5 - lVar7;
          pbVar8 = out + lVar7;
          do {
            CVar2 = *pCVar9;
            pCVar1 = pCVar9 + -0x60;
            lVar6 = lVar6 + -1;
            pCVar9 = pCVar9 + 1;
            *pbVar8 = (byte)*pCVar1 ^ (byte)CVar2;
            pbVar8 = pbVar8 + 1;
          } while (lVar6 != 0);
        }
      }
      else {
        iVar4 = (inl - uVar3) + -1;
        ctx[(long)(int)uVar3 + 0x68] = (CMAC_CTX)0x80;
        if (iVar4 != 0 && 0 < (int)(inl - uVar3)) {
          memset(ctx + (long)(int)uVar3 + 0x69,0,(long)iVar4);
        }
        if (0 < (int)inl) {
          uVar5 = (ulong)inl;
          if (inl < 0x20) {
LAB_00b0fc70:
            lVar7 = 0;
          }
          else {
            lVar7 = uVar5 - (inl & 0x1f);
            if (lVar7 != 0) {
              if ((out < ctx + uVar5 + 0x68) && (ctx + 0x28 < (CMAC_CTX *)(out + uVar5)))
              goto LAB_00b0fc70;
              pCVar9 = ctx + 0x78;
              puVar10 = out + 0x10;
              lVar6 = lVar7;
              do {
                uVar12 = *(undefined8 *)(pCVar9 + -8);
                uVar11 = *(undefined8 *)(pCVar9 + -0x10);
                uVar14 = *(undefined8 *)(pCVar9 + 8);
                uVar13 = *(undefined8 *)pCVar9;
                uVar16 = *(undefined8 *)(pCVar9 + -0x48);
                uVar15 = *(undefined8 *)(pCVar9 + -0x50);
                uVar18 = *(undefined8 *)(pCVar9 + -0x38);
                uVar17 = *(undefined8 *)(pCVar9 + -0x40);
                lVar6 = lVar6 + -0x20;
                pCVar9 = pCVar9 + 0x20;
                *(ulong *)(puVar10 + -8) =
                     CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar12 >> 0x38),
                              CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ (byte)((ulong)uVar12 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                                 (byte)((ulong)uVar12 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                          (byte)((ulong)uVar12 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                                   (byte)((ulong)uVar12 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar16 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar12 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar16 >> 8) ^ (byte)((ulong)uVar12 >> 8),
                                                  (byte)uVar16 ^ (byte)uVar12)))))));
                *(ulong *)(puVar10 + -0x10) =
                     CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                              CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)((ulong)uVar11 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar15 >> 0x28) ^
                                                 (byte)((ulong)uVar11 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                                          (byte)((ulong)uVar11 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                                   (byte)((ulong)uVar11 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar15 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar11 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar15 >> 8) ^ (byte)((ulong)uVar11 >> 8),
                                                  (byte)uVar15 ^ (byte)uVar11)))))));
                *(ulong *)(puVar10 + 8) =
                     CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                              CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                                 (byte)((ulong)uVar14 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                          (byte)((ulong)uVar14 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                                   (byte)((ulong)uVar14 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar18 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar14 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar18 >> 8) ^ (byte)((ulong)uVar14 >> 8),
                                                  (byte)uVar18 ^ (byte)uVar14)))))));
                *(ulong *)puVar10 =
                     CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                              CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)((ulong)uVar13 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                                 (byte)((ulong)uVar13 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                          (byte)((ulong)uVar13 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                                   (byte)((ulong)uVar13 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar17 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar13 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar17 >> 8) ^ (byte)((ulong)uVar13 >> 8),
                                                  (byte)uVar17 ^ (byte)uVar13)))))));
                puVar10 = puVar10 + 0x20;
              } while (lVar6 != 0);
              if ((inl & 0x1f) == 0) goto LAB_00b0fca0;
            }
          }
          pCVar9 = ctx + lVar7 + 0x68;
          lVar6 = uVar5 - lVar7;
          pbVar8 = out + lVar7;
          do {
            CVar2 = *pCVar9;
            pCVar1 = pCVar9 + -0x40;
            lVar6 = lVar6 + -1;
            pCVar9 = pCVar9 + 1;
            *pbVar8 = (byte)*pCVar1 ^ (byte)CVar2;
            pbVar8 = pbVar8 + 1;
          } while (lVar6 != 0);
        }
      }
LAB_00b0fca0:
      iVar4 = EVP_Cipher(*(EVP_CIPHER_CTX **)ctx,out,out,inl);
      if (iVar4 == 0) {
        OPENSSL_cleanse(out,(long)(int)inl);
        goto LAB_00b0fccc;
      }
    }
    iVar4 = 1;
  }
  return iVar4;
}

