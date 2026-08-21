
void png_handle_tIME(long param_1,long param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 local_30 [2];
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_28 [2];
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d0c50 with catch @ 010d0bf8
                       catch(type#1 @ 00000000) { ... } // from try @ 010d0e1c with catch @ 010d0bf8
                        */
  uVar1 = *(uint *)(param_1 + 0x164);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((param_2 == 0) || ((*(byte *)(param_2 + 9) >> 1 & 1) == 0)) {
    if ((uVar1 >> 2 & 1) != 0) {
      *(uint *)(param_1 + 0x164) = uVar1 | 8;
    }
    if (param_3 == 7) {
      png_read_data(param_1,local_28,7);
                    /* try { // try from 010d0c48 to 011d0c4f has its CatchHandler @ 010d0f38 */
                    /* try { // try from 010d0c50 to 011d0da7 has its CatchHandler @ 010d0bf8 */
      png_calculate_crc(param_1,local_28,7);
      iVar2 = png_crc_finish(param_1,0);
      if (iVar2 != 0) {
        return;
      }
      local_2a = local_22;
      local_2b = local_23;
      local_2c = local_24;
      local_2d = local_25;
      local_2e = local_26;
      png_set_tIME(param_1,param_2,local_30);
      return;
    }
    png_crc_finish(param_1,param_3);
    pcVar3 = "invalid";
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar3 = "duplicate";
  }
  png_chunk_benign_error(param_1,pcVar3);
  return;
}

