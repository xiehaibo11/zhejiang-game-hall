
void * OPENSSL_uni2utf8(long param_1,uint param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  
  if ((param_2 & 1) != 0) {
    return (void *)0x0;
  }
  if ((int)param_2 < 1) {
    iVar9 = 0;
  }
  else {
    iVar7 = 0;
    iVar9 = 0;
    do {
      iVar4 = param_2 - iVar7;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        if (iVar4 < 2) {
LAB_00b50d9c:
          uVar3 = param_2;
          if ((int)param_2 < 0) {
            uVar3 = param_2 + 1;
          }
          iVar9 = (int)uVar3 >> 1;
          if ((param_2 == 0) || (*(char *)(param_1 + (int)param_2 + -1) != '\0')) {
            iVar9 = iVar9 + 1;
          }
          pvVar5 = CRYPTO_malloc(iVar9,"crypto/pkcs12/p12_utl.c",0x35);
          if (pvVar5 == (void *)0x0) {
            return (void *)0x0;
          }
          lVar8 = 0;
          do {
            puVar1 = (undefined1 *)(param_1 + 1 + lVar8);
            iVar7 = (int)lVar8;
            lVar8 = lVar8 + 2;
            *(undefined1 *)((long)pvVar5 + (long)(iVar7 >> 1)) = *puVar1;
          } while (lVar8 < (int)param_2);
          *(undefined1 *)((long)pvVar5 + (long)iVar9 + -1) = 0;
          return pvVar5;
        }
        pbVar2 = (byte *)(param_1 + iVar7);
        uVar6 = (ulong)CONCAT11(*pbVar2,pbVar2[1]);
        if ((*pbVar2 & 0xf8) == 0xd8) {
          if ((iVar4 < 4) || ((pbVar2[2] & 0xfc) != 0xdc)) goto LAB_00b50d9c;
          uVar6 = (uVar6 * 0x400 - 0x3600000 | (ulong)(CONCAT11(pbVar2[2],pbVar2[3]) - 0xdc00)) +
                  0x10000;
        }
        if (3 < iVar4) {
          iVar4 = 4;
        }
        iVar4 = UTF8_putc((uchar *)0x0,iVar4,uVar6);
        if (iVar4 < 0) goto LAB_00b50d9c;
      }
      iVar10 = iVar4;
      if (iVar4 != 4) {
        iVar10 = 2;
      }
      iVar7 = iVar10 + iVar7;
      iVar9 = iVar4 + iVar9;
    } while (iVar7 < (int)param_2);
  }
  if (((param_2 == 0) || (*(char *)(param_1 + (int)param_2 + -2) != '\0')) ||
     (*(char *)(param_1 + (int)param_2 + -1) != '\0')) {
    iVar9 = iVar9 + 1;
  }
  pvVar5 = CRYPTO_malloc(iVar9,"crypto/pkcs12/p12_utl.c",0xc5);
  if (pvVar5 != (void *)0x0) {
    if ((int)param_2 < 1) {
      lVar8 = 0;
    }
    else {
      iVar9 = 0;
      iVar7 = 0;
      do {
        iVar4 = param_2 - iVar9;
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else if (iVar4 < 2) {
LAB_00b50ee4:
          iVar4 = -1;
        }
        else {
          pbVar2 = (byte *)(param_1 + iVar9);
          uVar6 = (ulong)CONCAT11(*pbVar2,pbVar2[1]);
          if ((*pbVar2 & 0xf8) == 0xd8) {
            if ((iVar4 < 4) || ((pbVar2[2] & 0xfc) != 0xdc)) goto LAB_00b50ee4;
            uVar6 = (uVar6 * 0x400 - 0x3600000 | (ulong)(CONCAT11(pbVar2[2],pbVar2[3]) - 0xdc00)) +
                    0x10000;
          }
          if (3 < iVar4) {
            iVar4 = 4;
          }
          iVar4 = UTF8_putc((uchar *)((long)pvVar5 + (long)iVar7),iVar4,uVar6);
        }
        iVar10 = iVar4;
        if (iVar4 != 4) {
          iVar10 = 2;
        }
        iVar9 = iVar10 + iVar9;
        iVar7 = iVar4 + iVar7;
      } while (iVar9 < (int)param_2);
      lVar8 = (long)iVar7;
    }
    if (((param_2 == 0) || (*(char *)(param_1 + (int)param_2 + -2) != '\0')) ||
       (*(char *)(param_1 + (int)param_2 + -1) != '\0')) {
      *(undefined1 *)((long)pvVar5 + lVar8) = 0;
    }
  }
  return pvVar5;
}

