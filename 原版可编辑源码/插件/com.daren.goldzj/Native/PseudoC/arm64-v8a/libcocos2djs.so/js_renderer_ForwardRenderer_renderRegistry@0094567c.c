
/* js_renderer_ForwardRenderer_renderRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_ForwardRenderer_renderRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  byte bVar4;
  void *pvVar5;
  ForwardRenderer *this;
  undefined8 *puVar6;
  Value *pVVar7;
  Object *pOVar8;
  Scene *pSVar9;
  long lVar10;
  Isolate *pIVar11;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [28];
  float local_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar11);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar5,(vector *)&local_a8);
  this = (ForwardRenderer *)se::State::nativeThisObject(aSStack_70);
  if (this == (ForwardRenderer *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x856,"js_renderer_ForwardRenderer_render");
    __android_log_print(6,"jswrapper","js_renderer_ForwardRenderer_render : Invalid Native Object");
  }
  else {
    puVar6 = (undefined8 *)se::State::args(aSStack_70);
    pVVar7 = (Value *)*puVar6;
    lVar10 = puVar6[1] - (long)pVVar7 >> 4;
    if (lVar10 == 2) {
      local_74 = 0.0;
      if (pVVar7[8] == (Value)0x5) {
        pOVar8 = (Object *)se::Value::toObject(pVVar7);
        pSVar9 = (Scene *)se::Object::getPrivateData(pOVar8);
        pVVar7 = (Value *)*puVar6;
        bVar3 = pSVar9 == (Scene *)0x0;
      }
      else {
        bVar3 = 1 < (byte)pVVar7[8];
        pSVar9 = (Scene *)0x0;
      }
      bVar4 = seval_to_float(pVVar7 + 0x10,&local_74);
      if ((!bVar3 & bVar4) != 0) {
        cocos2d::renderer::ForwardRenderer::render(this,pSVar9,local_74);
        goto LAB_00945908;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x866,"js_renderer_ForwardRenderer_render");
      __android_log_print(6,"jswrapper",
                          "js_renderer_ForwardRenderer_render : Error processing arguments");
    }
    else if (lVar10 == 1) {
      if (pVVar7[8] == (Value)0x5) {
        pOVar8 = (Object *)se::Value::toObject(pVVar7);
        pSVar9 = (Scene *)se::Object::getPrivateData(pOVar8);
        if (pSVar9 != (Scene *)0x0) {
LAB_0094580c:
          cocos2d::renderer::ForwardRenderer::render(this,pSVar9,0.0);
          goto LAB_00945908;
        }
      }
      else if ((byte)pVVar7[8] < 2) {
        pSVar9 = (Scene *)0x0;
        goto LAB_0094580c;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x85d,"js_renderer_ForwardRenderer_render");
      __android_log_print(6,"jswrapper",
                          "js_renderer_ForwardRenderer_render : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 2154): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(puVar6[1] - (long)pVVar7) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_ForwardRenderer_render",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x86d);
LAB_00945908:
  pVVar7 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a8;
  pVVar7 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_a0 = pVVar2;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

