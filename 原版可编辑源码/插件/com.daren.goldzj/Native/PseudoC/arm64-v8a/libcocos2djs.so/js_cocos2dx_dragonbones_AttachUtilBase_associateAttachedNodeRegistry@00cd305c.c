
/* js_cocos2dx_dragonbones_AttachUtilBase_associateAttachedNodeRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_AttachUtilBase_associateAttachedNodeRegistry
               (FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 *puVar6;
  Object *pOVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  Value *pVVar11;
  Isolate *pIVar12;
  Value *local_a0;
  Value *local_98;
  Value *local_90;
  HandleScope aHStack_88 [24];
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_88,pIVar12);
  local_a0 = operator_new(0xa0);
  local_90 = local_a0 + 0xa0;
  local_98 = local_a0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_a0);
  plVar5 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar5 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x230e,0x192c80b);
    pcVar10 = "js_cocos2dx_dragonbones_AttachUtilBase_associateAttachedNode : Invalid Native Object"
    ;
LAB_00cd3214:
    __android_log_print(6,"jswrapper",pcVar10);
  }
  else {
    puVar6 = (undefined8 *)se::State::args(aSStack_70);
    pVVar11 = (Value *)*puVar6;
    if (puVar6[1] - (long)pVVar11 == 0x20) {
      if (pVVar11[8] == (Value)0x5) {
        pOVar7 = (Object *)se::Value::toObject(pVVar11);
        lVar8 = se::Object::getPrivateData(pOVar7);
        pVVar11 = (Value *)*puVar6;
        bVar3 = lVar8 == 0;
      }
      else {
        bVar3 = 1 < (byte)pVVar11[8];
        lVar8 = 0;
      }
      if (pVVar11[0x18] == (Value)0x5) {
        pOVar7 = (Object *)se::Value::toObject(pVVar11 + 0x10);
        lVar9 = se::Object::getPrivateData(pOVar7);
        if ((lVar9 != 0) && (!bVar3)) {
LAB_00cd32e4:
          (**(code **)(*plVar5 + 0x10))(plVar5,lVar8,lVar9);
          goto LAB_00cd324c;
        }
      }
      else {
        lVar9 = 0;
        if (!bVar3 && (byte)pVVar11[0x18] < 2) goto LAB_00cd32e4;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,0x2317,0x192c80b);
      pcVar10 = 
      "js_cocos2dx_dragonbones_AttachUtilBase_associateAttachedNode : Error processing arguments";
      goto LAB_00cd3214;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 8987): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(puVar6[1] - (long)pVVar11) >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",0x192c80b,
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x231e);
LAB_00cd324c:
  pVVar11 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a0;
  pVVar11 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar11 != pVVar2) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
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

