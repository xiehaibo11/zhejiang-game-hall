
undefined8 FUN_00ab54c0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  
  if ((*(byte *)(param_1 + 0xc79) >> 2 & 1) == 0) {
    return 0;
  }
  uVar1 = (ulong)*(short *)(param_1 + 0xca6);
  if (0 < (long)uVar1) {
    if (*(short *)(param_1 + 0xca6) == 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar1 & 0xfffffffffffffffe;
      plVar3 = (long *)(param_1 + 0x7a0);
      uVar4 = uVar2;
      do {
        *plVar3 = param_1;
        plVar3[0xdf] = param_1;
        uVar4 = uVar4 - 2;
        plVar3 = plVar3 + 0x1be;
      } while (uVar4 != 0);
      if (uVar2 == uVar1) {
        return 1;
      }
    }
    plVar3 = (long *)(param_1 + uVar2 * 0x6f8 + 0x7a0);
    do {
      uVar2 = uVar2 + 1;
      *plVar3 = param_1;
      plVar3 = plVar3 + 0xdf;
    } while ((long)uVar2 < (long)uVar1);
  }
  return 1;
}

