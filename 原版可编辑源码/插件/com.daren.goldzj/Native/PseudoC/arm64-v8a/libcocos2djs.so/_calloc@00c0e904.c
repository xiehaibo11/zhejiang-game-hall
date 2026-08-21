
/* spine::DefaultSpineExtension::_calloc(unsigned long, char const*, int) */

void * spine::DefaultSpineExtension::_calloc(ulong param_1,char *param_2,int param_3)

{
  void *__s;
  
  if (param_2 == (char *)0x0) {
    __s = (void *)0x0;
  }
  else {
    __s = malloc((size_t)param_2);
    if (__s != (void *)0x0) {
      memset(__s,0,(size_t)param_2);
    }
  }
  return __s;
}

