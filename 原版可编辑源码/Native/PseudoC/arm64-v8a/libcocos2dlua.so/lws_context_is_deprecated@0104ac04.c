
byte lws_context_is_deprecated(long param_1)

{
  return *(byte *)(param_1 + 0xc94) & 1;
}

