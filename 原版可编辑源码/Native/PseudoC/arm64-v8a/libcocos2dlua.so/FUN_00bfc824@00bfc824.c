
ulong * FUN_00bfc824(ulong param_1,int param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  puVar5 = (ulong *)(*(long *)(param_1 + 0x20) - 8);
  puVar4 = puVar5;
  while( true ) {
    puVar3 = puVar5;
    if (puVar3 <= (ulong *)(*(long *)(param_1 + 0x38) + 8U)) {
      *param_3 = param_2;
      return (ulong *)0x0;
    }
    if (param_1 == (puVar3[-1] & 0x7fffffffffff)) {
      param_2 = param_2 + 1;
    }
    iVar1 = param_2 + -1;
    if (param_2 == 0) break;
    uVar6 = *puVar3;
    lVar2 = -(uVar6 & 0xfffffffffffffff8);
    if ((uVar6 & 7) != 3) {
      param_2 = iVar1;
    }
    if ((uVar6 & 3) == 0) {
      lVar2 = ((ulong)*(byte *)(uVar6 - 3) + 2) * -8;
      param_2 = iVar1;
    }
    puVar5 = (ulong *)((long)puVar3 + lVar2);
    puVar4 = puVar3;
  }
  *param_3 = (int)((long)puVar4 - (long)puVar3 >> 3);
  return puVar3;
}

