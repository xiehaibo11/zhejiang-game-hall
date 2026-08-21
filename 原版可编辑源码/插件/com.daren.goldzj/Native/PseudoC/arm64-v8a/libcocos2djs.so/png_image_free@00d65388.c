
void png_image_free(long *param_1)

{
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) && (*(long *)(*param_1 + 0x10) == 0)) {
    png_safe_execute(param_1,FUN_00d653d0,param_1);
    *param_1 = 0;
  }
  return;
}

