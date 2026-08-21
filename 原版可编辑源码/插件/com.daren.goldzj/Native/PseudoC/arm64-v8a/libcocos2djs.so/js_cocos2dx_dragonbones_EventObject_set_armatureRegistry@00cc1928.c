
/* js_cocos2dx_dragonbones_EventObject_set_armatureRegistry(v8::Local<v8::Name>,
   v8::Local<v8::Value>, v8::PropertyCallbackInfo<void> const&) */

void js_cocos2dx_dragonbones_EventObject_set_armatureRegistry
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  Value VVar1;
  long lVar2;
  Value *pVVar3;
  Value *pVVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long lVar7;
  Object *this;
  long lVar8;
  char *pcVar9;
  Isolate *pIVar10;
  Value *local_a0;
  Value *local_98;
  Value *local_90;
  HandleScope aHStack_88 [24];
  State aSStack_70 [40];
  Value aVStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*param_3 + 0x10);
  v8::HandleScope::HandleScope(aHStack_88,pIVar10);
  pvVar5 = (void *)se::internal::getPrivate(pIVar10,*param_3 + 0x30);
  se::Value::Value(aVStack_48);
  se::internal::jsToSeValue(pIVar10,param_2,aVStack_48);
  local_a0 = operator_new(0xa0);
  local_90 = local_a0 + 0xa0;
  local_98 = local_a0;
  se::Value::Value(local_a0,aVStack_48);
  local_98 = local_98 + 0x10;
  se::State::State(aSStack_70,pvVar5,(vector *)&local_a0);
  puVar6 = (undefined8 *)se::State::args(aSStack_70);
  lVar7 = se::State::nativeThisObject(aSStack_70);
  if (lVar7 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1966,"js_cocos2dx_dragonbones_EventObject_set_armature");
    pcVar9 = "js_cocos2dx_dragonbones_EventObject_set_armature : Invalid Native Object";
  }
  else {
    VVar1 = ((Value *)*puVar6)[8];
    if (VVar1 == (Value)0x5) {
      this = (Object *)se::Value::toObject((Value *)*puVar6);
      lVar8 = se::Object::getPrivateData(this);
      if (lVar8 != 0) {
LAB_00cc1a60:
        *(long *)(lVar7 + 0x48) = lVar8;
        goto LAB_00cc1ad8;
      }
    }
    else if ((byte)VVar1 < 2) {
      lVar8 = 0;
      goto LAB_00cc1a60;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x196b,"js_cocos2dx_dragonbones_EventObject_set_armature");
    pcVar9 = "js_cocos2dx_dragonbones_EventObject_set_armature : Error processing new value";
  }
  __android_log_print(6,"jswrapper",pcVar9);
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_EventObject_set_armature",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x196f);
LAB_00cc1ad8:
  se::State::~State(aSStack_70);
  pVVar4 = local_a0;
  pVVar3 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar3 != pVVar4) {
      se::Value::~Value(pVVar3 + -0x10);
      pVVar3 = pVVar3 + -0x10;
    }
    local_98 = pVVar4;
    operator_delete(local_a0);
  }
  se::Value::~Value(aVStack_48);
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

