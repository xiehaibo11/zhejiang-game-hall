
undefined8 FUN_00c32e18(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (*(ulong **)(param_1 + 0x20) < *(ulong **)(param_1 + 0x28)) {
    uVar2 = **(ulong **)(param_1 + 0x20);
    uVar4 = uVar2 & 0x7fffffffffff;
    iVar1 = (int)((long)uVar2 >> 0x2f);
    if (iVar1 != -8) {
      if ((iVar1 != -9) || (*(char *)((uVar2 & 0x7fffffffffff) + 10) != '\0')) goto LAB_00c32e60;
      uVar4 = *(long *)((uVar2 & 0x7fffffffffff) + 0x20) - 0x68;
    }
    iVar1 = FUN_00c29cf0(param_1,2);
    uVar2 = (ulong)iVar1;
    if ((long)uVar2 < 0) {
      uVar3 = 0;
      if ((long)~uVar2 < (long)(ulong)*(uint *)(uVar4 + 0x30)) {
        uVar3 = 1;
        uVar2 = *(ulong *)(*(long *)(uVar4 + 0x20) + (long)iVar1 * 8);
        *(ulong *)(*(long *)(param_1 + 0x28) + -8) =
             uVar2 | (ulong)~(uint)*(byte *)(uVar2 + 9) << 0x2f;
      }
    }
    else {
      uVar3 = 0;
      if ((long)uVar2 < (long)(ulong)*(uint *)(uVar4 + 0x34)) {
        uVar3 = 1;
        *(undefined8 *)(*(long *)(param_1 + 0x28) + -8) =
             *(undefined8 *)(*(long *)(uVar4 + 0x20) + (long)iVar1 * 8);
      }
    }
    return uVar3;
  }
LAB_00c32e60:
                    /* WARNING: Subroutine does not return */
  FUN_00bfb554(param_1,1,6);
}

