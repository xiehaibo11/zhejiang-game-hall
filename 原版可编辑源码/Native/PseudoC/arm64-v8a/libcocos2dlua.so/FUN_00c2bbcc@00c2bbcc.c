
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00c2bbcc(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int local_8 [2];
  
  local_8[0] = 0;
  local_8[1] = 0;
  uVar3 = FUN_00c23b40(param_1,1,local_8);
  if (*(long *)(param_1 + 0x20) + 8U < *(ulong *)(param_1 + 0x28)) {
    iVar2 = FUN_00c23b40(param_1,2,local_8 + 1);
    lVar6 = *(long *)(param_1 + 0x10);
    lVar7 = lVar6 + 0x88;
    *(long *)(lVar6 + 0xa0) = param_1;
    *(undefined8 *)(lVar6 + 0x88) = *(undefined8 *)(lVar6 + 0x98);
    if (iVar2 < 0) {
      iVar1 = 1 - iVar2;
      iVar2 = -iVar2;
      uVar5 = iVar1 * 0x1000000 | 0x2014;
    }
    else {
      uVar5 = (iVar2 + 1) * 0x1000000 | 0x14;
    }
  }
  else {
    if (local_8[0] == 0) {
      iVar2 = 8;
      uVar5 = 0x9000014;
    }
    else {
      iVar2 = 0x10;
      uVar5 = 0x11000014;
    }
    lVar6 = *(long *)(param_1 + 0x10);
    lVar7 = lVar6 + 0x88;
    *(long *)(lVar6 + 0xa0) = param_1;
    *(undefined8 *)(lVar6 + 0x88) = *(undefined8 *)(lVar6 + 0x98);
  }
  if (iVar2 < 0x10) {
    uVar3 = uVar3 & (1L << ((ulong)(uint)(iVar2 << 2) & 0x3f)) - 1U;
  }
  puVar4 = (undefined8 *)FUN_00bffbc4(lVar7,uVar5,uVar3);
  lVar7 = *(long *)(param_1 + 0x28);
  uVar3 = FUN_00bfba1c(param_1,puVar4[2],(int)*puVar4 - (int)puVar4[2]);
  *(ulong *)(lVar7 + -8) = uVar3 | 0xfffd800000000000;
  if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x20) < *(ulong *)(*(long *)(param_1 + 0x10) + 0x28)) {
    return 1;
  }
  FUN_00c19f80(param_1);
  return 1;
}

