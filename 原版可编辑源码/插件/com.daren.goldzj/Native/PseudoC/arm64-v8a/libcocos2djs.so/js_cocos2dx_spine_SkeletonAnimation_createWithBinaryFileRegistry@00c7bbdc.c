
/* WARNING: Type propagation algorithm not settling */
/* js_cocos2dx_spine_SkeletonAnimation_createWithBinaryFileRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonAnimation_createWithBinaryFileRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined1 uVar5;
  Value *pVVar6;
  bool bVar7;
  uint uVar8;
  void *pvVar9;
  long *plVar10;
  ulong uVar11;
  type *ptVar12;
  Value *pVVar13;
  Object *pOVar14;
  Atlas *pAVar15;
  long lVar16;
  int iVar17;
  Isolate *pIVar18;
  uint uVar19;
  ulong unaff_x24;
  int iVar20;
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
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar18 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_d0,pIVar18);
  local_e8 = operator_new(0xa0);
  local_d8 = local_e8 + 0xa0;
  local_e0 = local_e8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_e8);
  pvVar9 = (void *)se::internal::getPrivate(pIVar18,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar9,(vector *)&local_e8);
  plVar10 = (long *)se::State::args(aSStack_80);
  lVar1 = *plVar10;
  lVar2 = plVar10[1];
  lVar16 = lVar2 - lVar1 >> 4;
  if (lVar16 == 3) {
    local_98 = 0;
    uStack_90 = 0;
    local_88 = (void *)0x0;
    uVar11 = seval_to_std_string((Value *)*plVar10,(basic_string *)&local_98);
    if ((uVar11 & 1) == 0) {
      uVar5 = true;
      iVar20 = 6;
    }
    else {
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
      uVar11 = seval_to_std_string((Value *)(*plVar10 + 0x10),(basic_string *)&local_b0);
      if ((uVar11 & 1) == 0) {
LAB_00c7bdf0:
        uVar5 = true;
        iVar20 = 6;
      }
      else {
        local_b4 = 0.0;
        uVar11 = seval_to_float((Value *)(*plVar10 + 0x20),&local_b4);
        if ((uVar11 & 1) == 0) goto LAB_00c7bdf0;
        ptVar12 = (type *)spine::SkeletonAnimation::createWithBinaryFile
                                    ((basic_string *)&local_98,(basic_string *)&local_b0,local_b4);
        pVVar13 = (Value *)se::State::rval(aSStack_80);
        bVar7 = native_ptr_to_seval<spine::SkeletonAnimation>(ptVar12,pVVar13,(bool *)0x0);
        if (bVar7) {
          iVar20 = 1;
          uVar5 = true;
          unaff_x24 = 1;
        }
        else {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                              ,0x3a3e,"js_cocos2dx_spine_SkeletonAnimation_createWithBinaryFile");
          __android_log_print(6,"jswrapper",&DAT_01921f5c);
          uVar5 = false;
          unaff_x24 = 0;
          iVar20 = 1;
        }
      }
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (iVar20 == 6) {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      uVar11 = seval_to_std_string((Value *)*plVar10,(basic_string *)&local_98);
      iVar20 = 0xe;
      if (((bool)uVar5) && ((uVar11 & 1) != 0)) {
        lVar16 = *plVar10;
        if (*(byte *)(lVar16 + 0x18) == 5) {
          pOVar14 = (Object *)se::Value::toObject((Value *)(lVar16 + 0x10));
          pAVar15 = (Atlas *)se::Object::getPrivateData(pOVar14);
          if (pAVar15 != (Atlas *)0x0) {
            lVar16 = *plVar10;
LAB_00c7bfac:
            local_b0 = local_b0 & 0xffffffff00000000;
            uVar11 = seval_to_float((Value *)(lVar16 + 0x20),(float *)&local_b0);
            if ((uVar11 & 1) != 0) {
              ptVar12 = (type *)spine::SkeletonAnimation::createWithBinaryFile
                                          ((basic_string *)&local_98,pAVar15,(float)local_b0);
              pVVar13 = (Value *)se::State::rval(aSStack_80);
              bVar7 = native_ptr_to_seval<spine::SkeletonAnimation>(ptVar12,pVVar13,(bool *)0x0);
              if (bVar7) {
                iVar20 = 1;
                unaff_x24 = 1;
              }
              else {
                __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                                    ,0x3a5d,
                                    "js_cocos2dx_spine_SkeletonAnimation_createWithBinaryFile");
                __android_log_print(6,"jswrapper",&DAT_01921f5c);
                unaff_x24 = 0;
                iVar20 = 1;
              }
              goto joined_r0x00c7c118;
            }
          }
        }
        else if (*(byte *)(lVar16 + 0x18) < 2) {
          pAVar15 = (Atlas *)0x0;
          goto LAB_00c7bfac;
        }
        iVar20 = 0xe;
      }
joined_r0x00c7c118:
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if (iVar20 == 0xe) goto LAB_00c7c12c;
    }
LAB_00c7bf98:
    if ((unaff_x24 & 1) != 0) goto LAB_00c7c174;
  }
  else {
    if (lVar16 == 2) {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      uVar11 = seval_to_std_string((Value *)*plVar10,(basic_string *)&local_98);
      if ((uVar11 & 1) == 0) {
        uVar19 = 1;
        iVar20 = 2;
      }
      else {
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = (void *)0x0;
        uVar11 = seval_to_std_string((Value *)(*plVar10 + 0x10),(basic_string *)&local_b0);
        if ((uVar11 & 1) == 0) {
          iVar20 = 2;
joined_r0x00c7be70:
          uVar19 = 1;
        }
        else {
          ptVar12 = (type *)spine::SkeletonAnimation::createWithBinaryFile
                                      ((basic_string *)&local_98,(basic_string *)&local_b0,1.0);
          pVVar13 = (Value *)se::State::rval(aSStack_80);
          bVar7 = native_ptr_to_seval<spine::SkeletonAnimation>(ptVar12,pVVar13,(bool *)0x0);
          if (bVar7) {
            iVar20 = 1;
            unaff_x24 = 1;
            goto joined_r0x00c7be70;
          }
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                              ,0x3a2d,"js_cocos2dx_spine_SkeletonAnimation_createWithBinaryFile");
          __android_log_print(6,"jswrapper",&DAT_01921f5c);
          uVar19 = 0;
          unaff_x24 = 0;
          iVar20 = 1;
        }
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if (iVar20 == 2) {
        local_98 = 0;
        uStack_90 = 0;
        local_88 = (void *)0x0;
        uVar8 = seval_to_std_string((Value *)*plVar10,(basic_string *)&local_98);
        if ((uVar19 & uVar8) == 1) {
          bVar3 = *(byte *)(*plVar10 + 0x18);
          if (bVar3 == 5) {
            pOVar14 = (Object *)se::Value::toObject((Value *)(*plVar10 + 0x10));
            pAVar15 = (Atlas *)se::Object::getPrivateData(pOVar14);
            if (pAVar15 == (Atlas *)0x0) goto LAB_00c7bf7c;
          }
          else {
            if (1 < bVar3) goto LAB_00c7bf7c;
            pAVar15 = (Atlas *)0x0;
          }
          ptVar12 = (type *)spine::SkeletonAnimation::createWithBinaryFile
                                      ((basic_string *)&local_98,pAVar15,1.0);
          pVVar13 = (Value *)se::State::rval(aSStack_80);
          bVar7 = native_ptr_to_seval<spine::SkeletonAnimation>(ptVar12,pVVar13,(bool *)0x0);
          if (bVar7) {
            iVar17 = 1;
            iVar20 = 1;
            unaff_x24 = 1;
          }
          else {
            __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                                ,0x3a4c,"js_cocos2dx_spine_SkeletonAnimation_createWithBinaryFile");
            __android_log_print(6,"jswrapper",&DAT_01921f5c);
            unaff_x24 = 0;
            iVar17 = 1;
            iVar20 = 1;
          }
        }
        else {
LAB_00c7bf7c:
          iVar17 = 10;
          iVar20 = 10;
        }
        if ((local_98 & 1) != 0) {
          operator_delete(local_88);
          iVar20 = iVar17;
        }
        if (iVar20 == 10) goto LAB_00c7c12c;
      }
      goto LAB_00c7bf98;
    }
LAB_00c7c12c:
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 14945): wrong number of arguments: %d\n"
                        ,(ulong)(lVar2 - lVar1) >> 4);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_SkeletonAnimation_createWithBinaryFile",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x3a64);
LAB_00c7c174:
  pVVar13 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar13,param_1);
  se::State::~State(aSStack_80);
  pVVar6 = local_e8;
  pVVar13 = local_e0;
  if (local_e8 != (Value *)0x0) {
    while (pVVar13 != pVVar6) {
      se::Value::~Value(pVVar13 + -0x10);
      pVVar13 = pVVar13 + -0x10;
    }
    local_e0 = pVVar6;
    operator_delete(local_e8);
  }
  v8::HandleScope::~HandleScope(aHStack_d0);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

