
/* js_cocos2dx_dragonbones_AnimationState_get_displayControlRegistry(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void js_cocos2dx_dragonbones_AnimationState_get_displayControlRegistry
               (undefined8 param_1,PropertyCallbackInfo *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  Value *pVVar4;
  Isolate *pIVar5;
  HandleScope aHStack_98 [24];
  State aSStack_80 [40];
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar5 = *(Isolate **)(*(long *)param_2 + 0x10);
  v8::HandleScope::HandleScope(aHStack_98,pIVar5);
  pvVar2 = (void *)se::internal::getPrivate(pIVar5,*(long *)param_2 + 0x30);
  se::State::State(aSStack_80,pvVar2);
  lVar3 = se::State::nativeThisObject(aSStack_80);
  if (lVar3 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x11a9,&DAT_0192a2f1);
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_AnimationState_get_displayControl : Invalid Native Object"
                       );
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",&DAT_0192a2f1
                        ,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x11b1);
  }
  else {
    se::Value::Value(aVStack_58);
    boolean_to_seval(*(bool *)(lVar3 + 0xf),aVStack_58);
    pVVar4 = (Value *)se::State::rval(aSStack_80);
    se::Value::operator=(pVVar4,aVStack_58);
    se::Value::~Value(aVStack_58);
  }
  pVVar4 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar4,param_2);
  se::State::~State(aSStack_80);
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

