
undefined8 speex_default_user_handler(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = speex_bits_unpack_unsigned(param_1,4);
  speex_bits_advance(param_1,iVar1 << 3 | 5);
  return 0;
}

