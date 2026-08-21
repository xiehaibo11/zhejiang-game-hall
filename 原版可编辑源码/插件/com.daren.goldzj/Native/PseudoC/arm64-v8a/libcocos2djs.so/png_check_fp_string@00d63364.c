
ulong png_check_fp_string(long param_1,long param_2)

{
  ulong uVar1;
  long local_30;
  uint local_24;
  
  local_24 = 0;
  local_30 = 0;
  uVar1 = png_check_fp_number(param_1,param_2,&local_24,&local_30);
  if ((int)uVar1 != 0) {
    if ((local_30 == param_2) || (*(char *)(param_1 + local_30) == '\0')) {
      uVar1 = (ulong)local_24;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

