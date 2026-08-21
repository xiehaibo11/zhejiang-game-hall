
/* js_renderer_Camera_getNodeRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_Camera_getNodeRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long lVar4;
  Object *pOVar5;
  Value *pVVar6;
  Isolate *pIVar7;
  type *ptVar8;
  Value *local_b0;
  Value *local_a8;
  undefined8 local_a0;
  HandleScope aHStack_98 [24];
  State aSStack_80 [40];
  Value aVStack_58 [16];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar7);
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  local_a0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar3,(vector *)&local_b0);
  lVar4 = se::State::nativeThisObject(aSStack_80);
  if (lVar4 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                        ,0x142,"js_renderer_Camera_getNode");
    __android_log_print(6,"jswrapper","js_renderer_Camera_getNode : Invalid Native Object");
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_renderer_Camera_getNode",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                        ,0x14b);
  }
  else {
    ptVar8 = *(type **)(lVar4 + 0x10);
    se::Value::Value(aVStack_48);
    native_ptr_to_seval<cocos2d::renderer::NodeProxy>(ptVar8,aVStack_48,(bool *)0x0);
    se::Value::Value(aVStack_58);
    pOVar5 = (Object *)se::Value::toObject(aVStack_48);
    se::Object::getProperty(pOVar5,"_owner",aVStack_58);
    pVVar6 = (Value *)se::State::rval(aSStack_80);
    pOVar5 = (Object *)se::Value::toObject(aVStack_58);
    se::Value::setObject(pVVar6,pOVar5,false);
    se::Value::~Value(aVStack_58);
    se::Value::~Value(aVStack_48);
  }
  pVVar6 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_b0;
  pVVar6 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_a8 = pVVar2;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

