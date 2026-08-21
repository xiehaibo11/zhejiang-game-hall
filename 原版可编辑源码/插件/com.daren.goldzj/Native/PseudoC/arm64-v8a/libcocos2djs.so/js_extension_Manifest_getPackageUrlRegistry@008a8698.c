
/* js_extension_Manifest_getPackageUrlRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_extension_Manifest_getPackageUrlRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  Manifest *this;
  long *plVar4;
  basic_string *pbVar5;
  ulong uVar6;
  Value *pVVar7;
  Isolate *pIVar8;
  Value *local_90;
  Value *local_88;
  undefined8 local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar8);
  local_90 = (Value *)0x0;
  local_88 = (Value *)0x0;
  local_80 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_90);
  this = (Manifest *)se::State::nativeThisObject(aSStack_60);
  if (this == (Manifest *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                        ,0x1a2,"js_extension_Manifest_getPackageUrl");
    __android_log_print(6,"jswrapper","js_extension_Manifest_getPackageUrl : Invalid Native Object")
    ;
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_60);
    if (plVar4[1] - *plVar4 == 0) {
      pbVar5 = (basic_string *)cocos2d::extension::Manifest::getPackageUrl(this);
      pVVar7 = (Value *)se::State::rval(aSStack_60);
      uVar6 = std_string_to_seval(pbVar5,pVVar7);
      if ((uVar6 & 1) != 0) goto LAB_008a8848;
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                          ,0x1a9,"js_extension_Manifest_getPackageUrl");
      __android_log_print(6,"jswrapper",
                          "js_extension_Manifest_getPackageUrl : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp, 428): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar4[1] - *plVar4) >> 4,0);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_extension_Manifest_getPackageUrl",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                      ,0x1af);
LAB_008a8848:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar7 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_88 = pVVar2;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

