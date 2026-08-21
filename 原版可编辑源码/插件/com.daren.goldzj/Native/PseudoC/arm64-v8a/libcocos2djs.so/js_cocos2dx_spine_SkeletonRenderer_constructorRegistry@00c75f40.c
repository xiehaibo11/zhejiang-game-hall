
/* js_cocos2dx_spine_SkeletonRenderer_constructorRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonRenderer_constructorRegistry(FunctionCallbackInfo *param_1)

{
  Value VVar1;
  byte bVar2;
  long lVar3;
  Value *pVVar4;
  Object *this;
  long *plVar5;
  Value *pVVar6;
  Skeleton *pSVar7;
  ulong uVar8;
  SkeletonRenderer *pSVar9;
  SkeletonData *pSVar10;
  Atlas *pAVar11;
  Object *pOVar12;
  basic_string bVar13;
  basic_string bVar14;
  undefined1 uVar15;
  long lVar16;
  int iVar17;
  ulong uVar19;
  Value *local_d8;
  Value *local_d0;
  Value *local_c8;
  HandleScope aHStack_c0 [28];
  float local_a4;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  State aSStack_88 [40];
  ulong local_60;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  int iVar18;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  v8::HandleScope::HandleScope(aHStack_c0,*(Isolate **)(*(long *)param_1 + 8));
  local_d8 = operator_new(0xa0);
  local_c8 = local_d8 + 0xa0;
  local_d0 = local_d8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_d8);
  this = (Object *)
         se::Object::_createJSObject(__jsb_spine_SkeletonRenderer_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_spine_SkeletonRenderer_finalizeRegistry);
  se::State::State(aSStack_88,this,(vector *)&local_d8);
  plVar5 = (long *)se::State::args(aSStack_88);
  pVVar6 = (Value *)*plVar5;
  uVar19 = plVar5[1] - (long)pVVar6;
  switch((long)uVar19 >> 4) {
  case 0:
    pSVar9 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
    if (pSVar9 != (SkeletonRenderer *)0x0) {
      spine::SkeletonRenderer::SkeletonRenderer(pSVar9);
    }
    goto LAB_00c7628c;
  case 1:
    VVar1 = pVVar6[8];
    if (VVar1 == (Value)0x5) {
      pOVar12 = (Object *)se::Value::toObject(pVVar6);
      pSVar7 = (Skeleton *)se::Object::getPrivateData(pOVar12);
      if (pSVar7 == (Skeleton *)0x0) {
        pVVar6 = (Value *)*plVar5;
        VVar1 = pVVar6[8];
LAB_00c76470:
        if (VVar1 == (Value)0x5) {
          pOVar12 = (Object *)se::Value::toObject(pVVar6);
          pSVar10 = (SkeletonData *)se::Object::getPrivateData(pOVar12);
          if (pSVar10 == (SkeletonData *)0x0) break;
        }
        else {
          if (1 < (byte)VVar1) break;
          pSVar10 = (SkeletonData *)0x0;
        }
        pSVar9 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
        if (pSVar9 != (SkeletonRenderer *)0x0) {
          spine::SkeletonRenderer::SkeletonRenderer(pSVar9,pSVar10,false);
        }
        pOVar12 = (Object *)se::State::thisObject(aSStack_88);
        se::Object::setPrivateData(pOVar12,pSVar9);
        goto LAB_00c76654;
      }
    }
    else {
      if (1 < (byte)VVar1) goto LAB_00c76470;
      pSVar7 = (Skeleton *)0x0;
    }
    pSVar9 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
    if (pSVar9 != (SkeletonRenderer *)0x0) {
      bVar13 = (basic_string)0x0;
LAB_00c76280:
      bVar14 = (basic_string)0x0;
LAB_00c76284:
      uVar15 = false;
LAB_00c76288:
      spine::SkeletonRenderer::SkeletonRenderer
                (pSVar9,pSVar7,(bool)bVar13,(bool)bVar14,(bool)uVar15);
    }
LAB_00c7628c:
    pOVar12 = (Object *)se::State::thisObject(aSStack_88);
    se::Object::setPrivateData(pOVar12,pSVar9);
    goto LAB_00c76654;
  case 2:
    if (pVVar6[8] == (Value)0x5) {
      pOVar12 = (Object *)se::Value::toObject(pVVar6);
      pSVar7 = (Skeleton *)se::Object::getPrivateData(pOVar12);
      if (pSVar7 != (Skeleton *)0x0) {
        pVVar6 = (Value *)*plVar5;
LAB_00c76150:
        uVar8 = seval_to_boolean(pVVar6 + 0x10,(bool *)&local_60);
        if ((uVar8 & 1) != 0) {
          pSVar9 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
          if (pSVar9 == (SkeletonRenderer *)0x0) goto LAB_00c7628c;
          bVar13 = local_60._0_1_;
          goto LAB_00c76280;
        }
      }
    }
    else if ((byte)pVVar6[8] < 2) {
      pSVar7 = (Skeleton *)0x0;
      goto LAB_00c76150;
    }
    pVVar6 = (Value *)*plVar5;
    if (pVVar6[8] == (Value)0x5) {
      pOVar12 = (Object *)se::Value::toObject(pVVar6);
      pSVar10 = (SkeletonData *)se::Object::getPrivateData(pOVar12);
      if (pSVar10 != (SkeletonData *)0x0) {
        pVVar6 = (Value *)*plVar5;
LAB_00c762ac:
        uVar8 = seval_to_boolean(pVVar6 + 0x10,(bool *)&local_60);
        if ((uVar8 & 1) != 0) {
          pSVar9 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
          if (pSVar9 != (SkeletonRenderer *)0x0) {
            spine::SkeletonRenderer::SkeletonRenderer(pSVar9,pSVar10,(bool)local_60._0_1_);
          }
          goto LAB_00c7628c;
        }
      }
    }
    else if ((byte)pVVar6[8] < 2) {
      pSVar10 = (SkeletonData *)0x0;
      goto LAB_00c762ac;
    }
    local_60 = 0;
    uStack_58 = 0;
    local_50 = (void *)0x0;
    uVar8 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_60);
    if ((uVar8 & 1) == 0) {
LAB_00c76554:
      iVar18 = 0x10;
      iVar17 = 0x10;
    }
    else {
      bVar2 = *(byte *)(*plVar5 + 0x18);
      if (bVar2 == 5) {
        pOVar12 = (Object *)se::Value::toObject((Value *)(*plVar5 + 0x10));
        pAVar11 = (Atlas *)se::Object::getPrivateData(pOVar12);
        if (pAVar11 == (Atlas *)0x0) goto LAB_00c76554;
      }
      else {
        if (1 < bVar2) goto LAB_00c76554;
        pAVar11 = (Atlas *)0x0;
      }
      pSVar9 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
      if (pSVar9 != (SkeletonRenderer *)0x0) {
        spine::SkeletonRenderer::SkeletonRenderer(pSVar9,(basic_string *)&local_60,pAVar11,1.0);
      }
      pOVar12 = (Object *)se::State::thisObject(aSStack_88);
      se::Object::setPrivateData(pOVar12,pSVar9);
      iVar18 = 1;
      iVar17 = 1;
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
      iVar17 = iVar18;
    }
    if (iVar17 != 0x10) goto LAB_00c76654;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = (void *)0x0;
    uVar8 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_60);
    if ((uVar8 & 1) == 0) {
      iVar17 = 0x14;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      uVar8 = seval_to_std_string((Value *)(*plVar5 + 0x10),(basic_string *)&local_a0);
      if ((uVar8 & 1) == 0) {
        iVar17 = 0x14;
      }
      else {
        pSVar9 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
        if (pSVar9 != (SkeletonRenderer *)0x0) {
          spine::SkeletonRenderer::SkeletonRenderer
                    (pSVar9,(basic_string *)&local_60,(basic_string *)&local_a0,1.0);
        }
        pOVar12 = (Object *)se::State::thisObject(aSStack_88);
        se::Object::setPrivateData(pOVar12,pSVar9);
        iVar17 = 1;
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar17 != 0x14) goto LAB_00c76654;
    break;
  case 3:
    if (pVVar6[8] == (Value)0x5) {
      pOVar12 = (Object *)se::Value::toObject(pVVar6);
      pSVar7 = (Skeleton *)se::Object::getPrivateData(pOVar12);
      if (pSVar7 != (Skeleton *)0x0) {
        pVVar6 = (Value *)*plVar5;
LAB_00c761bc:
        uVar8 = seval_to_boolean(pVVar6 + 0x10,(bool *)&local_60);
        if (((uVar8 & 1) != 0) &&
           (uVar8 = seval_to_boolean((Value *)(*plVar5 + 0x20),(bool *)&local_a0), (uVar8 & 1) != 0)
           ) {
          pSVar9 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
          if (pSVar9 == (SkeletonRenderer *)0x0) goto LAB_00c7628c;
          bVar13 = local_60._0_1_;
          bVar14 = local_a0._0_1_;
          goto LAB_00c76284;
        }
      }
    }
    else if ((byte)pVVar6[8] < 2) {
      pSVar7 = (Skeleton *)0x0;
      goto LAB_00c761bc;
    }
    local_60 = 0;
    uStack_58 = 0;
    local_50 = (void *)0x0;
    uVar8 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_60);
    if ((uVar8 & 1) == 0) {
LAB_00c76394:
      iVar18 = 0x12;
      iVar17 = 0x12;
    }
    else {
      lVar16 = *plVar5;
      if (*(byte *)(lVar16 + 0x18) != 5) {
        if (*(byte *)(lVar16 + 0x18) < 2) {
          pAVar11 = (Atlas *)0x0;
          goto LAB_00c76334;
        }
        goto LAB_00c76394;
      }
      pOVar12 = (Object *)se::Value::toObject((Value *)(lVar16 + 0x10));
      pAVar11 = (Atlas *)se::Object::getPrivateData(pOVar12);
      if (pAVar11 == (Atlas *)0x0) goto LAB_00c76394;
      lVar16 = *plVar5;
LAB_00c76334:
      local_a0 = local_a0 & 0xffffffff00000000;
      uVar8 = seval_to_float((Value *)(lVar16 + 0x20),(float *)&local_a0);
      if ((uVar8 & 1) == 0) goto LAB_00c76394;
      pSVar9 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
      if (pSVar9 != (SkeletonRenderer *)0x0) {
        spine::SkeletonRenderer::SkeletonRenderer
                  (pSVar9,(basic_string *)&local_60,pAVar11,(float)local_a0);
      }
      pOVar12 = (Object *)se::State::thisObject(aSStack_88);
      se::Object::setPrivateData(pOVar12,pSVar9);
      iVar18 = 1;
      iVar17 = 1;
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
      iVar17 = iVar18;
    }
    if (iVar17 != 0x12) goto LAB_00c76654;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = (void *)0x0;
    uVar8 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_60);
    if ((uVar8 & 1) == 0) {
      iVar17 = 0x16;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      uVar8 = seval_to_std_string((Value *)(*plVar5 + 0x10),(basic_string *)&local_a0);
      if ((uVar8 & 1) == 0) {
LAB_00c764d4:
        iVar17 = 0x16;
      }
      else {
        local_a4 = 0.0;
        uVar8 = seval_to_float((Value *)(*plVar5 + 0x20),&local_a4);
        if ((uVar8 & 1) == 0) goto LAB_00c764d4;
        pSVar9 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
        if (pSVar9 != (SkeletonRenderer *)0x0) {
          spine::SkeletonRenderer::SkeletonRenderer
                    (pSVar9,(basic_string *)&local_60,(basic_string *)&local_a0,local_a4);
        }
        pOVar12 = (Object *)se::State::thisObject(aSStack_88);
        se::Object::setPrivateData(pOVar12,pSVar9);
        iVar17 = 1;
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar17 != 0x16) goto LAB_00c76654;
    break;
  case 4:
    if (pVVar6[8] == (Value)0x5) {
      pOVar12 = (Object *)se::Value::toObject(pVVar6);
      pSVar7 = (Skeleton *)se::Object::getPrivateData(pOVar12);
      if (pSVar7 != (Skeleton *)0x0) {
        pVVar6 = (Value *)*plVar5;
LAB_00c760dc:
        uVar8 = seval_to_boolean(pVVar6 + 0x10,(bool *)&local_60);
        if ((((uVar8 & 1) != 0) &&
            (uVar8 = seval_to_boolean((Value *)(*plVar5 + 0x20),(bool *)&local_a0), (uVar8 & 1) != 0
            )) && (uVar8 = seval_to_boolean((Value *)(*plVar5 + 0x30),(bool *)&local_a4),
                  (uVar8 & 1) != 0)) {
          pSVar9 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
          if (pSVar9 == (SkeletonRenderer *)0x0) goto LAB_00c7628c;
          bVar13 = local_60._0_1_;
          bVar14 = local_a0._0_1_;
          uVar15 = local_a4._0_1_;
          goto LAB_00c76288;
        }
      }
    }
    else if ((byte)pVVar6[8] < 2) {
      pSVar7 = (Skeleton *)0x0;
      goto LAB_00c760dc;
    }
  }
  __android_log_print(6,"jswrapper",
                      "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 13909): wrong number of arguments: %d\n"
                      ,uVar19 >> 4);
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_SkeletonRenderer_constructor",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x3658);
LAB_00c76654:
  se::Value::Value((Value *)&local_60);
  uVar19 = se::Object::getProperty(this,"_ctor",(Value *)&local_60);
  if ((uVar19 & 1) != 0) {
    pOVar12 = (Object *)se::Value::toObject((Value *)&local_60);
    se::Object::call(pOVar12,(vector *)&local_d8,this,(Value *)0x0);
  }
  se::Value::~Value((Value *)&local_60);
  se::State::~State(aSStack_88);
  pVVar4 = local_d8;
  pVVar6 = local_d0;
  if (local_d8 != (Value *)0x0) {
    while (pVVar6 != pVVar4) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_d0 = pVVar4;
    operator_delete(local_d8);
  }
  v8::HandleScope::~HandleScope(aHStack_c0);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

