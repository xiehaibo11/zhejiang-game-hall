
/* js_cocos2dx_spine_TrackEntry_setDelayRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_TrackEntry_setDelayRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  TrackEntry *this;
  undefined8 *puVar4;
  Value *pVVar5;
  undefined *puVar6;
  ulong uVar7;
  Isolate *pIVar8;
  Value *local_98;
  Value *local_90;
  Value *local_88;
  HandleScope aHStack_80 [28];
  float local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar8);
  local_98 = operator_new(0xa0);
  local_88 = local_98 + 0xa0;
  local_90 = local_98;
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_98);
  this = (TrackEntry *)se::State::nativeThisObject(aSStack_60);
  if (this == (TrackEntry *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x13c,"js_cocos2dx_spine_TrackEntry_setDelay");
    puVar6 = &DAT_018f1418;
LAB_00c13d08:
    __android_log_print(6,"jswrapper",puVar6);
  }
  else {
    puVar4 = (undefined8 *)se::State::args(aSStack_60);
    uVar7 = puVar4[1] - (long)*puVar4;
    if (uVar7 == 0x10) {
      local_64 = 0.0;
      uVar7 = seval_to_float((Value *)*puVar4,&local_64);
      if ((uVar7 & 1) != 0) {
        spine::TrackEntry::setDelay(this,local_64);
        goto LAB_00c13d40;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,0x143,"js_cocos2dx_spine_TrackEntry_setDelay");
      puVar6 = &DAT_018f1456;
      goto LAB_00c13d08;
    }
    __android_log_print(6,"jswrapper",&DAT_018f1499,uVar7 >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_TrackEntry_setDelay",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x14a);
LAB_00c13d40:
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar5 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
    }
    local_90 = pVVar2;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

