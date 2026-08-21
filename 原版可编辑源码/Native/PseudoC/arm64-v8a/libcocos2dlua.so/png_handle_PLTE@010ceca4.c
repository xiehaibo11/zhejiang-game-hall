
void png_handle_PLTE(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_344;
  undefined1 local_343;
  undefined1 local_342;
  undefined1 local_340 [768];
  
  uVar1 = *(uint *)(param_1 + 0x164);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((uVar1 >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"duplicate");
  }
  if ((uVar1 >> 2 & 1) != 0) {
    png_crc_finish(param_1,param_3);
                    /* try { // try from 010ced08 to 011ced1b has its CatchHandler @ 010ced38 */
    pcVar3 = "out of place";
    goto LAB_010ced10;
  }
  *(uint *)(param_1 + 0x164) = uVar1 | 2;
  if ((*(byte *)(param_1 + 0x2af) >> 1 & 1) == 0) {
                    /* try { // try from 010cece8 to 011cecf3 has its CatchHandler @ 010ced3c */
    png_crc_finish(param_1,param_3);
    pcVar3 = "ignored in grayscale PNG";
    goto LAB_010ced10;
  }
                    /* catch() { ... } // from try @ 010ced08 with catch @ 010ced38 */
                    /* catch() { ... } // from try @ 010cece8 with catch @ 010ced3c */
                    /* catch() { ... } // from try @ 010cec04 with catch @ 010ced40 */
                    /* catch() { ... } // from try @ 010cec64 with catch @ 010ced44 */
  if ((0x300 < param_3) || (param_3 % 3 != 0)) {
                    /* try { // try from 010cedf4 to 011cee0b has its CatchHandler @ 010cef14 */
    png_crc_finish(param_1,param_3);
    pcVar3 = "invalid";
    if (*(char *)(param_1 + 0x2af) == '\x03') {
                    /* try { // try from 010cee14 to 011cee23 has its CatchHandler @ 010ceee0 */
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,"invalid");
    }
    goto LAB_010ced10;
  }
  if (2 < param_3) {
    iVar4 = 0;
                    /* try { // try from 010ced70 to 011cedd3 has its CatchHandler @ 010ced70
                       catch() { ... } // from try @ 010ced70 with catch @ 010ced70
                       catch() { ... } // from try @ 010cee74 with catch @ 010ced70 */
    puVar5 = local_340;
    do {
      png_read_data(param_1,&local_344,3);
      png_calculate_crc(param_1,&local_344,3);
      iVar4 = iVar4 + 1;
      *puVar5 = local_344;
      puVar5[1] = local_343;
      puVar5[2] = local_342;
      puVar5 = puVar5 + 3;
    } while (iVar4 < (int)(param_3 / 3));
  }
  png_crc_finish(param_1,0);
                    /* try { // try from 010cedd4 to 011cede3 has its CatchHandler @ 010cef00 */
  png_set_PLTE(param_1,param_2,local_340,(ulong)param_3 / 3);
  if (*(short *)(param_1 + 0x2a8) == 0) {
    if (param_2 == 0) {
      return;
    }
    if ((*(uint *)(param_2 + 8) >> 4 & 1) != 0) {
      *(undefined2 *)(param_1 + 0x2a8) = 0;
      goto LAB_010cee4c;
    }
    if ((*(uint *)(param_2 + 8) >> 6 & 1) != 0) goto LAB_010cee68;
LAB_010cee30:
    bVar2 = *(byte *)(param_2 + 8);
  }
  else {
    *(undefined2 *)(param_1 + 0x2a8) = 0;
    if (param_2 == 0) {
      pcVar3 = "tRNS must be after";
      goto LAB_010ced10;
    }
LAB_010cee4c:
    *(undefined2 *)(param_2 + 0x22) = 0;
    png_chunk_benign_error(param_1,"tRNS must be after");
                    /* try { // try from 010cee64 to 011cee73 has its CatchHandler @ 010ceecc */
    if ((*(uint *)(param_2 + 8) >> 6 & 1) == 0) goto LAB_010cee30;
LAB_010cee68:
                    /* try { // try from 010cee74 to 011cef2f has its CatchHandler @ 010ced70 */
    png_chunk_benign_error(param_1,"hIST must be after");
    bVar2 = *(byte *)(param_2 + 8);
  }
  if ((bVar2 >> 5 & 1) == 0) {
    return;
  }
  pcVar3 = "bKGD must be after";
LAB_010ced10:
  png_chunk_benign_error(param_1,pcVar3);
                    /* try { // try from 010ced1c to 011ced5f has its CatchHandler @ 010ceb94 */
  return;
}

