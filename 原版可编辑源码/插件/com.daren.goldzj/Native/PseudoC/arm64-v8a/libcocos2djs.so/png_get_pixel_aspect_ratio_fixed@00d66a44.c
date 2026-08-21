
undefined4 png_get_pixel_aspect_ratio_fixed(long param_1,long param_2)

{
  int iVar1;
  undefined4 local_14;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (-1 < *(char *)(param_2 + 8))) ||
     (((*(int *)(param_2 + 0xe0) == 0 || (*(int *)(param_2 + 0xe0) < 0)) ||
      ((*(int *)(param_2 + 0xe4) < 1 ||
       (iVar1 = png_muldiv(&local_14,*(int *)(param_2 + 0xe4),100000), iVar1 == 0)))))) {
    local_14 = 0;
  }
  return local_14;
}

