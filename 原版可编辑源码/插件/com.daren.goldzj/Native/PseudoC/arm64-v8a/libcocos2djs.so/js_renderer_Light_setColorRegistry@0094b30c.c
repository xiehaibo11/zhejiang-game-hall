
/* js_renderer_Light_setColorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_Light_setColorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  Light *this;
  long *plVar7;
  Value *pVVar8;
  ulong uVar9;
  Isolate *pIVar10;
  Value *local_b0;
  Value *local_a8;
  undefined8 local_a0;
  HandleScope aHStack_98 [28];
  float local_7c;
  undefined8 local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar10);
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  local_a0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar6 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_b0);
  this = (Light *)se::State::nativeThisObject(aSStack_70);
  if (this == (Light *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0xaeb,"js_renderer_Light_setColor");
    __android_log_print(6,"jswrapper","js_renderer_Light_setColor : Invalid Native Object");
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_70);
    uVar9 = plVar7[1] - *plVar7;
    if (uVar9 == 0x30) {
      local_78 = 0;
      local_7c = 0.0;
      uVar3 = seval_to_float((Value *)*plVar7,(float *)((long)&local_78 + 4));
      uVar4 = seval_to_float((Value *)(*plVar7 + 0x10),(float *)&local_78);
      uVar5 = seval_to_float((Value *)(*plVar7 + 0x20),&local_7c);
      if ((uVar3 & uVar4 & uVar5 & 1) != 0) {
        cocos2d::renderer::Light::setColor(this,local_78._4_4_,(float)local_78,local_7c);
        goto LAB_0094b500;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0xaf6,"js_renderer_Light_setColor");
      __android_log_print(6,"jswrapper","js_renderer_Light_setColor : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 2810): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar9 >> 4,3);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_Light_setColor",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0xafd);
LAB_0094b500:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_b0;
  pVVar8 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar8 != pVVar2) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_a8 = pVVar2;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

