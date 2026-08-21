
/* js_renderer_RenderFlow_renderRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_RenderFlow_renderRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  void *pvVar7;
  RenderFlow *this;
  long *plVar8;
  Value *pVVar9;
  Object *pOVar10;
  NodeProxy *pNVar11;
  Camera *pCVar12;
  long lVar13;
  Isolate *pIVar14;
  Value *local_b8;
  Value *local_b0;
  undefined8 local_a8;
  HandleScope aHStack_a0 [28];
  float local_84;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar14);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar7 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar7,(vector *)&local_b8);
  this = (RenderFlow *)se::State::nativeThisObject(aSStack_80);
  if (this == (RenderFlow *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0xf2c,"js_renderer_RenderFlow_render");
    __android_log_print(6,"jswrapper","js_renderer_RenderFlow_render : Invalid Native Object");
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_80);
    pVVar9 = (Value *)*plVar8;
    lVar13 = plVar8[1] - (long)pVVar9 >> 4;
    if (lVar13 == 3) {
      local_84 = 0.0;
      if (pVVar9[8] == (Value)0x5) {
        pOVar10 = (Object *)se::Value::toObject(pVVar9);
        pNVar11 = (NodeProxy *)se::Object::getPrivateData(pOVar10);
        pVVar9 = (Value *)*plVar8;
        bVar4 = pNVar11 == (NodeProxy *)0x0;
      }
      else {
        bVar4 = 1 < (byte)pVVar9[8];
        pNVar11 = (NodeProxy *)0x0;
      }
      bVar6 = seval_to_float(pVVar9 + 0x10,&local_84);
      bVar5 = *(byte *)(*plVar8 + 0x28);
      if (bVar5 == 5) {
        pOVar10 = (Object *)se::Value::toObject((Value *)(*plVar8 + 0x20));
        pCVar12 = (Camera *)se::Object::getPrivateData(pOVar10);
        if (pCVar12 != (Camera *)0x0) {
          bVar3 = true;
          goto LAB_0095412c;
        }
      }
      else {
        bVar3 = bVar5 < 2;
        pCVar12 = (Camera *)0x0;
LAB_0095412c:
        if ((!bVar4 & bVar6 & bVar3) != 0) {
          cocos2d::renderer::RenderFlow::render(this,pNVar11,local_84,pCVar12);
          goto LAB_009541bc;
        }
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0xf40,"js_renderer_RenderFlow_render");
      __android_log_print(6,"jswrapper","js_renderer_RenderFlow_render : Error processing arguments"
                         );
    }
    else if (lVar13 == 2) {
      local_84 = 0.0;
      if (pVVar9[8] == (Value)0x5) {
        pOVar10 = (Object *)se::Value::toObject(pVVar9);
        pNVar11 = (NodeProxy *)se::Object::getPrivateData(pOVar10);
        pVVar9 = (Value *)*plVar8;
        bVar4 = pNVar11 == (NodeProxy *)0x0;
      }
      else {
        bVar4 = 1 < (byte)pVVar9[8];
        pNVar11 = (NodeProxy *)0x0;
      }
      bVar5 = seval_to_float(pVVar9 + 0x10,&local_84);
      if ((!bVar4 & bVar5) != 0) {
        cocos2d::renderer::RenderFlow::render(this,pNVar11,local_84,(Camera *)0x0);
        goto LAB_009541bc;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0xf35,"js_renderer_RenderFlow_render");
      __android_log_print(6,"jswrapper","js_renderer_RenderFlow_render : Error processing arguments"
                         );
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 3908): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar8[1] - (long)pVVar9) >> 4,3);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_RenderFlow_render",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0xf47);
LAB_009541bc:
  pVVar9 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_b8;
  pVVar9 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_b0 = pVVar2;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

