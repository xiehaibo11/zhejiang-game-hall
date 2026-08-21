
ulong lua_gc(long param_1,undefined4 param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x10);
  iVar2 = (int)param_3;
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar7 + 0x28) = 0x800000000000;
    return 0;
  case 1:
    if (iVar2 == -1) {
      lVar4 = (ulong)*(uint *)(lVar7 + 0x7c) * (*(ulong *)(lVar7 + 0x20) / 100);
    }
    else {
      lVar4 = *(long *)(lVar7 + 0x20);
    }
    *(long *)(lVar7 + 0x28) = lVar4;
    return 0;
  case 2:
    FUN_00c1a0c0(param_1);
    return 0;
  case 3:
    return *(ulong *)(lVar7 + 0x20) >> 10;
  case 4:
    return (ulong)((uint)*(undefined8 *)(lVar7 + 0x20) & 0x3ff);
  case 5:
    uVar5 = *(ulong *)(lVar7 + 0x20);
    uVar6 = -(param_3 >> 0x1f & 1) & 0xfffffc0000000000 | (param_3 & 0xffffffff) << 10;
    uVar3 = uVar5 - uVar6;
    if (uVar5 < uVar6) {
      uVar3 = 0;
    }
    *(ulong *)(lVar7 + 0x28) = uVar3;
    while (uVar3 <= uVar5) {
      iVar2 = FUN_00c19f80(param_1);
      if (0 < iVar2) {
        return 1;
      }
      uVar5 = *(ulong *)(lVar7 + 0x20);
      uVar3 = *(ulong *)(lVar7 + 0x28);
    }
    uVar3 = 0;
    break;
  case 6:
    uVar1 = *(uint *)(lVar7 + 0x7c);
    *(int *)(lVar7 + 0x7c) = iVar2;
    return (ulong)uVar1;
  case 7:
    uVar1 = *(uint *)(lVar7 + 0x78);
    *(int *)(lVar7 + 0x78) = iVar2;
    return (ulong)uVar1;
  default:
    uVar3 = 0xffffffff;
    break;
  case 9:
    return (ulong)(*(long *)(lVar7 + 0x28) != 0x800000000000);
  }
  return uVar3;
}

