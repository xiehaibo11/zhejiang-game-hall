
undefined8 vorbis_info_blocksize(long param_1,int param_2)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)param_2 * 8);
  }
  return 0xffffffff;
}

