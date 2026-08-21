
int uv__set_process_title(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = prctl(0xf,param_1);
  return iVar1;
}

