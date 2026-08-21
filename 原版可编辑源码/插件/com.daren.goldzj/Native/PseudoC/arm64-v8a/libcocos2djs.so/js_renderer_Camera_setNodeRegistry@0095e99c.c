
/* js_renderer_Camera_setNodeRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_Camera_setNodeRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  Camera *this;
  long *plVar4;
  Object *pOVar5;
  ulong uVar6;
  NodeProxy *pNVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  Value *local_a0;
  Value *local_98;
  undefined8 local_90;
  HandleScope aHStack_88 [24];
  State aSStack_70 [40];
  Value aVStack_48 [8];
  byte local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_88,pIVar9);
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar3,(vector *)&local_a0);
  this = (Camera *)se::State::nativeThisObject(aSStack_70);
  if (this == (Camera *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                        ,300,"js_renderer_Camera_setNode");
    __android_log_print(6,"jswrapper","js_renderer_Camera_setNode : Invalid Native Object");
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_70);
    if (plVar4[1] - *plVar4 == 0x10) {
      se::Value::Value(aVStack_48);
      pOVar5 = (Object *)se::Value::toObject((Value *)*plVar4);
      uVar6 = se::Object::getProperty(pOVar5,"_proxy",aVStack_48);
      if ((uVar6 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                            ,0x133,"js_renderer_Camera_setNode");
        __android_log_print(6,"jswrapper",
                            "js_renderer_Camera_setNode : Cannot find node proxy form Node");
      }
      else {
        if (local_40 == 5) {
          pOVar5 = (Object *)se::Value::toObject(aVStack_48);
          pNVar7 = (NodeProxy *)se::Object::getPrivateData(pOVar5);
          if (pNVar7 != (NodeProxy *)0x0) {
LAB_0095eb5c:
            cocos2d::renderer::Camera::setNode(this,pNVar7);
            se::Value::~Value(aVStack_48);
            goto LAB_0095ebe8;
          }
        }
        else if (local_40 < 2) {
          pNVar7 = (NodeProxy *)0x0;
          goto LAB_0095eb5c;
        }
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                            ,0x136,"js_renderer_Camera_setNode");
        __android_log_print(6,"jswrapper","js_renderer_Camera_setNode : Invalid Node Proxy");
      }
      se::Value::~Value(aVStack_48);
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp, 314): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar4[1] - *plVar4) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_Camera_setNode",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                      ,0x13d);
LAB_0095ebe8:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a0;
  pVVar8 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar8 != pVVar2) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_98 = pVVar2;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

