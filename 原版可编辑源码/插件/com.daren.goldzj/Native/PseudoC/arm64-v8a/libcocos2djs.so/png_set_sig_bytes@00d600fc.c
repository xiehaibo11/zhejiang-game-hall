
void png_set_sig_bytes(long param_1,int param_2)

{
  if (param_1 != 0) {
    if (8 < param_2) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Too many bytes for PNG signature");
    }
    *(byte *)(param_1 + 0x2b5) = (byte)param_2 & ((byte)(param_2 >> 0x1f) ^ 0xff);
  }
  return;
}

