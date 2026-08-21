
/* js_cocos2dx_dragonbones_Slot_intersectsSegmentRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_Slot_intersectsSegmentRegistry(FunctionCallbackInfo *param_1)

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
  Slot *this;
  long *plVar13;
  Value *pVVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  Object *pOVar18;
  Point *pPVar19;
  Point *pPVar20;
  Point *pPVar21;
  ulong uVar22;
  char *pcVar23;
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
  this = (Slot *)se::State::nativeThisObject(aSStack_90);
  if (this == (Slot *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1428,&DAT_0192a918);
    pcVar23 = "js_cocos2dx_dragonbones_Slot_intersectsSegment : Invalid Native Object";
  }
  else {
    plVar13 = (long *)se::State::args(aSStack_90);
    pVVar14 = (Value *)*plVar13;
    switch(plVar13[1] - (long)pVVar14 >> 4) {
    case 4:
      local_a0 = 0;
      local_98 = 0;
      uVar22 = seval_to_float(pVVar14,(float *)((long)&local_98 + 4));
      uVar15 = seval_to_float((Value *)(*plVar13 + 0x10),(float *)&local_98);
      uVar16 = seval_to_float((Value *)(*plVar13 + 0x20),(float *)((long)&local_a0 + 4));
      uVar17 = seval_to_float((Value *)(*plVar13 + 0x30),(float *)&local_a0);
      if (((((uVar22 & 1) == 0) || ((uVar15 & 1) == 0)) || ((uVar16 & 1) == 0)) ||
         ((uVar17 & 1) == 0)) {
        uVar24 = 0x1435;
      }
      else {
        iVar11 = dragonBones::Slot::intersectsSegment
                           (this,local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,
                            (Point *)0x0,(Point *)0x0,(Point *)0x0);
        pVVar14 = (Value *)se::State::rval(aSStack_90);
        uVar22 = int32_to_seval(iVar11,pVVar14);
        if ((uVar22 & 1) != 0) goto LAB_00cb8b60;
        uVar24 = 0x1438;
      }
      break;
    case 5:
      local_a0 = 0;
      local_98 = 0;
      bVar7 = seval_to_float(pVVar14,(float *)((long)&local_98 + 4));
      bVar8 = seval_to_float((Value *)(*plVar13 + 0x10),(float *)&local_98);
      bVar9 = seval_to_float((Value *)(*plVar13 + 0x20),(float *)((long)&local_a0 + 4));
      bVar10 = seval_to_float((Value *)(*plVar13 + 0x30),(float *)&local_a0);
      bVar6 = *(byte *)(*plVar13 + 0x48);
      if (bVar6 == 5) {
        pOVar18 = (Object *)se::Value::toObject((Value *)(*plVar13 + 0x40));
        pPVar19 = (Point *)se::Object::getPrivateData(pOVar18);
        if (pPVar19 != (Point *)0x0) {
          bVar4 = true;
          goto LAB_00cb8a7c;
        }
      }
      else {
        bVar4 = bVar6 < 2;
        pPVar19 = (Point *)0x0;
LAB_00cb8a7c:
        if ((bVar7 & bVar8 & bVar9 & bVar10 & bVar4) != 0) {
          iVar11 = dragonBones::Slot::intersectsSegment
                             (this,local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,
                              pPVar19,(Point *)0x0,(Point *)0x0);
          pVVar14 = (Value *)se::State::rval(aSStack_90);
          uVar22 = int32_to_seval(iVar11,pVVar14);
          if ((uVar22 & 1) != 0) goto LAB_00cb8b60;
          uVar24 = 0x1449;
          break;
        }
      }
      uVar24 = 0x1446;
      break;
    case 6:
      local_a0 = 0;
      local_98 = 0;
      bVar6 = seval_to_float(pVVar14,(float *)((long)&local_98 + 4));
      bVar7 = seval_to_float((Value *)(*plVar13 + 0x10),(float *)&local_98);
      bVar8 = seval_to_float((Value *)(*plVar13 + 0x20),(float *)((long)&local_a0 + 4));
      bVar9 = seval_to_float((Value *)(*plVar13 + 0x30),(float *)&local_a0);
      lVar25 = *plVar13;
      if (*(byte *)(lVar25 + 0x48) == 5) {
        pOVar18 = (Object *)se::Value::toObject((Value *)(lVar25 + 0x40));
        pPVar19 = (Point *)se::Object::getPrivateData(pOVar18);
        lVar25 = *plVar13;
        bVar4 = pPVar19 == (Point *)0x0;
      }
      else {
        bVar4 = 1 < *(byte *)(lVar25 + 0x48);
        pPVar19 = (Point *)0x0;
      }
      if (*(byte *)(lVar25 + 0x58) == 5) {
        pOVar18 = (Object *)se::Value::toObject((Value *)(lVar25 + 0x50));
        pPVar20 = (Point *)se::Object::getPrivateData(pOVar18);
        if (pPVar20 != (Point *)0x0) {
          bVar5 = true;
          goto LAB_00cb88e0;
        }
      }
      else {
        bVar5 = *(byte *)(lVar25 + 0x58) < 2;
        pPVar20 = (Point *)0x0;
LAB_00cb88e0:
        if ((bVar6 & bVar7 & bVar8 & bVar9 & !bVar4 & bVar5) != 0) {
          iVar11 = dragonBones::Slot::intersectsSegment
                             (this,local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,
                              pPVar19,pPVar20,(Point *)0x0);
          pVVar14 = (Value *)se::State::rval(aSStack_90);
          uVar22 = int32_to_seval(iVar11,pVVar14);
          if ((uVar22 & 1) != 0) goto LAB_00cb8b60;
          uVar24 = 0x145c;
          break;
        }
      }
      uVar24 = 0x1459;
      break;
    case 7:
      local_a0 = 0;
      local_98 = 0;
      bVar6 = seval_to_float(pVVar14,(float *)((long)&local_98 + 4));
      bVar7 = seval_to_float((Value *)(*plVar13 + 0x10),(float *)&local_98);
      bVar8 = seval_to_float((Value *)(*plVar13 + 0x20),(float *)((long)&local_a0 + 4));
      bVar9 = seval_to_float((Value *)(*plVar13 + 0x30),(float *)&local_a0);
      lVar25 = *plVar13;
      if (*(byte *)(lVar25 + 0x48) == 5) {
        pOVar18 = (Object *)se::Value::toObject((Value *)(lVar25 + 0x40));
        pPVar19 = (Point *)se::Object::getPrivateData(pOVar18);
        lVar25 = *plVar13;
        bVar4 = pPVar19 == (Point *)0x0;
      }
      else {
        bVar4 = 1 < *(byte *)(lVar25 + 0x48);
        pPVar19 = (Point *)0x0;
      }
      if (*(byte *)(lVar25 + 0x58) == 5) {
        pOVar18 = (Object *)se::Value::toObject((Value *)(lVar25 + 0x50));
        pPVar20 = (Point *)se::Object::getPrivateData(pOVar18);
        lVar25 = *plVar13;
        bVar5 = pPVar20 == (Point *)0x0;
      }
      else {
        bVar5 = 1 < *(byte *)(lVar25 + 0x58);
        pPVar20 = (Point *)0x0;
      }
      if (*(byte *)(lVar25 + 0x68) == 5) {
        pOVar18 = (Object *)se::Value::toObject((Value *)(lVar25 + 0x60));
        pPVar21 = (Point *)se::Object::getPrivateData(pOVar18);
        if (pPVar21 != (Point *)0x0) {
          bVar3 = true;
          goto LAB_00cb89c4;
        }
      }
      else {
        bVar3 = *(byte *)(lVar25 + 0x68) < 2;
        pPVar21 = (Point *)0x0;
LAB_00cb89c4:
        if ((bVar6 & bVar7 & bVar8 & bVar9 & !bVar4 & !bVar5 & bVar3) != 0) {
          iVar11 = dragonBones::Slot::intersectsSegment
                             (this,local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,
                              pPVar19,pPVar20,pPVar21);
          pVVar14 = (Value *)se::State::rval(aSStack_90);
          uVar22 = int32_to_seval(iVar11,pVVar14);
          if ((uVar22 & 1) != 0) goto LAB_00cb8b60;
          uVar24 = 0x1471;
          break;
        }
      }
      uVar24 = 0x146e;
      break;
    default:
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 5236): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar13[1] - (long)pVVar14) >> 4,7);
      goto LAB_00cb8b34;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,uVar24,&DAT_0192a918);
    pcVar23 = "js_cocos2dx_dragonbones_Slot_intersectsSegment : Error processing arguments";
  }
  __android_log_print(6,"jswrapper",pcVar23);
LAB_00cb8b34:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",&DAT_0192a918,
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x1477);
LAB_00cb8b60:
  pVVar14 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar14,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_d0;
  pVVar14 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar14 != pVVar2) {
      se::Value::~Value(pVVar14 + -0x10);
      pVVar14 = pVVar14 + -0x10;
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

