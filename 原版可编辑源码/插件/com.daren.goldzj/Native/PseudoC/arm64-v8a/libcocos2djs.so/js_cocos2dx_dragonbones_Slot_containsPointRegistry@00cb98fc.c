
/* js_cocos2dx_dragonbones_Slot_containsPointRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_dragonbones_Slot_containsPointRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  byte bVar3;
  void *pvVar4;
  Slot *this;
  long *plVar5;
  ulong uVar6;
  Value *pVVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  Isolate *pIVar11;
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
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar11);
  local_a8 = operator_new(0xa0);
  local_98 = local_a8 + 0xa0;
  local_a0 = local_a8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_a8);
  this = (Slot *)se::State::nativeThisObject(aSStack_70);
  if (this == (Slot *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x14ea,"js_cocos2dx_dragonbones_Slot_containsPoint");
    pcVar8 = "js_cocos2dx_dragonbones_Slot_containsPoint : Invalid Native Object";
LAB_00cb9ad0:
    __android_log_print(6,"jswrapper",pcVar8);
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_70);
    uVar10 = plVar5[1] - *plVar5;
    if (uVar10 == 0x20) {
      local_78 = 0;
      uVar10 = seval_to_float((Value *)*plVar5,(float *)((long)&local_78 + 4));
      uVar6 = seval_to_float((Value *)(*plVar5 + 0x10),(float *)&local_78);
      if (((uVar10 & 1) == 0) || ((uVar6 & 1) == 0)) {
        uVar9 = 0x14f3;
      }
      else {
        bVar3 = dragonBones::Slot::containsPoint(this,local_78._4_4_,(float)local_78);
        pVVar7 = (Value *)se::State::rval(aSStack_70);
        uVar10 = boolean_to_seval((bool)(bVar3 & 1),pVVar7);
        if ((uVar10 & 1) != 0) goto LAB_00cb9b08;
        uVar9 = 0x14f6;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,uVar9,"js_cocos2dx_dragonbones_Slot_containsPoint");
      pcVar8 = "js_cocos2dx_dragonbones_Slot_containsPoint : Error processing arguments";
      goto LAB_00cb9ad0;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 5369): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar10 >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_Slot_containsPoint",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x14fc);
LAB_00cb9b08:
  pVVar7 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a8;
  pVVar7 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
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

