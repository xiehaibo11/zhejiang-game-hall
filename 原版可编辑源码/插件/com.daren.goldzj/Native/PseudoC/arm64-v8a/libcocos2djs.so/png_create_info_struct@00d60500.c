
void * png_create_info_struct(long param_1)

{
  void *__s;
  
  if (param_1 == 0) {
    __s = (void *)0x0;
  }
  else {
    __s = (void *)png_malloc_base(param_1,0x158);
    if (__s != (void *)0x0) {
      memset(__s,0,0x158);
    }
  }
  return __s;
}

