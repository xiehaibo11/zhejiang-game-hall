
uint pvmp3_get_main_data_size(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar3 = (int)((ulong)((long)*(int *)(inv_sfreq + (long)param_1[4] * 4) *
                       (long)(int)((uint)*(ushort *)
                                          (mp3_bitrate + (long)param_1[3] * 2 + (long)iVar2 * 0x1e)
                                  << 0x14)) >> 0x1c) >> (0x14U - iVar2 & 0x1f);
  if (iVar2 == 0) {
    *(int *)(param_2 + 4) = iVar3;
    if (param_1[7] != 3) {
      iVar2 = iVar3 + -0x20;
      iVar1 = param_1[5];
      goto joined_r0x00e95330;
    }
  }
  else {
    iVar3 = iVar3 >> 1;
    *(int *)(param_2 + 4) = iVar3;
    if (param_1[7] == 3) {
      iVar2 = iVar3 + -9;
      iVar1 = param_1[5];
      goto joined_r0x00e95330;
    }
  }
  iVar2 = iVar3 + -0x11;
  iVar1 = param_1[5];
joined_r0x00e95330:
  if (iVar1 != 0) {
    iVar2 = iVar2 + 1;
    *(int *)(param_2 + 4) = iVar3 + 1;
  }
  iVar3 = -4;
  if (param_1[2] != 0) {
    iVar3 = -6;
  }
  return iVar3 + iVar2 & (iVar3 + iVar2 >> 0x1f ^ 0xffffffffU);
}

