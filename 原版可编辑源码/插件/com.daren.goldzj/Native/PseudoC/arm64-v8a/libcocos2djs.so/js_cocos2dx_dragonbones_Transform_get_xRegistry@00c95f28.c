
/* js_cocos2dx_dragonbones_Transform_get_xRegistry(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void js_cocos2dx_dragonbones_Transform_get_xRegistry
               (undefined8 param_1,PropertyCallbackInfo *param_2)

{
  long lVar1;
  void *pvVar2;
  float *pfVar3;
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
  pfVar3 = (float *)se::State::nativeThisObject(aSStack_80);
  if (pfVar3 == (float *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x130,"js_cocos2dx_dragonbones_Transform_get_x");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_Transform_get_x : Invalid Native Object");
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_cocos2dx_dragonbones_Transform_get_x",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x138);
  }
  else {
    se::Value::Value(aVStack_58);
    float_to_seval(*pfVar3,aVStack_58);
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

