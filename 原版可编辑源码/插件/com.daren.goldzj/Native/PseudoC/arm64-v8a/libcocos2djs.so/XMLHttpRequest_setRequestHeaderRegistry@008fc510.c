
/* XMLHttpRequest_setRequestHeaderRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void XMLHttpRequest_setRequestHeaderRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  long *plVar5;
  XMLHttpRequest *this;
  ulong uVar6;
  Value *pVVar7;
  Isolate *pIVar8;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar8);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_c0);
  plVar5 = (long *)se::State::args(aSStack_60);
  if ((ulong)(plVar5[1] - *plVar5 >> 4) < 2) {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp, 861): wrong number of arguments: %d, was expecting >=2\n"
                        ,(ulong)(plVar5[1] - *plVar5) >> 4);
  }
  else {
    this = (XMLHttpRequest *)se::State::nativeThisObject(aSStack_60);
    local_70 = 0;
    local_68 = (void *)0x0;
    local_78 = 0;
    uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_78);
    if ((uVar6 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp"
                          ,0x355,"XMLHttpRequest_setRequestHeader");
      __android_log_print(6,"jswrapper","args[0] couldn\'t be converted to string.");
      bVar1 = false;
    }
    else {
      local_88 = 0;
      local_80 = (void *)0x0;
      local_90 = 0;
      uVar6 = seval_to_std_string((Value *)(*plVar5 + 0x10),(basic_string *)&local_90);
      bVar1 = (uVar6 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp"
                            ,0x358,"XMLHttpRequest_setRequestHeader");
        __android_log_print(6,"jswrapper","args[1] couldn\'t be converted to string.");
      }
      else {
        XMLHttpRequest::setRequestHeader(this,(basic_string *)&local_78,(basic_string *)&local_90);
      }
      bVar1 = !bVar1;
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if (bVar1) goto LAB_008fc730;
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "XMLHttpRequest_setRequestHeader",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp"
                      ,0x360);
LAB_008fc730:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_c0;
  pVVar7 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar7 != pVVar3) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_b8 = pVVar3;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

