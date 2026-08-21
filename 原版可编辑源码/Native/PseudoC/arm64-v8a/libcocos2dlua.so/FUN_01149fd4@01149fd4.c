
void FUN_01149fd4(long param_1,int param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((int)((uint)(byte)(&DAT_0149961c)
                          [(ulong)*(byte *)(param_1 + (long)param_2 * -2 + lVar1) -
                           (ulong)*(byte *)(param_1 + param_2 + lVar1)] +
             (uint)(byte)(&DAT_0149961c)
                         [(ulong)*(byte *)((param_1 - param_2) + lVar1) -
                          (ulong)*(byte *)(param_1 + lVar1)] * 4) <= (int)(param_3 << 1 | 1U)) {
      FUN_0114be34((byte *)(param_1 + lVar1),param_2);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  return;
}

