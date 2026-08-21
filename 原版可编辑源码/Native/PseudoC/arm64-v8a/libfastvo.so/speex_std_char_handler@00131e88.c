
undefined8 speex_std_char_handler(undefined8 param_1,undefined8 param_2,FILE *param_3)

{
  uint uVar1;
  
  uVar1 = speex_bits_unpack_unsigned(param_1,8);
  fputc(uVar1 & 0xff,param_3);
  return 0;
}

