
/* js_extension_Manifest_getSearchPathsRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_extension_Manifest_getSearchPathsRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  Value *pVVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  Value *pVVar10;
  Isolate *pIVar11;
  Value *local_b8;
  Value *local_b0;
  undefined8 local_a8;
  HandleScope aHStack_a0 [24];
  byte *local_88;
  byte *local_80;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar11);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_b8);
  lVar7 = se::State::nativeThisObject(aSStack_70);
  if (lVar7 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                        ,0x1ff,"js_extension_Manifest_getSearchPaths");
    __android_log_print(6,"jswrapper","js_extension_Manifest_getSearchPaths : Invalid Native Object"
                       );
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_70);
    if (plVar8[1] - *plVar8 == 0) {
      cocos2d::extension::Manifest::getSearchPaths();
      pVVar10 = (Value *)se::State::rval(aSStack_70);
      uVar9 = std_vector_string_to_seval((vector *)&local_88,pVVar10);
      bVar1 = (uVar9 & 1) == 0;
      pbVar3 = local_88;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                            ,0x206,"js_extension_Manifest_getSearchPaths");
        __android_log_print(6,"jswrapper",
                            "js_extension_Manifest_getSearchPaths : Error processing arguments");
        pbVar3 = local_88;
      }
      local_88 = pbVar3;
      if (pbVar3 != (byte *)0x0) {
        while (pbVar4 = local_80, pbVar4 != pbVar3) {
          local_80 = pbVar4 + -0x18;
          if ((*local_80 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
        }
        operator_delete(local_88);
      }
      if (!bVar1) goto LAB_008a967c;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp, 521): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar8[1] - *plVar8) >> 4,0);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_extension_Manifest_getSearchPaths",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                      ,0x20c);
LAB_008a967c:
  pVVar10 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_70);
  pVVar5 = local_b8;
  pVVar10 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar10 != pVVar5) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_b0 = pVVar5;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

