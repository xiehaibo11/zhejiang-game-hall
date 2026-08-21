
bool FUN_00a33994(byte *param_1,byte *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*param_1;
  if (*param_1 != 0) {
    do {
      param_1 = param_1 + 1;
      if (param_3 == 0) break;
      bVar2 = *param_2;
      if (bVar2 == 0) break;
      uVar4 = uVar3 + 0xe0;
      if (0x19 < (uVar3 - 0x61 & 0xff)) {
        uVar4 = uVar3;
      }
      uVar1 = bVar2 + 0xe0;
      if (0x19 < bVar2 - 0x61) {
        uVar1 = (uint)bVar2;
      }
      if ((uVar4 & 0xff) != (uVar1 & 0xff)) goto LAB_00a339f4;
      uVar3 = (uint)*param_1;
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (uVar3 != 0);
  }
  if (param_3 == 0) {
                    /* try { // try from 00a33a2c to 00b33a93 has its CatchHandler @ 00a33c80 */
    return true;
  }
  bVar2 = *param_2;
LAB_00a339f4:
  uVar4 = bVar2 + 0xe0;
  uVar1 = uVar3 + 0xe0;
  if (0x19 < (uVar3 - 0x61 & 0xff)) {
    uVar1 = uVar3;
  }
                    /* try { // try from 00a33a10 to 00b33a17 has its CatchHandler @ 00a33c50 */
  if (0x19 < bVar2 - 0x61) {
    uVar4 = (uint)bVar2;
  }
  return (uVar1 & 0xff) == (uVar4 & 0xff);
}

