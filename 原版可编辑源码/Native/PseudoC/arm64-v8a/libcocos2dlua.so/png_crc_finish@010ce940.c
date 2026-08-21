
void png_crc_finish(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint local_448 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 != 0) {
    if (param_1 == 0) {
      do {
        uVar3 = param_2;
        if (0x3ff < param_2) {
          uVar3 = 0x400;
        }
        param_2 = param_2 - uVar3;
      } while (param_2 != 0);
    }
    else {
      do {
        uVar3 = param_2;
        if (0x3ff < param_2) {
          uVar3 = 0x400;
        }
        param_2 = param_2 - uVar3;
        png_read_data(param_1,local_448,uVar3);
        png_calculate_crc(param_1,local_448,uVar3);
      } while (param_2 != 0);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x168);
  if ((*(byte *)(param_1 + 0x253) >> 5 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010ce870 with catch @ 010ce9d4
                        */
    *(undefined4 *)(param_1 + 0x4e4) = 0x81;
    png_read_data(param_1,local_448,4);
    if ((uVar3 >> 0xb & 1) == 0) {
LAB_010cea10:
      uVar3 = (local_448[0] & 0xff00ff00) >> 8 | (local_448[0] & 0xff00ff) << 8;
      if ((uVar3 >> 0x10 | uVar3 << 0x10) != *(uint *)(param_1 + 0x294)) {
        if ((*(byte *)(param_1 + 0x253) >> 5 & 1) == 0) {
          if ((*(uint *)(param_1 + 0x168) >> 10 & 1) == 0) {
LAB_010cea7c:
                    /* try { // try from 010cea7c to 011cead7 has its CatchHandler @ 010cea24 */
                    /* WARNING: Subroutine does not return */
            png_chunk_error(param_1,"CRC error");
          }
        }
        else if ((*(uint *)(param_1 + 0x168) >> 9 & 1) != 0) goto LAB_010cea7c;
        png_chunk_warning(param_1,"CRC error");
        uVar2 = 1;
        goto LAB_010cea50;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4e4) = 0x81;
    png_read_data(param_1,local_448,4);
    if ((~uVar3 & 0x300) != 0) goto LAB_010cea10;
  }
                    /* try { // try from 010cea24 to 011cea5f has its CatchHandler @ 010cea24
                       catch() { ... } // from try @ 010cea24 with catch @ 010cea24
                       catch() { ... } // from try @ 010cea7c with catch @ 010cea24 */
  uVar2 = 0;
LAB_010cea50:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
                    /* try { // try from 010cea60 to 011cea7b has its CatchHandler @ 010ceabc */
  return;
}

