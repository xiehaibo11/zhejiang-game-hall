
void lws_client_http_body_pending(long param_1,int param_2)

{
  *(uint *)(param_1 + 0x2f4) =
       *(uint *)(param_1 + 0x2f4) & 0xe0000000 |
       *(uint *)(param_1 + 0x2f4) & 0xfffffff | (uint)(param_2 != 0) << 0x1c;
  return;
}

