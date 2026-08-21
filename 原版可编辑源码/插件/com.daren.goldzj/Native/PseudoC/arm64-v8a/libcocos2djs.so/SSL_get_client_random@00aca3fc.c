
size_t SSL_get_client_random(long param_1,void *param_2,size_t param_3)

{
  if (param_3 == 0) {
    param_3 = 0x20;
  }
  else {
    if (0x1f < param_3) {
      param_3 = 0x20;
    }
    memcpy(param_2,(void *)(*(long *)(param_1 + 0x90) + 0xb0),param_3);
  }
  return param_3;
}

