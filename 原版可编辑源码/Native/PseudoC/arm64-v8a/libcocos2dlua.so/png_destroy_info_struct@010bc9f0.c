
void png_destroy_info_struct(long param_1,undefined8 *param_2)

{
  void *__s;
  
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) &&
     (__s = (void *)*param_2, __s != (void *)0x0)) {
    *param_2 = 0;
    png_free_data(param_1,__s,0x7fff,0xffffffff);
    memset(__s,0,0x158);
    png_free(param_1,__s);
    return;
  }
  return;
}

