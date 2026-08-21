
void * png_calloc(long param_1,size_t param_2)

{
  void *__s;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if (param_2 != 0) {
    if (*(code **)(param_1 + 0x460) == (code *)0x0) {
      __s = malloc(param_2);
    }
    else {
      __s = (void *)(**(code **)(param_1 + 0x460))(param_1,param_2);
    }
    if (__s != (void *)0x0) {
      memset(__s,0,param_2);
      return __s;
    }
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Out of memory");
}

