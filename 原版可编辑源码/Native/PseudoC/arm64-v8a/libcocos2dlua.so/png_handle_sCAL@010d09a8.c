
void png_handle_sCAL(long param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  uint local_44;
  ulong local_38;
  
  uVar5 = (ulong)param_3;
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) >> 2 & 1) != 0) {
    png_crc_finish(param_1,uVar5);
    pcVar3 = "out of place";
    goto LAB_010d0b0c;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 9) >> 6 & 1) != 0)) {
    png_crc_finish(param_1,uVar5);
    pcVar3 = "duplicate";
    goto LAB_010d0b0c;
  }
  if (param_3 < 4) {
    png_crc_finish(param_1,uVar5);
    pcVar3 = "invalid";
    goto LAB_010d0b0c;
  }
  pbVar4 = *(byte **)(param_1 + 0x4d0);
  uVar6 = (ulong)(param_3 + 1);
  if (pbVar4 == (byte *)0x0) {
LAB_010d0a48:
    pbVar4 = (byte *)png_malloc_base(param_1,uVar6);
    if (pbVar4 == (byte *)0x0) {
      png_chunk_benign_error(param_1,"out of memory");
      png_crc_finish(param_1,uVar5);
      return;
    }
    *(byte **)(param_1 + 0x4d0) = pbVar4;
    *(ulong *)(param_1 + 0x4d8) = uVar6;
  }
  else if (*(ulong *)(param_1 + 0x4d8) < uVar6) {
    *(undefined8 *)(param_1 + 0x4d0) = 0;
    *(undefined8 *)(param_1 + 0x4d8) = 0;
    png_free(param_1,pbVar4);
    goto LAB_010d0a48;
  }
  png_read_data(param_1,pbVar4,uVar5);
  png_calculate_crc(param_1,pbVar4,uVar5);
  pbVar4[uVar5] = 0;
  iVar2 = png_crc_finish(param_1,0);
  if (iVar2 != 0) {
    return;
  }
  if (*pbVar4 - 1 < 2) {
    local_38 = 1;
    local_44 = 0;
    iVar2 = png_check_fp_number(pbVar4,uVar5,&local_44,&local_38);
    if (((iVar2 == 0) || (uVar5 <= local_38)) ||
       (uVar6 = local_38 + 1, pbVar1 = pbVar4 + local_38, local_38 = uVar6, *pbVar1 != 0)) {
      pcVar3 = "bad width format";
    }
    else if ((local_44 & 0x188) == 0x108) {
      local_44 = 0;
      iVar2 = png_check_fp_number(pbVar4,uVar5,&local_44,&local_38);
      if ((iVar2 == 0) || (local_38 != uVar5)) {
        pcVar3 = "bad height format";
      }
      else {
        if ((local_44 & 0x188) == 0x108) {
          png_set_sCAL_s(param_1,param_2,*pbVar4,pbVar4 + 1,pbVar4 + uVar6);
          return;
        }
        pcVar3 = "non-positive height";
      }
    }
    else {
      pcVar3 = "non-positive width";
    }
  }
  else {
    pcVar3 = "invalid unit";
  }
LAB_010d0b0c:
  png_chunk_benign_error(param_1,pcVar3);
  return;
}

