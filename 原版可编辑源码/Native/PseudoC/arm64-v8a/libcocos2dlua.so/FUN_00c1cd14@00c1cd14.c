
long FUN_00c1cd14(long param_1,ulong *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  uVar1 = (uint)((long)*param_2 >> 0x2f);
  if ((uVar1 == 0xfffffff4) || (uVar1 == 0xfffffff3)) {
    lVar3 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)((*param_2 & 0x7fffffffffff) + 0x20);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    uVar4 = 0x23;
    if (0xfffffff2 < uVar1) {
      uVar4 = 0x15 - uVar1;
    }
    lVar2 = *(long *)(lVar3 + (ulong)uVar4 * 8 + 0x170);
  }
  if (lVar2 != 0) {
    lVar3 = FUN_00c1bc28(lVar2,*(undefined8 *)(lVar3 + (param_3 & 0xffffffff) * 8 + 0x170));
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = *(long *)(param_1 + 0x10);
  }
  return lVar3 + 0xe8;
}

