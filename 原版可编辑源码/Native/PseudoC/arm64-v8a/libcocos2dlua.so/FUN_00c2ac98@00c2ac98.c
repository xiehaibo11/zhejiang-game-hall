
undefined8 FUN_00c2ac98(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_00c29e20(param_1,1);
  lVar2 = FUN_00c29e6c(param_1,2);
  plVar3 = (long *)FUN_00c1cd14(param_1,*(undefined8 *)(param_1 + 0x20),0x11);
  if (*plVar3 == -1) {
    *(long *)(uVar1 + 0x20) = lVar2;
    if (((lVar2 != 0) && ((*(byte *)(lVar2 + 8) & 3) != 0)) &&
       ((*(byte *)(uVar1 + 8) >> 2 & 1) != 0)) {
      lVar2 = *(long *)(param_1 + 0x10);
      *(byte *)(uVar1 + 8) = *(byte *)(uVar1 + 8) & 0xfb;
      *(undefined8 *)(uVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x50);
      *(ulong *)(lVar2 + 0x50) = uVar1;
    }
    *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) = uVar1 | 0xfffa000000000000;
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3a0(param_1,0x3b7);
}

