
/* js_cocos2dx_dragonbones_BaseObject_setMaxCountRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_BaseObject_setMaxCountRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  Value *pVVar6;
  ulong uVar7;
  Isolate *pIVar8;
  Value *local_a0;
  Value *local_98;
  Value *local_90;
  HandleScope aHStack_88 [28];
  uint local_6c;
  ulong local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_88,pIVar8);
  local_a0 = operator_new(0xa0);
  local_90 = local_a0 + 0xa0;
  local_98 = local_a0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_a0);
  plVar4 = (long *)se::State::args(aSStack_60);
  uVar7 = plVar4[1] - *plVar4;
  if (uVar7 == 0x20) {
    local_68 = 0;
    local_6c = 0;
    uVar7 = seval_to_size((Value *)*plVar4,&local_68);
    uVar5 = seval_to_uint32((Value *)(*plVar4 + 0x10),&local_6c);
    if (((uVar7 & 1) != 0) && ((uVar5 & 1) != 0)) {
      dragonBones::BaseObject::setMaxCount(local_68,local_6c);
      goto LAB_00c9436c;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x38,"js_cocos2dx_dragonbones_BaseObject_setMaxCount");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_BaseObject_setMaxCount : Error processing arguments"
                       );
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 60): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar7 >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_BaseObject_setMaxCount",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x3f);
LAB_00c9436c:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_a0;
  pVVar6 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_98 = pVVar2;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

