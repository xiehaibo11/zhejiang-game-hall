
ulong FT_Stream_ReadULongLE(long *param_1,undefined4 *param_2)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  byte local_24 [4];
  
  *param_2 = 0;
  lVar1 = param_1[2];
  if ((ulong)param_1[1] <= lVar1 + 3U) {
LAB_01064e38:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    pbVar3 = (byte *)(*param_1 + lVar1);
    if (pbVar3 == (byte *)0x0) {
      uVar2 = 0;
      goto LAB_01064e7c;
    }
  }
  else {
                    /* try { // try from 01064e18 to 01164f4b has its CatchHandler @ 01064e18
                       catch() { ... } // from try @ 01064e18 with catch @ 01064e18
                       catch() { ... } // from try @ 010650b0 with catch @ 01064e18 */
    lVar1 = (*(code *)param_1[5])(param_1,lVar1,local_24,4);
    if (lVar1 != 4) goto LAB_01064e38;
    lVar1 = param_1[2];
    pbVar3 = local_24;
  }
  uVar2 = (ulong)pbVar3[3] << 0x18 | (ulong)pbVar3[2] << 0x10 | (ulong)pbVar3[1] << 8 |
          (ulong)*pbVar3;
LAB_01064e7c:
  param_1[2] = lVar1 + 4;
  return uVar2;
}

