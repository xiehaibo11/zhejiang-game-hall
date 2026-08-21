
/* js_cocos2dx_dragonbones_RectangleBoundingBoxData_rectangleIntersectsSegmentRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_RectangleBoundingBoxData_rectangleIntersectsSegmentRegistry
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
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  void *pvVar16;
  long *plVar17;
  Value *pVVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  Object *pOVar26;
  Point *pPVar27;
  Point *pPVar28;
  Point *pPVar29;
  ulong uVar30;
  undefined8 uVar31;
  long lVar32;
  Isolate *pIVar33;
  Value *local_e0;
  Value *local_d8;
  Value *local_d0;
  HandleScope aHStack_c8 [24];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  State aSStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar33 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c8,pIVar33);
  local_e0 = operator_new(0xa0);
  local_d0 = local_e0 + 0xa0;
  local_d8 = local_e0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_e0);
  pvVar16 = (void *)se::internal::getPrivate(pIVar33,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar16,(vector *)&local_e0);
  plVar17 = (long *)se::State::args(aSStack_90);
  pVVar18 = (Value *)*plVar17;
  switch(plVar17[1] - (long)pVVar18 >> 4) {
  case 8:
    local_a0 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uVar30 = seval_to_float(pVVar18,(float *)((long)&local_98 + 4));
    uVar19 = seval_to_float((Value *)(*plVar17 + 0x10),(float *)&local_98);
    uVar20 = seval_to_float((Value *)(*plVar17 + 0x20),(float *)((long)&local_a0 + 4));
    uVar21 = seval_to_float((Value *)(*plVar17 + 0x30),(float *)&local_a0);
    uVar22 = seval_to_float((Value *)(*plVar17 + 0x40),(float *)((long)&local_a8 + 4));
    uVar23 = seval_to_float((Value *)(*plVar17 + 0x50),(float *)&local_a8);
    uVar24 = seval_to_float((Value *)(*plVar17 + 0x60),(float *)((long)&local_b0 + 4));
    uVar25 = seval_to_float((Value *)(*plVar17 + 0x70),(float *)&local_b0);
    if ((((((uVar30 & 1) == 0) || ((uVar19 & 1) == 0)) || ((uVar20 & 1) == 0)) ||
        (((uVar21 & 1) == 0 || ((uVar22 & 1) == 0)))) ||
       (((uVar23 & 1) == 0 || (((uVar24 & 1) == 0 || ((uVar25 & 1) == 0)))))) {
      uVar31 = 0x988;
    }
    else {
      iVar15 = dragonBones::RectangleBoundingBoxData::rectangleIntersectsSegment
                         (local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,
                          local_a8._4_4_,(float)local_a8,local_b0._4_4_,(float)local_b0,(Point *)0x0
                          ,(Point *)0x0,(Point *)0x0);
      pVVar18 = (Value *)se::State::rval(aSStack_90);
      uVar30 = int32_to_seval(iVar15,pVVar18);
      if ((uVar30 & 1) != 0) goto LAB_00ca5d04;
      uVar31 = 0x98b;
    }
    break;
  case 9:
    local_a0 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    bVar7 = seval_to_float(pVVar18,(float *)((long)&local_98 + 4));
    bVar8 = seval_to_float((Value *)(*plVar17 + 0x10),(float *)&local_98);
    bVar9 = seval_to_float((Value *)(*plVar17 + 0x20),(float *)((long)&local_a0 + 4));
    bVar10 = seval_to_float((Value *)(*plVar17 + 0x30),(float *)&local_a0);
    bVar11 = seval_to_float((Value *)(*plVar17 + 0x40),(float *)((long)&local_a8 + 4));
    bVar12 = seval_to_float((Value *)(*plVar17 + 0x50),(float *)&local_a8);
    bVar13 = seval_to_float((Value *)(*plVar17 + 0x60),(float *)((long)&local_b0 + 4));
    bVar14 = seval_to_float((Value *)(*plVar17 + 0x70),(float *)&local_b0);
    bVar6 = *(byte *)(*plVar17 + 0x88);
    if (bVar6 == 5) {
      pOVar26 = (Object *)se::Value::toObject((Value *)(*plVar17 + 0x80));
      pPVar27 = (Point *)se::Object::getPrivateData(pOVar26);
      if (pPVar27 != (Point *)0x0) {
        bVar4 = true;
        goto LAB_00ca5bc0;
      }
    }
    else {
      bVar4 = bVar6 < 2;
      pPVar27 = (Point *)0x0;
LAB_00ca5bc0:
      if ((bVar7 & bVar8 & bVar9 & bVar10 & bVar11 & bVar12 & bVar13 & bVar14 & bVar4) != 0) {
        iVar15 = dragonBones::RectangleBoundingBoxData::rectangleIntersectsSegment
                           (local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,
                            local_a8._4_4_,(float)local_a8,local_b0._4_4_,(float)local_b0,pPVar27,
                            (Point *)0x0,(Point *)0x0);
        pVVar18 = (Value *)se::State::rval(aSStack_90);
        uVar30 = int32_to_seval(iVar15,pVVar18);
        if ((uVar30 & 1) != 0) goto LAB_00ca5d04;
        uVar31 = 0x9a4;
        break;
      }
    }
    uVar31 = 0x9a1;
    break;
  case 10:
    local_a0 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    bVar6 = seval_to_float(pVVar18,(float *)((long)&local_98 + 4));
    bVar7 = seval_to_float((Value *)(*plVar17 + 0x10),(float *)&local_98);
    bVar8 = seval_to_float((Value *)(*plVar17 + 0x20),(float *)((long)&local_a0 + 4));
    bVar9 = seval_to_float((Value *)(*plVar17 + 0x30),(float *)&local_a0);
    bVar10 = seval_to_float((Value *)(*plVar17 + 0x40),(float *)((long)&local_a8 + 4));
    bVar11 = seval_to_float((Value *)(*plVar17 + 0x50),(float *)&local_a8);
    bVar12 = seval_to_float((Value *)(*plVar17 + 0x60),(float *)((long)&local_b0 + 4));
    bVar13 = seval_to_float((Value *)(*plVar17 + 0x70),(float *)&local_b0);
    lVar32 = *plVar17;
    if (*(byte *)(lVar32 + 0x88) == 5) {
      pOVar26 = (Object *)se::Value::toObject((Value *)(lVar32 + 0x80));
      pPVar27 = (Point *)se::Object::getPrivateData(pOVar26);
      lVar32 = *plVar17;
      bVar4 = pPVar27 == (Point *)0x0;
    }
    else {
      bVar4 = 1 < *(byte *)(lVar32 + 0x88);
      pPVar27 = (Point *)0x0;
    }
    if (*(byte *)(lVar32 + 0x98) == 5) {
      pOVar26 = (Object *)se::Value::toObject((Value *)(lVar32 + 0x90));
      pPVar28 = (Point *)se::Object::getPrivateData(pOVar26);
      if (pPVar28 != (Point *)0x0) {
        bVar5 = true;
        goto LAB_00ca5a18;
      }
    }
    else {
      bVar5 = *(byte *)(lVar32 + 0x98) < 2;
      pPVar28 = (Point *)0x0;
LAB_00ca5a18:
      if ((bVar6 & bVar7 & bVar8 & bVar9 & bVar10 & bVar11 & bVar12 & bVar13 & !bVar4 & bVar5) != 0)
      {
        iVar15 = dragonBones::RectangleBoundingBoxData::rectangleIntersectsSegment
                           (local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,
                            local_a8._4_4_,(float)local_a8,local_b0._4_4_,(float)local_b0,pPVar27,
                            pPVar28,(Point *)0x0);
        pVVar18 = (Value *)se::State::rval(aSStack_90);
        uVar30 = int32_to_seval(iVar15,pVVar18);
        if ((uVar30 & 1) != 0) goto LAB_00ca5d04;
        uVar31 = 0x9bf;
        goto LAB_00ca5cb8;
      }
    }
    uVar31 = 0x9bc;
    goto LAB_00ca5cb8;
  case 0xb:
    local_a0 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    bVar6 = seval_to_float(pVVar18,(float *)((long)&local_98 + 4));
    bVar7 = seval_to_float((Value *)(*plVar17 + 0x10),(float *)&local_98);
    bVar8 = seval_to_float((Value *)(*plVar17 + 0x20),(float *)((long)&local_a0 + 4));
    bVar9 = seval_to_float((Value *)(*plVar17 + 0x30),(float *)&local_a0);
    bVar10 = seval_to_float((Value *)(*plVar17 + 0x40),(float *)((long)&local_a8 + 4));
    bVar11 = seval_to_float((Value *)(*plVar17 + 0x50),(float *)&local_a8);
    bVar12 = seval_to_float((Value *)(*plVar17 + 0x60),(float *)((long)&local_b0 + 4));
    bVar13 = seval_to_float((Value *)(*plVar17 + 0x70),(float *)&local_b0);
    lVar32 = *plVar17;
    if (*(byte *)(lVar32 + 0x88) == 5) {
      pOVar26 = (Object *)se::Value::toObject((Value *)(lVar32 + 0x80));
      pPVar27 = (Point *)se::Object::getPrivateData(pOVar26);
      lVar32 = *plVar17;
      bVar4 = pPVar27 == (Point *)0x0;
    }
    else {
      bVar4 = 1 < *(byte *)(lVar32 + 0x88);
      pPVar27 = (Point *)0x0;
    }
    if (*(byte *)(lVar32 + 0x98) == 5) {
      pOVar26 = (Object *)se::Value::toObject((Value *)(lVar32 + 0x90));
      pPVar28 = (Point *)se::Object::getPrivateData(pOVar26);
      lVar32 = *plVar17;
      bVar5 = pPVar28 == (Point *)0x0;
    }
    else {
      bVar5 = 1 < *(byte *)(lVar32 + 0x98);
      pPVar28 = (Point *)0x0;
    }
    if (*(byte *)(lVar32 + 0xa8) == 5) {
      pOVar26 = (Object *)se::Value::toObject((Value *)(lVar32 + 0xa0));
      pPVar29 = (Point *)se::Object::getPrivateData(pOVar26);
      if (pPVar29 != (Point *)0x0) {
        bVar3 = true;
        goto LAB_00ca5b14;
      }
LAB_00ca5b88:
      uVar31 = 0x9d9;
    }
    else {
      bVar3 = *(byte *)(lVar32 + 0xa8) < 2;
      pPVar29 = (Point *)0x0;
LAB_00ca5b14:
      if ((bVar6 & bVar7 & bVar8 & bVar9 & bVar10 & bVar11 & bVar12 & bVar13 & !bVar4 & !bVar5 &
          bVar3) == 0) goto LAB_00ca5b88;
      iVar15 = dragonBones::RectangleBoundingBoxData::rectangleIntersectsSegment
                         (local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,
                          local_a8._4_4_,(float)local_a8,local_b0._4_4_,(float)local_b0,pPVar27,
                          pPVar28,pPVar29);
      pVVar18 = (Value *)se::State::rval(aSStack_90);
      uVar30 = int32_to_seval(iVar15,pVVar18);
      if ((uVar30 & 1) != 0) goto LAB_00ca5d04;
      uVar31 = 0x9dc;
    }
LAB_00ca5cb8:
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,uVar31,
                        "js_cocos2dx_dragonbones_RectangleBoundingBoxData_rectangleIntersectsSegment"
                       );
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_RectangleBoundingBoxData_rectangleIntersectsSegment : Error processing arguments"
                       );
    goto LAB_00ca5cd8;
  default:
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 2527): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar17[1] - (long)pVVar18) >> 4,0xb);
    goto LAB_00ca5cd8;
  }
  __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,uVar31,
                      "js_cocos2dx_dragonbones_RectangleBoundingBoxData_rectangleIntersectsSegment")
  ;
  __android_log_print(6,"jswrapper",
                      "js_cocos2dx_dragonbones_RectangleBoundingBoxData_rectangleIntersectsSegment : Error processing arguments"
                     );
LAB_00ca5cd8:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_RectangleBoundingBoxData_rectangleIntersectsSegment",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x9e2);
LAB_00ca5d04:
  pVVar18 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar18,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_e0;
  pVVar18 = local_d8;
  if (local_e0 != (Value *)0x0) {
    while (pVVar18 != pVVar2) {
      se::Value::~Value(pVVar18 + -0x10);
      pVVar18 = pVVar18 + -0x10;
    }
    local_d8 = pVVar2;
    operator_delete(local_e0);
  }
  v8::HandleScope::~HandleScope(aHStack_c8);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

