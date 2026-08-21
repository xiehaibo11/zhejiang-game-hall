
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
    pcVar3 = "out of place";
    goto LAB_00d72868;
  }
  *(uint *)(param_1 + 0x164) = uVar1 | 2;
  if ((*(byte *)(param_1 + 0x2af) >> 1 & 1) == 0) {
    png_crc_finish(param_1,param_3);
    pcVar3 = "ignored in grayscale PNG";
    goto LAB_00d72868;
  }
  if ((0x300 < param_3) || (param_3 % 3 != 0)) {
    png_crc_finish(param_1,param_3);
    pcVar3 = "invalid";
    if (*(char *)(param_1 + 0x2af) == '\x03') {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,"invalid");
    }
    goto LAB_00d72868;
  }
  if (2 < param_3) {
    iVar4 = 0;
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
  png_set_PLTE(param_1,param_2,local_340,(ulong)param_3 / 3);
  if (*(short *)(param_1 + 0x2a8) == 0) {
    if (param_2 == 0) {
      return;
    }
    if ((*(uint *)(param_2 + 8) >> 4 & 1) != 0) {
      *(undefined2 *)(param_1 + 0x2a8) = 0;
      goto LAB_00d729a4;
    }
    if ((*(uint *)(param_2 + 8) >> 6 & 1) != 0) goto LAB_00d729c0;
LAB_00d72988:
    bVar2 = *(byte *)(param_2 + 8);
  }
  else {
    *(undefined2 *)(param_1 + 0x2a8) = 0;
    if (param_2 == 0) {
      pcVar3 = "tRNS must be after";
      goto LAB_00d72868;
    }
LAB_00d729a4:
    *(undefined2 *)(param_2 + 0x22) = 0;
    png_chunk_benign_error(param_1,"tRNS must be after");
    if ((*(uint *)(param_2 + 8) >> 6 & 1) == 0) goto LAB_00d72988;
LAB_00d729c0:
    png_chunk_benign_error(param_1,"hIST must be after");
    bVar2 = *(byte *)(param_2 + 8);
  }
  if ((bVar2 >> 5 & 1) == 0) {
    return;
  }
  pcVar3 = "bKGD must be after";
LAB_00d72868:
  png_chunk_benign_error(param_1,pcVar3);
  return;
}

