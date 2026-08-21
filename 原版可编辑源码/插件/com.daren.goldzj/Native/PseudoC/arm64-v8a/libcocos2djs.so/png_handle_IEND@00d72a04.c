
void png_handle_IEND(long param_1,undefined8 param_2,int param_3)

{
  if (((*(uint *)(param_1 + 0x164) ^ 0xffffffff) & 5) != 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"out of place");
  }
  *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x18;
  png_crc_finish(param_1,param_3);
  if (param_3 != 0) {
    png_chunk_benign_error(param_1,"invalid");
    return;
  }
  return;
}

