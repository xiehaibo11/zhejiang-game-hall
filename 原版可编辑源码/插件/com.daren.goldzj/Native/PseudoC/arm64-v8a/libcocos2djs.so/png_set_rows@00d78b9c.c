
void png_set_rows(long param_1,long param_2,long param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(long *)(param_2 + 0x150) != 0) && (*(long *)(param_2 + 0x150) != param_3)) {
      png_free_data(param_1,param_2,0x40,0);
    }
    *(long *)(param_2 + 0x150) = param_3;
    if (param_3 != 0) {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x8000;
    }
  }
  return;
}

