
void png_set_text_compression_level(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x208) = param_2;
  }
  return;
}

