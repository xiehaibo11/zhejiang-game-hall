
void * tolua_copy(undefined8 param_1,void *param_2,ulong param_3)

{
  void *__dest;
  
  __dest = malloc(param_3 & 0xffffffff);
  if (__dest == (void *)0x0) {
    tolua_error(param_1,"insuficient memory",0);
  }
  else {
    memcpy(__dest,param_2,param_3 & 0xffffffff);
  }
  return __dest;
}

