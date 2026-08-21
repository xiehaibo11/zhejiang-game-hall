
void FUN_00dedbd0(byte *param_1,int param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0x10;
  do {
    if ((int)((uint)(byte)(&DAT_01970a5c)[(ulong)param_1[-2] - (ulong)param_1[1]] +
             (uint)(byte)(&DAT_01970a5c)[(ulong)param_1[-1] - (ulong)*param_1] * 4) <=
        (int)(param_3 << 1 | 1U)) {
      FUN_00def98c(param_1,1);
    }
    lVar1 = lVar1 + -1;
    param_1 = param_1 + param_2;
  } while (lVar1 != 0);
  return;
}

