
undefined8 FUN_00e76710(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  short sVar3;
  short *psVar4;
  
  psVar4 = *(short **)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x81) != '\0') {
    lVar1 = *(long *)(param_1 + 0x18);
    if ((*(uint *)(lVar1 + 0xc) < (int)*(short *)(lVar1 + 0x18) + (int)*(short *)(lVar1 + 0x60) + 1U
        ) && (uVar2 = FUN_00e13cd0(lVar1,0,1), (int)uVar2 != 0)) {
      return uVar2;
    }
    sVar3 = *psVar4;
    if ((long)sVar3 < 1) goto LAB_00e76788;
    *(short *)(*(long *)(psVar4 + 0xc) + (long)sVar3 * 2 + -2) = psVar4[1] + -1;
  }
  sVar3 = *psVar4;
LAB_00e76788:
  *psVar4 = sVar3 + 1;
  return 0;
}

