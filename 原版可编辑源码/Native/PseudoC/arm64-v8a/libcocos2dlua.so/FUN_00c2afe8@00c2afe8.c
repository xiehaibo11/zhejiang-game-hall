
undefined8 FUN_00c2afe8(long param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + (long)param_2 * 8 + -8);
  if ((int)((long)uVar2 >> 0x2f) == -0xc) {
    uVar2 = uVar2 & 0x7fffffffffff;
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
    *(ulong *)(uVar1 + 0x10) = uVar2;
    if (((*(byte *)(uVar2 + 8) & 3) != 0) && ((*(byte *)(uVar1 + 8) >> 2 & 1) != 0)) {
      FUN_00c1a1ac(*(undefined8 *)(param_1 + 0x10));
    }
  }
  return 1;
}

