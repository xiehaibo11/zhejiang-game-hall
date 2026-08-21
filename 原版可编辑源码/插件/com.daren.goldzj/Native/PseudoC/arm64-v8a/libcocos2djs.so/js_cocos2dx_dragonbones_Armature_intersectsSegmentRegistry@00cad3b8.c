
/* js_cocos2dx_dragonbones_Armature_intersectsSegmentRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_Armature_intersectsSegmentRegistry(FunctionCallbackInfo *param_1)

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
  void *pvVar11;
  Armature *this;
  long *plVar12;
  Value *pVVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  Object *pOVar18;
  Point *pPVar19;
  Point *pPVar20;
  Point *pPVar21;
  type *ptVar22;
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
  pvVar11 = (void *)se::internal::getPrivate(pIVar26,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar11,(vector *)&local_d0);
  this = (Armature *)se::State::nativeThisObject(aSStack_90);
  if (this == (Armature *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0xe19,"js_cocos2dx_dragonbones_Armature_intersectsSegment");
    pcVar23 = "js_cocos2dx_dragonbones_Armature_intersectsSegment : Invalid Native Object";
  }
  else {
    plVar12 = (long *)se::State::args(aSStack_90);
    pVVar13 = (Value *)*plVar12;
    switch(plVar12[1] - (long)pVVar13 >> 4) {
    case 4:
      local_a0 = 0;
      local_98 = 0;
      uVar14 = seval_to_float(pVVar13,(float *)((long)&local_98 + 4));
      uVar15 = seval_to_float((Value *)(*plVar12 + 0x10),(float *)&local_98);
      uVar16 = seval_to_float((Value *)(*plVar12 + 0x20),(float *)((long)&local_a0 + 4));
      uVar17 = seval_to_float((Value *)(*plVar12 + 0x30),(float *)&local_a0);
      if (((((uVar14 & 1) == 0) || ((uVar15 & 1) == 0)) || ((uVar16 & 1) == 0)) ||
         ((uVar17 & 1) == 0)) {
        uVar24 = 0xe26;
      }
      else {
        ptVar22 = (type *)dragonBones::Armature::intersectsSegment
                                    (this,local_98._4_4_,(float)local_98,local_a0._4_4_,
                                     (float)local_a0,(Point *)0x0,(Point *)0x0,(Point *)0x0);
        pVVar13 = (Value *)se::State::rval(aSStack_90);
        bVar4 = native_ptr_to_rooted_seval<dragonBones::Slot>(ptVar22,pVVar13,(bool *)0x0);
        if (bVar4) goto LAB_00cada60;
        uVar24 = 0xe29;
      }
      break;
    case 5:
      local_a0 = 0;
      local_98 = 0;
      bVar7 = seval_to_float(pVVar13,(float *)((long)&local_98 + 4));
      bVar8 = seval_to_float((Value *)(*plVar12 + 0x10),(float *)&local_98);
      bVar9 = seval_to_float((Value *)(*plVar12 + 0x20),(float *)((long)&local_a0 + 4));
      bVar10 = seval_to_float((Value *)(*plVar12 + 0x30),(float *)&local_a0);
      bVar6 = *(byte *)(*plVar12 + 0x48);
      if (bVar6 == 5) {
        pOVar18 = (Object *)se::Value::toObject((Value *)(*plVar12 + 0x40));
        pPVar19 = (Point *)se::Object::getPrivateData(pOVar18);
        if (pPVar19 != (Point *)0x0) {
          bVar4 = true;
          goto LAB_00cad978;
        }
      }
      else {
        bVar4 = bVar6 < 2;
        pPVar19 = (Point *)0x0;
LAB_00cad978:
        if ((bVar7 & bVar8 & bVar9 & bVar10 & bVar4) != 0) {
          ptVar22 = (type *)dragonBones::Armature::intersectsSegment
                                      (this,local_98._4_4_,(float)local_98,local_a0._4_4_,
                                       (float)local_a0,pPVar19,(Point *)0x0,(Point *)0x0);
          pVVar13 = (Value *)se::State::rval(aSStack_90);
          bVar4 = native_ptr_to_rooted_seval<dragonBones::Slot>(ptVar22,pVVar13,(bool *)0x0);
          if (bVar4) goto LAB_00cada60;
          uVar24 = 0xe3a;
          break;
        }
      }
      uVar24 = 0xe37;
      break;
    case 6:
      local_a0 = 0;
      local_98 = 0;
      bVar6 = seval_to_float(pVVar13,(float *)((long)&local_98 + 4));
      bVar7 = seval_to_float((Value *)(*plVar12 + 0x10),(float *)&local_98);
      bVar8 = seval_to_float((Value *)(*plVar12 + 0x20),(float *)((long)&local_a0 + 4));
      bVar9 = seval_to_float((Value *)(*plVar12 + 0x30),(float *)&local_a0);
      lVar25 = *plVar12;
      if (*(byte *)(lVar25 + 0x48) == 5) {
        pOVar18 = (Object *)se::Value::toObject((Value *)(lVar25 + 0x40));
        pPVar19 = (Point *)se::Object::getPrivateData(pOVar18);
        lVar25 = *plVar12;
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
          goto LAB_00cad7d4;
        }
      }
      else {
        bVar5 = *(byte *)(lVar25 + 0x58) < 2;
        pPVar20 = (Point *)0x0;
LAB_00cad7d4:
        if ((bVar6 & bVar7 & bVar8 & bVar9 & !bVar4 & bVar5) != 0) {
          ptVar22 = (type *)dragonBones::Armature::intersectsSegment
                                      (this,local_98._4_4_,(float)local_98,local_a0._4_4_,
                                       (float)local_a0,pPVar19,pPVar20,(Point *)0x0);
          pVVar13 = (Value *)se::State::rval(aSStack_90);
          bVar4 = native_ptr_to_rooted_seval<dragonBones::Slot>(ptVar22,pVVar13,(bool *)0x0);
          if (bVar4) goto LAB_00cada60;
          uVar24 = 0xe4d;
          break;
        }
      }
      uVar24 = 0xe4a;
      break;
    case 7:
      local_a0 = 0;
      local_98 = 0;
      bVar6 = seval_to_float(pVVar13,(float *)((long)&local_98 + 4));
      bVar7 = seval_to_float((Value *)(*plVar12 + 0x10),(float *)&local_98);
      bVar8 = seval_to_float((Value *)(*plVar12 + 0x20),(float *)((long)&local_a0 + 4));
      bVar9 = seval_to_float((Value *)(*plVar12 + 0x30),(float *)&local_a0);
      lVar25 = *plVar12;
      if (*(byte *)(lVar25 + 0x48) == 5) {
        pOVar18 = (Object *)se::Value::toObject((Value *)(lVar25 + 0x40));
        pPVar19 = (Point *)se::Object::getPrivateData(pOVar18);
        lVar25 = *plVar12;
        bVar4 = pPVar19 == (Point *)0x0;
      }
      else {
        bVar4 = 1 < *(byte *)(lVar25 + 0x48);
        pPVar19 = (Point *)0x0;
      }
      if (*(byte *)(lVar25 + 0x58) == 5) {
        pOVar18 = (Object *)se::Value::toObject((Value *)(lVar25 + 0x50));
        pPVar20 = (Point *)se::Object::getPrivateData(pOVar18);
        lVar25 = *plVar12;
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
          goto LAB_00cad8bc;
        }
      }
      else {
        bVar3 = *(byte *)(lVar25 + 0x68) < 2;
        pPVar21 = (Point *)0x0;
LAB_00cad8bc:
        if ((bVar6 & bVar7 & bVar8 & bVar9 & !bVar4 & !bVar5 & bVar3) != 0) {
          ptVar22 = (type *)dragonBones::Armature::intersectsSegment
                                      (this,local_98._4_4_,(float)local_98,local_a0._4_4_,
                                       (float)local_a0,pPVar19,pPVar20,pPVar21);
          pVVar13 = (Value *)se::State::rval(aSStack_90);
          bVar4 = native_ptr_to_rooted_seval<dragonBones::Slot>(ptVar22,pVVar13,(bool *)0x0);
          if (bVar4) goto LAB_00cada60;
          uVar24 = 0xe62;
          break;
        }
      }
      uVar24 = 0xe5f;
      break;
    default:
      __android_log_print(6,"jswrapper",&DAT_0193620c,(ulong)(plVar12[1] - (long)pVVar13) >> 4,7);
      goto LAB_00cada34;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,uVar24,"js_cocos2dx_dragonbones_Armature_intersectsSegment");
    pcVar23 = "js_cocos2dx_dragonbones_Armature_intersectsSegment : Error processing arguments";
  }
  __android_log_print(6,"jswrapper",pcVar23);
LAB_00cada34:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_Armature_intersectsSegment",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0xe68);
LAB_00cada60:
  pVVar13 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar13,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_d0;
  pVVar13 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar13 != pVVar2) {
      se::Value::~Value(pVVar13 + -0x10);
      pVVar13 = pVVar13 + -0x10;
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

