
char * X509_NAME_oneline(X509_NAME *a,char *buf,int size)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  char *__s;
  size_t sVar11;
  long lVar12;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  char *__dest;
  BUF_MEM *local_d0;
  char acStack_c0 [80];
  undefined8 local_70;
  undefined8 local_68;
  
  if (buf == (char *)0x0) {
    local_d0 = BUF_MEM_new();
    if (local_d0 == (BUF_MEM *)0x0) {
      local_d0 = (BUF_MEM *)0x0;
    }
    else {
      iVar8 = BUF_MEM_grow(local_d0,200);
      if (iVar8 != 0) {
        size = 200;
        *local_d0->data = '\0';
        goto joined_r0x00b6b858;
      }
    }
LAB_00b6b8c0:
    iVar8 = 0x41;
    iVar24 = 0xb2;
LAB_00b6b8d8:
    ERR_put_error(0xb,0x74,iVar8,"crypto/x509/x509_obj.c",iVar24);
    BUF_MEM_free(local_d0);
  }
  else {
    local_d0 = (BUF_MEM *)0x0;
    if (size != 0) {
joined_r0x00b6b858:
      if (a == (X509_NAME *)0x0) {
        if (local_d0 != (BUF_MEM *)0x0) {
          buf = local_d0->data;
          CRYPTO_free(local_d0);
        }
        strncpy(buf,"NO X509_NAME",(long)size);
        buf[(long)size - 1] = '\0';
        return buf;
      }
      iVar8 = OPENSSL_sk_num(a->entries);
      if (iVar8 < 1) {
        iVar8 = 0;
      }
      else {
        iVar8 = 0;
        iVar24 = 0;
        do {
          lVar17 = 1;
          puVar10 = (undefined8 *)OPENSSL_sk_value(a->entries,iVar8);
          iVar9 = OBJ_obj2nid((ASN1_OBJECT *)*puVar10);
          if ((iVar9 == 0) || (__s = OBJ_nid2sn(iVar9), __s == (char *)0x0)) {
            __s = acStack_c0;
            i2t_ASN1_OBJECT(acStack_c0,0x50,(ASN1_OBJECT *)*puVar10);
          }
          sVar11 = strlen(__s);
          puVar20 = (uint *)puVar10[1];
          uVar2 = *puVar20;
          uVar23 = (ulong)uVar2;
          if (0x100000 < (int)uVar2) {
            iVar8 = 0x86;
            iVar24 = 0x4b;
            goto LAB_00b6b8d8;
          }
          lVar12 = *(long *)(puVar20 + 2);
          uVar19 = 1;
          lVar18 = 0;
          if ((uVar2 & 3) == 0) {
            lVar21 = 3;
            lVar22 = 2;
            if (puVar20[1] == 0x1b) {
              local_70 = 0;
              local_68 = 0;
              if ((int)uVar2 < 1) {
                local_68._0_4_ = 0;
                local_70._4_4_ = 0;
                local_70._0_4_ = 0;
              }
              else {
                uVar19 = 0;
                do {
                  if (*(char *)(lVar12 + uVar19) != '\0') {
                    *(undefined4 *)((long)&local_70 + (uVar19 & 3) * 4) = 1;
                  }
                  uVar19 = uVar19 + 1;
                } while (uVar23 != uVar19);
              }
              bVar6 = local_70._4_4_ != 0;
              bVar7 = (int)local_70 != 0;
              bVar5 = (int)local_68 != 0;
              uVar19 = (ulong)((bVar6 || bVar7) || bVar5);
              lVar21 = 2;
              if ((bVar6 || bVar7) || bVar5) {
                lVar21 = 3;
              }
              if ((bVar6 || bVar7) || bVar5) {
                lVar17 = 2;
              }
              lVar18 = 0;
              lVar22 = lVar17;
              if ((!bVar6 && !bVar7) && !bVar5) {
                lVar18 = 3;
              }
            }
          }
          else {
            lVar21 = 3;
            lVar22 = 2;
          }
          uVar16 = (undefined4)uVar19;
          *(undefined4 *)((long)&local_70 + lVar21 * 4) = uVar16;
          *(undefined4 *)((long)&local_70 + lVar22 * 4) = uVar16;
          *(undefined4 *)((ulong)&local_70 | uVar19 << 2) = uVar16;
          *(undefined4 *)((long)&local_70 + lVar18 * 4) = 1;
          if ((int)uVar2 < 1) {
            iVar9 = 0;
          }
          else {
            uVar19 = 0;
            iVar9 = 0;
            do {
              if (*(int *)((long)&local_70 + (uVar19 & 3) * 4) != 0) {
                bVar3 = *(byte *)(lVar12 + uVar19);
                if ((bVar3 < 0x20) || (0x7e < bVar3)) {
                  iVar9 = iVar9 + 4;
                }
                else {
                  iVar9 = iVar9 + 1;
                }
              }
              uVar19 = uVar19 + 1;
            } while (uVar23 != uVar19);
          }
          iVar9 = iVar24 + (int)sVar11 + iVar9;
          iVar1 = iVar9 + 2;
          if (0x100000 < iVar1) {
            iVar8 = 0x86;
            iVar24 = 0x7c;
            goto LAB_00b6b8d8;
          }
          if (local_d0 == (BUF_MEM *)0x0) {
            pcVar13 = buf;
            if (size <= iVar1) goto joined_r0x00b6b8b0;
          }
          else {
            iVar9 = BUF_MEM_grow(local_d0,(long)(iVar9 + 3));
            if (iVar9 == 0) goto LAB_00b6b8c0;
            pcVar13 = local_d0->data;
          }
          pcVar13 = pcVar13 + iVar24;
          __dest = pcVar13 + 1;
          *pcVar13 = '/';
          memcpy(__dest,__s,sVar11 & 0xffffffff);
          pbVar14 = (byte *)(__dest + (int)sVar11 + 1);
          __dest[(int)sVar11] = '=';
          if (0 < (int)uVar2) {
            uVar19 = 0;
            lVar17 = *(long *)(puVar10[1] + 8);
            pbVar15 = pbVar14;
            do {
              pbVar14 = pbVar15;
              if (*(int *)((long)&local_70 + (uVar19 & 3) * 4) != 0) {
                bVar3 = *(byte *)(lVar17 + uVar19);
                if (bVar3 - 0x20 < 0x5f) {
                  pbVar14 = pbVar15 + 1;
                  *pbVar15 = bVar3;
                }
                else {
                  bVar4 = "0123456789ABCDEF"[bVar3 >> 4];
                  bVar3 = "0123456789ABCDEF"[bVar3 & 0xf];
                  pbVar15[0] = 0x5c;
                  pbVar15[1] = 0x78;
                  pbVar15[2] = bVar4;
                  pbVar14 = pbVar15 + 4;
                  pbVar15[3] = bVar3;
                }
              }
              uVar19 = uVar19 + 1;
              pbVar15 = pbVar14;
            } while (uVar23 != uVar19);
          }
          *pbVar14 = 0;
          iVar8 = iVar8 + 1;
          iVar9 = OPENSSL_sk_num(a->entries);
          iVar24 = iVar1;
        } while (iVar8 < iVar9);
      }
      if (local_d0 != (BUF_MEM *)0x0) {
        buf = local_d0->data;
        CRYPTO_free(local_d0);
      }
joined_r0x00b6b8b0:
      if (iVar8 != 0) {
        return buf;
      }
      *buf = '\0';
      return buf;
    }
  }
  return (char *)0x0;
}

