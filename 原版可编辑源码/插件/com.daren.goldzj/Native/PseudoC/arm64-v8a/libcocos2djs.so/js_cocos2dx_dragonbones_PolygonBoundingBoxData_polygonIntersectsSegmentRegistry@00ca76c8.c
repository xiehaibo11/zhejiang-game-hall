
/* js_cocos2dx_dragonbones_PolygonBoundingBoxData_polygonIntersectsSegmentRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_PolygonBoundingBoxData_polygonIntersectsSegmentRegistry
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
  int iVar12;
  void *pvVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  Object *pOVar19;
  Point *pPVar20;
  Point *pPVar21;
  Point *pPVar22;
  ulong uVar23;
  Value *pVVar24;
  undefined8 uVar25;
  long lVar26;
  Isolate *pIVar27;
  Value *local_e8;
  Value *local_e0;
  Value *local_d8;
  HandleScope aHStack_d0 [24];
  void *local_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  State aSStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar27 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_d0,pIVar27);
  local_e8 = operator_new(0xa0);
  local_d8 = local_e8 + 0xa0;
  local_e0 = local_e8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_e8);
  pvVar13 = (void *)se::internal::getPrivate(pIVar27,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar13,(vector *)&local_e8);
  plVar14 = (long *)se::State::args(aSStack_90);
  switch(plVar14[1] - *plVar14 >> 4) {
  case 5:
    local_a0 = 0;
    local_98 = 0;
    local_b8 = (void *)0x0;
    local_b0 = (void *)0x0;
    local_a8 = 0;
    uVar23 = seval_to_float((Value *)*plVar14,(float *)((long)&local_98 + 4));
    uVar15 = seval_to_float((Value *)(*plVar14 + 0x10),(float *)&local_98);
    uVar16 = seval_to_float((Value *)(*plVar14 + 0x20),(float *)((long)&local_a0 + 4));
    uVar17 = seval_to_float((Value *)(*plVar14 + 0x30),(float *)&local_a0);
    uVar18 = seval_to_std_vector_float((Value *)(*plVar14 + 0x40),(vector *)&local_b8);
    if (((((uVar23 & 1) == 0) || ((uVar15 & 1) == 0)) || ((uVar16 & 1) == 0)) ||
       (((uVar17 & 1) == 0 || ((uVar18 & 1) == 0)))) {
      uVar25 = 0xafc;
      break;
    }
    iVar12 = dragonBones::PolygonBoundingBoxData::polygonIntersectsSegment
                       (local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,
                        (vector *)&local_b8,(Point *)0x0,(Point *)0x0,(Point *)0x0);
    pVVar24 = (Value *)se::State::rval(aSStack_90);
    uVar23 = int32_to_seval(iVar12,pVVar24);
    if ((uVar23 & 1) == 0) {
      uVar25 = 0xaff;
      break;
    }
LAB_00ca7d04:
    bVar4 = true;
    goto joined_r0x00ca7d8c;
  case 6:
    local_a0 = 0;
    local_98 = 0;
    local_b0 = (void *)0x0;
    local_a8 = 0;
    local_b8 = (void *)0x0;
    bVar7 = seval_to_float((Value *)*plVar14,(float *)((long)&local_98 + 4));
    bVar8 = seval_to_float((Value *)(*plVar14 + 0x10),(float *)&local_98);
    bVar9 = seval_to_float((Value *)(*plVar14 + 0x20),(float *)((long)&local_a0 + 4));
    bVar10 = seval_to_float((Value *)(*plVar14 + 0x30),(float *)&local_a0);
    bVar11 = seval_to_std_vector_float((Value *)(*plVar14 + 0x40),(vector *)&local_b8);
    bVar6 = *(byte *)(*plVar14 + 0x58);
    if (bVar6 == 5) {
      pOVar19 = (Object *)se::Value::toObject((Value *)(*plVar14 + 0x50));
      pPVar20 = (Point *)se::Object::getPrivateData(pOVar19);
      if (pPVar20 != (Point *)0x0) {
        bVar4 = true;
        goto LAB_00ca7cb8;
      }
    }
    else {
      bVar4 = bVar6 < 2;
      pPVar20 = (Point *)0x0;
LAB_00ca7cb8:
      if ((bVar7 & bVar8 & bVar9 & bVar10 & bVar11 & bVar4) != 0) {
        iVar12 = dragonBones::PolygonBoundingBoxData::polygonIntersectsSegment
                           (local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,
                            (vector *)&local_b8,pPVar20,(Point *)0x0,(Point *)0x0);
        pVVar24 = (Value *)se::State::rval(aSStack_90);
        uVar23 = int32_to_seval(iVar12,pVVar24);
        if ((uVar23 & 1) != 0) goto LAB_00ca7d04;
        uVar25 = 0xb12;
        break;
      }
    }
    uVar25 = 0xb0f;
    break;
  case 7:
    local_a0 = 0;
    local_98 = 0;
    local_b0 = (void *)0x0;
    local_a8 = 0;
    local_b8 = (void *)0x0;
    bVar6 = seval_to_float((Value *)*plVar14,(float *)((long)&local_98 + 4));
    bVar7 = seval_to_float((Value *)(*plVar14 + 0x10),(float *)&local_98);
    bVar8 = seval_to_float((Value *)(*plVar14 + 0x20),(float *)((long)&local_a0 + 4));
    bVar9 = seval_to_float((Value *)(*plVar14 + 0x30),(float *)&local_a0);
    bVar10 = seval_to_std_vector_float((Value *)(*plVar14 + 0x40),(vector *)&local_b8);
    lVar26 = *plVar14;
    if (*(byte *)(lVar26 + 0x58) == 5) {
      pOVar19 = (Object *)se::Value::toObject((Value *)(lVar26 + 0x50));
      pPVar20 = (Point *)se::Object::getPrivateData(pOVar19);
      lVar26 = *plVar14;
      bVar4 = pPVar20 == (Point *)0x0;
    }
    else {
      bVar4 = 1 < *(byte *)(lVar26 + 0x58);
      pPVar20 = (Point *)0x0;
    }
    if (*(byte *)(lVar26 + 0x68) == 5) {
      pOVar19 = (Object *)se::Value::toObject((Value *)(lVar26 + 0x60));
      pPVar21 = (Point *)se::Object::getPrivateData(pOVar19);
      if (pPVar21 != (Point *)0x0) {
        bVar5 = true;
        goto LAB_00ca7b14;
      }
    }
    else {
      bVar5 = *(byte *)(lVar26 + 0x68) < 2;
      pPVar21 = (Point *)0x0;
LAB_00ca7b14:
      if ((bVar6 & bVar7 & bVar8 & bVar9 & bVar10 & !bVar4 & bVar5) != 0) {
        iVar12 = dragonBones::PolygonBoundingBoxData::polygonIntersectsSegment
                           (local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,
                            (vector *)&local_b8,pPVar20,pPVar21,(Point *)0x0);
        pVVar24 = (Value *)se::State::rval(aSStack_90);
        uVar23 = int32_to_seval(iVar12,pVVar24);
        if ((uVar23 & 1) != 0) goto LAB_00ca7d04;
        uVar25 = 0xb27;
        break;
      }
    }
    uVar25 = 0xb24;
    break;
  case 8:
    local_a0 = 0;
    local_98 = 0;
    local_b0 = (void *)0x0;
    local_a8 = 0;
    local_b8 = (void *)0x0;
    bVar6 = seval_to_float((Value *)*plVar14,(float *)((long)&local_98 + 4));
    bVar7 = seval_to_float((Value *)(*plVar14 + 0x10),(float *)&local_98);
    bVar8 = seval_to_float((Value *)(*plVar14 + 0x20),(float *)((long)&local_a0 + 4));
    bVar9 = seval_to_float((Value *)(*plVar14 + 0x30),(float *)&local_a0);
    bVar10 = seval_to_std_vector_float((Value *)(*plVar14 + 0x40),(vector *)&local_b8);
    lVar26 = *plVar14;
    if (*(byte *)(lVar26 + 0x58) == 5) {
      pOVar19 = (Object *)se::Value::toObject((Value *)(lVar26 + 0x50));
      pPVar20 = (Point *)se::Object::getPrivateData(pOVar19);
      lVar26 = *plVar14;
      bVar4 = pPVar20 == (Point *)0x0;
    }
    else {
      bVar4 = 1 < *(byte *)(lVar26 + 0x58);
      pPVar20 = (Point *)0x0;
    }
    if (*(byte *)(lVar26 + 0x68) == 5) {
      pOVar19 = (Object *)se::Value::toObject((Value *)(lVar26 + 0x60));
      pPVar21 = (Point *)se::Object::getPrivateData(pOVar19);
      lVar26 = *plVar14;
      bVar5 = pPVar21 == (Point *)0x0;
    }
    else {
      bVar5 = 1 < *(byte *)(lVar26 + 0x68);
      pPVar21 = (Point *)0x0;
    }
    if (*(byte *)(lVar26 + 0x78) == 5) {
      pOVar19 = (Object *)se::Value::toObject((Value *)(lVar26 + 0x70));
      pPVar22 = (Point *)se::Object::getPrivateData(pOVar19);
      if (pPVar22 != (Point *)0x0) {
        bVar3 = true;
        goto LAB_00ca7bfc;
      }
    }
    else {
      bVar3 = *(byte *)(lVar26 + 0x78) < 2;
      pPVar22 = (Point *)0x0;
LAB_00ca7bfc:
      if ((bVar6 & bVar7 & bVar8 & bVar9 & bVar10 & !bVar4 & !bVar5 & bVar3) != 0) {
        iVar12 = dragonBones::PolygonBoundingBoxData::polygonIntersectsSegment
                           (local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,
                            (vector *)&local_b8,pPVar20,pPVar21,pPVar22);
        pVVar24 = (Value *)se::State::rval(aSStack_90);
        uVar23 = int32_to_seval(iVar12,pVVar24);
        if ((uVar23 & 1) != 0) goto LAB_00ca7d04;
        uVar25 = 0xb3e;
        break;
      }
    }
    uVar25 = 0xb3b;
    break;
  default:
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 2881): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar14[1] - *plVar14) >> 4,8);
    goto LAB_00ca7d9c;
  }
  __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,uVar25,
                      "js_cocos2dx_dragonbones_PolygonBoundingBoxData_polygonIntersectsSegment");
  __android_log_print(6,"jswrapper",&DAT_01933c27);
  bVar4 = false;
joined_r0x00ca7d8c:
  if (local_b8 != (void *)0x0) {
    local_b0 = local_b8;
    operator_delete(local_b8);
  }
  if (!bVar4) {
LAB_00ca7d9c:
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_cocos2dx_dragonbones_PolygonBoundingBoxData_polygonIntersectsSegment",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0xb44);
  }
  pVVar24 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar24,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_e8;
  pVVar24 = local_e0;
  if (local_e8 != (Value *)0x0) {
    while (pVVar24 != pVVar2) {
      se::Value::~Value(pVVar24 + -0x10);
      pVVar24 = pVVar24 + -0x10;
    }
    local_e0 = pVVar2;
    operator_delete(local_e8);
  }
  v8::HandleScope::~HandleScope(aHStack_d0);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

