
/* js_renderer_Camera_getRectRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_Camera_getRectRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  Object *this;
  Value *pVVar6;
  Isolate *pIVar7;
  Value *local_b0;
  Value *local_a8;
  undefined8 local_a0;
  HandleScope aHStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  State aSStack_70 [40];
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
  se::State::State(aSStack_70,pvVar3,(vector *)&local_b0);
  lVar4 = se::State::nativeThisObject(aSStack_70);
  if (lVar4 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                        ,0x3e,"js_renderer_Camera_getRect");
    __android_log_print(6,"jswrapper","js_renderer_Camera_getRect : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_70);
    if (plVar5[1] - *plVar5 == 0x10) {
      cocos2d::renderer::Rect::Rect((Rect *)&local_80);
      uStack_78 = *(undefined8 *)(lVar4 + 0x74);
      local_80 = *(undefined8 *)(lVar4 + 0x6c);
      this = (Object *)se::Value::toObject((Value *)*plVar5);
      se::Value::Value(aVStack_48,(float)local_80);
      se::Object::setProperty(this,"x",aVStack_48);
      se::Value::~Value(aVStack_48);
      se::Value::Value(aVStack_48,local_80._4_4_);
      se::Object::setProperty(this,"y",aVStack_48);
      se::Value::~Value(aVStack_48);
      se::Value::Value(aVStack_48,(float)uStack_78);
      se::Object::setProperty(this,"w",aVStack_48);
      se::Value::~Value(aVStack_48);
      se::Value::Value(aVStack_48,uStack_78._4_4_);
      se::Object::setProperty(this,"h",aVStack_48);
      se::Value::~Value(aVStack_48);
      pVVar6 = (Value *)se::State::rval(aSStack_70);
      se::Value::setObject(pVVar6,this,false);
      goto LAB_0095c76c;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp, 77): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar5[1] - *plVar5) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_Camera_getRect",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                      ,0x50);
LAB_0095c76c:
  pVVar6 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_70);
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

