
uint pvmp3_get_main_data_size(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar2 = (int)((ulong)((long)*(int *)(inv_sfreq + (long)param_1[4] * 4) *
                       (long)(int)((uint)*(ushort *)
                                          (mp3_bitrate + (long)param_1[3] * 2 + (long)iVar3 * 0x1e)
                                  << 0x14)) >> 0x1c) >> (0x14U - iVar3 & 0x1f);
  if (iVar3 == 0) {
    *(int *)(param_2 + 4) = iVar2;
    if (param_1[7] != 3) {
      iVar3 = iVar2 + -0x20;
      iVar1 = param_1[5];
      goto joined_r0x00ec1888;
    }
  }
  else {
    iVar2 = iVar2 >> 1;
    *(int *)(param_2 + 4) = iVar2;
    if (param_1[7] == 3) {
      iVar3 = iVar2 + -9;
      iVar1 = param_1[5];
      goto joined_r0x00ec1888;
    }
  }
  iVar3 = iVar2 + -0x11;
  iVar1 = param_1[5];
joined_r0x00ec1888:
  if (iVar1 != 0) {
    iVar3 = iVar3 + 1;
    *(int *)(param_2 + 4) = iVar2 + 1;
  }
  iVar2 = -4;
  if (param_1[2] != 0) {
    iVar2 = -6;
  }
  return iVar2 + iVar3 & (iVar2 + iVar3 >> 0x1f ^ 0xffffffffU);
}

