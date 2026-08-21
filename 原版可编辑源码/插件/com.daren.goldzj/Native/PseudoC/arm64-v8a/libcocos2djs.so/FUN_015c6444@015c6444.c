
uint FUN_015c6444(long param_1,undefined8 param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = *(ushort *)(param_1 + (long)param_3 * 2);
  lVar7 = (long)param_3;
  if ((((param_3 <= param_4 + -6) && (uVar6 == 0x25)) &&
      (lVar3 = param_1 + lVar7 * 2, *(short *)(lVar3 + 2) == 0x75)) &&
     (*(ushort *)(lVar3 + 4) < 0x67)) {
    uVar8 = *(ushort *)(lVar3 + 4) - 0x30;
    if ((9 < uVar8) && (uVar9 = uVar8 | 0x20, uVar8 = uVar9 - 0x27, 5 < uVar9 - 0x31)) {
      uVar8 = 0xffffffff;
    }
    if ((((*(ushort *)(lVar3 + 6) < 0x67) && (uVar8 != 0xffffffff)) &&
        ((uVar9 = *(ushort *)(lVar3 + 6) - 0x30, uVar9 < 10 ||
         (((uVar9 | 0x20) - 0x31 < 6 && (uVar9 = (uVar9 | 0x20) - 0x27, uVar9 != 0xffffffff)))))) &&
       (iVar1 = uVar9 + uVar8 * 0x10, -1 < iVar1)) {
      lVar3 = param_1 + lVar7 * 2;
      uVar4 = *(ushort *)(lVar3 + 8);
      if (uVar4 < 0x67) {
        uVar5 = *(ushort *)(lVar3 + 10);
        uVar8 = uVar4 - 0x30;
        if ((9 < uVar8) && (uVar9 = uVar8 | 0x20, uVar8 = uVar9 - 0x27, 5 < uVar9 - 0x31)) {
          uVar8 = 0xffffffff;
        }
        if ((((uVar5 < 0x67) && (uVar8 != 0xffffffff)) &&
            ((uVar9 = uVar5 - 0x30, uVar9 < 10 ||
             (((uVar9 | 0x20) - 0x31 < 6 && (uVar9 = (uVar9 | 0x20) - 0x27, uVar9 != 0xffffffff)))))
            ) && (iVar2 = uVar9 + uVar8 * 0x10, -1 < iVar2)) {
          *param_5 = 6;
          return iVar2 + iVar1 * 0x100;
        }
      }
    }
  }
  if ((param_3 <= param_4 + -3) && (uVar6 == 0x25)) {
    param_1 = param_1 + lVar7 * 2;
    uVar4 = *(ushort *)(param_1 + 2);
    if (uVar4 < 0x67) {
      uVar5 = *(ushort *)(param_1 + 4);
      uVar8 = uVar4 - 0x30;
      if ((9 < uVar8) && (uVar9 = uVar8 | 0x20, uVar8 = uVar9 - 0x27, 5 < uVar9 - 0x31)) {
        uVar8 = 0xffffffff;
      }
      if ((((uVar5 < 0x67) && (uVar8 != 0xffffffff)) &&
          ((uVar9 = uVar5 - 0x30, uVar9 < 10 ||
           (((uVar9 | 0x20) - 0x31 < 6 && (uVar9 = (uVar9 | 0x20) - 0x27, uVar9 != 0xffffffff))))))
         && (uVar9 = uVar9 + uVar8 * 0x10, -1 < (int)uVar9)) {
        *param_5 = 3;
        return uVar9;
      }
    }
  }
  *param_5 = 1;
  return (uint)uVar6;
}

