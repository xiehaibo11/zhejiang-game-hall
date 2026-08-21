
/* js_cocos2dx_dragonbones_EventObject_actionDataToInstanceRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_EventObject_actionDataToInstanceRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  undefined8 *puVar7;
  Object *pOVar8;
  ActionData *pAVar9;
  EventObject *pEVar10;
  Armature *pAVar11;
  Value *pVVar12;
  Isolate *pIVar13;
  Value *local_a0;
  Value *local_98;
  Value *local_90;
  HandleScope aHStack_88 [24];
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_88,pIVar13);
  local_a0 = operator_new(0xa0);
  local_90 = local_a0 + 0xa0;
  local_98 = local_a0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  pvVar6 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_a0);
  puVar7 = (undefined8 *)se::State::args(aSStack_70);
  pVVar12 = (Value *)*puVar7;
  if (puVar7[1] - (long)pVVar12 == 0x30) {
    if (pVVar12[8] == (Value)0x5) {
      pOVar8 = (Object *)se::Value::toObject(pVVar12);
      pAVar9 = (ActionData *)se::Object::getPrivateData(pOVar8);
      pVVar12 = (Value *)*puVar7;
      bVar4 = pAVar9 == (ActionData *)0x0;
    }
    else {
      bVar4 = 1 < (byte)pVVar12[8];
      pAVar9 = (ActionData *)0x0;
    }
    if (pVVar12[0x18] == (Value)0x5) {
      pOVar8 = (Object *)se::Value::toObject(pVVar12 + 0x10);
      pEVar10 = (EventObject *)se::Object::getPrivateData(pOVar8);
      pVVar12 = (Value *)*puVar7;
      bVar5 = pEVar10 == (EventObject *)0x0;
    }
    else {
      bVar5 = 1 < (byte)pVVar12[0x18];
      pEVar10 = (EventObject *)0x0;
    }
    if (pVVar12[0x28] == (Value)0x5) {
      pOVar8 = (Object *)se::Value::toObject(pVVar12 + 0x20);
      pAVar11 = (Armature *)se::Object::getPrivateData(pOVar8);
      if (pAVar11 != (Armature *)0x0) {
        bVar3 = true;
        goto LAB_00cc0ef4;
      }
    }
    else {
      bVar3 = (byte)pVVar12[0x28] < 2;
      pAVar11 = (Armature *)0x0;
LAB_00cc0ef4:
      if ((bool)((!bVar4 && !bVar5) & bVar3)) {
        dragonBones::EventObject::actionDataToInstance(pAVar9,pEVar10,pAVar11);
        goto LAB_00cc0f80;
      }
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1914,"js_cocos2dx_dragonbones_EventObject_actionDataToInstance");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_EventObject_actionDataToInstance : Error processing arguments"
                       );
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 6424): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(puVar7[1] - (long)pVVar12) >> 4,3);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_EventObject_actionDataToInstance",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x191b);
LAB_00cc0f80:
  pVVar12 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar12,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a0;
  pVVar12 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar12 != pVVar2) {
      se::Value::~Value(pVVar12 + -0x10);
      pVVar12 = pVVar12 + -0x10;
    }
    local_98 = pVVar2;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

