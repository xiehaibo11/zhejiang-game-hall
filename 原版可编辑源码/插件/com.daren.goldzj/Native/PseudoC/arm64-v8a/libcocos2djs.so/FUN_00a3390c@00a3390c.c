
bool FUN_00a3390c(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = (uint)*param_1;
  if (*param_1 != 0) {
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_2;
      if (bVar3 == 0) break;
      uVar1 = uVar4 + 0xe0;
      if (0x19 < (uVar4 - 0x61 & 0xff)) {
        uVar1 = uVar4;
      }
      uVar2 = bVar3 + 0xe0;
      if (0x19 < bVar3 - 0x61) {
        uVar2 = (uint)bVar3;
      }
      if ((uVar1 & 0xff) != (uVar2 & 0xff)) break;
      uVar4 = (uint)*param_1;
      param_2 = param_2 + 1;
                    /* try { // try from 00a33958 to 00b3396f has its CatchHandler @ 00a33c70 */
    } while (uVar4 != 0);
  }
  bVar3 = *param_2;
  uVar1 = uVar4 + 0xe0;
  if (0x19 < (uVar4 - 0x61 & 0xff)) {
    uVar1 = uVar4;
  }
                    /* try { // try from 00a33978 to 00b33983 has its CatchHandler @ 00a33c6c */
  uVar4 = bVar3 + 0xe0;
                    /* try { // try from 00a33984 to 00b3398f has its CatchHandler @ 00a33c68 */
  if (0x19 < bVar3 - 0x61) {
    uVar4 = (uint)bVar3;
  }
                    /* try { // try from 00a33990 to 00b339a7 has its CatchHandler @ 00a33c80 */
  return (uVar1 & 0xff) == (uVar4 & 0xff);
}

