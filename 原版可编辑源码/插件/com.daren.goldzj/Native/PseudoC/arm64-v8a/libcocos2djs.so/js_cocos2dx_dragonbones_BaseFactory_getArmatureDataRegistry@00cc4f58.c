
/* js_cocos2dx_dragonbones_BaseFactory_getArmatureDataRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_BaseFactory_getArmatureDataRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  type *ptVar8;
  Value *pVVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  Isolate *pIVar13;
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
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar13);
  local_d0 = operator_new(0xa0);
  local_c0 = local_d0 + 0xa0;
  local_c8 = local_d0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_d0);
  plVar5 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar5 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1b2a,"js_cocos2dx_dragonbones_BaseFactory_getArmatureData");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_BaseFactory_getArmatureData : Invalid Native Object"
                       );
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_70);
    lVar12 = plVar6[1] - *plVar6 >> 4;
    if (lVar12 == 2) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_88);
      uVar10 = seval_to_std_string((Value *)(*plVar6 + 0x10),(basic_string *)&local_a0);
      if (((uVar7 & 1) == 0) || ((uVar10 & 1) == 0)) {
        uVar11 = 0x1b3c;
LAB_00cc5264:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,uVar11,"js_cocos2dx_dragonbones_BaseFactory_getArmatureData");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_BaseFactory_getArmatureData : Error processing arguments"
                           );
        bVar3 = false;
      }
      else {
        ptVar8 = (type *)(**(code **)(*plVar5 + 0x90))(plVar5,&local_88,&local_a0);
        pVVar9 = (Value *)se::State::rval(aSStack_70);
        bVar3 = native_ptr_to_rooted_seval<dragonBones::ArmatureData>(ptVar8,pVVar9,(bool *)0x0);
        if (!bVar3) {
          uVar11 = 0x1b3f;
          goto LAB_00cc5264;
        }
        bVar3 = true;
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
        if (bVar3) goto LAB_00cc52cc;
        goto LAB_00cc52a0;
      }
    }
    else {
      if (lVar12 != 1) {
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 6978): wrong number of arguments: %d, was expecting %d\n"
                            ,(ulong)(plVar6[1] - *plVar6) >> 4,2);
        goto LAB_00cc52a0;
      }
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_88);
      if ((uVar7 & 1) == 0) {
        uVar11 = 0x1b31;
LAB_00cc5204:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,uVar11,"js_cocos2dx_dragonbones_BaseFactory_getArmatureData");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_BaseFactory_getArmatureData : Error processing arguments"
                           );
        bVar3 = false;
      }
      else {
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = (void *)0x0;
        ptVar8 = (type *)(**(code **)(*plVar5 + 0x90))(plVar5,&local_88,&local_a0);
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        pVVar9 = (Value *)se::State::rval(aSStack_70);
        bVar3 = native_ptr_to_rooted_seval<dragonBones::ArmatureData>(ptVar8,pVVar9,(bool *)0x0);
        if (!bVar3) {
          uVar11 = 0x1b34;
          goto LAB_00cc5204;
        }
        bVar3 = true;
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
        if (bVar3) goto LAB_00cc52cc;
        goto LAB_00cc52a0;
      }
    }
    if (bVar3) goto LAB_00cc52cc;
  }
LAB_00cc52a0:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_BaseFactory_getArmatureData",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x1b45);
LAB_00cc52cc:
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

