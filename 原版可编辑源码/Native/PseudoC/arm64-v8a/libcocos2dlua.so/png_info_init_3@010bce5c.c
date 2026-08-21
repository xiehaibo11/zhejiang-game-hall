
void png_info_init_3(undefined8 *param_1,ulong param_2)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    if (param_2 < 0x158) {
      *param_1 = 0;
      free(__ptr);
      __ptr = (void *)png_malloc_base(0,0x158);
      *param_1 = __ptr;
    }
    memset(__ptr,0,0x158);
    return;
  }
  return;
}

