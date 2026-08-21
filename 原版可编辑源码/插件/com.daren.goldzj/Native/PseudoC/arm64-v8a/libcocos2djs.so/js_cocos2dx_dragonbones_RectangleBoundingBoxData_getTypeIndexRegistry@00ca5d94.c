
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* js_cocos2dx_dragonbones_RectangleBoundingBoxData_getTypeIndexRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_RectangleBoundingBoxData_getTypeIndexRegistry
               (FunctionCallbackInfo *param_1)

{
  long lVar1;
  uint uVar2;
  Value *pVVar3;
  int iVar4;
  void *pvVar5;
  long *plVar6;
  ulong uVar7;
  Value *pVVar8;
  Isolate *pIVar9;
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
  if (plVar6[1] - *plVar6 == 0) {
    if (((dragonBones::RectangleBoundingBoxData::getTypeIndex()::typeIndex & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&dragonBones::RectangleBoundingBoxData::getTypeIndex()::
                                     typeIndex), iVar4 != 0)) {
      _typeIndex = "N11dragonBones24RectangleBoundingBoxDataE";
      __cxa_guard_release(&dragonBones::RectangleBoundingBoxData::getTypeIndex()::typeIndex);
    }
    uVar2 = dragonBones::RectangleBoundingBoxData::getTypeIndex()::typeIndex;
    pVVar8 = (Value *)se::State::rval(aSStack_60);
    uVar7 = uint32_to_seval(uVar2,pVVar8);
    if ((uVar7 & 1) != 0) goto LAB_00ca5efc;
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x9ec,"js_cocos2dx_dragonbones_RectangleBoundingBoxData_getTypeIndex");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_RectangleBoundingBoxData_getTypeIndex : Error processing arguments"
                       );
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 2543): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar6[1] - *plVar6) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_RectangleBoundingBoxData_getTypeIndex",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x9f2);
LAB_00ca5efc:
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

