
uint FUN_015c6208(long param_1,undefined8 param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  lVar7 = (long)param_3;
  bVar6 = *(byte *)(param_1 + lVar7);
  if ((((param_3 <= param_4 + -6) && (bVar6 == 0x25)) &&
      (lVar3 = lVar7 + param_1, *(char *)(lVar3 + 1) == 'u')) && (*(byte *)(lVar3 + 2) < 0x67)) {
    uVar8 = *(byte *)(lVar3 + 2) - 0x30;
    if ((9 < uVar8) && (uVar9 = uVar8 | 0x20, uVar8 = uVar9 - 0x27, 5 < uVar9 - 0x31)) {
      uVar8 = 0xffffffff;
    }
    if ((((*(byte *)(lVar3 + 3) < 0x67) && (uVar8 != 0xffffffff)) &&
        ((uVar9 = *(byte *)(lVar3 + 3) - 0x30, uVar9 < 10 ||
         (((uVar9 | 0x20) - 0x31 < 6 && (uVar9 = (uVar9 | 0x20) - 0x27, uVar9 != 0xffffffff)))))) &&
       (iVar1 = uVar9 + uVar8 * 0x10, -1 < iVar1)) {
      bVar4 = *(byte *)(lVar7 + param_1 + 4);
      if (bVar4 < 0x67) {
        bVar5 = *(byte *)(lVar7 + param_1 + 5);
        uVar8 = bVar4 - 0x30;
        if ((9 < uVar8) && (uVar9 = uVar8 | 0x20, uVar8 = uVar9 - 0x27, 5 < uVar9 - 0x31)) {
          uVar8 = 0xffffffff;
        }
        if ((((bVar5 < 0x67) && (uVar8 != 0xffffffff)) &&
            ((uVar9 = bVar5 - 0x30, uVar9 < 10 ||
             (((uVar9 | 0x20) - 0x31 < 6 && (uVar9 = (uVar9 | 0x20) - 0x27, uVar9 != 0xffffffff)))))
            ) && (iVar2 = uVar9 + uVar8 * 0x10, -1 < iVar2)) {
          *param_5 = 6;
          return iVar2 + iVar1 * 0x100;
        }
      }
    }
  }
  if ((param_3 <= param_4 + -3) && (bVar6 == 0x25)) {
    bVar4 = *(byte *)(lVar7 + param_1 + 1);
    if (bVar4 < 0x67) {
      bVar5 = *(byte *)(lVar7 + param_1 + 2);
      uVar8 = bVar4 - 0x30;
      if ((9 < uVar8) && (uVar9 = uVar8 | 0x20, uVar8 = uVar9 - 0x27, 5 < uVar9 - 0x31)) {
        uVar8 = 0xffffffff;
      }
      if ((((bVar5 < 0x67) && (uVar8 != 0xffffffff)) &&
          ((uVar9 = bVar5 - 0x30, uVar9 < 10 ||
           (((uVar9 | 0x20) - 0x31 < 6 && (uVar9 = (uVar9 | 0x20) - 0x27, uVar9 != 0xffffffff))))))
         && (uVar9 = uVar9 + uVar8 * 0x10, -1 < (int)uVar9)) {
        *param_5 = 3;
        return uVar9;
      }
    }
  }
  *param_5 = 1;
  return (uint)bVar6;
}

