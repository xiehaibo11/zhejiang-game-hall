
/* js_renderer_BaseRenderer_initRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_BaseRenderer_initRegistry(FunctionCallbackInfo *param_1)

{
  Value VVar1;
  long lVar2;
  Value *pVVar3;
  bool bVar4;
  byte bVar5;
  void *pvVar6;
  BaseRenderer *this;
  long *plVar7;
  Value *pVVar8;
  Object *pOVar9;
  DeviceGraphics *pDVar10;
  ulong uVar11;
  Texture2D *pTVar12;
  Isolate *pIVar13;
  void *pvVar14;
  ulong unaff_x23;
  ulong uVar15;
  int iVar16;
  Value *local_d8;
  Value *local_d0;
  undefined8 local_c8;
  HandleScope aHStack_c0 [24];
  void *local_a8;
  void *local_a0;
  undefined8 uStack_98;
  State aSStack_90 [40];
  long local_68;
  int iVar17;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c0,pIVar13);
  local_d8 = (Value *)0x0;
  local_d0 = (Value *)0x0;
  local_c8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar6,(vector *)&local_d8);
  this = (BaseRenderer *)se::State::nativeThisObject(aSStack_90);
  if (this == (BaseRenderer *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x562,"js_renderer_BaseRenderer_init");
    __android_log_print(6,"jswrapper","js_renderer_BaseRenderer_init : Invalid Native Object");
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_90);
    pVVar8 = (Value *)*plVar7;
    uVar15 = plVar7[1] - (long)pVVar8;
    if (uVar15 == 0x30) {
      if (pVVar8[8] == (Value)0x5) {
        pOVar9 = (Object *)se::Value::toObject(pVVar8);
        pDVar10 = (DeviceGraphics *)se::Object::getPrivateData(pOVar9);
        if (pDVar10 != (DeviceGraphics *)0x0) {
LAB_0093f2d8:
          local_a0 = (void *)0x0;
          uStack_98 = 0;
          local_a8 = (void *)0x0;
          uVar11 = seval_to_std_vector_ProgramLib_Template
                             ((Value *)(*plVar7 + 0x10),(vector *)&local_a8);
          if ((uVar11 & 1) == 0) {
LAB_0093f36c:
            iVar17 = 4;
            iVar16 = 4;
            pvVar6 = local_a8;
            pvVar14 = local_a0;
          }
          else {
            bVar5 = *(byte *)(*plVar7 + 0x28);
            if (bVar5 == 5) {
              pOVar9 = (Object *)se::Value::toObject((Value *)(*plVar7 + 0x20));
              pTVar12 = (Texture2D *)se::Object::getPrivateData(pOVar9);
              if (pTVar12 == (Texture2D *)0x0) goto LAB_0093f36c;
            }
            else {
              if (1 < bVar5) goto LAB_0093f36c;
              pTVar12 = (Texture2D *)0x0;
            }
            bVar5 = cocos2d::renderer::BaseRenderer::init(this,pDVar10,(vector *)&local_a8,pTVar12);
            pVVar8 = (Value *)se::State::rval(aSStack_90);
            uVar11 = boolean_to_seval((bool)(bVar5 & 1),pVVar8);
            if ((uVar11 & 1) == 0) {
              __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                                  ,0x572,"js_renderer_BaseRenderer_init");
              __android_log_print(6,"jswrapper",
                                  "js_renderer_BaseRenderer_init : Error processing arguments");
              unaff_x23 = 0;
              iVar17 = 1;
              iVar16 = 1;
              pvVar6 = local_a8;
              pvVar14 = local_a0;
            }
            else {
              iVar17 = 1;
              iVar16 = 1;
              unaff_x23 = 1;
              pvVar6 = local_a8;
              pvVar14 = local_a0;
            }
          }
          local_a8 = pvVar6;
          local_a0 = pvVar14;
          if (pvVar6 != (void *)0x0) {
            if (pvVar14 != pvVar6) {
              do {
                pvVar14 = (void *)((long)pvVar14 + -0x68);
                FUN_008e15e8(&uStack_98,pvVar14);
              } while (pvVar6 != pvVar14);
              unaff_x23 = unaff_x23 & 0xffffffff;
            }
            local_a0 = pvVar6;
            operator_delete(local_a8);
            iVar16 = iVar17;
          }
          if (iVar16 != 4) {
LAB_0093f654:
            if ((unaff_x23 & 1) != 0) goto LAB_0093f5c8;
            goto LAB_0093f59c;
          }
        }
      }
      else if ((byte)pVVar8[8] < 2) {
        pDVar10 = (DeviceGraphics *)0x0;
        goto LAB_0093f2d8;
      }
    }
    else if (uVar15 == 0x20) {
      VVar1 = ((Value *)*plVar7)[8];
      if (VVar1 == (Value)0x5) {
        pOVar9 = (Object *)se::Value::toObject((Value *)*plVar7);
        pDVar10 = (DeviceGraphics *)se::Object::getPrivateData(pOVar9);
        if (pDVar10 == (DeviceGraphics *)0x0) goto LAB_0093f580;
        bVar4 = true;
      }
      else {
        bVar4 = (byte)VVar1 < 2;
        pDVar10 = (DeviceGraphics *)0x0;
      }
      if (bVar4) {
        local_a0 = (void *)0x0;
        uStack_98 = 0;
        local_a8 = (void *)0x0;
        uVar11 = seval_to_std_vector_ProgramLib_Template
                           ((Value *)(*plVar7 + 0x10),(vector *)&local_a8);
        if ((uVar11 & 1) == 0) {
          unaff_x23 = unaff_x23 & 0xffffffff;
          iVar17 = 8;
          iVar16 = 8;
          pvVar6 = local_a8;
          pvVar14 = local_a0;
        }
        else {
          bVar5 = cocos2d::renderer::BaseRenderer::init(this,pDVar10,(vector *)&local_a8);
          pVVar8 = (Value *)se::State::rval(aSStack_90);
          uVar11 = boolean_to_seval((bool)(bVar5 & 1),pVVar8);
          if ((uVar11 & 1) == 0) {
            __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                                ,0x581,"js_renderer_BaseRenderer_init");
            __android_log_print(6,"jswrapper",
                                "js_renderer_BaseRenderer_init : Error processing arguments");
            unaff_x23 = 0;
            iVar17 = 1;
            iVar16 = 1;
            pvVar6 = local_a8;
            pvVar14 = local_a0;
          }
          else {
            iVar17 = 1;
            iVar16 = 1;
            unaff_x23 = 1;
            pvVar6 = local_a8;
            pvVar14 = local_a0;
          }
        }
        local_a8 = pvVar6;
        local_a0 = pvVar14;
        if (pvVar6 != (void *)0x0) {
          if (pvVar14 != pvVar6) {
            do {
              pvVar14 = (void *)((long)pvVar14 + -0x68);
              FUN_008e15e8(&uStack_98,pvVar14);
            } while (pvVar6 != pvVar14);
          }
          local_a0 = pvVar6;
          operator_delete(local_a8);
          iVar16 = iVar17;
        }
        if (iVar16 != 8) goto LAB_0093f654;
      }
    }
LAB_0093f580:
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 1414): wrong number of arguments: %d\n"
                        ,uVar15 >> 4);
  }
LAB_0093f59c:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_BaseRenderer_init",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x589);
LAB_0093f5c8:
  pVVar8 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_90);
  pVVar3 = local_d8;
  pVVar8 = local_d0;
  if (local_d8 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_d0 = pVVar3;
    operator_delete(local_d8);
  }
  v8::HandleScope::~HandleScope(aHStack_c0);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

