
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
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) >> 2 & 1) == 0) {
    if ((param_2 == 0) || (-1 < *(char *)(param_2 + 8))) {
      if (param_3 == 9) {
        png_read_data(param_1,&local_44,9);
        png_calculate_crc(param_1,&local_44,9);
        iVar4 = png_crc_finish(param_1,0);
        if (iVar4 == 0) {
          uVar1 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
          uVar2 = (uStack_40 & 0xff00ff00) >> 8 | (uStack_40 & 0xff00ff) << 8;
          png_set_pHYs(param_1,param_2,uVar1 >> 0x10 | uVar1 << 0x10,uVar2 >> 0x10 | uVar2 << 0x10,
                       local_3c);
        }
        goto LAB_00d740f0;
      }
      png_crc_finish(param_1,param_3);
      pcVar5 = "invalid";
    }
    else {
      png_crc_finish(param_1,param_3);
      pcVar5 = "duplicate";
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar5 = "out of place";
  }
  png_chunk_benign_error(param_1,pcVar5);
LAB_00d740f0:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

