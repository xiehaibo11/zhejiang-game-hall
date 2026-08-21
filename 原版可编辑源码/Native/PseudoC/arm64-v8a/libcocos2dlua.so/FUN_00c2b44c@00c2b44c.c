
undefined8 FUN_00c2b44c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = 0x4f2;
  uVar2 = *(ulong *)((*(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff) + 0x30) &
          0x7fffffffffff;
  if (*(long *)(uVar2 + 0x50) == 0) {
    uVar1 = 0x512;
    if (*(byte *)(uVar2 + 0xb) < 2) {
      if (*(byte *)(uVar2 + 0xb) == 0) {
        if (*(long *)(uVar2 + 0x28) == *(long *)(uVar2 + 0x20)) goto LAB_00c2b474;
      }
      FUN_00bfe0e0(uVar2,(ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) >> 3);
      return 0;
    }
  }
LAB_00c2b474:
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3a0(param_1,uVar1);
}

