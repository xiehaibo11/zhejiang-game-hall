
undefined8 FUN_00e743bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  short sVar3;
  short *psVar4;
  
  psVar4 = *(short **)(param_1 + 0x28);
  if (psVar4 == (short *)0x0) {
    return 3;
  }
  if (*(char *)(param_1 + 0x84) != '\0') {
    lVar1 = *(long *)(param_1 + 0x18);
    if ((*(uint *)(lVar1 + 0xc) < (int)*(short *)(lVar1 + 0x18) + (int)*(short *)(lVar1 + 0x60) + 1U
        ) && (uVar2 = FUN_00e13cd0(lVar1,0,1), (int)uVar2 != 0)) {
      return uVar2;
    }
    sVar3 = *psVar4;
    if (0 < (long)sVar3) {
      *(short *)(*(long *)(psVar4 + 0xc) + (long)sVar3 * 2 + -2) = psVar4[1] + -1;
      sVar3 = *psVar4;
    }
    *psVar4 = sVar3 + 1;
    return 0;
  }
  *psVar4 = *psVar4 + 1;
  return 0;
}

