
void png_handle_tRNS(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146;
  undefined1 local_145;
  undefined1 local_144;
  undefined1 local_143;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x164);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((uVar1 >> 2 & 1) == 0) {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 8) >> 4 & 1) == 0)) {
      cVar2 = *(char *)(param_1 + 0x2af);
      if (cVar2 == '\x03') {
        if ((uVar1 >> 1 & 1) == 0) goto LAB_010d003c;
        if ((0x100 < param_3) || ((uint)*(ushort *)(param_1 + 0x2a0) <= param_3 - 1))
        goto LAB_010d015c;
        png_read_data(param_1,&local_148,param_3);
        png_calculate_crc(param_1,&local_148,param_3);
        *(short *)(param_1 + 0x2a8) = (short)param_3;
      }
      else if (cVar2 == '\x02') {
        if (param_3 != 6) {
LAB_010d015c:
          png_crc_finish(param_1,param_3);
          pcVar5 = "invalid";
          goto LAB_010d0050;
        }
        png_read_data(param_1,&local_148,6);
        png_calculate_crc(param_1,&local_148,6);
        *(undefined2 *)(param_1 + 0x2a8) = 1;
        *(ushort *)(param_1 + 0x33a) = CONCAT11(local_148,local_147);
        *(ushort *)(param_1 + 0x33c) = CONCAT11(local_146,local_145);
        *(ushort *)(param_1 + 0x33e) = CONCAT11(local_144,local_143);
      }
      else {
        if (cVar2 != '\0') {
          png_crc_finish(param_1,param_3);
          pcVar5 = "invalid with alpha channel";
          goto LAB_010d0050;
        }
        if (param_3 != 2) goto LAB_010d015c;
        png_read_data(param_1,&local_148,2);
        png_calculate_crc(param_1,&local_148,2);
        *(undefined2 *)(param_1 + 0x2a8) = 1;
        *(ushort *)(param_1 + 0x340) = CONCAT11(local_148,local_147);
      }
      iVar4 = png_crc_finish(param_1,0);
      if (iVar4 == 0) {
        png_set_tRNS(param_1,param_2,&local_148,*(undefined2 *)(param_1 + 0x2a8),param_1 + 0x338);
      }
      else {
        *(undefined2 *)(param_1 + 0x2a8) = 0;
      }
      goto LAB_010d0058;
    }
    png_crc_finish(param_1,param_3);
    pcVar5 = "duplicate";
  }
  else {
LAB_010d003c:
    png_crc_finish(param_1,param_3);
    pcVar5 = "out of place";
  }
LAB_010d0050:
  png_chunk_benign_error(param_1,pcVar5);
LAB_010d0058:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

