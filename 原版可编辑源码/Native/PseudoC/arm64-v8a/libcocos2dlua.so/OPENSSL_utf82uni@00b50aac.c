
undefined2 * OPENSSL_utf82uni(char *param_1,uint param_2,undefined8 *param_3,int *param_4)

{
  ulong uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  long lVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined2 *puVar12;
  ulong local_58;
  
  sVar7 = (size_t)param_2;
  local_58 = 0;
  if (param_2 == 0xffffffff) {
    sVar7 = strlen(param_1);
  }
  iVar4 = (int)sVar7;
  iVar8 = 2;
  if (0 < iVar4) {
    iVar8 = 0;
    iVar9 = 0;
LAB_00b50b08:
    iVar2 = UTF8_getc((uchar *)(param_1 + iVar9),iVar4 - iVar9,&local_58);
    if (-1 < iVar2) goto code_r0x00b50b1c;
    if (iVar4 == -1) {
      sVar7 = strlen(param_1);
    }
    uVar1 = (sVar7 & 0xffffffff) << 1;
    uVar11 = -(sVar7 >> 0x1f & 1) & 0xfffffffe00000000 | uVar1;
    uVar10 = (uint)uVar1;
    iVar8 = uVar10 + 2;
    puVar3 = CRYPTO_malloc(iVar8,"crypto/pkcs12/p12_utl.c",0x19);
    if (puVar3 == (undefined2 *)0x0) {
      return (undefined2 *)0x0;
    }
    if (0 < (int)sVar7) {
      lVar6 = 0;
      do {
        puVar5 = (undefined1 *)((long)puVar3 + lVar6);
        *puVar5 = 0;
        iVar4 = (int)lVar6;
        lVar6 = lVar6 + 2;
        puVar5[1] = param_1[iVar4 >> 1];
      } while (lVar6 < (long)uVar11);
    }
    *(undefined1 *)((long)puVar3 + uVar11) = 0;
    *(undefined1 *)((long)puVar3 + (long)(int)(uVar10 | 1)) = 0;
    goto joined_r0x00b50c74;
  }
LAB_00b50b48:
  puVar3 = CRYPTO_malloc(iVar8,"crypto/pkcs12/p12_utl.c",0x71);
  if (puVar3 != (undefined2 *)0x0) {
    puVar12 = puVar3;
    if (0 < iVar4) {
      iVar9 = 0;
      do {
        iVar2 = UTF8_getc((uchar *)(param_1 + iVar9),iVar4 - iVar9,&local_58);
        uVar1 = local_58 - 0x10000;
        if (local_58 < 0x10000) {
          puVar5 = (undefined1 *)((long)puVar12 + 1);
          *(char *)puVar12 = (char)(local_58 >> 8);
          lVar6 = 2;
        }
        else {
          lVar6 = (uVar1 >> 10) + 0xd800;
          puVar5 = (undefined1 *)((long)puVar12 + 3);
          *(char *)((long)puVar12 + 1) = (char)lVar6;
          *(char *)puVar12 = (char)((ulong)lVar6 >> 8);
          *(byte *)(puVar12 + 1) = (byte)(uVar1 >> 8) & 3 | 0xdc;
          lVar6 = 4;
          local_58 = uVar1;
        }
        iVar9 = iVar2 + iVar9;
        puVar12 = (undefined2 *)((long)puVar12 + lVar6);
        *puVar5 = (char)local_58;
      } while (iVar9 < iVar4);
    }
    *puVar12 = 0;
joined_r0x00b50c74:
    if (param_4 != (int *)0x0) {
      *param_4 = iVar8;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = puVar3;
    }
  }
  return puVar3;
code_r0x00b50b1c:
  if (0x10 < local_58 >> 0x10) {
    return (undefined2 *)0x0;
  }
  iVar9 = iVar2 + iVar9;
  iVar2 = 4;
  if (local_58 >> 0x10 == 0) {
    iVar2 = 2;
  }
  iVar8 = iVar2 + iVar8;
  if (iVar4 <= iVar9) goto code_r0x00b50b44;
  goto LAB_00b50b08;
code_r0x00b50b44:
  iVar8 = iVar8 + 2;
  goto LAB_00b50b48;
}

