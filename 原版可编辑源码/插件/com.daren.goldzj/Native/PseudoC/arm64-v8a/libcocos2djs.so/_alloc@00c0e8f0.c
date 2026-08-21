
/* spine::DefaultSpineExtension::_alloc(unsigned long, char const*, int) */

void * spine::DefaultSpineExtension::_alloc(ulong param_1,char *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_2 != (char *)0x0) {
    pvVar1 = malloc((size_t)param_2);
    return pvVar1;
  }
  return (void *)0x0;
}

