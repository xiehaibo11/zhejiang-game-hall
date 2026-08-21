
undefined8 FUN_00e5aa04(long param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  long lVar10;
  int iVar11;
  
  lVar6 = *(long *)(param_1 + 0x5b8);
  if (lVar6 == 0) {
    return 0;
  }
  puVar9 = *(undefined1 **)(param_5 + 2);
  if (puVar9 == (undefined1 *)0x0) {
    param_5[1] = 0;
    if (*(ushort *)(lVar6 + 2) == 0) {
      return 0;
    }
    iVar7 = 0;
    iVar11 = *(ushort *)(lVar6 + 2) - 1;
    while( true ) {
      while( true ) {
        iVar5 = iVar11 - iVar7;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 1;
        }
        iVar5 = iVar7 + (iVar5 >> 1);
        puVar9 = (undefined1 *)(*(long *)(lVar6 + 8) + 2 + (long)(iVar5 * 6));
        if (param_2 <= CONCAT11(puVar9[-2],puVar9[-1])) break;
        iVar7 = iVar5 + 1;
        if (iVar11 < iVar7) {
          return 0;
        }
      }
      if (CONCAT11(puVar9[-2],puVar9[-1]) == param_2) break;
      iVar11 = iVar5 + -1;
      if (iVar11 < iVar7) {
        return 0;
      }
    }
    uVar1 = puVar9[2];
    uVar2 = puVar9[3];
    uVar8 = (uint)CONCAT11(uVar1,uVar2);
    if (uVar8 == 0) {
      return 0;
    }
    uVar3 = *puVar9;
    uVar4 = puVar9[1];
    *param_5 = uVar8;
    lVar10 = (ulong)CONCAT11(uVar3,uVar4) * 4;
    if (*(ulong *)(lVar6 + 0x20) < lVar10 + (ulong)CONCAT11(uVar1,uVar2) * 4) {
      return 0;
    }
    puVar9 = (undefined1 *)(*(long *)(lVar6 + 0x10) + lVar10);
    *(undefined1 **)(param_5 + 2) = puVar9;
    if (uVar8 == 0) {
      return 0;
    }
  }
  else if (*param_5 <= param_5[1]) {
    return 0;
  }
  *(undefined1 **)(param_5 + 2) = puVar9 + 2;
  *param_3 = (uint)CONCAT11(*puVar9,puVar9[1]);
  *(undefined1 **)(param_5 + 2) = puVar9 + 4;
  uVar8 = (uint)CONCAT11(puVar9[2],puVar9[3]);
  *param_4 = uVar8;
  if (*(uint *)(param_1 + 0x20) <= *param_3) {
    return 0;
  }
  if ((uVar8 != 0xffff) && (*(ushort *)(param_1 + 0x430) <= uVar8)) {
    return 0;
  }
  param_5[1] = param_5[1] + 1;
  return 1;
}

