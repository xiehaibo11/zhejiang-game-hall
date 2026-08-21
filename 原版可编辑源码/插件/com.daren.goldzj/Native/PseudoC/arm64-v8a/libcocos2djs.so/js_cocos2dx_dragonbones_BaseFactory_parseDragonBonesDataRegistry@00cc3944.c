
/* js_cocos2dx_dragonbones_BaseFactory_parseDragonBonesDataRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_BaseFactory_parseDragonBonesDataRegistry(FunctionCallbackInfo *param_1)

{
  void *pvVar1;
  long lVar2;
  Value *pVVar3;
  bool bVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  type *ptVar9;
  Value *pVVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  Isolate *pIVar16;
  Value *local_e8;
  Value *local_e0;
  Value *local_d8;
  HandleScope aHStack_d0 [28];
  float local_b4;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar16 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_d0,pIVar16);
  local_e8 = operator_new(0xa0);
  local_d8 = local_e8 + 0xa0;
  local_e0 = local_e8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_e8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar16,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar5,(vector *)&local_e8);
  plVar6 = (long *)se::State::nativeThisObject(aSStack_80);
  if (plVar6 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1a72,"js_cocos2dx_dragonbones_BaseFactory_parseDragonBonesData");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_BaseFactory_parseDragonBonesData : Invalid Native Object"
                       );
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_80);
    lVar15 = plVar7[1] - *plVar7 >> 4;
    if (lVar15 == 3) {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      local_b4 = 0.0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
      uVar11 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_b0);
      pvVar5 = local_a0;
      uVar8 = local_b0;
      uVar12 = seval_to_std_string((Value *)(*plVar7 + 0x10),(basic_string *)&local_98);
      uVar13 = seval_to_float((Value *)(*plVar7 + 0x20),&local_b4);
      if ((((uVar11 & 1) == 0) || ((uVar12 & 1) == 0)) || ((uVar13 & 1) == 0)) {
        uVar14 = 0x1a91;
LAB_00cc3dd0:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,uVar14,"js_cocos2dx_dragonbones_BaseFactory_parseDragonBonesData");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_BaseFactory_parseDragonBonesData : Error processing arguments"
                           );
        bVar4 = false;
      }
      else {
        pvVar1 = (void *)((ulong)&local_b0 | 1);
        if ((uVar8 & 1) != 0) {
          pvVar1 = pvVar5;
        }
        ptVar9 = (type *)(**(code **)(*plVar6 + 0x60))(local_b4,plVar6,pvVar1,&local_98);
        pVVar10 = (Value *)se::State::rval(aSStack_80);
        bVar4 = native_ptr_to_rooted_seval<dragonBones::DragonBonesData>(ptVar9,pVVar10,(bool *)0x0)
        ;
        if (!bVar4) {
          uVar14 = 0x1a94;
          goto LAB_00cc3dd0;
        }
        bVar4 = true;
      }
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
joined_r0x00cc3e04:
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
        if (bVar4) goto LAB_00cc3e38;
        goto LAB_00cc3e0c;
      }
    }
    else {
      if (lVar15 == 2) {
        local_98 = 0;
        uStack_90 = 0;
        local_88 = (void *)0x0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = (void *)0x0;
        uVar11 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_b0);
        pvVar5 = local_a0;
        uVar8 = local_b0;
        uVar12 = seval_to_std_string((Value *)(*plVar7 + 0x10),(basic_string *)&local_98);
        if (((uVar11 & 1) == 0) || ((uVar12 & 1) == 0)) {
          uVar14 = 0x1a84;
LAB_00cc3d0c:
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                              ,uVar14,"js_cocos2dx_dragonbones_BaseFactory_parseDragonBonesData");
          __android_log_print(6,"jswrapper",
                              "js_cocos2dx_dragonbones_BaseFactory_parseDragonBonesData : Error processing arguments"
                             );
          bVar4 = false;
        }
        else {
          pvVar1 = (void *)((ulong)&local_b0 | 1);
          if ((uVar8 & 1) != 0) {
            pvVar1 = pvVar5;
          }
          ptVar9 = (type *)(**(code **)(*plVar6 + 0x60))(0x3f800000,plVar6,pvVar1,&local_98);
          pVVar10 = (Value *)se::State::rval(aSStack_80);
          bVar4 = native_ptr_to_rooted_seval<dragonBones::DragonBonesData>
                            (ptVar9,pVVar10,(bool *)0x0);
          if (!bVar4) {
            uVar14 = 0x1a87;
            goto LAB_00cc3d0c;
          }
          bVar4 = true;
        }
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
        goto joined_r0x00cc3e04;
      }
      if (lVar15 != 1) {
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 6807): wrong number of arguments: %d, was expecting %d\n"
                            ,(ulong)(plVar7[1] - *plVar7) >> 4,3);
        goto LAB_00cc3e0c;
      }
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_98);
      if ((uVar8 & 1) == 0) {
        uVar14 = 0x1a79;
LAB_00cc3d70:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,uVar14,"js_cocos2dx_dragonbones_BaseFactory_parseDragonBonesData");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_BaseFactory_parseDragonBonesData : Error processing arguments"
                           );
        bVar4 = false;
      }
      else {
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = (void *)0x0;
        pvVar5 = (void *)((ulong)&local_98 | 1);
        if ((local_98 & 1) != 0) {
          pvVar5 = local_88;
        }
        ptVar9 = (type *)(**(code **)(*plVar6 + 0x60))(0x3f800000,plVar6,pvVar5,&local_b0);
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
        pVVar10 = (Value *)se::State::rval(aSStack_80);
        bVar4 = native_ptr_to_rooted_seval<dragonBones::DragonBonesData>(ptVar9,pVVar10,(bool *)0x0)
        ;
        if (!bVar4) {
          uVar14 = 0x1a7c;
          goto LAB_00cc3d70;
        }
        bVar4 = true;
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
        if (bVar4) goto LAB_00cc3e38;
        goto LAB_00cc3e0c;
      }
    }
    if (bVar4) goto LAB_00cc3e38;
  }
LAB_00cc3e0c:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_BaseFactory_parseDragonBonesData",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x1a9a);
LAB_00cc3e38:
  pVVar10 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_80);
  pVVar3 = local_e8;
  pVVar10 = local_e0;
  if (local_e8 != (Value *)0x0) {
    while (pVVar10 != pVVar3) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_e0 = pVVar3;
    operator_delete(local_e8);
  }
  v8::HandleScope::~HandleScope(aHStack_d0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

