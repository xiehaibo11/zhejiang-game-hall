
/* js_renderer_View_getForwardRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_View_getForwardRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  View *this;
  long *plVar4;
  Object *this_00;
  Value *pVVar5;
  Isolate *pIVar6;
  Value *local_b0;
  Value *local_a8;
  undefined8 local_a0;
  HandleScope aHStack_98 [24];
  float local_80;
  float local_7c;
  float local_78;
  State aSStack_70 [40];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar6 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar6);
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  local_a0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar6,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar3,(vector *)&local_b0);
  this = (View *)se::State::nativeThisObject(aSStack_70);
  if (this == (View *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                        ,0xcb,"js_renderer_View_getForward");
    __android_log_print(6,"jswrapper","js_renderer_View_getForward : Invalid Native Object");
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_70);
    if (plVar4[1] - *plVar4 == 0x10) {
      cocos2d::Vec3::Vec3((Vec3 *)&local_80);
      cocos2d::renderer::View::getForward(this,(Vec3 *)&local_80);
      this_00 = (Object *)se::Value::toObject((Value *)*plVar4);
      se::Value::Value(aVStack_48,local_80);
      se::Object::setProperty(this_00,"x",aVStack_48);
      se::Value::~Value(aVStack_48);
      se::Value::Value(aVStack_48,local_7c);
      se::Object::setProperty(this_00,"y",aVStack_48);
      se::Value::~Value(aVStack_48);
      se::Value::Value(aVStack_48,local_78);
      se::Object::setProperty(this_00,"z",aVStack_48);
      se::Value::~Value(aVStack_48);
      pVVar5 = (Value *)se::State::rval(aSStack_70);
      se::Value::setObject(pVVar5,this_00,false);
      cocos2d::Vec3::~Vec3((Vec3 *)&local_80);
      goto LAB_0095dce8;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp, 217): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar4[1] - *plVar4) >> 4,4);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_View_getForward",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                      ,0xdc);
LAB_0095dce8:
  pVVar5 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_b0;
  pVVar5 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
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

