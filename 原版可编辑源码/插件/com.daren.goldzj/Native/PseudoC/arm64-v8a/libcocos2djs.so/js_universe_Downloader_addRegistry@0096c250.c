
/* js_universe_Downloader_addRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Downloader_addRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  char *pcVar2;
  long lVar3;
  Value *pVVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  Downloader *this;
  long *plVar10;
  Value *pVVar11;
  Isolate *pIVar12;
  Value *local_120;
  Value *local_118;
  undefined8 local_110;
  HandleScope aHStack_108 [24];
  ulong local_f0;
  undefined8 local_e8;
  char *local_e0;
  ulong local_d8;
  undefined8 local_d0;
  void *local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  State aSStack_90 [40];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_108,pIVar12);
  local_120 = (Value *)0x0;
  local_118 = (Value *)0x0;
  local_110 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_120,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_120);
  pvVar9 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar9,(vector *)&local_120);
  this = (Downloader *)se::State::nativeThisObject(aSStack_90);
  if (this == (Downloader *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x380,"js_universe_Downloader_add");
    __android_log_print(6,"jswrapper","js_universe_Downloader_add : Invalid Native Object");
  }
  else {
    plVar10 = (long *)se::State::args(aSStack_90);
    if (plVar10[1] - *plVar10 == 0x40) {
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = (void *)0x0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = (void *)0x0;
      local_d0 = 0;
      local_c8 = (void *)0x0;
      local_d8 = 0;
      uVar5 = seval_to_std_string((Value *)*plVar10,(basic_string *)&local_a8);
      uVar6 = seval_to_std_string((Value *)(*plVar10 + 0x10),(basic_string *)&local_c0);
      local_e8 = 0;
      local_e0 = (char *)0x0;
      local_f0 = 0;
      uVar7 = seval_to_std_string((Value *)(*plVar10 + 0x20),(basic_string *)&local_f0);
      pcVar2 = (char *)((ulong)&local_f0 | 1);
      if ((local_f0 & 1) != 0) {
        pcVar2 = local_e0;
      }
      uVar8 = seval_to_std_string((Value *)(*plVar10 + 0x30),(basic_string *)&local_d8);
      bVar1 = (uVar5 & uVar6 & uVar7 & uVar8 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x38d,"js_universe_Downloader_add");
        __android_log_print(6,"jswrapper","js_universe_Downloader_add : Error processing arguments")
        ;
      }
      else {
        universe::Downloader::add
                  (this,(basic_string *)&local_a8,(basic_string *)&local_c0,pcVar2,
                   (basic_string *)&local_d8);
      }
      if ((local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
      if ((local_d8 & 1) != 0) {
        operator_delete(local_c8);
      }
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
      if (!bVar1) goto LAB_0096c484;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 913): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar10[1] - *plVar10) >> 4,4);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Downloader_add",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x394);
LAB_0096c484:
  pVVar11 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_90);
  pVVar4 = local_120;
  pVVar11 = local_118;
  if (local_120 != (Value *)0x0) {
    while (pVVar11 != pVVar4) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
    }
    local_118 = pVVar4;
    operator_delete(local_120);
  }
  v8::HandleScope::~HandleScope(aHStack_108);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

