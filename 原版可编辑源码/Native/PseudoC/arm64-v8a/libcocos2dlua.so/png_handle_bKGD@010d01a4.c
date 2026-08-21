
void png_handle_bKGD(long param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  byte local_40 [2];
  undefined4 local_3e;
  ushort local_3a;
  ushort local_38;
  byte local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  
  uVar2 = *(uint *)(param_1 + 0x164);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if (((uVar2 >> 2 & 1) != 0) ||
     ((bVar3 = *(byte *)(param_1 + 0x2af), (uVar2 >> 1 & 1) == 0 && (bVar3 == 3)))) {
    png_crc_finish(param_1,param_3);
    pcVar5 = "out of place";
    goto LAB_010d01f0;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 8) >> 5 & 1) != 0)) {
    png_crc_finish(param_1,param_3);
    pcVar5 = "duplicate";
    goto LAB_010d01f0;
  }
  if (bVar3 == 3) {
    if (param_3 == 1) {
LAB_010d0258:
      png_read_data(param_1,&local_28,param_3);
      png_calculate_crc(param_1,&local_28,param_3);
      iVar4 = png_crc_finish(param_1,0);
      if (iVar4 != 0) {
        return;
      }
      if (*(byte *)(param_1 + 0x2af) == 3) {
        local_40[0] = local_28;
        if ((param_2 == 0) || (*(ushort *)(param_2 + 0x20) == 0)) {
          local_3a = 0;
          local_3e = 0;
                    /* try { // try from 010d0324 to 011d03af has its CatchHandler @ 010d0324
                       catch() { ... } // from try @ 010d0324 with catch @ 010d0324
                       catch() { ... } // from try @ 010d045c with catch @ 010d0324
                       catch() { ... } // from try @ 010d05ec with catch @ 010d0324
                       catch() { ... } // from try @ 010d069c with catch @ 010d0324 */
        }
        else {
          if (*(ushort *)(param_2 + 0x20) <= (ushort)local_28) {
            pcVar5 = "invalid index";
            goto LAB_010d01f0;
          }
          pbVar1 = (byte *)(*(long *)(param_1 + 0x298) + (ulong)local_28 * 3);
          local_3e = (uint)CONCAT12(pbVar1[1],(ushort)*pbVar1);
          local_3a = (ushort)pbVar1[2];
        }
      }
      else {
        local_40[0] = 0;
        local_3a = CONCAT11(local_28,local_27);
        if ((*(byte *)(param_1 + 0x2af) >> 1 & 1) == 0) {
          local_3e = CONCAT22(local_3a,local_3a);
          local_38 = local_3a;
          goto LAB_010d0350;
        }
        local_3e = CONCAT22(CONCAT11(local_26,local_25),local_3a);
        local_3a = CONCAT11(local_24,local_23);
      }
      local_38 = 0;
LAB_010d0350:
      png_set_bKGD(param_1,param_2,local_40);
      return;
    }
  }
  else if (((bVar3 >> 1 & 1) << 2 | 2) == param_3) goto LAB_010d0258;
  png_crc_finish(param_1,param_3);
  pcVar5 = "invalid";
LAB_010d01f0:
  png_chunk_benign_error(param_1,pcVar5);
  return;
}

