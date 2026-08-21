
void png_permit_mng_features(long param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x450) = param_2 & 5;
  }
  return;
}

