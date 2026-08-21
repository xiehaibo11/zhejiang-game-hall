
void FUN_01128088(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7,int param_8,long param_9,long param_10,long param_11,
                 long param_12)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if ((param_6 != 0) && (param_5 != 0)) {
    lVar1 = (ulong)(param_5 - 1) + 1;
    lVar3 = (long)param_7;
    do {
      lVar4 = 0;
      param_6 = param_6 + -1;
      do {
        uVar2 = ~(uint)*(byte *)(param_12 + lVar4) & 0xff;
        *(uint *)(param_2 + lVar4 * 4) =
             ((~(uint)*(byte *)(param_9 + lVar4) & 0xff) * uVar2) / 0xff |
             ((uint)((ulong)((~(uint)*(byte *)(param_10 + lVar4) & 0xff) * uVar2) * 0x80808081 >>
                    0x20) & 0x7fff80) << 1 |
             ((uint)((ulong)((~(uint)*(byte *)(param_11 + lVar4) & 0xff) * uVar2) * 0x80808081 >>
                    0x20) & 0x7f80) << 9 | 0xff000000;
        lVar4 = lVar4 + 1;
      } while (param_5 != (int)lVar4);
      param_9 = param_9 + lVar1 + lVar3;
      param_11 = param_11 + lVar1 + lVar3;
      param_10 = param_10 + lVar1 + lVar3;
      param_12 = param_12 + lVar1 + lVar3;
      param_2 = param_2 + (long)param_8 * 4 + (ulong)(param_5 - 1) * 4 + 4;
    } while (param_6 != 0);
  }
  return;
}

