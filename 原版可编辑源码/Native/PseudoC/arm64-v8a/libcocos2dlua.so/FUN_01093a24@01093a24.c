
int FUN_01093a24(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x20);
  uVar7 = 0;
  if (uVar1 != 0) {
    uVar6 = (ulong)(*param_2 + 1);
    uVar9 = uVar1;
    do {
      uVar2 = uVar7 + uVar9 >> 1;
      uVar8 = (ulong)uVar2;
      uVar10 = *(ulong *)(lVar4 + uVar8 * 0x10);
      if (uVar10 == uVar6) goto LAB_01093a7c;
      if (uVar10 < uVar6) {
                    /* try { // try from 01093a5c to 01193a67 has its CatchHandler @ 01093ca0 */
        uVar7 = uVar2 + 1;
        uVar2 = uVar9;
      }
      uVar9 = uVar2;
    } while (uVar7 < uVar9);
  }
  if (uVar7 < uVar1) {
    uVar8 = (ulong)uVar7;
    uVar6 = *(ulong *)(lVar4 + uVar8 * 0x10);
LAB_01093a7c:
    iVar3 = *(ushort *)(lVar4 + uVar8 * 0x10 + 8) + 1;
  }
  else {
    uVar6 = 0;
    iVar3 = 0;
  }
  iVar5 = 0;
  if (uVar6 >> 0x20 == 0) {
    iVar5 = (int)uVar6;
  }
  *param_2 = iVar5;
  return iVar3;
}

