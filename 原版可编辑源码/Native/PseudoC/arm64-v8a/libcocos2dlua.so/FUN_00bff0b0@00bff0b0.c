
void FUN_00bff0b0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = (undefined4 *)__errno();
  lVar6 = *(long *)(param_1 + 0x20);
  uVar1 = *puVar2;
  uVar5 = *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc;
  lVar3 = *(long *)((*(ulong *)(lVar6 + -0x10) & 0x7fffffffffff) + 0x20);
  uVar7 = *(undefined8 *)(uVar5 + 0xa8);
  *(undefined8 *)(uVar5 + 0xa8) = param_2;
  uVar4 = FUN_00bfe678(lVar3 + -0x5d,param_2,*(uint *)(uVar5 + 0xc0) >> 3);
  *(ulong *)(param_1 + 0x28) = lVar6 + (uVar4 & 0xffffffff) * 8;
  FUN_00c05fac(param_1);
  *(undefined8 *)(uVar5 + 0xa8) = uVar7;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(lVar3 + 0x158) = param_1;
  *(undefined4 *)(lVar3 + 0x80) = 0xffffffff;
  *puVar2 = uVar1;
  return;
}

