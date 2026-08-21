
undefined8 FUN_010d17d8(long param_1,uint param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x4b0) != 0) {
    png_free(param_1,*(long *)(param_1 + 0x4b0));
    *(undefined8 *)(param_1 + 0x4b0) = 0;
  }
  if ((*(ulong *)(param_1 + 0x4a0) + 1 < 2) || ((ulong)param_2 <= *(ulong *)(param_1 + 0x4a0))) {
    uVar1 = *(undefined4 *)(param_1 + 0x250);
    *(undefined1 *)(param_1 + 0x4ac) = 0;
    *(ulong *)(param_1 + 0x4b8) = (ulong)param_2;
    *(char *)(param_1 + 0x4ab) = (char)uVar1;
    *(char *)(param_1 + 0x4a8) = (char)((uint)uVar1 >> 0x18);
    *(char *)(param_1 + 0x4a9) = (char)((uint)uVar1 >> 0x10);
    *(char *)(param_1 + 0x4aa) = (char)((uint)uVar1 >> 8);
    *(char *)(param_1 + 0x4c0) = (char)*(undefined4 *)(param_1 + 0x164);
    if (param_2 == 0) {
      lVar2 = 0;
      *(undefined8 *)(param_1 + 0x4b0) = 0;
      goto LAB_010d18a8;
    }
    lVar2 = png_malloc_warn(param_1,(ulong)param_2);
    *(long *)(param_1 + 0x4b0) = lVar2;
  }
  else {
    lVar2 = 0;
  }
  if ((param_2 != 0) && (lVar2 == 0)) {
    png_crc_finish(param_1,param_2);
    png_chunk_benign_error(param_1,"unknown chunk exceeds memory limits");
    return 0;
  }
LAB_010d18a8:
  if (param_2 != 0) {
    png_read_data(param_1,lVar2,param_2);
    png_calculate_crc(param_1,lVar2,param_2);
  }
  png_crc_finish(param_1,0);
  return 1;
}

