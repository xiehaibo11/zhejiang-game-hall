
/* v8::internal::Context::IntrinsicIndexForName(v8::internal::Handle<v8::internal::String>) */

undefined4 v8::internal::Context::IntrinsicIndexForName(undefined8 *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 local_8;
  
  local_8 = *param_1;
  uVar1 = String::IsOneByteEqualTo(&local_8,"generator_next_internal",0x17);
  if ((uVar1 & 1) == 0) {
    local_8 = *param_1;
    uVar1 = String::IsOneByteEqualTo(&local_8,"async_module_evaluate_internal",0x1e);
    if ((uVar1 & 1) == 0) {
      local_8 = *param_1;
      uVar1 = String::IsOneByteEqualTo(&local_8,"make_error",10);
      if ((uVar1 & 1) == 0) {
        local_8 = *param_1;
        uVar1 = String::IsOneByteEqualTo(&local_8,"make_range_error",0x10);
        if ((uVar1 & 1) == 0) {
          local_8 = *param_1;
          uVar1 = String::IsOneByteEqualTo(&local_8,"make_syntax_error",0x11);
          if ((uVar1 & 1) == 0) {
            local_8 = *param_1;
            uVar1 = String::IsOneByteEqualTo(&local_8,"make_type_error",0xf);
            if ((uVar1 & 1) == 0) {
              local_8 = *param_1;
              uVar1 = String::IsOneByteEqualTo(&local_8,"make_uri_error",0xe);
              if ((uVar1 & 1) == 0) {
                local_8 = *param_1;
                uVar1 = String::IsOneByteEqualTo(&local_8,"object_create",0xd);
                if ((uVar1 & 1) == 0) {
                  local_8 = *param_1;
                  uVar1 = String::IsOneByteEqualTo(&local_8,"reflect_apply",0xd);
                  if ((uVar1 & 1) == 0) {
                    local_8 = *param_1;
                    uVar1 = String::IsOneByteEqualTo(&local_8,"reflect_construct",0x11);
                    if ((uVar1 & 1) == 0) {
                      local_8 = *param_1;
                      uVar1 = String::IsOneByteEqualTo(&local_8,"math_floor",10);
                      if ((uVar1 & 1) == 0) {
                        local_8 = *param_1;
                        uVar1 = String::IsOneByteEqualTo(&local_8,"math_pow",8);
                        if ((uVar1 & 1) == 0) {
                          local_8 = *param_1;
                          uVar1 = String::IsOneByteEqualTo
                                            (&local_8,"promise_internal_constructor",0x1c);
                          if ((uVar1 & 1) == 0) {
                            local_8 = *param_1;
                            uVar1 = String::IsOneByteEqualTo(&local_8,"is_promise",10);
                            if ((uVar1 & 1) == 0) {
                              local_8 = *param_1;
                              uVar1 = String::IsOneByteEqualTo(&local_8,"promise_then",0xc);
                              uVar2 = 0x103;
                              if ((uVar1 & 1) == 0) {
                                uVar2 = 0xffffffff;
                              }
                            }
                            else {
                              uVar2 = 0x102;
                            }
                          }
                          else {
                            uVar2 = 0x101;
                          }
                        }
                        else {
                          uVar2 = 0x100;
                        }
                      }
                      else {
                        uVar2 = 0xff;
                      }
                    }
                    else {
                      uVar2 = 0xfe;
                    }
                  }
                  else {
                    uVar2 = 0xfd;
                  }
                }
                else {
                  uVar2 = 0xfc;
                }
              }
              else {
                uVar2 = 0xfb;
              }
            }
            else {
              uVar2 = 0xfa;
            }
          }
          else {
            uVar2 = 0xf9;
          }
        }
        else {
          uVar2 = 0xf8;
        }
      }
      else {
        uVar2 = 0xf7;
      }
    }
    else {
      uVar2 = 0xf6;
    }
  }
  else {
    uVar2 = 0xf5;
  }
  return uVar2;
}

