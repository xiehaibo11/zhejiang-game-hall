
/* v8::internal::Context::IntrinsicIndexForName(unsigned char const*, int) */

undefined8 v8::internal::Context::IntrinsicIndexForName(uchar *param_1,int param_2)

{
  int iVar1;
  
  switch(param_2) {
  case 8:
    iVar1 = strncmp((char *)param_1,"math_pow",8);
    if (iVar1 == 0) {
      return 0x100;
    }
    break;
  case 10:
    iVar1 = strncmp((char *)param_1,"make_error",10);
    if (iVar1 == 0) {
      return 0xf7;
    }
    iVar1 = strncmp((char *)param_1,"math_floor",10);
    if (iVar1 == 0) {
      return 0xff;
    }
    iVar1 = strncmp((char *)param_1,"is_promise",10);
    if (iVar1 == 0) {
      return 0x102;
    }
    break;
  case 0xc:
    iVar1 = strncmp((char *)param_1,"promise_then",0xc);
    if (iVar1 == 0) {
      return 0x103;
    }
    break;
  case 0xd:
    iVar1 = strncmp((char *)param_1,"object_create",0xd);
    if (iVar1 == 0) {
      return 0xfc;
    }
    iVar1 = strncmp((char *)param_1,"reflect_apply",0xd);
    if (iVar1 == 0) {
      return 0xfd;
    }
    break;
  case 0xe:
    iVar1 = strncmp((char *)param_1,"make_uri_error",0xe);
    if (iVar1 == 0) {
      return 0xfb;
    }
    break;
  case 0xf:
    iVar1 = strncmp((char *)param_1,"make_type_error",0xf);
    if (iVar1 == 0) {
      return 0xfa;
    }
    break;
  case 0x10:
    iVar1 = strncmp((char *)param_1,"make_range_error",0x10);
    if (iVar1 == 0) {
      return 0xf8;
    }
    break;
  case 0x11:
    iVar1 = strncmp((char *)param_1,"make_syntax_error",0x11);
    if (iVar1 == 0) {
      return 0xf9;
    }
    iVar1 = strncmp((char *)param_1,"reflect_construct",0x11);
    if (iVar1 == 0) {
      return 0xfe;
    }
    break;
  case 0x17:
    iVar1 = strncmp((char *)param_1,"generator_next_internal",0x17);
    if (iVar1 == 0) {
      return 0xf5;
    }
    break;
  case 0x1c:
    iVar1 = strncmp((char *)param_1,"promise_internal_constructor",0x1c);
    if (iVar1 == 0) {
      return 0x101;
    }
    break;
  case 0x1e:
    iVar1 = strncmp((char *)param_1,"async_module_evaluate_internal",0x1e);
    if (iVar1 == 0) {
      return 0xf6;
    }
  }
  return 0xffffffff;
}

