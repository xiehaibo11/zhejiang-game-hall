
/* js_gfx_DeviceGraphics_getInstanceRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_DeviceGraphics_getInstanceRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long *plVar4;
  type *ptVar5;
  Object *this;
  Value *pVVar6;
  Isolate *pIVar7;
  Value *local_a0;
  Value *local_98;
  undefined8 local_90;
  HandleScope aHStack_88 [24];
  State aSStack_70 [40];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_88,pIVar7);
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar3,(vector *)&local_a0);
  plVar4 = (long *)se::State::args(aSStack_70);
  if (plVar4[1] - *plVar4 == 0) {
    ptVar5 = (type *)cocos2d::renderer::DeviceGraphics::getInstance();
    se::Value::Value(aVStack_48);
    native_ptr_to_seval<cocos2d::renderer::DeviceGraphics>
              (ptVar5,__jsb_cocos2d_renderer_DeviceGraphics_class,aVStack_48,(bool *)0x0);
    this = (Object *)se::Value::toObject(aVStack_48);
    se::Object::root(this);
    pVVar6 = (Value *)se::State::rval(aSStack_70);
    se::Value::operator=(pVVar6,aVStack_48);
    se::Value::~Value(aVStack_48);
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp, 1069): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar4[1] - *plVar4) >> 4,0);
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_gfx_DeviceGraphics_getInstance",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                        ,0x430);
  }
  pVVar6 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a0;
  pVVar6 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
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

