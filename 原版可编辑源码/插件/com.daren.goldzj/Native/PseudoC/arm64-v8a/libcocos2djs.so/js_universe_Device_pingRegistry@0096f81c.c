
/* js_universe_Device_pingRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Device_pingRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  long *plVar8;
  Value *pVVar9;
  ulong uVar10;
  Isolate *pIVar11;
  void *__dest;
  ulong uVar12;
  Value *local_f0;
  Value *local_e8;
  undefined8 local_e0;
  HandleScope aHStack_d8 [24];
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  int local_9c;
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_d8,pIVar11);
  local_f0 = (Value *)0x0;
  local_e8 = (Value *)0x0;
  local_e0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_f0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_f0);
  pvVar7 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar7,(vector *)&local_f0);
  plVar8 = (long *)se::State::args(aSStack_80);
  if (plVar8[1] - *plVar8 == 0x20) {
    uStack_90 = 0;
    local_88 = (void *)0x0;
    local_98 = 0;
    uVar4 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_98);
    local_9c = 0;
    uVar5 = seval_to_int32((Value *)(*plVar8 + 0x10),&local_9c);
    pvVar7 = local_88;
    uVar10 = uStack_90;
    iVar6 = local_9c;
    if ((uVar4 & uVar5 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                          ,0x52f,"js_universe_Device_ping");
      __android_log_print(6,"jswrapper","js_universe_Device_ping : Error processing arguments");
LAB_0096fa84:
      bVar2 = false;
    }
    else {
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = (void *)0x0;
      if ((local_98 & 1) == 0) {
        local_b0 = local_88;
        uStack_b8 = uStack_90;
        local_c0 = local_98;
      }
      else {
        if (0xffffffffffffffef < uStack_90) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (uStack_90 < 0x17) {
          __dest = (void *)((ulong)&local_c0 | 1);
          local_c0 = (ulong)(byte)((int)uStack_90 << 1);
          if (uStack_90 != 0) goto LAB_0096f9e4;
        }
        else {
          uVar12 = uStack_90 + 0x10 & 0xfffffffffffffff0;
          __dest = operator_new(uVar12);
          local_c0 = uVar12 | 1;
          uStack_b8 = uVar10;
          local_b0 = __dest;
LAB_0096f9e4:
          memcpy(__dest,pvVar7,uVar10);
        }
        *(undefined1 *)((long)__dest + uVar10) = 0;
      }
      iVar6 = universe::Device::ping(&local_c0,iVar6);
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      pVVar9 = (Value *)se::State::rval(aSStack_80);
      uVar10 = int32_to_seval(iVar6,pVVar9);
      if ((uVar10 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x532,"js_universe_Device_ping");
        __android_log_print(6,"jswrapper","js_universe_Device_ping : Error processing arguments");
        goto LAB_0096fa84;
      }
      bVar2 = true;
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (bVar2) goto LAB_0096fac8;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 1333): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar8[1] - *plVar8) >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Device_ping",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x538);
LAB_0096fac8:
  pVVar9 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_80);
  pVVar3 = local_f0;
  pVVar9 = local_e8;
  if (local_f0 != (Value *)0x0) {
    while (pVVar9 != pVVar3) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_e8 = pVVar3;
    operator_delete(local_f0);
  }
  v8::HandleScope::~HandleScope(aHStack_d8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

