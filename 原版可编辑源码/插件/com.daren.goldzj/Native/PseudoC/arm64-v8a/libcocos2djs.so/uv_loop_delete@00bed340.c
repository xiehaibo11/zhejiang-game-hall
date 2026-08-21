
void uv_loop_delete(long param_1)

{
  long lVar1;
  
  lVar1 = DAT_01d3bc58;
  uv_loop_close();
  if (param_1 != lVar1) {
    uv__free(param_1);
    return;
  }
  return;
}

