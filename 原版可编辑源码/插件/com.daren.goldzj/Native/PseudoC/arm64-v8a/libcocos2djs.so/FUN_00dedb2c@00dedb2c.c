
void FUN_00dedb2c(long param_1,int param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((int)((uint)(byte)(&DAT_01970a5c)
                          [(ulong)*(byte *)(param_1 + (long)param_2 * -2 + lVar1) -
                           (ulong)*(byte *)(param_1 + param_2 + lVar1)] +
             (uint)(byte)(&DAT_01970a5c)
                         [(ulong)*(byte *)((param_1 - param_2) + lVar1) -
                          (ulong)*(byte *)(param_1 + lVar1)] * 4) <= (int)(param_3 << 1 | 1U)) {
      FUN_00def98c((byte *)(param_1 + lVar1),param_2);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  return;
}

