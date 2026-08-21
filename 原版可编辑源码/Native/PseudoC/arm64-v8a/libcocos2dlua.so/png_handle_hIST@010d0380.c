
void png_handle_hIST(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  undefined2 *puVar5;
  undefined2 auStack_240 [256];
  undefined1 local_34;
  undefined1 local_33;
  
  puVar5 = auStack_240;
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
                    /* try { // try from 010d03b0 to 011d03bb has its CatchHandler @ 010d0884 */
  if ((*(uint *)(param_1 + 0x164) & 6) == 2) {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 8) >> 6 & 1) == 0)) {
                    /* try { // try from 010d03c0 to 011d03e3 has its CatchHandler @ 010d08c0 */
      if (param_3 < 0x202) {
        uVar1 = param_3 >> 1;
        uVar4 = (ulong)uVar1;
        if (uVar1 == *(ushort *)(param_1 + 0x2a0)) {
          if (uVar1 != 0) {
            do {
                    /* try { // try from 010d03e8 to 011d03eb has its CatchHandler @ 010d0880 */
              png_read_data(param_1,&local_34,2);
              png_calculate_crc(param_1,&local_34,2);
                    /* try { // try from 010d0408 to 011d040f has its CatchHandler @ 010d08f0 */
              uVar4 = uVar4 - 1;
              *puVar5 = CONCAT11(local_34,local_33);
              puVar5 = puVar5 + 1;
            } while (uVar4 != 0);
          }
          iVar2 = png_crc_finish(param_1,0);
          if (iVar2 != 0) {
            return;
          }
                    /* try { // try from 010d0430 to 011d045b has its CatchHandler @ 010d0894 */
          png_set_hIST(param_1,param_2,auStack_240);
          return;
        }
      }
                    /* try { // try from 010d045c to 011d04cb has its CatchHandler @ 010d0324 */
      png_crc_finish(param_1,param_3);
      pcVar3 = "invalid";
    }
    else {
      png_crc_finish(param_1,param_3);
      pcVar3 = "duplicate";
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar3 = "out of place";
  }
  png_chunk_benign_error(param_1,pcVar3);
  return;
}

