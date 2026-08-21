
/* js_engine_Device_getSafeAreaEdgeRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_engine_Device_getSafeAreaEdgeRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  Device *this;
  ulong uVar4;
  Value *pVVar5;
  Isolate *pIVar6;
  Value *local_a0;
  Value *local_98;
  undefined8 local_90;
  HandleScope aHStack_88 [24];
  Vec4 aVStack_70 [16];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar6 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_88,pIVar6);
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar6,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_a0);
  this = (Device *)se::State::args(aSStack_60);
  if (*(long *)(this + 8) - *(long *)this == 0) {
    cocos2d::Device::getSafeAreaEdge(this);
    pVVar5 = (Value *)se::State::rval(aSStack_60);
    uVar4 = Vec4_to_seval(aVStack_70,pVVar5);
    if ((uVar4 & 1) != 0) {
      cocos2d::Vec4::~Vec4(aVStack_70);
      goto LAB_0089d680;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x46b,"js_engine_Device_getSafeAreaEdge");
    __android_log_print(6,"jswrapper",
                        "js_engine_Device_getSafeAreaEdge : Error processing arguments");
    cocos2d::Vec4::~Vec4(aVStack_70);
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 1134): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(*(long *)(this + 8) - *(long *)this) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_Device_getSafeAreaEdge",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0x471);
LAB_0089d680:
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_a0;
  pVVar5 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
    }
    local_98 = pVVar2;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

