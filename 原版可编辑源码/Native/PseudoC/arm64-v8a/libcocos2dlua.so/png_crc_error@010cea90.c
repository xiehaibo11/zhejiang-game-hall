
bool png_crc_error(long param_1)

{
  uint uVar1;
  uint local_24;
  
  uVar1 = *(uint *)(param_1 + 0x168);
  if ((*(byte *)(param_1 + 0x253) >> 5 & 1) == 0) {
                    /* catch() { ... } // from try @ 010cea60 with catch @ 010ceabc */
    *(undefined4 *)(param_1 + 0x4e4) = 0x81;
    png_read_data(param_1,&local_24,4);
    if ((uVar1 >> 0xb & 1) == 0) {
LAB_010ceaf8:
      uVar1 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
      return (uVar1 >> 0x10 | uVar1 << 0x10) != *(uint *)(param_1 + 0x294);
    }
  }
  else {
                    /* try { // try from 010cead8 to 011ceb1b has its CatchHandler @ 010cead8
                       catch() { ... } // from try @ 010cead8 with catch @ 010cead8
                       catch() { ... } // from try @ 010ceb34 with catch @ 010cead8 */
    *(undefined4 *)(param_1 + 0x4e4) = 0x81;
    png_read_data(param_1,&local_24,4);
    if ((~uVar1 & 0x300) != 0) goto LAB_010ceaf8;
  }
  return false;
}

