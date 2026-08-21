
/* js_renderer_Light_getViewPorjMatrixRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_Light_getViewPorjMatrixRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  Value *pVVar7;
  Isolate *pIVar8;
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [24];
  State aSStack_a0 [40];
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar8);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_a0,pvVar3,(vector *)&local_d0);
  lVar4 = se::State::nativeThisObject(aSStack_a0);
  if (lVar4 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x9b2,"js_renderer_Light_getViewPorjMatrix");
    __android_log_print(6,"jswrapper","js_renderer_Light_getViewPorjMatrix : Invalid Native Object")
    ;
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_a0);
    if (plVar5[1] - *plVar5 == 0) {
      cocos2d::Mat4::Mat4(aMStack_78,(Mat4 *)(lVar4 + 0x9c));
      pVVar7 = (Value *)se::State::rval(aSStack_a0);
      uVar6 = Mat4_to_seval(aMStack_78,pVVar7);
      if ((uVar6 & 1) != 0) {
        cocos2d::Mat4::~Mat4(aMStack_78);
        goto LAB_00948778;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x9b9,"js_renderer_Light_getViewPorjMatrix");
      __android_log_print(6,"jswrapper",
                          "js_renderer_Light_getViewPorjMatrix : Error processing arguments");
      cocos2d::Mat4::~Mat4(aMStack_78);
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 2492): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar5[1] - *plVar5) >> 4,0);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_Light_getViewPorjMatrix",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x9bf);
LAB_00948778:
  pVVar7 = (Value *)se::State::rval(aSStack_a0);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_a0);
  pVVar2 = local_d0;
  pVVar7 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_c8 = pVVar2;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

