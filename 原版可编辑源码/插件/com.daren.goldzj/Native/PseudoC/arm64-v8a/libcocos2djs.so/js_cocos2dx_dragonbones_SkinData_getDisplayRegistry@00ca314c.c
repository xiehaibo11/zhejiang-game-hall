
/* js_cocos2dx_dragonbones_SkinData_getDisplayRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_dragonbones_SkinData_getDisplayRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  SkinData *this;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  type *ptVar8;
  Value *pVVar9;
  undefined8 uVar10;
  Isolate *pIVar11;
  Value *local_d0;
  Value *local_c8;
  Value *local_c0;
  HandleScope aHStack_b8 [24];
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar11);
  local_d0 = operator_new(0xa0);
  local_c0 = local_d0 + 0xa0;
  local_c8 = local_d0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_d0);
  this = (SkinData *)se::State::nativeThisObject(aSStack_70);
  if (this == (SkinData *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x82a,"js_cocos2dx_dragonbones_SkinData_getDisplay");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_SkinData_getDisplay : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_70);
    if (plVar5[1] - *plVar5 == 0x20) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_88);
      uVar7 = seval_to_std_string((Value *)(*plVar5 + 0x10),(basic_string *)&local_a0);
      if (((uVar6 & 1) == 0) || ((uVar7 & 1) == 0)) {
        uVar10 = 0x833;
LAB_00ca3340:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,uVar10,"js_cocos2dx_dragonbones_SkinData_getDisplay");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_SkinData_getDisplay : Error processing arguments"
                           );
        bVar3 = false;
      }
      else {
        ptVar8 = (type *)dragonBones::SkinData::getDisplay
                                   (this,(basic_string *)&local_88,(basic_string *)&local_a0);
        pVVar9 = (Value *)se::State::rval(aSStack_70);
        bVar3 = native_ptr_to_seval<dragonBones::DisplayData>(ptVar8,pVVar9,(bool *)0x0);
        if (!bVar3) {
          uVar10 = 0x836;
          goto LAB_00ca3340;
        }
        bVar3 = true;
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (bVar3) goto LAB_00ca33a8;
    }
    else {
      __android_log_print(6,"jswrapper",&DAT_01932ba2,(ulong)(plVar5[1] - *plVar5) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_SkinData_getDisplay",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x83c);
LAB_00ca33a8:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_d0;
  pVVar9 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_c8 = pVVar2;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

