
/* js_cocos2dx_spine_SkeletonRenderer_initWithBinaryFileRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonRenderer_initWithBinaryFileRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  Value *pVVar5;
  void *pvVar6;
  SkeletonRenderer *this;
  long *plVar7;
  ulong uVar8;
  Object *pOVar9;
  Atlas *pAVar10;
  Value *pVVar11;
  long lVar12;
  int iVar13;
  Isolate *pIVar14;
  int iVar15;
  Value *local_d8;
  Value *local_d0;
  Value *local_c8;
  HandleScope aHStack_c0 [28];
  float local_a4;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c0,pIVar14);
  local_d8 = operator_new(0xa0);
  local_c8 = local_d8 + 0xa0;
  local_d0 = local_d8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_d8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_d8);
  this = (SkeletonRenderer *)se::State::nativeThisObject(aSStack_70);
  if (this == (SkeletonRenderer *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x33c7,"js_cocos2dx_spine_SkeletonRenderer_initWithBinaryFile");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_spine_SkeletonRenderer_initWithBinaryFile : Invalid Native Object"
                       );
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_70);
    lVar1 = *plVar7;
    lVar2 = plVar7[1];
    lVar12 = lVar2 - lVar1 >> 4;
    if (lVar12 == 3) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_88);
      if ((uVar8 & 1) == 0) {
        iVar15 = 6;
      }
      else {
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = (void *)0x0;
        uVar8 = seval_to_std_string((Value *)(*plVar7 + 0x10),(basic_string *)&local_a0);
        if ((uVar8 & 1) == 0) {
LAB_00c72c0c:
          iVar15 = 6;
        }
        else {
          local_a4 = 0.0;
          uVar8 = seval_to_float((Value *)(*plVar7 + 0x20),&local_a4);
          if ((uVar8 & 1) == 0) goto LAB_00c72c0c;
          spine::SkeletonRenderer::initWithBinaryFile
                    (this,(basic_string *)&local_88,(basic_string *)&local_a0,local_a4);
          iVar15 = 1;
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (iVar15 != 6) goto LAB_00c72dcc;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_88);
      if ((uVar8 & 1) == 0) {
LAB_00c72d1c:
        iVar13 = 10;
        iVar15 = 10;
      }
      else {
        lVar12 = *plVar7;
        if (*(byte *)(lVar12 + 0x18) != 5) {
          if (*(byte *)(lVar12 + 0x18) < 2) {
            pAVar10 = (Atlas *)0x0;
            goto LAB_00c72ce4;
          }
          goto LAB_00c72d1c;
        }
        pOVar9 = (Object *)se::Value::toObject((Value *)(lVar12 + 0x10));
        pAVar10 = (Atlas *)se::Object::getPrivateData(pOVar9);
        if (pAVar10 == (Atlas *)0x0) goto LAB_00c72d1c;
        lVar12 = *plVar7;
LAB_00c72ce4:
        local_a0 = local_a0 & 0xffffffff00000000;
        uVar8 = seval_to_float((Value *)(lVar12 + 0x20),(float *)&local_a0);
        if ((uVar8 & 1) == 0) goto LAB_00c72d1c;
        spine::SkeletonRenderer::initWithBinaryFile
                  (this,(basic_string *)&local_88,pAVar10,(float)local_a0);
        iVar13 = 1;
        iVar15 = 1;
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
        iVar15 = iVar13;
      }
      if (iVar15 != 10) goto LAB_00c72dcc;
    }
    else if (lVar12 == 2) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_88);
      if ((uVar8 & 1) == 0) {
        iVar15 = 4;
      }
      else {
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = (void *)0x0;
        uVar8 = seval_to_std_string((Value *)(*plVar7 + 0x10),(basic_string *)&local_a0);
        if ((uVar8 & 1) == 0) {
          iVar15 = 4;
        }
        else {
          spine::SkeletonRenderer::initWithBinaryFile
                    (this,(basic_string *)&local_88,(basic_string *)&local_a0,1.0);
          iVar15 = 1;
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (iVar15 != 4) goto LAB_00c72dcc;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_88);
      if ((uVar8 & 1) == 0) {
LAB_00c72d68:
        iVar13 = 8;
        iVar15 = 8;
      }
      else {
        bVar3 = *(byte *)(*plVar7 + 0x18);
        if (bVar3 == 5) {
          pOVar9 = (Object *)se::Value::toObject((Value *)(*plVar7 + 0x10));
          pAVar10 = (Atlas *)se::Object::getPrivateData(pOVar9);
          if (pAVar10 == (Atlas *)0x0) goto LAB_00c72d68;
        }
        else {
          if (1 < bVar3) goto LAB_00c72d68;
          pAVar10 = (Atlas *)0x0;
        }
        spine::SkeletonRenderer::initWithBinaryFile(this,(basic_string *)&local_88,pAVar10,1.0);
        iVar13 = 1;
        iVar15 = 1;
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
        iVar15 = iVar13;
      }
      if (iVar15 != 8) goto LAB_00c72dcc;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 13316): wrong number of arguments: %d\n"
                        ,(ulong)(lVar2 - lVar1) >> 4);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_SkeletonRenderer_initWithBinaryFile",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x3407);
LAB_00c72dcc:
  pVVar11 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_70);
  pVVar5 = local_d8;
  pVVar11 = local_d0;
  if (local_d8 != (Value *)0x0) {
    while (pVVar11 != pVVar5) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
    }
    local_d0 = pVVar5;
    operator_delete(local_d8);
  }
  v8::HandleScope::~HandleScope(aHStack_c0);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

