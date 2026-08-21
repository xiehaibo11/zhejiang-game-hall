
/* js_universe_Downloader2_removeScriptListenerRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_universe_Downloader2_removeScriptListenerRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  void *pvVar4;
  Downloader2 *this;
  undefined8 *puVar5;
  Value *pVVar6;
  ulong uVar7;
  Isolate *pIVar8;
  Value *local_98;
  Value *local_90;
  undefined8 local_88;
  HandleScope aHStack_80 [28];
  int local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar8);
  local_98 = (Value *)0x0;
  local_90 = (Value *)0x0;
  local_88 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_98,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_98);
  this = (Downloader2 *)se::State::nativeThisObject(aSStack_60);
  if (this == (Downloader2 *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0xd2,"js_universe_Downloader2_removeScriptListener");
    __android_log_print(6,"jswrapper",
                        "js_universe_Downloader2_removeScriptListener : Invalid Native Object");
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_60);
    uVar7 = puVar5[1] - (long)*puVar5;
    if (uVar7 == 0x10) {
      local_64 = 0;
      uVar7 = seval_to_int32((Value *)*puVar5,&local_64);
      if ((uVar7 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0xd9,"js_universe_Downloader2_removeScriptListener");
        __android_log_print(6,"jswrapper",
                            "js_universe_Downloader2_removeScriptListener : Error processing arguments"
                           );
      }
      else {
        iVar3 = universe::Downloader2::removeScriptListener(this,local_64);
        pVVar6 = (Value *)se::State::rval(aSStack_60);
        uVar7 = int32_to_seval(iVar3,pVVar6);
        if ((uVar7 & 1) != 0) goto LAB_00967454;
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0xdc,"js_universe_Downloader2_removeScriptListener");
        __android_log_print(6,"jswrapper",
                            "js_universe_Downloader2_removeScriptListener : Error processing arguments"
                           );
      }
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 223): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar7 >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Downloader2_removeScriptListener",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0xe2);
LAB_00967454:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar6 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_90 = pVVar2;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

