
void png_handle_tEXt(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_78 [2];
  long local_70;
  char *pcStack_68;
  size_t local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(int *)(param_1 + 0x49c) == 0) {
LAB_00d748c8:
    uVar1 = *(uint *)(param_1 + 0x164);
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,"missing IHDR");
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(uint *)(param_1 + 0x164) = uVar1 | 8;
    }
    lVar5 = *(long *)(param_1 + 0x4d0);
    uVar6 = (ulong)(param_3 + 1);
    if (lVar5 == 0) {
LAB_00d74908:
      lVar5 = png_malloc_base(param_1,uVar6);
      if (lVar5 == 0) {
        png_chunk_warning(param_1,"insufficient memory to read chunk");
        pcVar3 = "out of memory";
        goto LAB_00d749e0;
      }
      *(long *)(param_1 + 0x4d0) = lVar5;
      *(ulong *)(param_1 + 0x4d8) = uVar6;
    }
    else if (*(ulong *)(param_1 + 0x4d8) < uVar6) {
      *(undefined8 *)(param_1 + 0x4d0) = 0;
      *(undefined8 *)(param_1 + 0x4d8) = 0;
      png_free(param_1,lVar5);
      goto LAB_00d74908;
    }
    uVar6 = (ulong)param_3;
    png_read_data(param_1,lVar5,uVar6);
    png_calculate_crc(param_1,lVar5,uVar6);
    iVar2 = png_crc_finish(param_1,0);
    if (iVar2 == 0) {
      lVar4 = 0;
      *(undefined1 *)(lVar5 + uVar6) = 0;
      do {
        pcVar3 = (char *)(lVar5 + lVar4);
        lVar4 = lVar4 + 1;
      } while (*pcVar3 != '\0');
      pcStack_68 = (char *)(lVar5 + lVar4) + -1;
      if (uVar6 + 1 != lVar4) {
        pcStack_68 = (char *)(lVar5 + lVar4);
      }
      local_78[0] = 0xffffffff;
      local_50 = 0;
      uStack_48 = 0;
      local_58 = 0;
      local_70 = lVar5;
      local_60 = strlen(pcStack_68);
      iVar2 = png_set_text_2(param_1,param_2,local_78,1);
      if (iVar2 != 0) {
        png_warning(param_1,"Insufficient memory to process text chunk");
      }
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x49c) + -1;
    if (iVar2 == 0) {
      png_crc_finish(param_1,param_3);
      return;
    }
    *(int *)(param_1 + 0x49c) = iVar2;
    if (iVar2 != 1) goto LAB_00d748c8;
    png_crc_finish(param_1,param_3);
    pcVar3 = "no space in chunk cache";
LAB_00d749e0:
    png_chunk_benign_error(param_1,pcVar3);
  }
  return;
}

