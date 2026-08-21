
void FUN_01057958(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = uv_is_closing();
  if (iVar1 != 0) {
    return;
  }
  uv_close(param_1,FUN_01057b30);
  return;
}

