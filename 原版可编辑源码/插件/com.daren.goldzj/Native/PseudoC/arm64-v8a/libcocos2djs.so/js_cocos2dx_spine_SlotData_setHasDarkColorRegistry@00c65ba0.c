
/* js_cocos2dx_spine_SlotData_setHasDarkColorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_SlotData_setHasDarkColorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  SlotData *this;
  undefined8 *puVar4;
  Value *pVVar5;
  char *pcVar6;
  ulong uVar7;
  Isolate *pIVar8;
  Value *local_98;
  Value *local_90;
  Value *local_88;
  HandleScope aHStack_80 [28];
  bool local_64 [4];
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
  this = (SlotData *)se::State::nativeThisObject(aSStack_60);
  if (this == (SlotData *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x2c77,&DAT_018edd7f);
    pcVar6 = "js_cocos2dx_spine_SlotData_setHasDarkColor : Invalid Native Object";
LAB_00c65d10:
    __android_log_print(6,"jswrapper",pcVar6);
  }
  else {
    puVar4 = (undefined8 *)se::State::args(aSStack_60);
    uVar7 = puVar4[1] - (long)*puVar4;
    if (uVar7 == 0x10) {
      uVar7 = seval_to_boolean((Value *)*puVar4,local_64);
      if ((uVar7 & 1) != 0) {
        spine::SlotData::setHasDarkColor(this,local_64[0]);
        goto LAB_00c65d48;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,0x2c7e,&DAT_018edd7f);
      pcVar6 = "js_cocos2dx_spine_SlotData_setHasDarkColor : Error processing arguments";
      goto LAB_00c65d10;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 11394): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar7 >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",&DAT_018edd7f,
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x2c85);
LAB_00c65d48:
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

