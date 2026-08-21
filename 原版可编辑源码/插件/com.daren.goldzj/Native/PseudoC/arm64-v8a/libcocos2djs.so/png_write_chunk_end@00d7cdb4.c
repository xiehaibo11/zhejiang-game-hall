
void png_write_chunk_end(long param_1)

{
  undefined4 uVar1;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x294);
    *(undefined4 *)(param_1 + 0x4e4) = 0x82;
    local_14 = (undefined1)((uint)uVar1 >> 0x18);
    local_13 = (undefined1)((uint)uVar1 >> 0x10);
    local_12 = (undefined1)((uint)uVar1 >> 8);
    local_11 = (undefined1)uVar1;
    png_write_data(param_1,&local_14,4);
  }
  return;
}

