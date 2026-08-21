
void png_handle_unknown(long param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x430) == 0) {
    if (param_4 == 0) {
      param_4 = *(int *)(param_1 + 0x438);
      if (param_4 != 3) goto LAB_010d168c;
LAB_010d1710:
      iVar2 = FUN_010d17d8(param_1,param_3);
      if (iVar2 == 0) {
        param_4 = 1;
      }
LAB_010d1724:
      if (param_4 != 3) goto LAB_010d16b0;
LAB_010d172c:
      iVar2 = *(int *)(param_1 + 0x49c);
      if (iVar2 == 0) {
LAB_010d1794:
        png_set_unknown_chunks(param_1,param_2,param_1 + 0x4a8,1);
        lVar3 = *(long *)(param_1 + 0x4b0);
        goto joined_r0x010d17b0;
      }
      if (iVar2 + -1 != 0) {
        if (iVar2 != 2) {
          *(int *)(param_1 + 0x49c) = iVar2 + -1;
          goto LAB_010d1794;
        }
        *(undefined4 *)(param_1 + 0x49c) = 1;
        png_chunk_benign_error(param_1,"no space in chunk cache");
      }
    }
    else {
      if (param_4 == 3) goto LAB_010d1710;
LAB_010d168c:
      if ((param_4 == 2) && ((*(byte *)(param_1 + 0x253) >> 5 & 1) != 0)) goto LAB_010d1710;
      png_crc_finish(param_1,param_3);
      if (param_4 == 3) goto LAB_010d172c;
LAB_010d16b0:
      if (param_4 == 2) {
LAB_010d16b8:
        if ((*(byte *)(param_1 + 0x253) >> 5 & 1) != 0) goto LAB_010d172c;
      }
    }
LAB_010d175c:
    bVar1 = false;
    lVar3 = *(long *)(param_1 + 0x4b0);
  }
  else {
    iVar2 = FUN_010d17d8(param_1,param_3);
    if (iVar2 == 0) goto LAB_010d175c;
    iVar2 = (**(code **)(param_1 + 0x430))(param_1,param_1 + 0x4a8);
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,"error in user chunk");
    }
    if (iVar2 == 0) {
      if (1 < param_4) goto LAB_010d1724;
      if (*(int *)(param_1 + 0x438) < 2) {
        png_chunk_warning(param_1,"Saving unknown chunk:");
        png_app_warning(param_1,
                        "forcing save of an unhandled chunk; please call png_set_keep_unknown_chunks"
                       );
        if ((*(byte *)(param_1 + 0x253) >> 5 & 1) == 0) goto LAB_010d175c;
        goto LAB_010d172c;
      }
      goto LAB_010d16b8;
    }
    lVar3 = *(long *)(param_1 + 0x4b0);
joined_r0x010d17b0:
    bVar1 = true;
  }
  if (lVar3 != 0) {
    png_free(param_1);
  }
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  if ((!bVar1) && ((*(byte *)(param_1 + 0x253) >> 5 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"unhandled critical chunk");
  }
  return;
}

