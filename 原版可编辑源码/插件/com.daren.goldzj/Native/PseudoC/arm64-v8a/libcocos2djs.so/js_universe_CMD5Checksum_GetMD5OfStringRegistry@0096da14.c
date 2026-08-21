
/* js_universe_CMD5Checksum_GetMD5OfStringRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_CMD5Checksum_GetMD5OfStringRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  long *plVar5;
  ulong uVar6;
  Value *pVVar7;
  Isolate *pIVar8;
  void *__dest;
  ulong uVar9;
  Value *local_f0;
  Value *local_e8;
  undefined8 local_e0;
  HandleScope aHStack_d8 [24];
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  basic_string local_a0 [16];
  void *local_90;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_d8,pIVar8);
  local_f0 = (Value *)0x0;
  local_e8 = (Value *)0x0;
  local_e0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_f0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_f0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_f0);
  plVar5 = (long *)se::State::args(aSStack_70);
  if (plVar5[1] - *plVar5 == 0x10) {
    uStack_80 = 0;
    local_78 = (void *)0x0;
    local_88 = 0;
    uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_88);
    if ((uVar6 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                          ,0x455,"js_universe_CMD5Checksum_GetMD5OfString");
      __android_log_print(6,"jswrapper",
                          "js_universe_CMD5Checksum_GetMD5OfString : Error processing arguments");
      bVar1 = false;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_88,"&avxfFAEdxxnmyzDKmPQpzllTgO3utUv8",0x21);
      pvVar4 = local_78;
      uVar6 = uStack_80;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = (void *)0x0;
      if ((local_88 & 1) == 0) {
        local_b0 = local_78;
        uStack_b8 = uStack_80;
        local_c0 = local_88;
      }
      else {
        if (0xffffffffffffffef < uStack_80) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (uStack_80 < 0x17) {
          __dest = (void *)((ulong)&local_c0 | 1);
          local_c0 = (ulong)(byte)((int)uStack_80 << 1);
          if (uStack_80 != 0) goto LAB_0096dbd4;
        }
        else {
          uVar9 = uStack_80 + 0x10 & 0xfffffffffffffff0;
          __dest = operator_new(uVar9);
          local_c0 = uVar9 | 1;
          uStack_b8 = uVar6;
          local_b0 = __dest;
LAB_0096dbd4:
          memcpy(__dest,pvVar4,uVar6);
        }
        *(undefined1 *)((long)__dest + uVar6) = 0;
      }
      universe::utils::CMD5Checksum::GetMD5OfString(local_a0,&local_c0);
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      pVVar7 = (Value *)se::State::rval(aSStack_70);
      uVar6 = std_string_to_seval(local_a0,pVVar7);
      bVar1 = (uVar6 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x45a,"js_universe_CMD5Checksum_GetMD5OfString");
        __android_log_print(6,"jswrapper",
                            "js_universe_CMD5Checksum_GetMD5OfString : Error processing arguments");
      }
      bVar1 = !bVar1;
      if (((byte)local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if (bVar1) goto LAB_0096dc70;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 1117): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar5[1] - *plVar5) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_CMD5Checksum_GetMD5OfString",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x460);
LAB_0096dc70:
  pVVar7 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_f0;
  pVVar7 = local_e8;
  if (local_f0 != (Value *)0x0) {
    while (pVVar7 != pVVar3) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_e8 = pVVar3;
    operator_delete(local_f0);
  }
  v8::HandleScope::~HandleScope(aHStack_d8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

