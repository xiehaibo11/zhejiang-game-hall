
/* v8::base::SetDcheckFunction(void (*)(char const*, int, char const*)) */

void v8::base::SetDcheckFunction(_func_void_char_ptr_int_char_ptr *param_1)

{
  code *pcVar1;
  
  pcVar1 = FUN_01473c40;
  if (param_1 != (_func_void_char_ptr_int_char_ptr *)0x0) {
    pcVar1 = param_1;
  }
  PTR_FUN_01d358e8 = pcVar1;
  return;
}

