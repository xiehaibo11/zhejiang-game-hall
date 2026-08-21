
ulong FUN_00c2d894(long param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long local_220;
  ulong local_218;
  long local_210;
  undefined4 local_208;
  undefined4 local_204;
  
  lVar5 = FUN_00c29ac0(param_1,1);
  lVar6 = FUN_00c29ac0(param_1,2);
  iVar3 = FUN_00c29da0(param_1,3,1);
  if (iVar3 < 0) {
    uVar4 = iVar3 + *(int *)(lVar5 + 0x10);
  }
  else {
    uVar4 = iVar3 - 1;
  }
  if ((int)uVar4 < 0) {
    lVar7 = 0x18;
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar5 + 0x10);
    if (uVar1 < uVar4) {
      lVar7 = (ulong)uVar1 + 0x18;
      uVar4 = uVar1;
    }
    else {
      lVar7 = (ulong)uVar4 + 0x18;
    }
  }
  if ((param_2 == 0) ||
     (((*(ulong *)(param_1 + 0x28) <= *(long *)(param_1 + 0x20) + 0x18U ||
       (0xfffffffd < (uint)((long)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) >> 0x2f))) &&
      (iVar3 = FUN_00bfb8ac(lVar6), iVar3 != 0)))) {
    bVar2 = *(char *)(lVar6 + 0x18) == '^';
    if (bVar2) {
      lVar6 = lVar6 + 0x19;
    }
    else {
      lVar6 = lVar6 + 0x18;
    }
    local_218 = lVar5 + (ulong)*(uint *)(lVar5 + 0x10) + 0x18;
    uVar9 = lVar5 + lVar7;
    local_220 = lVar5 + 0x18;
    local_210 = param_1;
    do {
      local_204 = 0;
      local_208 = 0;
      lVar7 = FUN_00c2cc0c(&local_220,uVar9,lVar6);
      if (lVar7 != 0) {
        if (param_2 != 0) {
          piVar8 = *(int **)(param_1 + 0x28);
          *(int **)(param_1 + 0x28) = piVar8 + 2;
          *piVar8 = (int)uVar9 - ((int)lVar5 + 0x17);
          piVar8[1] = -0x70000;
          piVar8 = *(int **)(param_1 + 0x28);
          *(int **)(param_1 + 0x28) = piVar8 + 2;
          *piVar8 = (int)lVar7 - (int)(lVar5 + 0x18);
          piVar8[1] = -0x70000;
          iVar3 = FUN_00c2ca54(&local_220,0,0);
          return (ulong)(iVar3 + 2);
        }
        uVar9 = FUN_00c2ca54(&local_220,uVar9);
        return uVar9;
      }
    } while ((uVar9 < local_218) && (uVar9 = uVar9 + 1, !bVar2));
  }
  else {
    lVar7 = FUN_00bfb7f4(lVar5 + lVar7,lVar6 + 0x18,*(int *)(lVar5 + 0x10) - uVar4,
                         *(undefined4 *)(lVar6 + 0x10));
    if (lVar7 != 0) {
      lVar10 = *(long *)(param_1 + 0x28);
      iVar11 = (int)lVar7 - ((int)lVar5 + 0x18);
      *(int *)(lVar10 + -0x10) = iVar11 + 1;
      *(undefined4 *)(lVar10 + -0xc) = 0xfff90000;
      lVar5 = *(long *)(param_1 + 0x28);
      iVar3 = *(int *)(lVar6 + 0x10);
      *(undefined4 *)(lVar5 + -4) = 0xfff90000;
      *(int *)(lVar5 + -8) = iVar3 + iVar11;
      return 2;
    }
  }
  *(undefined8 *)(*(long *)(param_1 + 0x28) + -8) = 0xffffffffffffffff;
  return 1;
}

