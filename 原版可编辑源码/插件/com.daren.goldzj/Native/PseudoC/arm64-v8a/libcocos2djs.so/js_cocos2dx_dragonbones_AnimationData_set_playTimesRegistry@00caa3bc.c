
/* js_cocos2dx_dragonbones_AnimationData_set_playTimesRegistry(v8::Local<v8::Name>,
   v8::Local<v8::Value>, v8::PropertyCallbackInfo<void> const&) */

void js_cocos2dx_dragonbones_AnimationData_set_playTimesRegistry
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  Isolate *pIVar9;
  Value *local_a8;
  Value *local_a0;
  Value *local_98;
  HandleScope aHStack_90 [28];
  uint local_74;
  State aSStack_70 [40];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*param_3 + 0x10);
  v8::HandleScope::HandleScope(aHStack_90,pIVar9);
  pvVar4 = (void *)se::internal::getPrivate(pIVar9,*param_3 + 0x30);
  se::Value::Value(aVStack_48);
  se::internal::jsToSeValue(pIVar9,param_2,aVStack_48);
  local_a8 = operator_new(0xa0);
  local_98 = local_a8 + 0xa0;
  local_a0 = local_a8;
  se::Value::Value(local_a8,aVStack_48);
  local_a0 = local_a0 + 0x10;
  se::State::State(aSStack_70,pvVar4,(vector *)&local_a8);
  puVar5 = (undefined8 *)se::State::args(aSStack_70);
  lVar6 = se::State::nativeThisObject(aSStack_70);
  if (lVar6 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0xc86,"js_cocos2dx_dragonbones_AnimationData_set_playTimes");
    puVar8 = &DAT_01934cc9;
  }
  else {
    local_74 = 0;
    uVar7 = seval_to_uint32((Value *)*puVar5,&local_74);
    if ((uVar7 & 1) != 0) {
      *(uint *)(lVar6 + 0x20) = local_74;
      goto LAB_00caa558;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0xc8b,"js_cocos2dx_dragonbones_AnimationData_set_playTimes");
    puVar8 = &DAT_01934d15;
  }
  __android_log_print(6,"jswrapper",puVar8);
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_AnimationData_set_playTimes",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0xc8f);
LAB_00caa558:
  se::State::~State(aSStack_70);
  pVVar3 = local_a8;
  pVVar2 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar2 != pVVar3) {
      se::Value::~Value(pVVar2 + -0x10);
      pVVar2 = pVVar2 + -0x10;
    }
    local_a0 = pVVar3;
    operator_delete(local_a8);
  }
  se::Value::~Value(aVStack_48);
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

