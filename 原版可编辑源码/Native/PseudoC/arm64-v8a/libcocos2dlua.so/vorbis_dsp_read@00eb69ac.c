
undefined8 vorbis_dsp_read(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48) + param_2;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x4c) < iVar1)) {
    return 0xffffff7d;
  }
  *(int *)(param_1 + 0x48) = iVar1;
  return 0;
}

