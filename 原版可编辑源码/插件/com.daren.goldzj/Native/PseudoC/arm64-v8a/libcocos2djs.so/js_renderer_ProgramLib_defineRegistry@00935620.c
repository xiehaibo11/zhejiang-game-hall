
/* js_renderer_ProgramLib_defineRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_ProgramLib_defineRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  Value *pVVar4;
  Value *pVVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  ProgramLib *this;
  long *plVar11;
  Value *pVVar12;
  Isolate *pIVar13;
  Value *local_110;
  Value *local_108;
  undefined8 local_100;
  HandleScope aHStack_f8 [24];
  Value *local_e0;
  Value *local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_f8,pIVar13);
  local_110 = (Value *)0x0;
  local_108 = (Value *)0x0;
  local_100 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_110,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_110);
  pvVar10 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar10,(vector *)&local_110);
  this = (ProgramLib *)se::State::nativeThisObject(aSStack_80);
  if (this == (ProgramLib *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0xe,"js_renderer_ProgramLib_define");
    __android_log_print(6,"jswrapper","js_renderer_ProgramLib_define : Invalid Native Object");
  }
  else {
    plVar11 = (long *)se::State::args(aSStack_80);
    if (plVar11[1] - *plVar11 == 0x40) {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = (void *)0x0;
      local_d8 = (Value *)0x0;
      uStack_d0 = 0;
      local_e0 = (Value *)0x0;
      uVar6 = seval_to_std_string((Value *)*plVar11,(basic_string *)&local_98);
      uVar7 = seval_to_std_string((Value *)(*plVar11 + 0x10),(basic_string *)&local_b0);
      uVar8 = seval_to_std_string((Value *)(*plVar11 + 0x20),(basic_string *)&local_c8);
      uVar9 = seval_to_ccvaluevector((Value *)(*plVar11 + 0x30),(vector *)&local_e0);
      bVar1 = (uVar6 & uVar7 & uVar8 & uVar9 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                            ,0x1b,"js_renderer_ProgramLib_define");
        __android_log_print(6,"jswrapper",
                            "js_renderer_ProgramLib_define : Error processing arguments");
        pVVar3 = local_e0;
      }
      else {
        cocos2d::renderer::ProgramLib::define
                  (this,(basic_string *)&local_98,(basic_string *)&local_b0,
                   (basic_string *)&local_c8,(vector *)&local_e0);
        pVVar3 = local_e0;
      }
      local_e0 = pVVar3;
      pVVar4 = local_d8;
      if (pVVar3 != (Value *)0x0) {
        while (pVVar4 != pVVar3) {
          cocos2d::Value::~Value(pVVar4 + -0x10);
          pVVar4 = pVVar4 + -0x10;
        }
        local_d8 = pVVar3;
        operator_delete(local_e0);
      }
      if ((local_c8 & 1) != 0) {
        operator_delete(local_b8);
      }
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if (!bVar1) goto LAB_009358e8;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 31): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar11[1] - *plVar11) >> 4,4);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_ProgramLib_define",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x22);
LAB_009358e8:
  pVVar12 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar12,param_1);
  se::State::~State(aSStack_80);
  pVVar5 = local_110;
  pVVar12 = local_108;
  if (local_110 != (Value *)0x0) {
    while (pVVar12 != pVVar5) {
      se::Value::~Value(pVVar12 + -0x10);
      pVVar12 = pVVar12 + -0x10;
    }
    local_108 = pVVar5;
    operator_delete(local_110);
  }
  v8::HandleScope::~HandleScope(aHStack_f8);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

