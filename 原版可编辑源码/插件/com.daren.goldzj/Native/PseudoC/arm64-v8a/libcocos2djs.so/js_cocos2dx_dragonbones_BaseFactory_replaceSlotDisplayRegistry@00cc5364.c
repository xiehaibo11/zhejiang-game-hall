
/* js_cocos2dx_dragonbones_BaseFactory_replaceSlotDisplayRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_BaseFactory_replaceSlotDisplayRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  void *pvVar9;
  long *plVar10;
  long *plVar11;
  Object *pOVar12;
  long lVar13;
  Value *pVVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  Isolate *pIVar18;
  Value *local_118;
  Value *local_110;
  Value *local_108;
  HandleScope aHStack_100 [28];
  int local_e4;
  ulong local_e0;
  undefined8 local_d8;
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
  pIVar18 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_100,pIVar18);
  local_118 = operator_new(0xa0);
  local_108 = local_118 + 0xa0;
  local_110 = local_118;
  se::internal::jsToSeArgs(param_1,(vector *)&local_118);
  pvVar9 = (void *)se::internal::getPrivate(pIVar18,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar9,(vector *)&local_118);
  plVar10 = (long *)se::State::nativeThisObject(aSStack_80);
  if (plVar10 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1b4a,"js_cocos2dx_dragonbones_BaseFactory_replaceSlotDisplay");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_BaseFactory_replaceSlotDisplay : Invalid Native Object"
                       );
  }
  else {
    plVar11 = (long *)se::State::args(aSStack_80);
    lVar17 = plVar11[1] - *plVar11 >> 4;
    if (lVar17 == 6) {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = (void *)0x0;
      local_d8 = 0;
      local_d0 = (void *)0x0;
      local_e0 = 0;
      bVar8 = seval_to_std_string((Value *)*plVar11,(basic_string *)&local_98);
      bVar4 = seval_to_std_string((Value *)(*plVar11 + 0x10),(basic_string *)&local_b0);
      bVar5 = seval_to_std_string((Value *)(*plVar11 + 0x20),(basic_string *)&local_c8);
      bVar6 = seval_to_std_string((Value *)(*plVar11 + 0x30),(basic_string *)&local_e0);
      lVar17 = *plVar11;
      if (*(byte *)(lVar17 + 0x48) == 5) {
        pOVar12 = (Object *)se::Value::toObject((Value *)(lVar17 + 0x40));
        lVar13 = se::Object::getPrivateData(pOVar12);
        lVar17 = *plVar11;
        bVar3 = lVar13 == 0;
      }
      else {
        bVar3 = 1 < *(byte *)(lVar17 + 0x48);
        lVar13 = 0;
      }
      local_e4 = 0;
      uVar15 = seval_to_int32((Value *)(lVar17 + 0x50),&local_e4);
      if (((bVar8 & bVar4 & bVar5 & bVar6 & !bVar3) != 1) || ((uVar15 & 1) == 0)) {
        uVar16 = 0x1b6c;
        goto LAB_00cc575c;
      }
      bVar8 = (**(code **)(*plVar10 + 0xb0))
                        (plVar10,&local_98,&local_b0,&local_c8,&local_e0,lVar13,local_e4);
      pVVar14 = (Value *)se::State::rval(aSStack_80);
      uVar15 = boolean_to_seval((bool)(bVar8 & 1),pVVar14);
      if ((uVar15 & 1) == 0) {
        uVar16 = 0x1b6f;
        goto LAB_00cc575c;
      }
LAB_00cc56f8:
      bVar3 = true;
    }
    else {
      if (lVar17 != 5) {
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 7026): wrong number of arguments: %d, was expecting %d\n"
                            ,(ulong)(plVar11[1] - *plVar11) >> 4,6);
        goto LAB_00cc57a8;
      }
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = (void *)0x0;
      local_d8 = 0;
      local_d0 = (void *)0x0;
      local_e0 = 0;
      bVar4 = seval_to_std_string((Value *)*plVar11,(basic_string *)&local_98);
      bVar5 = seval_to_std_string((Value *)(*plVar11 + 0x10),(basic_string *)&local_b0);
      bVar6 = seval_to_std_string((Value *)(*plVar11 + 0x20),(basic_string *)&local_c8);
      bVar7 = seval_to_std_string((Value *)(*plVar11 + 0x30),(basic_string *)&local_e0);
      bVar8 = *(byte *)(*plVar11 + 0x48);
      if (bVar8 == 5) {
        pOVar12 = (Object *)se::Value::toObject((Value *)(*plVar11 + 0x40));
        lVar17 = se::Object::getPrivateData(pOVar12);
        if (lVar17 != 0) {
          bVar3 = true;
          goto LAB_00cc55dc;
        }
      }
      else {
        bVar3 = bVar8 < 2;
        lVar17 = 0;
LAB_00cc55dc:
        if ((bVar4 & bVar5 & bVar6 & bVar7 & bVar3) != 0) {
          bVar8 = (**(code **)(*plVar10 + 0xb0))
                            (plVar10,&local_98,&local_b0,&local_c8,&local_e0,lVar17,0xffffffff);
          pVVar14 = (Value *)se::State::rval(aSStack_80);
          uVar15 = boolean_to_seval((bool)(bVar8 & 1),pVVar14);
          if ((uVar15 & 1) != 0) goto LAB_00cc56f8;
          uVar16 = 0x1b5c;
          goto LAB_00cc575c;
        }
      }
      uVar16 = 0x1b59;
LAB_00cc575c:
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,uVar16,"js_cocos2dx_dragonbones_BaseFactory_replaceSlotDisplay");
      __android_log_print(6,"jswrapper",
                          "js_cocos2dx_dragonbones_BaseFactory_replaceSlotDisplay : Error processing arguments"
                         );
      bVar3 = false;
    }
    if ((local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
    if ((local_c8 & 1) != 0) {
      operator_delete(local_b8);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (bVar3) goto LAB_00cc57d4;
  }
LAB_00cc57a8:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_BaseFactory_replaceSlotDisplay",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x1b75);
LAB_00cc57d4:
  pVVar14 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar14,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_118;
  pVVar14 = local_110;
  if (local_118 != (Value *)0x0) {
    while (pVVar14 != pVVar2) {
      se::Value::~Value(pVVar14 + -0x10);
      pVVar14 = pVVar14 + -0x10;
    }
    local_110 = pVVar2;
    operator_delete(local_118);
  }
  v8::HandleScope::~HandleScope(aHStack_100);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

