
void png_set_PLTE(long param_1,long param_2,void *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  
                    /* catch() { ... } // from try @ 010d39f4 with catch @ 010d4158 */
                    /* catch() { ... } // from try @ 010d39b4 with catch @ 010d415c */
                    /* catch() { ... } // from try @ 010d3990 with catch @ 010d4160 */
                    /* catch() { ... } // from try @ 010d3934 with catch @ 010d4164 */
  if ((param_1 != 0) && (param_2 != 0)) {
    if (0x100 < param_4) {
                    /* catch() { ... } // from try @ 010d38f8 with catch @ 010d41a0 */
      if (*(char *)(param_2 + 0x25) != '\x03') {
        png_warning();
        return;
      }
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid palette length");
    }
    if (((param_3 == (void *)0x0) && (param_4 != 0)) ||
       ((param_4 == 0 && ((*(byte *)(param_1 + 0x450) & 1) == 0)))) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid palette");
    }
                    /* catch() { ... } // from try @ 010d38d8 with catch @ 010d41d0 */
    png_free_data(param_1,param_2,0x1000,0);
                    /* catch() { ... } // from try @ 010d3890 with catch @ 010d41e0 */
    __dest = (void *)png_calloc(param_1,0x300);
    *(void **)(param_1 + 0x298) = __dest;
    if (param_4 != 0) {
      memcpy(__dest,param_3,(long)(int)param_4 + (long)(int)param_4 * 2);
    }
                    /* catch() { ... } // from try @ 010d386c with catch @ 010d420c */
    uVar1 = *(uint *)(param_2 + 0x11c);
    uVar2 = *(uint *)(param_2 + 8);
    *(void **)(param_2 + 0x18) = __dest;
    *(short *)(param_1 + 0x2a0) = (short)param_4;
                    /* catch() { ... } // from try @ 010d37ac with catch @ 010d421c */
    *(short *)(param_2 + 0x20) = (short)param_4;
    *(uint *)(param_2 + 0x11c) = uVar1 | 0x1000;
    *(uint *)(param_2 + 8) = uVar2 | 8;
  }
                    /* try { // try from 010d4230 to 011d4273 has its CatchHandler @ 010d4230
                       catch() { ... } // from try @ 010d4230 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4280 with catch @ 010d4230
                       catch() { ... } // from try @ 010d42f8 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4370 with catch @ 010d4230
                       catch() { ... } // from try @ 010d43e0 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4448 with catch @ 010d4230
                       catch() { ... } // from try @ 010d44c0 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4530 with catch @ 010d4230
                       catch() { ... } // from try @ 010d45a8 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4620 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4698 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4710 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4764 with catch @ 010d4230
                       catch() { ... } // from try @ 010d47dc with catch @ 010d4230
                       catch() { ... } // from try @ 010d4854 with catch @ 010d4230
                       catch() { ... } // from try @ 010d48c4 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4934 with catch @ 010d4230
                       catch() { ... } // from try @ 010d49a4 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4a14 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4a8c with catch @ 010d4230
                       catch() { ... } // from try @ 010d4afc with catch @ 010d4230
                       catch() { ... } // from try @ 010d4b6c with catch @ 010d4230
                       catch() { ... } // from try @ 010d4bc0 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4c14 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4c68 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4cbc with catch @ 010d4230
                       catch() { ... } // from try @ 010d4d10 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4d88 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4df8 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4e70 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4ee8 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4f60 with catch @ 010d4230
                       catch() { ... } // from try @ 010d4fd0 with catch @ 010d4230
                       catch() { ... } // from try @ 010d5038 with catch @ 010d4230
                       catch() { ... } // from try @ 010d50a8 with catch @ 010d4230
                       catch() { ... } // from try @ 010d5110 with catch @ 010d4230 */
  return;
}

