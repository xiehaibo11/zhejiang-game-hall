
/* js_register_spine_initSkeletonRendererRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_register_spine_initSkeletonRendererRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  void *pvVar4;
  long *plVar5;
  Value *pVVar6;
  Object *this;
  SkeletonRenderer *this_00;
  ulong uVar7;
  Isolate *pIVar8;
  Value *local_a8;
  Value *local_a0;
  Value *local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar8);
  local_a8 = operator_new(0xa0);
  local_98 = local_a8 + 0xa0;
  local_a0 = local_a8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_a8);
  plVar5 = (long *)se::State::args(aSStack_60);
  pVVar6 = (Value *)*plVar5;
  uVar7 = (ulong)(plVar5[1] - (long)pVVar6) >> 4;
  if ((int)uVar7 == 2) {
    if (pVVar6[8] == (Value)0x5) {
      this = (Object *)se::Value::toObject(pVVar6);
      this_00 = (SkeletonRenderer *)se::Object::getPrivateData(this);
      if (this_00 == (SkeletonRenderer *)0x0) {
LAB_00c0ffd8:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/manual/jsb_spine_manual.cpp"
                            ,0xc5,"js_register_spine_initSkeletonRenderer");
        __android_log_print(6,"jswrapper",
                            "js_register_spine_initSkeletonData: Converting SpineRenderer failed!");
        goto LAB_00c1007c;
      }
    }
    else {
      if (1 < (byte)pVVar6[8]) goto LAB_00c0ffd8;
      this_00 = (SkeletonRenderer *)0x0;
    }
    local_78 = 0;
    uStack_70 = 0;
    local_68 = (void *)0x0;
    uVar7 = seval_to_std_string((Value *)(*plVar5 + 0x10),(basic_string *)&local_78);
    if ((uVar7 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/manual/jsb_spine_manual.cpp"
                          ,0xc9,"js_register_spine_initSkeletonRenderer");
      __android_log_print(6,"jswrapper","js_register_spine_initSkeletonData: Invalid uuid content!")
      ;
      bVar2 = false;
    }
    else {
      if (spine::SkeletonDataMgr::_instance == (SkeletonDataMgr *)0x0) {
        spine::SkeletonDataMgr::_instance = operator_new(0x60);
        *(undefined8 *)(spine::SkeletonDataMgr::_instance + 0x30) = 0;
        *(undefined8 *)(spine::SkeletonDataMgr::_instance + 0x50) = 0;
        *(undefined ***)spine::SkeletonDataMgr::_instance = &PTR__SkeletonDataMgr_01c8cea8;
        *(undefined8 *)(spine::SkeletonDataMgr::_instance + 0x48) = 0;
        *(SkeletonDataMgr **)(spine::SkeletonDataMgr::_instance + 0x40) =
             spine::SkeletonDataMgr::_instance + 0x48;
      }
      uVar7 = spine::SkeletonDataMgr::hasSkeletonData
                        (spine::SkeletonDataMgr::_instance,(basic_string *)&local_78);
      if ((uVar7 & 1) != 0) {
        spine::SkeletonRenderer::initWithUUID(this_00,(basic_string *)&local_78);
      }
      bVar2 = true;
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if (bVar2) goto LAB_00c100a8;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/manual/jsb_spine_manual.cpp, 190): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar7,5);
  }
LAB_00c1007c:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_register_spine_initSkeletonRenderer",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/manual/jsb_spine_manual.cpp"
                      ,0xd2);
LAB_00c100a8:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_a8;
  pVVar6 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar6 != pVVar3) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_a0 = pVVar3;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

