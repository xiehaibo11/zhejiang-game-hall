
/* js_cocos2dx_spine_Skin_findNamesForSlotRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_Skin_findNamesForSlotRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  void *pvVar4;
  Skin *this;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  long lVar10;
  Value *local_c8;
  Value *local_c0;
  Value *local_b8;
  HandleScope aHStack_b0 [24];
  undefined **local_98;
  ulong local_90;
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
  pvVar4 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_c8);
  this = (Skin *)se::State::nativeThisObject(aSStack_70);
  if (this == (Skin *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x2a08,"js_cocos2dx_spine_Skin_findNamesForSlot");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_spine_Skin_findNamesForSlot : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_70);
    if (plVar5[1] - *plVar5 == 0x20) {
      local_78 = 0;
      local_88 = 0;
      local_80 = 0;
      local_98 = &PTR__Vector_01c678a0;
      local_90 = 0;
      uVar6 = seval_to_size((Value *)*plVar5,&local_78);
      uVar7 = seval_to_spine_Vector_String((Value *)(*plVar5 + 0x10),(Vector *)&local_98);
      if (((uVar6 & 1) == 0) || ((uVar7 & 1) == 0)) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                            ,0x2a11,"js_cocos2dx_spine_Skin_findNamesForSlot");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_spine_Skin_findNamesForSlot : Error processing arguments");
        bVar2 = false;
      }
      else {
        spine::Skin::findNamesForSlot(this,local_78,(Vector *)&local_98);
        bVar2 = true;
      }
      local_98 = &PTR__Vector_01c678a0;
      if (local_90 != 0) {
        uVar6 = 0;
        lVar10 = -1;
        do {
          (*(code *)**(undefined8 **)(local_80 + (local_90 + lVar10) * 0x18))();
          uVar6 = uVar6 + 1;
          lVar10 = lVar10 + -1;
        } while (uVar6 < local_90);
      }
      lVar10 = local_80;
      local_90 = 0;
      if (local_80 != 0) {
        plVar5 = (long *)spine::SpineExtension::getInstance();
        (**(code **)(*plVar5 + 0x28))
                  (plVar5,lVar10,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce)
        ;
      }
      spine::SpineObject::~SpineObject((SpineObject *)&local_98);
      if (bVar2) goto LAB_00c613e0;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 10773): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar5[1] - *plVar5) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_Skin_findNamesForSlot",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x2a18);
LAB_00c613e0:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_c8;
  pVVar8 = local_c0;
  if (local_c8 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_c0 = pVVar3;
    operator_delete(local_c8);
  }
  v8::HandleScope::~HandleScope(aHStack_b0);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

