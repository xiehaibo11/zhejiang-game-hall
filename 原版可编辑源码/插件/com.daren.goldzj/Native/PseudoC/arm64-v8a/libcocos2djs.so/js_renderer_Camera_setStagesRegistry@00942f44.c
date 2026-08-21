
/* js_renderer_Camera_setStagesRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_Camera_setStagesRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  Value *pVVar5;
  void *pvVar6;
  Camera *this;
  long *plVar7;
  ulong uVar8;
  Value *pVVar9;
  Isolate *pIVar10;
  byte *pbVar11;
  Value *local_b8;
  Value *local_b0;
  undefined8 local_a8;
  HandleScope aHStack_a0 [24];
  byte *local_88;
  byte *local_80;
  undefined8 uStack_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar10);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_b8);
  this = (Camera *)se::State::nativeThisObject(aSStack_70);
  if (this == (Camera *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x734,"js_renderer_Camera_setStages");
    __android_log_print(6,"jswrapper","js_renderer_Camera_setStages : Invalid Native Object");
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_70);
    if (plVar7[1] - *plVar7 == 0x10) {
      local_80 = (byte *)0x0;
      uStack_78 = 0;
      local_88 = (byte *)0x0;
      uVar8 = seval_to_std_vector_string((Value *)*plVar7,(vector *)&local_88);
      bVar1 = (uVar8 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                            ,0x73b,"js_renderer_Camera_setStages");
        __android_log_print(6,"jswrapper",
                            "js_renderer_Camera_setStages : Error processing arguments");
        pbVar3 = local_88;
      }
      else {
        cocos2d::renderer::Camera::setStages(this,(vector *)&local_88);
        pbVar3 = local_88;
      }
      local_88 = pbVar3;
      pbVar11 = local_80;
      if (pbVar3 != (byte *)0x0) {
        while (pbVar4 = pbVar11, pbVar4 != pbVar3) {
          pbVar11 = pbVar4 + -0x18;
          if ((*pbVar11 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
        }
        local_80 = pbVar3;
        operator_delete(local_88);
      }
      if (!bVar1) goto LAB_00943160;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 1855): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar7[1] - *plVar7) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_Camera_setStages",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x742);
LAB_00943160:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar5 = local_b8;
  pVVar9 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar9 != pVVar5) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_b0 = pVVar5;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

