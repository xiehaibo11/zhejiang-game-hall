
void png_set_check_for_invalid_index(long param_1,int param_2)

{
  *(uint *)(param_1 + 0x2a4) = -(uint)(param_2 < 1);
  return;
}

