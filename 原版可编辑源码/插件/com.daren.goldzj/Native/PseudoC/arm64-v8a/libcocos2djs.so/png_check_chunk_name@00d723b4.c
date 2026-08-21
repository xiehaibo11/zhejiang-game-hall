
void png_check_chunk_name(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (((param_2 & 0xff) - 0x41 < 0x3a) && (5 < (param_2 & 0xff) - 0x5b)) {
    uVar1 = param_2 >> 8 & 0xff;
    if ((uVar1 - 0x41 < 0x3a) && (5 < uVar1 - 0x5b)) {
      uVar1 = param_2 >> 0x10 & 0xff;
      if ((uVar1 - 0x41 < 0x3a) && (5 < uVar1 - 0x5b)) {
        if (((param_2 >> 0x18) - 0x41 < 0x3a) && (5 < (param_2 >> 0x18) - 0x5b)) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  png_chunk_error(param_1,"invalid chunk type");
}

