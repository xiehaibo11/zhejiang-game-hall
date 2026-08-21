
/* spine::DefaultSpineExtension::_realloc(void*, unsigned long, char const*, int) */

void * spine::DefaultSpineExtension::_realloc(void *param_1,ulong param_2,char *param_3,int param_4)

{
  void *pvVar1;
  
  if (param_3 == (char *)0x0) {
    return (void *)0x0;
  }
  if (param_2 != 0) {
    pvVar1 = realloc((void *)param_2,(size_t)param_3);
    return pvVar1;
  }
  pvVar1 = malloc((size_t)param_3);
  return pvVar1;
}

