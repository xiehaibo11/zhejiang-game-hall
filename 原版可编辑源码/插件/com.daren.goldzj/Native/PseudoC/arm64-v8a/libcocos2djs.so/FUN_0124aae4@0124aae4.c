
undefined8
FUN_0124aae4(undefined8 param_1,Value *param_2,undefined8 param_3,undefined1 *param_4,uint param_5)

{
  String *pSVar1;
  long lVar2;
  ulong uVar3;
  char *local_50;
  undefined8 uStack_48;
  
  if (param_2 == (Value *)0x0) {
    return 0;
  }
  pSVar1 = (String *)v8::Value::ToString(param_2,param_3);
  if (pSVar1 == (String *)0x0) {
    return 0;
  }
  uStack_48 = __strlen_chk("i32",4);
  local_50 = "i32";
  lVar2 = v8::internal::Factory::NewStringFromOneByte(param_1,&local_50,0);
  if (lVar2 != 0) {
    uVar3 = v8::String::StringEquals(pSVar1,lVar2);
    if ((uVar3 & 1) != 0) {
      *param_4 = 1;
      return 1;
    }
    uStack_48 = __strlen_chk("f32",4);
    local_50 = "f32";
    lVar2 = v8::internal::Factory::NewStringFromOneByte(param_1,&local_50,0);
    if (lVar2 != 0) {
      uVar3 = v8::String::StringEquals(pSVar1,lVar2);
      if ((uVar3 & 1) != 0) {
        *param_4 = 3;
        return 1;
      }
      uStack_48 = __strlen_chk("i64",4);
      local_50 = "i64";
      lVar2 = v8::internal::Factory::NewStringFromOneByte(param_1,&local_50,0);
      if (lVar2 != 0) {
        uVar3 = v8::String::StringEquals(pSVar1,lVar2);
        if ((uVar3 & 1) != 0) {
          *param_4 = 2;
          return 1;
        }
        uStack_48 = __strlen_chk("f64",4);
        local_50 = "f64";
        lVar2 = v8::internal::Factory::NewStringFromOneByte(param_1,&local_50,0);
        if (lVar2 != 0) {
          uVar3 = v8::String::StringEquals(pSVar1,lVar2);
          if ((uVar3 & 1) != 0) {
            *param_4 = 4;
            return 1;
          }
          if ((param_5 >> 5 & 1) != 0) {
            uStack_48 = __strlen_chk("anyref",7);
            local_50 = "anyref";
            lVar2 = v8::internal::Factory::NewStringFromOneByte(param_1,&local_50,0);
            if (lVar2 == 0) goto LAB_0124ad48;
            uVar3 = v8::String::StringEquals(pSVar1,lVar2);
            if ((uVar3 & 1) != 0) {
              *param_4 = 6;
              return 1;
            }
            uStack_48 = __strlen_chk("anyfunc",8);
            local_50 = "anyfunc";
            lVar2 = v8::internal::Factory::NewStringFromOneByte(param_1,&local_50,0);
            if (lVar2 == 0) goto LAB_0124ad48;
            uVar3 = v8::String::StringEquals(pSVar1,lVar2);
            if ((uVar3 & 1) != 0) {
              *param_4 = 7;
              return 1;
            }
          }
          if ((param_5 & 1) != 0) {
            uStack_48 = __strlen_chk("exnref",7);
            local_50 = "exnref";
            lVar2 = v8::internal::Factory::NewStringFromOneByte(param_1,&local_50,0);
            if (lVar2 == 0) goto LAB_0124ad48;
            uVar3 = v8::String::StringEquals(pSVar1,lVar2);
            if ((uVar3 & 1) != 0) {
              *param_4 = 9;
              return 1;
            }
          }
          *param_4 = 0;
          return 1;
        }
      }
    }
  }
LAB_0124ad48:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

