
/* js_renderer_ForwardRenderer_initRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_ForwardRenderer_initRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  void *pvVar9;
  DeviceGraphics *pDVar10;
  long *plVar11;
  Value *pVVar12;
  Object *pOVar13;
  vector *pvVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  Isolate *pIVar18;
  void *pvVar19;
  Value *local_e0;
  Value *local_d8;
  undefined8 local_d0;
  HandleScope aHStack_c8 [28];
  int local_ac;
  void *local_a8;
  void *local_a0;
  undefined8 uStack_98;
  State aSStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar18 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c8,pIVar18);
  local_e0 = (Value *)0x0;
  local_d8 = (Value *)0x0;
  local_d0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_e0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_e0);
  pvVar9 = (void *)se::internal::getPrivate(pIVar18,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar9,(vector *)&local_e0);
  pDVar10 = (DeviceGraphics *)se::State::nativeThisObject(aSStack_90);
  if (pDVar10 == (DeviceGraphics *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x839,"js_renderer_ForwardRenderer_init");
    __android_log_print(6,"jswrapper","js_renderer_ForwardRenderer_init : Invalid Native Object");
  }
  else {
    plVar11 = (long *)se::State::args(aSStack_90);
    if (plVar11[1] - *plVar11 == 0x50) {
      local_a0 = (void *)0x0;
      uStack_98 = 0;
      local_a8 = (void *)0x0;
      pVVar12 = (Value *)*plVar11;
      if (pVVar12[8] == (Value)0x5) {
        pOVar13 = (Object *)se::Value::toObject(pVVar12);
        pvVar14 = (vector *)se::Object::getPrivateData(pOVar13);
        pVVar12 = (Value *)*plVar11;
        bVar4 = pvVar14 == (vector *)0x0;
      }
      else {
        bVar4 = 1 < (byte)pVVar12[8];
        pvVar14 = (vector *)0x0;
      }
      bVar6 = seval_to_std_vector_ProgramLib_Template(pVVar12 + 0x10,(vector *)&local_a8);
      lVar17 = *plVar11;
      if (*(byte *)(lVar17 + 0x28) == 5) {
        pOVar13 = (Object *)se::Value::toObject((Value *)(lVar17 + 0x20));
        lVar15 = se::Object::getPrivateData(pOVar13);
        lVar17 = *plVar11;
        bVar5 = lVar15 == 0;
      }
      else {
        bVar5 = 1 < *(byte *)(lVar17 + 0x28);
        lVar15 = 0;
      }
      local_ac = 0;
      bVar7 = seval_to_int32((Value *)(lVar17 + 0x30),&local_ac);
      iVar3 = local_ac;
      local_ac = 0;
      bVar8 = seval_to_int32((Value *)(*plVar11 + 0x40),&local_ac);
      if ((!bVar4 & bVar6 & !bVar5 & bVar7 & bVar8) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                            ,0x848,"js_renderer_ForwardRenderer_init");
        __android_log_print(6,"jswrapper",
                            "js_renderer_ForwardRenderer_init : Error processing arguments");
LAB_009454a4:
        bVar4 = false;
        pvVar9 = local_a8;
        pvVar19 = local_a0;
      }
      else {
        bVar6 = cocos2d::renderer::ForwardRenderer::init
                          (pDVar10,pvVar14,(Texture2D *)&local_a8,(int)lVar15,iVar3);
        pVVar12 = (Value *)se::State::rval(aSStack_90);
        uVar16 = boolean_to_seval((bool)(bVar6 & 1),pVVar12);
        if ((uVar16 & 1) == 0) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                              ,0x84b,"js_renderer_ForwardRenderer_init");
          __android_log_print(6,"jswrapper",
                              "js_renderer_ForwardRenderer_init : Error processing arguments");
          goto LAB_009454a4;
        }
        bVar4 = true;
        pvVar9 = local_a8;
        pvVar19 = local_a0;
      }
      local_a8 = pvVar9;
      local_a0 = pvVar19;
      if (pvVar9 != (void *)0x0) {
        if (pvVar19 != pvVar9) {
          do {
            pvVar19 = (void *)((long)pvVar19 + -0x68);
            FUN_008e15e8(&uStack_98,pvVar19);
          } while (pvVar9 != pvVar19);
        }
        local_a0 = pvVar9;
        operator_delete(local_a8);
      }
      if (bVar4) goto LAB_00945520;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 2126): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar11[1] - *plVar11) >> 4,5);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_ForwardRenderer_init",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x851);
LAB_00945520:
  pVVar12 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar12,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_e0;
  pVVar12 = local_d8;
  if (local_e0 != (Value *)0x0) {
    while (pVVar12 != pVVar2) {
      se::Value::~Value(pVVar12 + -0x10);
      pVVar12 = pVVar12 + -0x10;
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

