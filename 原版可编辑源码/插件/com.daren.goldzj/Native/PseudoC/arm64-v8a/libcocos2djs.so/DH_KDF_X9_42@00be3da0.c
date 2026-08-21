
/* WARNING: Removing unreachable block (ram,0x00be3fac) */
/* WARNING: Removing unreachable block (ram,0x00be3f48) */

undefined4
DH_KDF_X9_42(uchar *param_1,ulong param_2,void *param_3,ulong param_4,undefined8 param_5,
            long param_6,ulong param_7,EVP_MD *param_8)

{
  bool bVar1;
  long lVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  EVP_MD_CTX *ctx;
  undefined4 *puVar8;
  undefined4 uVar9;
  ulong len;
  uchar *puVar10;
  uchar *omax;
  ulong uVar11;
  uchar local_f8 [8];
  undefined *puStack_f0;
  undefined8 local_e8;
  uchar *local_b8;
  undefined4 local_b0 [2];
  uchar *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 *puStack_80;
  long local_78;
  int local_70;
  int local_6c;
  uchar *local_68;
  
  local_b8 = (uchar *)0x0;
  if ((param_4 < 0x40000001) && (ctx = (EVP_MD_CTX *)EVP_MD_CTX_new(), ctx != (EVP_MD_CTX *)0x0)) {
    iVar4 = EVP_MD_size(param_8);
    if ((param_2 < 0x40000001) && (param_7 < 0x40000001)) {
      local_a8 = local_f8;
      puStack_80 = local_b0;
      local_f8[0] = '\x04';
      local_f8[1] = '\0';
      local_f8[2] = '\0';
      local_f8[3] = '\0';
      local_f8[4] = '\x04';
      local_f8[5] = '\0';
      local_f8[6] = '\0';
      local_f8[7] = '\0';
      puStack_f0 = &DAT_01d27290;
      local_e8 = 0;
      local_b0[0] = 4;
      if (param_6 == 0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = &local_a0;
        local_a0 = (undefined4)param_7;
        uStack_9c = 4;
        uStack_90 = 0;
        local_98 = param_6;
      }
      local_88 = param_5;
      iVar5 = CMS_SharedInfo_encode(&local_b8,&local_88,puVar8,param_2 & 0xffffffff);
      puVar10 = local_b8;
      if (0 < iVar5) {
        omax = (uchar *)(long)iVar5;
        local_68 = local_b8;
        uVar6 = ASN1_get_object(&local_68,&local_78,&local_6c,&local_70,(long)omax);
        if ((uVar6 >> 7 & 1) == 0) {
          bVar1 = true;
          if ((local_6c == 0x10) && (local_70 == 0)) {
            bVar1 = false;
            omax = puVar10 + ((long)omax - (long)local_68);
            puVar10 = local_68;
          }
          if ((((!bVar1) &&
               (local_68 = puVar10,
               uVar6 = ASN1_get_object(&local_68,&local_78,&local_6c,&local_70,(long)omax),
               puVar3 = local_68, (uVar6 >> 7 & 1) == 0)) && (local_6c == 0x10)) && (local_70 == 0))
          {
            lVar2 = (long)omax - (long)local_68;
            uVar6 = ASN1_get_object(&local_68,&local_78,&local_6c,&local_70,(long)(puVar10 + lVar2))
            ;
            if ((((uVar6 >> 7 & 1) == 0) && (local_6c == 6)) && (local_70 == 0)) {
              local_68 = local_68 + local_78;
              uVar6 = ASN1_get_object(&local_68,&local_78,&local_6c,&local_70,
                                      (long)(puVar3 + ((long)(puVar10 + lVar2) - (long)local_68)));
              puVar10 = local_68;
              if (((uVar6 >> 7 & 1) == 0) && (local_6c == 4 && local_70 == 0)) {
                iVar7 = CRYPTO_memcmp(local_68,&DAT_01d27290,4);
                if (iVar7 != 0) {
                  iVar5 = 0;
                }
                if ((iVar5 != 0) &&
                   (iVar7 = EVP_DigestInit_ex(ctx,param_8,(ENGINE *)0x0), iVar7 != 0)) {
                  uVar11 = 1;
                  len = (ulong)iVar4;
                  do {
                    iVar4 = EVP_DigestUpdate(ctx,param_3,param_4);
                    if (iVar4 == 0) break;
                    puVar10[3] = (uchar)uVar11;
                    puVar10[2] = (uchar)(uVar11 >> 8);
                    puVar10[1] = (uchar)(uVar11 >> 0x10);
                    *puVar10 = (uchar)(uVar11 >> 0x18);
                    iVar4 = EVP_DigestUpdate(ctx,local_b8,(long)iVar5);
                    if (iVar4 == 0) break;
                    if (param_2 < len) {
                      iVar4 = EVP_DigestFinal(ctx,local_f8,(uint *)0x0);
                      if (iVar4 != 0) {
                        memcpy(param_1,local_f8,param_2);
                        OPENSSL_cleanse(local_f8,len);
LAB_00be40e8:
                        uVar9 = 1;
                        goto LAB_00be411c;
                      }
                      break;
                    }
                    iVar4 = EVP_DigestFinal(ctx,param_1,(uint *)0x0);
                    if (iVar4 == 0) break;
                    if (len == param_2) goto LAB_00be40e8;
                    param_1 = param_1 + len;
                    uVar11 = (ulong)((int)uVar11 + 1);
                    iVar4 = EVP_DigestInit_ex(ctx,param_8,(ENGINE *)0x0);
                    param_2 = param_2 - len;
                  } while (iVar4 != 0);
                }
              }
            }
          }
        }
      }
    }
    uVar9 = 0;
LAB_00be411c:
    CRYPTO_free(local_b8);
    EVP_MD_CTX_free(ctx);
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}

