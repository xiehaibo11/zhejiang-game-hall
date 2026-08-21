
undefined8 ssl3_renegotiate(long param_1)

{
  byte *pbVar1;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return 1;
  }
  pbVar1 = *(byte **)(param_1 + 0x90);
  if ((*pbVar1 & 1) == 0) {
    pbVar1[0xfc] = 1;
    pbVar1[0xfd] = 0;
    pbVar1[0xfe] = 0;
    pbVar1[0xff] = 0;
    return 1;
  }
  return 0;
}

