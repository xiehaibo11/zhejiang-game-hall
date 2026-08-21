
int png_get_pixels_per_meter(long param_1,long param_2)

{
  int iVar1;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (-1 < *(char *)(param_2 + 8))) ||
     ((*(char *)(param_2 + 0xe8) != '\x01' ||
      (iVar1 = *(int *)(param_2 + 0xe0), iVar1 != *(int *)(param_2 + 0xe4))))) {
    iVar1 = 0;
  }
  return iVar1;
}

