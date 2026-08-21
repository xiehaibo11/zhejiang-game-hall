
/* js_renderer_Light_setWorldMatrixRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_Light_setWorldMatrixRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  Light *this;
  long *plVar4;
  ulong uVar5;
  Value *pVVar6;
  Isolate *pIVar7;
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
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar7);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_a0,pvVar3,(vector *)&local_d0);
  this = (Light *)se::State::nativeThisObject(aSStack_a0);
  if (this == (Light *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0xab2,"js_renderer_Light_setWorldMatrix");
    __android_log_print(6,"jswrapper","js_renderer_Light_setWorldMatrix : Invalid Native Object");
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_a0);
    if (plVar4[1] - *plVar4 == 0x10) {
      cocos2d::Mat4::Mat4(aMStack_78);
      uVar5 = seval_to_Mat4((Value *)*plVar4,aMStack_78);
      if ((uVar5 & 1) != 0) {
        cocos2d::renderer::Light::setWorldMatrix(this,aMStack_78);
        cocos2d::Mat4::~Mat4(aMStack_78);
        goto LAB_0094acb4;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0xab9,"js_renderer_Light_setWorldMatrix");
      __android_log_print(6,"jswrapper",
                          "js_renderer_Light_setWorldMatrix : Error processing arguments");
      cocos2d::Mat4::~Mat4(aMStack_78);
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 2749): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar4[1] - *plVar4) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_Light_setWorldMatrix",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0xac0);
LAB_0094acb4:
  pVVar6 = (Value *)se::State::rval(aSStack_a0);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_a0);
  pVVar2 = local_d0;
  pVVar6 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
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

