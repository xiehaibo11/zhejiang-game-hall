
void FUN_011505a4(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6)

{
  long lVar1;
  long lVar2;
  
  if ((param_4 < param_5) && (0 < param_6)) {
    lVar1 = (ulong)(param_6 - 1) + 1;
    do {
      lVar2 = 0;
      do {
        *(char *)(param_3 + lVar2) =
             (char)((uint)*(undefined4 *)(param_2 + (ulong)*(byte *)(param_1 + lVar2) * 4) >> 8);
        lVar2 = lVar2 + 1;
      } while (param_6 != (int)lVar2);
      param_4 = param_4 + 1;
      param_3 = param_3 + lVar1;
      param_1 = param_1 + lVar1;
    } while (param_4 != param_5);
  }
  return;
}

