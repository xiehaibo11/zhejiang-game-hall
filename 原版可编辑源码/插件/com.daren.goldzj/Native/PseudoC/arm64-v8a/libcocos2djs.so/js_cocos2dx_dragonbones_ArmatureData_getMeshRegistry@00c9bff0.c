
/* js_cocos2dx_dragonbones_ArmatureData_getMeshRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_dragonbones_ArmatureData_getMeshRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  ArmatureData *this;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  type *ptVar9;
  Value *pVVar10;
  undefined8 uVar11;
  Isolate *pIVar12;
  Value *local_e8;
  Value *local_e0;
  Value *local_d8;
  HandleScope aHStack_d0 [24];
  ulong local_b8;
  undefined8 uStack_b0;
  void *local_a8;
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
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_d0,pIVar12);
  local_e8 = operator_new(0xa0);
  local_d8 = local_e8 + 0xa0;
  local_e0 = local_e8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_e8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_e8);
  this = (ArmatureData *)se::State::nativeThisObject(aSStack_70);
  if (this == (ArmatureData *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x467,"js_cocos2dx_dragonbones_ArmatureData_getMesh");
    __android_log_print(6,"jswrapper",&DAT_0192f962);
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_70);
    if (plVar5[1] - *plVar5 == 0x30) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = (void *)0x0;
      uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_88);
      uVar7 = seval_to_std_string((Value *)(*plVar5 + 0x10),(basic_string *)&local_a0);
      uVar8 = seval_to_std_string((Value *)(*plVar5 + 0x20),(basic_string *)&local_b8);
      if ((((uVar6 & 1) == 0) || ((uVar7 & 1) == 0)) || ((uVar8 & 1) == 0)) {
        uVar11 = 0x472;
LAB_00c9c208:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,uVar11,"js_cocos2dx_dragonbones_ArmatureData_getMesh");
        __android_log_print(6,"jswrapper",0x192f9a7);
        bVar3 = false;
      }
      else {
        ptVar9 = (type *)dragonBones::ArmatureData::getMesh
                                   (this,(basic_string *)&local_88,(basic_string *)&local_a0,
                                    (basic_string *)&local_b8);
        pVVar10 = (Value *)se::State::rval(aSStack_70);
        bVar3 = native_ptr_to_seval<dragonBones::MeshDisplayData>(ptVar9,pVVar10,(bool *)0x0);
        if (!bVar3) {
          uVar11 = 0x475;
          goto LAB_00c9c208;
        }
        bVar3 = true;
      }
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (bVar3) goto LAB_00c9c278;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 1144): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar5[1] - *plVar5) >> 4,3);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_ArmatureData_getMesh",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x47b);
LAB_00c9c278:
  pVVar10 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_e8;
  pVVar10 = local_e0;
  if (local_e8 != (Value *)0x0) {
    while (pVVar10 != pVVar2) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_e0 = pVVar2;
    operator_delete(local_e8);
  }
  v8::HandleScope::~HandleScope(aHStack_d0);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

