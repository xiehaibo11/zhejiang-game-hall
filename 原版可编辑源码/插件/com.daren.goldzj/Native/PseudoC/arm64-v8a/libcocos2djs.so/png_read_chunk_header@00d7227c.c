
uint png_read_chunk_header(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint local_40;
  uint local_3c;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  *(undefined4 *)(param_1 + 0x4e4) = 0x21;
  png_read_data(param_1,&local_40,8);
  uVar1 = (local_40 & 0xff00ff00) >> 8 | (local_40 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"PNG unsigned integer out of range");
  }
  uVar2 = (local_3c & 0xff00ff00) >> 8 | (local_3c & 0xff00ff) << 8;
  *(uint *)(param_1 + 0x250) = uVar2 >> 0x10 | uVar2 << 0x10;
  png_reset_crc(param_1);
  png_calculate_crc(param_1,&local_3c,4);
  uVar2 = *(uint *)(param_1 + 0x250);
  if ((((((uVar2 & 0xff) - 0x41 < 0x3a) && (5 < (uVar2 & 0xff) - 0x5b)) &&
       (uVar3 = uVar2 >> 8 & 0xff, uVar3 - 0x41 < 0x3a)) &&
      ((5 < uVar3 - 0x5b && (uVar3 = uVar2 >> 0x10 & 0xff, uVar3 - 0x41 < 0x3a)))) &&
     (5 < uVar3 - 0x5b)) {
    if (((uVar2 >> 0x18) - 0x41 < 0x3a) && (5 < (uVar2 >> 0x18) - 0x5b)) {
      *(undefined4 *)(param_1 + 0x4e4) = 0x41;
      if (*(long *)(lVar4 + 0x28) == local_38) {
        return uVar1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  png_chunk_error(param_1,"invalid chunk type");
}

