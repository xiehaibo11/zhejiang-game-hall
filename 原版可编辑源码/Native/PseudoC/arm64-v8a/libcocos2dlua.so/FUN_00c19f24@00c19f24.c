
void FUN_00c19f24(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  *(undefined1 *)(param_1 + 6) = 0x43;
  uVar4 = 0;
  FUN_00c18d50(param_1,param_1 + 7,0xffffffff);
  uVar3 = *(uint *)(param_1 + 1);
  do {
    lVar1 = uVar4 * 8;
    uVar2 = (int)uVar4 + 1;
    uVar4 = (ulong)uVar2;
    FUN_00c18d50(param_1,*param_1 + lVar1,0xffffffff);
  } while (uVar2 <= uVar3);
  return;
}

