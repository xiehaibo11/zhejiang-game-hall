
void FUN_00df40a4(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((param_4 < param_5) && (0 < param_6)) {
    lVar1 = (ulong)(param_6 - 1) * 4 + 4;
    do {
      lVar2 = 0;
      do {
        lVar3 = lVar2 * 4;
        lVar2 = lVar2 + 1;
        *(undefined4 *)(param_3 + lVar3) =
             *(undefined4 *)(param_2 + (ulong)(*(uint *)(param_1 + lVar3) >> 8 & 0xff) * 4);
      } while (param_6 != (int)lVar2);
      param_4 = param_4 + 1;
      param_1 = param_1 + lVar1;
      param_3 = param_3 + lVar1;
    } while (param_4 != param_5);
  }
  return;
}

