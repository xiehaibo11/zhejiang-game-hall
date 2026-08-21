
undefined8 FUN_00c2bda0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  uint local_c;
  ulong local_8;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  iVar5 = 0;
  uVar7 = *(ulong *)(param_1 + 0x28);
  local_c = 0;
  do {
    iVar5 = iVar5 + 1;
    uVar4 = uVar4 + 8;
    FUN_00c23b40(param_1,iVar5,&local_c);
  } while (uVar4 < uVar7);
  if (local_c != 0) {
    uVar8 = (ulong)local_c;
    uVar4 = *(ulong *)(param_1 + 0x20);
    plVar9 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
    plVar9[2] = param_1;
    lVar3 = *plVar9;
    iVar5 = *(byte *)((*(ulong *)(uVar4 - 0x10) & 0x7fffffffffff) + 10) - 0x48;
    uVar1 = -(iVar5 >> 0x1f);
    uVar6 = -(ulong)uVar1;
    do {
      FUN_00c22594(plVar9,lVar3 + uVar8 * 0x18,&local_8,uVar4,0);
      uVar2 = local_c;
      if (uVar1 == 0) {
        if (iVar5 == 0) {
          uVar6 = uVar6 | local_8;
        }
        else {
          uVar6 = uVar6 ^ local_8;
        }
      }
      else {
        uVar6 = uVar6 & local_8;
      }
      uVar4 = uVar4 + 8;
    } while (uVar4 < uVar7);
    uVar4 = FUN_00c1a314(param_1,0x18);
    *(undefined1 *)(uVar4 + 9) = 10;
    *(short *)(uVar4 + 10) = (short)uVar2;
    lVar3 = *(long *)(param_1 + 0x20);
    *(ulong *)(uVar4 + 0x10) = uVar6;
    *(ulong *)(lVar3 + -0x10) = uVar4 | 0xfffa800000000000;
    return 2;
  }
  return 0;
}

