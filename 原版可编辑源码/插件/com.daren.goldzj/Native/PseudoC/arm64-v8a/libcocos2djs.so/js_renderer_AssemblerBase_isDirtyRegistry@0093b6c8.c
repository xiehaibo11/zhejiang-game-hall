
/* js_renderer_AssemblerBase_isDirtyRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_AssemblerBase_isDirtyRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  Value *pVVar7;
  ulong uVar8;
  Isolate *pIVar9;
  Value *local_98;
  Value *local_90;
  undefined8 local_88;
  HandleScope aHStack_80 [28];
  uint local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar9);
  local_98 = (Value *)0x0;
  local_90 = (Value *)0x0;
  local_88 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_98,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar4 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_98);
  lVar5 = se::State::nativeThisObject(aSStack_60);
  if (lVar5 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x3a0,"js_renderer_AssemblerBase_isDirty");
    __android_log_print(6,"jswrapper","js_renderer_AssemblerBase_isDirty : Invalid Native Object");
  }
  else {
    puVar6 = (undefined8 *)se::State::args(aSStack_60);
    uVar8 = puVar6[1] - (long)*puVar6;
    if (uVar8 == 0x10) {
      local_64 = 0;
      uVar8 = seval_to_uint32((Value *)*puVar6,&local_64);
      if ((uVar8 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                            ,0x3a7,"js_renderer_AssemblerBase_isDirty");
        __android_log_print(6,"jswrapper",
                            "js_renderer_AssemblerBase_isDirty : Error processing arguments");
      }
      else {
        if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
          bVar3 = false;
        }
        else {
          bVar3 = (**(uint **)(lVar5 + 0x18) & local_64) != 0;
        }
        pVVar7 = (Value *)se::State::rval(aSStack_60);
        uVar8 = boolean_to_seval(bVar3,pVVar7);
        if ((uVar8 & 1) != 0) goto LAB_0093b8f0;
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                            ,0x3aa,"js_renderer_AssemblerBase_isDirty");
        __android_log_print(6,"jswrapper",
                            "js_renderer_AssemblerBase_isDirty : Error processing arguments");
      }
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 941): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar8 >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_AssemblerBase_isDirty",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x3b0);
LAB_0093b8f0:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar7 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_90 = pVVar2;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

