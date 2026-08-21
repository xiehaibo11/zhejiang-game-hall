
void png_handle_pHYs(long param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  uint local_44;
  uint uStack_40;
  undefined1 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
                    /* try { // try from 010d04cc to 011d04d7 has its CatchHandler @ 010d087c */
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 010d04dc to 011d0507 has its CatchHandler @ 010d0890 */
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* try { // try from 010d05c0 to 011d05eb has its CatchHandler @ 010d088c */
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) >> 2 & 1) == 0) {
    if ((param_2 == 0) || (-1 < *(char *)(param_2 + 8))) {
      if (param_3 == 9) {
        png_read_data(param_1,&local_44,9);
                    /* try { // try from 010d0518 to 011d0523 has its CatchHandler @ 010d0878 */
        png_calculate_crc(param_1,&local_44,9);
        iVar4 = png_crc_finish(param_1,0);
                    /* try { // try from 010d0528 to 011d054b has its CatchHandler @ 010d08a0 */
        if (iVar4 == 0) {
          uVar1 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
          uVar2 = (uStack_40 & 0xff00ff00) >> 8 | (uStack_40 & 0xff00ff) << 8;
          png_set_pHYs(param_1,param_2,uVar1 >> 0x10 | uVar1 << 0x10,uVar2 >> 0x10 | uVar2 << 0x10,
                       local_3c);
        }
        goto LAB_010d0598;
      }
      png_crc_finish(param_1,param_3);
                    /* try { // try from 010d0570 to 011d0583 has its CatchHandler @ 010d08f4 */
      pcVar5 = "invalid";
    }
    else {
                    /* try { // try from 010d0584 to 011d058f has its CatchHandler @ 010d08e0 */
      png_crc_finish(param_1,param_3);
      pcVar5 = "duplicate";
    }
  }
  else {
                    /* try { // try from 010d0550 to 011d0553 has its CatchHandler @ 010d0874 */
    png_crc_finish(param_1,param_3);
    pcVar5 = "out of place";
  }
  png_chunk_benign_error(param_1,pcVar5);
LAB_010d0598:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

