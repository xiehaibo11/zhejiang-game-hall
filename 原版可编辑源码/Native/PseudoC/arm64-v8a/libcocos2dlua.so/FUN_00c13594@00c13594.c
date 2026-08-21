
undefined8 FUN_00c13594(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x20);
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x168);
  *(long *)(lVar4 + 0x10) = param_1;
  uVar1 = FUN_00c132c0(param_1,lVar4,lVar3 + 8);
  uVar2 = FUN_00c1a314(*(undefined8 *)(lVar4 + 0x10),0x14);
  *(undefined1 *)(uVar2 + 9) = 10;
  *(undefined2 *)(uVar2 + 10) = 0x15;
  lVar3 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(uVar2 + 0x10) = uVar1;
  *(ulong *)(lVar3 + -8) = uVar2 | 0xfffa800000000000;
  if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x20) < *(ulong *)(*(long *)(param_1 + 0x10) + 0x28)) {
    return 1;
  }
  FUN_00c19f80(param_1);
  return 1;
}

