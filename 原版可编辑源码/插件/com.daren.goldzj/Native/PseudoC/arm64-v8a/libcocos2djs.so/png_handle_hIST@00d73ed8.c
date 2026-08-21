
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
  if ((*(uint *)(param_1 + 0x164) & 6) == 2) {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 8) >> 6 & 1) == 0)) {
      if (param_3 < 0x202) {
        uVar1 = param_3 >> 1;
        uVar4 = (ulong)uVar1;
        if (uVar1 == *(ushort *)(param_1 + 0x2a0)) {
          if (uVar1 != 0) {
            do {
              png_read_data(param_1,&local_34,2);
              png_calculate_crc(param_1,&local_34,2);
              uVar4 = uVar4 - 1;
              *puVar5 = CONCAT11(local_34,local_33);
              puVar5 = puVar5 + 1;
            } while (uVar4 != 0);
          }
          iVar2 = png_crc_finish(param_1,0);
          if (iVar2 != 0) {
            return;
          }
          png_set_hIST(param_1,param_2,auStack_240);
          return;
        }
      }
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

