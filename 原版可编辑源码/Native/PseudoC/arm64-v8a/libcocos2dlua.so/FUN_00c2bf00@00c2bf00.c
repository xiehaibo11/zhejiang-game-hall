
undefined8 FUN_00c2bf00(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  uVar2 = FUN_00c23b40(param_1,1,&local_8);
  uVar3 = FUN_00c23b40(param_1,2,&local_4);
  if (local_8 == 0) {
    if (local_4 != 0) {
      lVar5 = *(long *)(param_1 + 0x20);
      *(int *)(lVar5 + 8) = (int)uVar3;
      *(undefined4 *)(lVar5 + 0xc) = 0xfff90000;
    }
    return 0;
  }
  uVar2 = FUN_00c23ac0(uVar2,uVar3,
                       *(byte *)((*(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff) +
                                10) - 0x42);
  iVar1 = local_8;
  uVar4 = FUN_00c1a314(param_1,0x18);
  *(undefined1 *)(uVar4 + 9) = 10;
  *(short *)(uVar4 + 10) = (short)iVar1;
  lVar5 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(uVar4 + 0x10) = uVar2;
  *(ulong *)(lVar5 + -0x10) = uVar4 | 0xfffa800000000000;
  return 2;
}

