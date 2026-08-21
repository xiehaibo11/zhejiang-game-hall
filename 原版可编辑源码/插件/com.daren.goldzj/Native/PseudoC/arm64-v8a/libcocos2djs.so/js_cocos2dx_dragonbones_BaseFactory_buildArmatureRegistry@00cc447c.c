
/* js_cocos2dx_dragonbones_BaseFactory_buildArmatureRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_BaseFactory_buildArmatureRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  type *ptVar11;
  Value *pVVar12;
  undefined8 uVar13;
  Isolate *pIVar14;
  Value *local_110;
  Value *local_108;
  Value *local_100;
  HandleScope aHStack_f8 [24];
  ulong local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_f8,pIVar14);
  local_110 = operator_new(0xa0);
  local_100 = local_110 + 0xa0;
  local_108 = local_110;
  se::internal::jsToSeArgs(param_1,(vector *)&local_110);
  pvVar4 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar4,(vector *)&local_110);
  plVar5 = (long *)se::State::nativeThisObject(aSStack_80);
  if (plVar5 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1ad2,"js_cocos2dx_dragonbones_BaseFactory_buildArmature");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_BaseFactory_buildArmature : Invalid Native Object")
    ;
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_80);
    switch(plVar6[1] - *plVar6 >> 4) {
    case 1:
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_98);
      if ((uVar7 & 1) != 0) {
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = (void *)0x0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = (void *)0x0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = (void *)0x0;
        ptVar11 = (type *)(**(code **)(*plVar5 + 0xa0))
                                    (plVar5,&local_98,&local_b0,&local_c8,&local_e0);
        if ((local_e0 & 1) != 0) {
          operator_delete(local_d0);
        }
        if ((local_c8 & 1) != 0) {
          operator_delete(local_b8);
        }
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
        pVVar12 = (Value *)se::State::rval(aSStack_80);
        bVar3 = native_ptr_to_rooted_seval<dragonBones::Armature>(ptVar11,pVVar12,(bool *)0x0);
        if (!bVar3) {
          uVar13 = 0x1adc;
          goto LAB_00cc49a4;
        }
        bVar3 = true;
        if ((local_98 & 1) == 0) goto LAB_00cc4b3c;
LAB_00cc49cc:
        operator_delete(local_88);
        if (bVar3) goto LAB_00cc4b6c;
        goto LAB_00cc4b40;
      }
      uVar13 = 0x1ad9;
LAB_00cc49a4:
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,uVar13,"js_cocos2dx_dragonbones_BaseFactory_buildArmature");
      __android_log_print(6,"jswrapper",
                          "js_cocos2dx_dragonbones_BaseFactory_buildArmature : Error processing arguments"
                         );
      bVar3 = false;
      if ((local_98 & 1) != 0) goto LAB_00cc49cc;
      goto LAB_00cc4b3c;
    case 2:
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
      uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_98);
      uVar8 = seval_to_std_string((Value *)(*plVar6 + 0x10),(basic_string *)&local_b0);
      if (((uVar7 & 1) == 0) || ((uVar8 & 1) == 0)) {
        uVar13 = 0x1ae4;
LAB_00cc4b04:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,uVar13,"js_cocos2dx_dragonbones_BaseFactory_buildArmature");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_BaseFactory_buildArmature : Error processing arguments"
                           );
        bVar3 = false;
      }
      else {
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = (void *)0x0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = (void *)0x0;
        ptVar11 = (type *)(**(code **)(*plVar5 + 0xa0))
                                    (plVar5,&local_98,&local_b0,&local_c8,&local_e0);
        if ((local_e0 & 1) != 0) {
          operator_delete(local_d0);
        }
        if ((local_c8 & 1) != 0) {
          operator_delete(local_b8);
        }
        pVVar12 = (Value *)se::State::rval(aSStack_80);
        bVar3 = native_ptr_to_rooted_seval<dragonBones::Armature>(ptVar11,pVVar12,(bool *)0x0);
        if (!bVar3) {
          uVar13 = 0x1ae7;
          goto LAB_00cc4b04;
        }
        bVar3 = true;
      }
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      break;
    case 3:
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = (void *)0x0;
      uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_98);
      uVar8 = seval_to_std_string((Value *)(*plVar6 + 0x10),(basic_string *)&local_b0);
      uVar9 = seval_to_std_string((Value *)(*plVar6 + 0x20),(basic_string *)&local_c8);
      if ((((uVar7 & 1) == 0) || ((uVar8 & 1) == 0)) || ((uVar9 & 1) == 0)) {
        uVar13 = 0x1af1;
LAB_00cc4a04:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,uVar13,"js_cocos2dx_dragonbones_BaseFactory_buildArmature");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_BaseFactory_buildArmature : Error processing arguments"
                           );
        bVar3 = false;
      }
      else {
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = (void *)0x0;
        ptVar11 = (type *)(**(code **)(*plVar5 + 0xa0))
                                    (plVar5,&local_98,&local_b0,&local_c8,&local_e0);
        if ((local_e0 & 1) != 0) {
          operator_delete(local_d0);
        }
        pVVar12 = (Value *)se::State::rval(aSStack_80);
        bVar3 = native_ptr_to_rooted_seval<dragonBones::Armature>(ptVar11,pVVar12,(bool *)0x0);
        if (!bVar3) {
          uVar13 = 0x1af4;
          goto LAB_00cc4a04;
        }
        bVar3 = true;
      }
      if ((local_c8 & 1) != 0) {
        operator_delete(local_b8);
      }
      if ((local_b0 & 1) == 0) break;
LAB_00cc4abc:
      operator_delete(local_a0);
      if ((local_98 & 1) == 0) goto LAB_00cc4b3c;
      goto LAB_00cc4acc;
    case 4:
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = (void *)0x0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = (void *)0x0;
      uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_98);
      uVar8 = seval_to_std_string((Value *)(*plVar6 + 0x10),(basic_string *)&local_b0);
      uVar9 = seval_to_std_string((Value *)(*plVar6 + 0x20),(basic_string *)&local_c8);
      uVar10 = seval_to_std_string((Value *)(*plVar6 + 0x30),(basic_string *)&local_e0);
      if (((((uVar7 & 1) == 0) || ((uVar8 & 1) == 0)) || ((uVar9 & 1) == 0)) || ((uVar10 & 1) == 0))
      {
        uVar13 = 0x1b00;
LAB_00cc4a68:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,uVar13,"js_cocos2dx_dragonbones_BaseFactory_buildArmature");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_BaseFactory_buildArmature : Error processing arguments"
                           );
        bVar3 = false;
      }
      else {
        ptVar11 = (type *)(**(code **)(*plVar5 + 0xa0))
                                    (plVar5,&local_98,&local_b0,&local_c8,&local_e0);
        pVVar12 = (Value *)se::State::rval(aSStack_80);
        bVar3 = native_ptr_to_rooted_seval<dragonBones::Armature>(ptVar11,pVVar12,(bool *)0x0);
        if (!bVar3) {
          uVar13 = 0x1b03;
          goto LAB_00cc4a68;
        }
        bVar3 = true;
      }
      if ((local_e0 & 1) != 0) {
        operator_delete(local_d0);
      }
      if ((local_c8 & 1) != 0) {
        operator_delete(local_b8);
      }
      if ((local_b0 & 1) != 0) goto LAB_00cc4abc;
      break;
    default:
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 6918): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar6[1] - *plVar6) >> 4,4);
      goto LAB_00cc4b40;
    }
    if ((local_98 & 1) == 0) {
LAB_00cc4b3c:
      if (bVar3) goto LAB_00cc4b6c;
    }
    else {
LAB_00cc4acc:
      operator_delete(local_88);
      if (bVar3) goto LAB_00cc4b6c;
    }
  }
LAB_00cc4b40:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_BaseFactory_buildArmature",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x1b09);
LAB_00cc4b6c:
  pVVar12 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar12,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_110;
  pVVar12 = local_108;
  if (local_110 != (Value *)0x0) {
    while (pVVar12 != pVVar2) {
      se::Value::~Value(pVVar12 + -0x10);
      pVVar12 = pVVar12 + -0x10;
    }
    local_108 = pVVar2;
    operator_delete(local_110);
  }
  v8::HandleScope::~HandleScope(aHStack_f8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

