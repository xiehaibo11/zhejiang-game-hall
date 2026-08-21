
void png_handle_sBIT(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined4 local_44;
  
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) & 6) == 0) {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 8) >> 1 & 1) == 0)) {
      if (*(char *)(param_1 + 0x2af) == '\x03') {
        uVar9 = 8;
        bVar1 = 3;
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x2b3);
        uVar9 = (uint)*(byte *)(param_1 + 0x2b0);
      }
      if ((4 < param_3) || (bVar1 != param_3)) {
        png_chunk_benign_error(param_1,"invalid");
        png_crc_finish(param_1,param_3);
        return;
      }
      local_44 = uVar9 * 0x1010101;
      png_read_data(param_1,&local_44,param_3);
      png_calculate_crc(param_1,&local_44,param_3);
      iVar3 = png_crc_finish(param_1,0);
      if (iVar3 != 0) {
        return;
      }
      if (param_3 != 0) {
        lVar5 = 0;
        do {
          if (uVar9 <= (*(byte *)((long)&local_44 + lVar5) - 1 & 0xff)) {
            pcVar4 = "invalid";
            goto LAB_00d72b9c;
          }
          lVar5 = lVar5 + 1;
        } while ((uint)lVar5 < param_3);
      }
      if ((*(byte *)(param_1 + 0x2af) >> 1 & 1) == 0) {
        puVar7 = (undefined1 *)((ulong)&local_44 | 1);
        *(undefined1 *)(param_1 + 0x323) = (undefined1)local_44;
        uVar6 = (undefined1)local_44;
        uVar8 = (undefined1)local_44;
      }
      else {
        puVar7 = (undefined1 *)((ulong)&local_44 | 3);
        uVar6 = local_44._1_1_;
        uVar8 = local_44._2_1_;
      }
      uVar2 = *puVar7;
      *(undefined1 *)(param_1 + 800) = (undefined1)local_44;
      *(undefined1 *)(param_1 + 0x321) = uVar6;
      *(undefined1 *)(param_1 + 0x322) = uVar8;
      *(undefined1 *)(param_1 + 0x324) = uVar2;
      png_set_sBIT(param_1,param_2,param_1 + 800);
      return;
    }
    png_crc_finish(param_1,param_3);
    pcVar4 = "duplicate";
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar4 = "out of place";
  }
LAB_00d72b9c:
  png_chunk_benign_error(param_1,pcVar4);
  return;
}

