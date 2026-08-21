
/* v8::internal::wasm::function_body_decoder::decode_local_type(unsigned char,
   v8::internal::wasm::ValueType*) */

undefined8
v8::internal::wasm::function_body_decoder::decode_local_type(uchar param_1,ValueType *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  uVar1 = 1;
  switch(param_1) {
  case '@':
    goto switchD_01338ed0_caseD_40;
  default:
    uVar1 = 0;
    uVar2 = 10;
switchD_01338ed0_caseD_40:
    *param_2 = uVar2;
    return uVar1;
  case 'h':
    *param_2 = 9;
    return 1;
  case 'o':
    *param_2 = 6;
    return 1;
  case 'p':
    *param_2 = 7;
    return 1;
  case '{':
    *param_2 = 5;
    return 1;
  case '|':
    *param_2 = 4;
    return 1;
  case '}':
    *param_2 = 3;
    return 1;
  case '~':
    *param_2 = 2;
    return 1;
  case '\x7f':
    *param_2 = 1;
    return 1;
  }
}

