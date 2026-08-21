
void png_set_flush(long param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x2e0) = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  }
  return;
}

