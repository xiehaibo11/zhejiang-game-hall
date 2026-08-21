
bool ssl3_do_compress(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = COMP_compress_block(*(COMP_CTX **)(param_1 + 0x128),*(uchar **)(param_2 + 0x18),0x4400,
                              *(uchar **)(param_2 + 0x20),*(int *)(param_2 + 8));
  if (-1 < iVar1) {
    *(int *)(param_2 + 8) = iVar1;
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x18);
  }
  return -1 < iVar1;
}

