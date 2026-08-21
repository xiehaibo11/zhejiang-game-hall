
void FUN_01148ff4(long param_1,int param_2,uint param_3,int param_4,long param_5,int param_6)

{
  int iVar1;
  ulong uVar2;
  
  if ((0 < param_4) && (0 < (int)param_3)) {
    iVar1 = 0;
    do {
      uVar2 = 0;
      do {
        *(uint *)(param_5 + uVar2 * 4) = (uint)*(byte *)(param_1 + uVar2) << 8;
        uVar2 = uVar2 + 1;
      } while (param_3 != uVar2);
      iVar1 = iVar1 + 1;
      param_1 = param_1 + param_2;
      param_5 = param_5 + (long)param_6 * 4;
    } while (iVar1 != param_4);
  }
  return;
}

