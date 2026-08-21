
/* js_cocos2dx_dragonbones_BoundingBoxData_intersectsSegmentRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_BoundingBoxData_intersectsSegmentRegistry
               (FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  void *pvVar12;
  long *plVar13;
  long *plVar14;
  Value *pVVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  Object *pOVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  long lVar25;
  Isolate *pIVar26;
  Value *local_d0;
  Value *local_c8;
  Value *local_c0;
  HandleScope aHStack_b8 [24];
  undefined8 local_a0;
  undefined8 local_98;
  State aSStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar26 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar26);
  local_d0 = operator_new(0xa0);
  local_c0 = local_d0 + 0xa0;
  local_c8 = local_d0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar12 = (void *)se::internal::getPrivate(pIVar26,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar12,(vector *)&local_d0);
  plVar13 = (long *)se::State::nativeThisObject(aSStack_90);
  if (plVar13 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x875,"js_cocos2dx_dragonbones_BoundingBoxData_intersectsSegment");
    puVar23 = &DAT_01932d29;
  }
  else {
    plVar14 = (long *)se::State::args(aSStack_90);
    pVVar15 = (Value *)*plVar14;
    switch(plVar14[1] - (long)pVVar15 >> 4) {
    case 4:
      local_a0 = 0;
      local_98 = 0;
      uVar22 = seval_to_float(pVVar15,(float *)((long)&local_98 + 4));
      uVar16 = seval_to_float((Value *)(*plVar14 + 0x10),(float *)&local_98);
      uVar17 = seval_to_float((Value *)(*plVar14 + 0x20),(float *)((long)&local_a0 + 4));
      uVar18 = seval_to_float((Value *)(*plVar14 + 0x30),(float *)&local_a0);
      if (((((uVar22 & 1) == 0) || ((uVar16 & 1) == 0)) || ((uVar17 & 1) == 0)) ||
         ((uVar18 & 1) == 0)) {
        uVar24 = 0x882;
      }
      else {
        iVar11 = (**(code **)(*plVar13 + 0x28))
                           (local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,plVar13,0,
                            0,0);
        pVVar15 = (Value *)se::State::rval(aSStack_90);
        uVar22 = int32_to_seval(iVar11,pVVar15);
        if ((uVar22 & 1) != 0) goto LAB_00ca40ac;
        uVar24 = 0x885;
      }
      break;
    case 5:
      local_a0 = 0;
      local_98 = 0;
      bVar7 = seval_to_float(pVVar15,(float *)((long)&local_98 + 4));
      bVar8 = seval_to_float((Value *)(*plVar14 + 0x10),(float *)&local_98);
      bVar9 = seval_to_float((Value *)(*plVar14 + 0x20),(float *)((long)&local_a0 + 4));
      bVar10 = seval_to_float((Value *)(*plVar14 + 0x30),(float *)&local_a0);
      bVar6 = *(byte *)(*plVar14 + 0x48);
      if (bVar6 == 5) {
        pOVar19 = (Object *)se::Value::toObject((Value *)(*plVar14 + 0x40));
        lVar25 = se::Object::getPrivateData(pOVar19);
        if (lVar25 != 0) {
          bVar4 = true;
          goto LAB_00ca3fc0;
        }
      }
      else {
        bVar4 = bVar6 < 2;
        lVar25 = 0;
LAB_00ca3fc0:
        if ((bVar7 & bVar8 & bVar9 & bVar10 & bVar4) != 0) {
          iVar11 = (**(code **)(*plVar13 + 0x28))
                             (local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,plVar13,
                              lVar25,0,0);
          pVVar15 = (Value *)se::State::rval(aSStack_90);
          uVar22 = int32_to_seval(iVar11,pVVar15);
          if ((uVar22 & 1) != 0) goto LAB_00ca40ac;
          uVar24 = 0x896;
          break;
        }
      }
      uVar24 = 0x893;
      break;
    case 6:
      local_a0 = 0;
      local_98 = 0;
      bVar6 = seval_to_float(pVVar15,(float *)((long)&local_98 + 4));
      bVar7 = seval_to_float((Value *)(*plVar14 + 0x10),(float *)&local_98);
      bVar8 = seval_to_float((Value *)(*plVar14 + 0x20),(float *)((long)&local_a0 + 4));
      bVar9 = seval_to_float((Value *)(*plVar14 + 0x30),(float *)&local_a0);
      lVar25 = *plVar14;
      if (*(byte *)(lVar25 + 0x48) == 5) {
        pOVar19 = (Object *)se::Value::toObject((Value *)(lVar25 + 0x40));
        lVar20 = se::Object::getPrivateData(pOVar19);
        lVar25 = *plVar14;
        bVar4 = lVar20 == 0;
      }
      else {
        bVar4 = 1 < *(byte *)(lVar25 + 0x48);
        lVar20 = 0;
      }
      if (*(byte *)(lVar25 + 0x58) == 5) {
        pOVar19 = (Object *)se::Value::toObject((Value *)(lVar25 + 0x50));
        lVar25 = se::Object::getPrivateData(pOVar19);
        if (lVar25 != 0) {
          bVar5 = true;
          goto LAB_00ca3e14;
        }
      }
      else {
        bVar5 = *(byte *)(lVar25 + 0x58) < 2;
        lVar25 = 0;
LAB_00ca3e14:
        if ((bVar6 & bVar7 & bVar8 & bVar9 & !bVar4 & bVar5) != 0) {
          iVar11 = (**(code **)(*plVar13 + 0x28))
                             (local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,plVar13,
                              lVar20,lVar25,0);
          pVVar15 = (Value *)se::State::rval(aSStack_90);
          uVar22 = int32_to_seval(iVar11,pVVar15);
          if ((uVar22 & 1) != 0) goto LAB_00ca40ac;
          uVar24 = 0x8a9;
          break;
        }
      }
      uVar24 = 0x8a6;
      break;
    case 7:
      local_a0 = 0;
      local_98 = 0;
      bVar6 = seval_to_float(pVVar15,(float *)((long)&local_98 + 4));
      bVar7 = seval_to_float((Value *)(*plVar14 + 0x10),(float *)&local_98);
      bVar8 = seval_to_float((Value *)(*plVar14 + 0x20),(float *)((long)&local_a0 + 4));
      bVar9 = seval_to_float((Value *)(*plVar14 + 0x30),(float *)&local_a0);
      lVar25 = *plVar14;
      if (*(byte *)(lVar25 + 0x48) == 5) {
        pOVar19 = (Object *)se::Value::toObject((Value *)(lVar25 + 0x40));
        lVar20 = se::Object::getPrivateData(pOVar19);
        lVar25 = *plVar14;
        bVar4 = lVar20 == 0;
      }
      else {
        bVar4 = 1 < *(byte *)(lVar25 + 0x48);
        lVar20 = 0;
      }
      if (*(byte *)(lVar25 + 0x58) == 5) {
        pOVar19 = (Object *)se::Value::toObject((Value *)(lVar25 + 0x50));
        lVar21 = se::Object::getPrivateData(pOVar19);
        lVar25 = *plVar14;
        bVar5 = lVar21 == 0;
      }
      else {
        bVar5 = 1 < *(byte *)(lVar25 + 0x58);
        lVar21 = 0;
      }
      if (*(byte *)(lVar25 + 0x68) == 5) {
        pOVar19 = (Object *)se::Value::toObject((Value *)(lVar25 + 0x60));
        lVar25 = se::Object::getPrivateData(pOVar19);
        if (lVar25 != 0) {
          bVar3 = true;
          goto LAB_00ca3f00;
        }
      }
      else {
        bVar3 = *(byte *)(lVar25 + 0x68) < 2;
        lVar25 = 0;
LAB_00ca3f00:
        if ((bVar6 & bVar7 & bVar8 & bVar9 & !bVar4 & !bVar5 & bVar3) != 0) {
          iVar11 = (**(code **)(*plVar13 + 0x28))
                             (local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,plVar13,
                              lVar20,lVar21,lVar25);
          pVVar15 = (Value *)se::State::rval(aSStack_90);
          uVar22 = int32_to_seval(iVar11,pVVar15);
          if ((uVar22 & 1) != 0) goto LAB_00ca40ac;
          uVar24 = 0x8be;
          break;
        }
      }
      uVar24 = 0x8bb;
      break;
    default:
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 2241): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar14[1] - (long)pVVar15) >> 4,7);
      goto LAB_00ca4080;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,uVar24,"js_cocos2dx_dragonbones_BoundingBoxData_intersectsSegment");
    puVar23 = (undefined *)0x1932d7b;
  }
  __android_log_print(6,"jswrapper",puVar23);
LAB_00ca4080:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_BoundingBoxData_intersectsSegment",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x8c4);
LAB_00ca40ac:
  pVVar15 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar15,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_d0;
  pVVar15 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar15 != pVVar2) {
      se::Value::~Value(pVVar15 + -0x10);
      pVVar15 = pVVar15 + -0x10;
    }
    local_c8 = pVVar2;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

