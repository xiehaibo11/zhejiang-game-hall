
undefined8 tolua_default_collect(undefined8 param_1)

{
  void *__ptr;
  
  __ptr = (void *)tolua_tousertype(param_1,1,0);
  free(__ptr);
  return 0;
}

