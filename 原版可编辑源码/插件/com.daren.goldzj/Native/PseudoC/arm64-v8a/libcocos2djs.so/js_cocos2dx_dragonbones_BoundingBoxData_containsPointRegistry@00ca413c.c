
/* js_cocos2dx_dragonbones_BoundingBoxData_containsPointRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_BoundingBoxData_containsPointRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  byte bVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  Value *pVVar8;
  char *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  Isolate *pIVar12;
  Value *local_a8;
  Value *local_a0;
  Value *local_98;
  HandleScope aHStack_90 [24];
  undefined8 local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar12);
  local_a8 = operator_new(0xa0);
  local_98 = local_a8 + 0xa0;
  local_a0 = local_a8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_a8);
  plVar5 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar5 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x8c9,&DAT_01928fc5);
    pcVar9 = "js_cocos2dx_dragonbones_BoundingBoxData_containsPoint : Invalid Native Object";
LAB_00ca4318:
    __android_log_print(6,"jswrapper",pcVar9);
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_70);
    uVar11 = plVar6[1] - *plVar6;
    if (uVar11 == 0x20) {
      local_78 = 0;
      uVar11 = seval_to_float((Value *)*plVar6,(float *)((long)&local_78 + 4));
      uVar7 = seval_to_float((Value *)(*plVar6 + 0x10),(float *)&local_78);
      if (((uVar11 & 1) == 0) || ((uVar7 & 1) == 0)) {
        uVar10 = 0x8d2;
      }
      else {
        bVar3 = (**(code **)(*plVar5 + 0x20))(local_78._4_4_,(float)local_78,plVar5);
        pVVar8 = (Value *)se::State::rval(aSStack_70);
        uVar11 = boolean_to_seval((bool)(bVar3 & 1),pVVar8);
        if ((uVar11 & 1) != 0) goto LAB_00ca4350;
        uVar10 = 0x8d5;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,uVar10,&DAT_01928fc5);
      pcVar9 = "js_cocos2dx_dragonbones_BoundingBoxData_containsPoint : Error processing arguments";
      goto LAB_00ca4318;
    }
    __android_log_print(6,"jswrapper",&DAT_01932f2f,uVar11 >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",&DAT_01928fc5,
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x8db);
LAB_00ca4350:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a8;
  pVVar8 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar8 != pVVar2) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_a0 = pVVar2;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

