
int dtls_raw_hello_verify_request(undefined2 *param_1,void *param_2,byte param_3)

{
  *(byte *)(param_1 + 1) = param_3;
  *param_1 = 0xfffe;
  memcpy((void *)((long)param_1 + 3),param_2,(ulong)(uint)param_3);
  return ((int)(void *)((long)param_1 + 3) + (uint)param_3) - (int)param_1;
}

