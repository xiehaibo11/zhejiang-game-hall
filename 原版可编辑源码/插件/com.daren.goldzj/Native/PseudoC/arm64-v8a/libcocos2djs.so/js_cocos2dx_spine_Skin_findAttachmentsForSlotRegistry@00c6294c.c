
/* js_cocos2dx_spine_Skin_findAttachmentsForSlotRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_spine_Skin_findAttachmentsForSlotRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  long lVar3;
  bool bVar4;
  void *pvVar5;
  Skin *this;
  long *plVar6;
  ulong uVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  Value *local_c8;
  Value *local_c0;
  Value *local_b8;
  HandleScope aHStack_b0 [24];
  undefined **local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  ulong local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b0,pIVar9);
  local_c8 = operator_new(0xa0);
  local_b8 = local_c8 + 0xa0;
  local_c0 = local_c8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_c8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar5,(vector *)&local_c8);
  this = (Skin *)se::State::nativeThisObject(aSStack_70);
  if (this == (Skin *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x2abc,&DAT_018eda6d);
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_spine_Skin_findAttachmentsForSlot : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_70);
    if (plVar6[1] - *plVar6 == 0x20) {
      local_78 = 0;
      local_88 = 0;
      local_80 = 0;
      local_98 = &PTR__Vector_01c8d438;
      uStack_90 = 0;
      uVar7 = seval_to_size((Value *)*plVar6,&local_78);
      bVar4 = seval_to_spine_Vector_T_ptr<spine::Attachment>
                        ((Value *)(*plVar6 + 0x10),(Vector *)&local_98);
      if (((uVar7 & 1) == 0) || (!bVar4)) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                            ,0x2ac5,&DAT_018eda6d);
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_spine_Skin_findAttachmentsForSlot : Error processing arguments"
                           );
        bVar4 = false;
      }
      else {
        spine::Skin::findAttachmentsForSlot(this,local_78,(Vector *)&local_98);
        bVar4 = true;
      }
      lVar3 = local_80;
      local_98 = &PTR__Vector_01c8d438;
      uStack_90 = 0;
      if (local_80 != 0) {
        plVar6 = (long *)spine::SpineExtension::getInstance();
        (**(code **)(*plVar6 + 0x28))
                  (plVar6,lVar3,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce)
        ;
      }
      spine::SpineObject::~SpineObject((SpineObject *)&local_98);
      if (bVar4) goto LAB_00c62b7c;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 10953): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar6[1] - *plVar6) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",&DAT_018eda6d,
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x2acc);
LAB_00c62b7c:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_c8;
  pVVar8 = local_c0;
  if (local_c8 != (Value *)0x0) {
    while (pVVar8 != pVVar2) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_c0 = pVVar2;
    operator_delete(local_c8);
  }
  v8::HandleScope::~HandleScope(aHStack_b0);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

