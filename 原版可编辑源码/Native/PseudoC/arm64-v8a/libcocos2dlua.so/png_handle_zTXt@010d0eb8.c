
void png_handle_zTXt(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 local_78 [2];
  long local_70;
  long local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  uVar5 = (ulong)param_3;
  if (*(int *)(param_1 + 0x49c) != 0) {
    iVar2 = *(int *)(param_1 + 0x49c) + -1;
    if (iVar2 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d0e14 with catch @ 010d0efc
                        */
      png_crc_finish(param_1,uVar5);
      return;
    }
    *(int *)(param_1 + 0x49c) = iVar2;
    if (iVar2 == 1) {
      png_crc_finish(param_1,uVar5);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d0da8 with catch @ 010d0f24
                        */
      pcVar4 = "no space in chunk cache";
      goto LAB_010d1020;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x164);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d0c48 with catch @ 010d0f38
                        */
  if ((uVar1 >> 2 & 1) != 0) {
    *(uint *)(param_1 + 0x164) = uVar1 | 8;
  }
  lVar6 = *(long *)(param_1 + 0x4d0);
  if (lVar6 == 0) {
LAB_010d0f70:
    lVar6 = png_malloc_base(param_1,uVar5);
    if (lVar6 == 0) {
      png_crc_finish(param_1,uVar5);
      pcVar4 = "out of memory";
LAB_010d1020:
      png_chunk_benign_error(param_1,pcVar4);
      return;
    }
    *(long *)(param_1 + 0x4d0) = lVar6;
    *(ulong *)(param_1 + 0x4d8) = uVar5;
  }
  else if (*(ulong *)(param_1 + 0x4d8) < uVar5) {
    *(undefined8 *)(param_1 + 0x4d0) = 0;
    *(undefined8 *)(param_1 + 0x4d8) = 0;
    png_free(param_1,lVar6);
    goto LAB_010d0f70;
  }
  png_read_data(param_1,lVar6,uVar5);
  png_calculate_crc(param_1,lVar6,uVar5);
  iVar2 = png_crc_finish(param_1,0);
  if (iVar2 != 0) {
    return;
  }
  if (param_3 != 0) {
    uVar7 = 0;
    do {
      if (*(char *)(lVar6 + uVar7) == '\0') break;
      uVar7 = uVar7 + 1;
    } while ((uint)uVar7 < param_3);
    iVar2 = (int)uVar7;
    if (iVar2 - 1U < 0x4f) {
      if (param_3 < iVar2 + 3U) {
        pcVar4 = "truncated";
      }
      else if (*(char *)(lVar6 + (ulong)(iVar2 + 1)) == '\0') {
        local_38 = -1;
        iVar3 = FUN_010d1100(param_1,uVar5,iVar2 + 2U,&local_38);
        if (iVar3 == 1) {
          local_70 = *(long *)(param_1 + 0x4d0);
          *(undefined1 *)(local_70 + local_38 + (ulong)(iVar2 + 2U)) = 0;
          local_68 = local_70 + (uVar7 & 0xffffffff) + 2;
          local_78[0] = 0;
          lStack_60 = local_38;
          local_50 = 0;
          uStack_48 = 0;
          local_58 = 0;
          iVar2 = png_set_text_2(param_1,param_2,local_78,1);
          if (iVar2 == 0) {
            return;
          }
          pcVar4 = "insufficient memory";
        }
        else {
          pcVar4 = *(char **)(param_1 + 0x1a8);
          if (pcVar4 == (char *)0x0) {
            return;
          }
        }
      }
      else {
        pcVar4 = "unknown compression type";
      }
      goto LAB_010d0fec;
    }
  }
  pcVar4 = "bad keyword";
LAB_010d0fec:
  png_chunk_benign_error(param_1,pcVar4);
  return;
}

