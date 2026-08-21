
int speex_buffer_resize(undefined8 *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)*param_1,(long)param_2);
  *param_1 = pvVar1;
  return param_2;
}

