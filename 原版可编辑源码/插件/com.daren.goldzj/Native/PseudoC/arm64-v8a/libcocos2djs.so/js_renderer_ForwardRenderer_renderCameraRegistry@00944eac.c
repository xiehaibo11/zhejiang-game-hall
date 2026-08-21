
/* js_renderer_ForwardRenderer_renderCameraRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_ForwardRenderer_renderCameraRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  ForwardRenderer *this;
  undefined8 *puVar5;
  Value *pVVar6;
  Object *pOVar7;
  Camera *pCVar8;
  Scene *pSVar9;
  Isolate *pIVar10;
  Value *local_a0;
  Value *local_98;
  undefined8 local_90;
  HandleScope aHStack_88 [24];
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_88,pIVar10);
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_a0);
  this = (ForwardRenderer *)se::State::nativeThisObject(aSStack_70);
  if (this == (ForwardRenderer *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x824,"js_renderer_ForwardRenderer_renderCamera");
    __android_log_print(6,"jswrapper",
                        "js_renderer_ForwardRenderer_renderCamera : Invalid Native Object");
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_70);
    pVVar6 = (Value *)*puVar5;
    if (puVar5[1] - (long)pVVar6 == 0x20) {
      if (pVVar6[8] == (Value)0x5) {
        pOVar7 = (Object *)se::Value::toObject(pVVar6);
        pCVar8 = (Camera *)se::Object::getPrivateData(pOVar7);
        pVVar6 = (Value *)*puVar5;
        bVar3 = pCVar8 == (Camera *)0x0;
      }
      else {
        bVar3 = 1 < (byte)pVVar6[8];
        pCVar8 = (Camera *)0x0;
      }
      if (pVVar6[0x18] == (Value)0x5) {
        pOVar7 = (Object *)se::Value::toObject(pVVar6 + 0x10);
        pSVar9 = (Scene *)se::Object::getPrivateData(pOVar7);
        if ((pSVar9 != (Scene *)0x0) && (!bVar3)) {
LAB_00945140:
          cocos2d::renderer::ForwardRenderer::renderCamera(this,pCVar8,pSVar9);
          goto LAB_009450a8;
        }
      }
      else {
        pSVar9 = (Scene *)0x0;
        if (!bVar3 && (byte)pVVar6[0x18] < 2) goto LAB_00945140;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x82d,"js_renderer_ForwardRenderer_renderCamera");
      __android_log_print(6,"jswrapper",
                          "js_renderer_ForwardRenderer_renderCamera : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 2097): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(puVar5[1] - (long)pVVar6) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_ForwardRenderer_renderCamera",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x834);
LAB_009450a8:
  pVVar6 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a0;
  pVVar6 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_98 = pVVar2;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

