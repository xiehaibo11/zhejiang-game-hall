
/* js_renderer_Scene_getLightsRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_Scene_getLightsRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  undefined8 *puVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  undefined8 *puVar10;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar9);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar5,(vector *)&local_a8);
  lVar6 = se::State::nativeThisObject(aSStack_60);
  if (lVar6 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0xc0a,"js_renderer_Scene_getLights");
    __android_log_print(6,"jswrapper","js_renderer_Scene_getLights : Invalid Native Object");
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_60);
    if (plVar7[1] - *plVar7 == 0) {
      local_78 = (undefined8 *)0x0;
      local_70 = (undefined8 *)0x0;
      local_68 = 0;
      if (&local_78 != (undefined8 **)(lVar6 + 0x18)) {
        std::__ndk1::
        vector<cocos2d::renderer::Light*,std::__ndk1::allocator<cocos2d::renderer::Light*>>::
        assign<cocos2d::renderer::Light**>
                  ((vector<cocos2d::renderer::Light*,std::__ndk1::allocator<cocos2d::renderer::Light*>>
                    *)&local_78,*(Light ***)(lVar6 + 0x18),*(Light ***)(lVar6 + 0x20));
        puVar3 = local_70;
        for (puVar10 = local_78; puVar10 != puVar3; puVar10 = puVar10 + 1) {
          cocos2d::Ref::retain((Ref *)*puVar10);
        }
      }
      pVVar8 = (Value *)se::State::rval(aSStack_60);
      bVar4 = Vector_to_seval<cocos2d::renderer::Light>((Vector *)&local_78,pVVar8);
      if (!bVar4) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                            ,0xc11,"js_renderer_Scene_getLights");
        __android_log_print(6,"jswrapper","js_renderer_Scene_getLights : Error processing arguments"
                           );
      }
      puVar10 = local_78;
      if (local_78 != local_70) {
        do {
          cocos2d::Ref::release((Ref *)*puVar10);
          puVar10 = puVar10 + 1;
        } while (puVar10 != local_70);
      }
      local_70 = local_78;
      if (local_78 != (undefined8 *)0x0) {
        operator_delete(local_78);
      }
      if (bVar4) goto LAB_0094da48;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 3092): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar7[1] - *plVar7) >> 4,0);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_Scene_getLights",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0xc17);
LAB_0094da48:
  pVVar8 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_a8;
  pVVar8 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar8 != pVVar2) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_a0 = pVVar2;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

