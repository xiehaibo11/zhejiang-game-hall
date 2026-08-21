
undefined8 FUN_00d653d0(undefined8 *param_1)

{
  FILE *__stream;
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  ulong uStack_38;
  
  plVar3 = (long *)*param_1;
  lVar2 = *plVar3;
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    if ((*(byte *)(plVar3 + 5) >> 1 & 1) != 0) {
      __stream = *(FILE **)(lVar2 + 0x140);
      *(byte *)(plVar3 + 5) = *(byte *)(plVar3 + 5) & 0xfd;
      if (__stream != (FILE *)0x0) {
        *(undefined8 *)(lVar2 + 0x140) = 0;
        fclose(__stream);
      }
    }
    uStack_38 = plVar3[5];
    local_40 = plVar3[4];
    lStack_48 = plVar3[3];
    local_50 = plVar3[2];
    lStack_58 = plVar3[1];
    local_60 = *plVar3;
    *param_1 = &local_60;
    png_free(local_60,plVar3);
    if ((uStack_38 & 1) == 0) {
      png_destroy_read_struct(&local_60,(ulong)&local_60 | 8,0);
    }
    else {
      png_destroy_write_struct(&local_60,(ulong)&local_60 | 8);
    }
    uVar1 = 1;
  }
  return uVar1;
}

