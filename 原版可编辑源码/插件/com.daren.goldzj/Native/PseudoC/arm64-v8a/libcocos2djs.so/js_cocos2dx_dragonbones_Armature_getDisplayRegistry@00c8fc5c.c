
/* js_cocos2dx_dragonbones_Armature_getDisplayRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_dragonbones_Armature_getDisplayRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Class *pCVar2;
  Value *pVVar3;
  bool bVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  type *ptVar10;
  Value *local_90;
  Value *local_88;
  Value *local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar9);
  local_90 = operator_new(0xa0);
  local_80 = local_90 + 0xa0;
  local_88 = local_90;
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar5 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar5,(vector *)&local_90);
  plVar6 = (long *)se::State::args(aSStack_60);
  if (plVar6[1] == *plVar6) {
    lVar7 = se::State::nativeThisObject(aSStack_60);
    pCVar2 = __jsb_dragonBones_CCArmatureDisplay_class;
    ptVar10 = *(type **)(lVar7 + 0xb8);
    if (ptVar10 == (type *)0x0) {
      pVVar8 = (Value *)se::State::rval(aSStack_60);
      se::Value::setNull(pVVar8);
      goto LAB_00c8fde8;
    }
    pVVar8 = (Value *)se::State::rval(aSStack_60);
    bVar4 = native_ptr_to_seval<dragonBones::CCArmatureDisplay>(ptVar10,pCVar2,pVVar8,(bool *)0x0);
    if (bVar4) goto LAB_00c8fde8;
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",&DAT_019268ae,
                        0x5d,"js_cocos2dx_dragonbones_Armature_getDisplay");
    __android_log_print(6,"jswrapper","Convert dragonBones::Animation to se::Value failed!");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_60);
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/manual/jsb_dragonbones_manual.cpp, 102): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar6[1] - *plVar6) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_Armature_getDisplay",&DAT_019268ae,0x69);
LAB_00c8fde8:
  pVVar8 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_90;
  pVVar8 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_88 = pVVar3;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

