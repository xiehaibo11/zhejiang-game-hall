
void FUN_00e76600(long param_1,long param_2,long param_3,char param_4)

{
  long *plVar1;
  short sVar2;
  long lVar3;
  short *psVar4;
  undefined1 uVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x81) != '\0') {
    psVar4 = (short *)(lVar3 + 2);
    sVar2 = *psVar4;
    lVar6 = *(long *)(lVar3 + 0x10);
    uVar5 = 1;
    if (param_4 == '\0') {
      uVar5 = 2;
    }
    plVar1 = (long *)(*(long *)(lVar3 + 8) + (long)sVar2 * 0x10);
    *plVar1 = param_2 >> 10;
    plVar1[1] = param_3 >> 10;
    *(undefined1 *)(lVar6 + sVar2) = uVar5;
    *psVar4 = *psVar4 + 1;
    return;
  }
  *(short *)(lVar3 + 2) = *(short *)(lVar3 + 2) + 1;
  return;
}

