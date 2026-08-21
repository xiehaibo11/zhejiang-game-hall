
/* js_universe_Downloader_setTaskPriorityRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Downloader_setTaskPriorityRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  Downloader *this;
  undefined8 *puVar4;
  Value *pVVar5;
  ulong uVar6;
  Isolate *pIVar7;
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
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar7);
  local_98 = (Value *)0x0;
  local_90 = (Value *)0x0;
  local_88 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_98,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_98);
  this = (Downloader *)se::State::nativeThisObject(aSStack_60);
  if (this == (Downloader *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x36d,"js_universe_Downloader_setTaskPriority");
    __android_log_print(6,"jswrapper",
                        "js_universe_Downloader_setTaskPriority : Invalid Native Object");
  }
  else {
    puVar4 = (undefined8 *)se::State::args(aSStack_60);
    uVar6 = puVar4[1] - (long)*puVar4;
    if (uVar6 == 0x10) {
      local_64 = 0;
      uVar6 = seval_to_int32((Value *)*puVar4,&local_64);
      if ((uVar6 & 1) != 0) {
        universe::Downloader::setTaskPriority(this,local_64);
        goto LAB_0096c15c;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                          ,0x374,"js_universe_Downloader_setTaskPriority");
      __android_log_print(6,"jswrapper",
                          "js_universe_Downloader_setTaskPriority : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 888): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar6 >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Downloader_setTaskPriority",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x37b);
LAB_0096c15c:
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar5 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
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

