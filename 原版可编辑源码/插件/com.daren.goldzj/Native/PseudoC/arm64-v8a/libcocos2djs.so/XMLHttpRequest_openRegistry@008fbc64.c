
/* XMLHttpRequest_openRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void XMLHttpRequest_openRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  byte bVar4;
  void *pvVar5;
  long *plVar6;
  XMLHttpRequest *this;
  ulong uVar7;
  Value *pVVar8;
  Isolate *pIVar9;
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
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar9);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar5 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar5,(vector *)&local_c0);
  plVar6 = (long *)se::State::args(aSStack_60);
  if ((int)((ulong)(plVar6[1] - *plVar6) >> 4) < 2) {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp, 750): wrong number of arguments: %d, was expecting >=2\n"
                       );
  }
  else {
    this = (XMLHttpRequest *)se::State::nativeThisObject(aSStack_60);
    local_70 = 0;
    local_68 = (void *)0x0;
    local_78 = 0;
    uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_78);
    if ((uVar7 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp"
                          ,0x2e5,"XMLHttpRequest_open");
      __android_log_print(6,"jswrapper","args[0] isn\'t a string.");
      bVar1 = false;
    }
    else {
      local_88 = 0;
      local_80 = (void *)0x0;
      local_90 = 0;
      uVar7 = seval_to_std_string((Value *)(*plVar6 + 0x10),(basic_string *)&local_90);
      bVar1 = (uVar7 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp"
                            ,0x2e8,"XMLHttpRequest_open");
        __android_log_print(6,"jswrapper","args[1] isn\'t a string.");
      }
      else {
        bVar4 = XMLHttpRequest::open(this,(basic_string *)&local_78,(basic_string *)&local_90);
        pVVar8 = (Value *)se::State::rval(aSStack_60);
        se::Value::setBoolean(pVVar8,(bool)(bVar4 & 1));
      }
      bVar1 = !bVar1;
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if (bVar1) goto LAB_008fbe8c;
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "XMLHttpRequest_open",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp"
                      ,0x2f1);
LAB_008fbe8c:
  pVVar8 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_c0;
  pVVar8 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
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

