
void FUN_00ab53b0(long param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = lws_get_context();
  if ((*(byte *)(lVar1 + 0xc79) >> 2 & 1) == 0) {
    return;
  }
  *(long *)(param_1 + 0x208) = lVar1;
  if (*(char *)(param_1 + 0x2fe) == '\r') {
    uv_poll_init();
    return;
  }
  uv_poll_init_socket(*(undefined8 *)(lVar1 + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 + 0x130),
                      param_1 + 0x168,param_2);
  return;
}

