
ulong FT_Stream_GetULongLE(long param_1)

{
  ulong uVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x40);
  if (pbVar2 + 3 < *(byte **)(param_1 + 0x48)) {
    uVar1 = (ulong)pbVar2[3] << 0x18 | (ulong)pbVar2[2] << 0x10 | (ulong)pbVar2[1] << 8 |
            (ulong)*pbVar2;
    pbVar2 = pbVar2 + 4;
  }
  else {
    uVar1 = 0;
  }
  *(byte **)(param_1 + 0x40) = pbVar2;
                    /* try { // try from 01064c00 to 01164c07 has its CatchHandler @ 01064c0c */
  return uVar1;
}

