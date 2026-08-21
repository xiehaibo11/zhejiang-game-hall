
/* js_cocos2dx_dragonbones_CCArmatureDisplay_dispatchDBEventRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_CCArmatureDisplay_dispatchDBEventRegistry
               (FunctionCallbackInfo *param_1)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  Value *pVVar4;
  byte bVar5;
  void *pvVar6;
  long *plVar7;
  long *plVar8;
  Object *this;
  long lVar9;
  Value *pVVar10;
  Isolate *pIVar11;
  Value *local_a8;
  Value *local_a0;
  Value *local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar11);
  local_a8 = operator_new(0xa0);
  local_98 = local_a8 + 0xa0;
  local_a0 = local_a8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar6,(vector *)&local_a8);
  plVar7 = (long *)se::State::nativeThisObject(aSStack_60);
  if (plVar7 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1d53,"js_cocos2dx_dragonbones_CCArmatureDisplay_dispatchDBEvent");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_CCArmatureDisplay_dispatchDBEvent : Invalid Native Object"
                       );
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_60);
    if (plVar8[1] - *plVar8 == 0x20) {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
      bVar5 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_78);
      bVar1 = *(byte *)(*plVar8 + 0x18);
      if (bVar1 == 5) {
        this = (Object *)se::Value::toObject((Value *)(*plVar8 + 0x10));
        lVar9 = se::Object::getPrivateData(this);
        if ((lVar9 == 0) || ((bVar5 & 1) == 0)) goto LAB_00cc8ac8;
LAB_00cc8c50:
        (**(code **)(*plVar7 + 0x40))(plVar7,&local_78,lVar9);
        bVar3 = true;
      }
      else {
        lVar9 = 0;
        if ((bVar5 & bVar1 < 2) != 0) goto LAB_00cc8c50;
LAB_00cc8ac8:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,0x1d5c,"js_cocos2dx_dragonbones_CCArmatureDisplay_dispatchDBEvent");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_CCArmatureDisplay_dispatchDBEvent : Error processing arguments"
                           );
        bVar3 = false;
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      if (bVar3) goto LAB_00cc8bbc;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 7520): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar8[1] - *plVar8) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_CCArmatureDisplay_dispatchDBEvent",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x1d63);
LAB_00cc8bbc:
  pVVar10 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_60);
  pVVar4 = local_a8;
  pVVar10 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar10 != pVVar4) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_a0 = pVVar4;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

