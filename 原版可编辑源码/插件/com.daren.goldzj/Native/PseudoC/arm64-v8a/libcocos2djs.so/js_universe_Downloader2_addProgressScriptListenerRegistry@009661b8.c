
/* js_universe_Downloader2_addProgressScriptListenerRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_universe_Downloader2_addProgressScriptListenerRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  Downloader2 *this;
  long *plVar7;
  Value *pVVar8;
  ulong uVar9;
  Isolate *pIVar10;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [28];
  int local_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar10);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_a8);
  this = (Downloader2 *)se::State::nativeThisObject(aSStack_70);
  if (this == (Downloader2 *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x58,"js_universe_Downloader2_addProgressScriptListener");
    __android_log_print(6,"jswrapper",
                        "js_universe_Downloader2_addProgressScriptListener : Invalid Native Object")
    ;
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_70);
    uVar9 = plVar7[1] - *plVar7;
    if (uVar9 == 0x20) {
      local_74 = 0;
      uVar4 = seval_to_int32((Value *)*plVar7,&local_74);
      iVar3 = local_74;
      local_74 = 0;
      uVar5 = seval_to_int32((Value *)(*plVar7 + 0x10),&local_74);
      if ((uVar4 & uVar5 & 1) != 0) {
        universe::Downloader2::addProgressScriptListener(this,iVar3,local_74);
        goto LAB_00966398;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                          ,0x61,"js_universe_Downloader2_addProgressScriptListener");
      __android_log_print(6,"jswrapper",
                          "js_universe_Downloader2_addProgressScriptListener : Error processing arguments"
                         );
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 101): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar9 >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Downloader2_addProgressScriptListener",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x68);
LAB_00966398:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
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
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

