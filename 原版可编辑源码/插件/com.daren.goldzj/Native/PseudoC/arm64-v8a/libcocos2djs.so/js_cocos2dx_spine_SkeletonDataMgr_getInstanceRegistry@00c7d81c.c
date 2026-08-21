
/* js_cocos2dx_spine_SkeletonDataMgr_getInstanceRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_spine_SkeletonDataMgr_getInstanceRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  type *ptVar2;
  Value *pVVar3;
  bool bVar4;
  void *pvVar5;
  long *plVar6;
  Value *pVVar7;
  Isolate *pIVar8;
  Value *local_90;
  Value *local_88;
  Value *local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar8);
  local_90 = operator_new(0xa0);
  local_80 = local_90 + 0xa0;
  local_88 = local_90;
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar5 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar5,(vector *)&local_90);
  plVar6 = (long *)se::State::args(aSStack_60);
  if (plVar6[1] - *plVar6 == 0) {
    if (spine::SkeletonDataMgr::_instance == (type *)0x0) {
      spine::SkeletonDataMgr::_instance = operator_new(0x60);
      *(undefined8 *)(spine::SkeletonDataMgr::_instance + 0x30) = 0;
      *(undefined ***)spine::SkeletonDataMgr::_instance = &PTR__SkeletonDataMgr_01c8cea8;
      *(undefined8 *)(spine::SkeletonDataMgr::_instance + 0x48) = 0;
      *(undefined8 *)(spine::SkeletonDataMgr::_instance + 0x50) = 0;
      *(type **)(spine::SkeletonDataMgr::_instance + 0x40) =
           spine::SkeletonDataMgr::_instance + 0x48;
    }
    ptVar2 = spine::SkeletonDataMgr::_instance;
    pVVar7 = (Value *)se::State::rval(aSStack_60);
    bVar4 = native_ptr_to_seval<spine::SkeletonDataMgr>(ptVar2,pVVar7,(bool *)0x0);
    if (bVar4) goto LAB_00c7d9b0;
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x3b5a,"js_cocos2dx_spine_SkeletonDataMgr_getInstance");
    __android_log_print(6,"jswrapper",&DAT_01922416);
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 15197): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar6[1] - *plVar6) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_SkeletonDataMgr_getInstance",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x3b60);
LAB_00c7d9b0:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_90;
  pVVar7 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar7 != pVVar3) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
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

