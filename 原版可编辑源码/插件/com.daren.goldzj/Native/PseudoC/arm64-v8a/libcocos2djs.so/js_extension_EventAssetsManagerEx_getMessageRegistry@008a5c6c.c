
/* js_extension_EventAssetsManagerEx_getMessageRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_extension_EventAssetsManagerEx_getMessageRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  void *__dest;
  ulong uVar10;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar9);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_c0);
  lVar5 = se::State::nativeThisObject(aSStack_70);
  if (lVar5 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                        ,0x78,"js_extension_EventAssetsManagerEx_getMessage");
    __android_log_print(6,"jswrapper",
                        "js_extension_EventAssetsManagerEx_getMessage : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_70);
    if (plVar6[1] - *plVar6 == 0) {
      uStack_88 = 0;
      local_80 = (void *)0x0;
      local_90 = 0;
      if ((*(byte *)(lVar5 + 0x18) & 1) == 0) {
        local_80 = *(void **)(lVar5 + 0x28);
        uStack_88 = *(ulong *)(lVar5 + 0x20);
        local_90 = *(ulong *)(lVar5 + 0x18);
      }
      else {
        uVar7 = *(ulong *)(lVar5 + 0x20);
        if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        pvVar4 = *(void **)(lVar5 + 0x28);
        if (uVar7 < 0x17) {
          __dest = (void *)((ulong)&local_90 | 1);
          local_90 = (ulong)(byte)((int)uVar7 << 1);
          if (uVar7 != 0) goto LAB_008a5e04;
        }
        else {
          uVar10 = uVar7 + 0x10 & 0xfffffffffffffff0;
          __dest = operator_new(uVar10);
          local_90 = uVar10 | 1;
          uStack_88 = uVar7;
          local_80 = __dest;
LAB_008a5e04:
          memcpy(__dest,pvVar4,uVar7);
        }
        *(undefined1 *)((long)__dest + uVar7) = 0;
      }
      pVVar8 = (Value *)se::State::rval(aSStack_70);
      uVar7 = std_string_to_seval((basic_string *)&local_90,pVVar8);
      bVar1 = (uVar7 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                            ,0x7f,"js_extension_EventAssetsManagerEx_getMessage");
        __android_log_print(6,"jswrapper",
                            "js_extension_EventAssetsManagerEx_getMessage : Error processing arguments"
                           );
      }
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if (!bVar1) goto LAB_008a5e74;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp, 130): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar6[1] - *plVar6) >> 4,0);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_extension_EventAssetsManagerEx_getMessage",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                      ,0x85);
LAB_008a5e74:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_c0;
  pVVar8 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_b8 = pVVar3;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

