
/* SocketIO_onRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void SocketIO_onRegistry(FunctionCallbackInfo *param_1)

{
  JSB_SocketIODelegate *this;
  long lVar1;
  long lVar2;
  bool bVar3;
  Value *pVVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  Object *pOVar8;
  Value *pVVar9;
  ulong uVar10;
  Isolate *pIVar11;
  long lVar12;
  Value *local_c8;
  Value *local_c0;
  undefined8 local_b8;
  HandleScope aHStack_b0 [24];
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  State aSStack_80 [40];
  Value aVStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b0,pIVar11);
  local_c8 = (Value *)0x0;
  local_c0 = (Value *)0x0;
  local_b8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar5,(vector *)&local_c8);
  plVar6 = (long *)se::State::args(aSStack_80);
  lVar12 = *plVar6;
  lVar1 = plVar6[1];
  lVar7 = se::State::nativeThisObject(aSStack_80);
  uVar10 = (ulong)(lVar1 - lVar12) >> 4;
  if ((int)uVar10 == 2) {
    local_90 = 0;
    local_88 = (void *)0x0;
    local_98 = 0;
    uVar10 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_98);
    if ((uVar10 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_socketio.cpp"
                          ,0x118,"SocketIO_on");
      __android_log_print(6,"jswrapper","Converting eventName failed!");
      bVar3 = false;
    }
    else {
      lVar12 = *plVar6;
      this = (JSB_SocketIODelegate *)0x0;
      if (*(long *)(lVar7 + 0x50) != 0) {
        this = (JSB_SocketIODelegate *)(*(long *)(lVar7 + 0x50) + -0x10);
      }
      pOVar8 = (Object *)se::State::thisObject(aSStack_80);
      se::Value::Value(aVStack_58,pOVar8,false);
      JSB_SocketIODelegate::addEvent
                (this,(basic_string *)&local_98,(Value *)(lVar12 + 0x10),aVStack_58);
      se::Value::~Value(aVStack_58);
      bVar3 = true;
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (bVar3) goto LAB_009916fc;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_socketio.cpp, 288): Wrong number of arguments: %d, expected: %d\n"
                        ,uVar10,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n","SocketIO_on",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_socketio.cpp"
                      ,0x123);
LAB_009916fc:
  pVVar9 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_80);
  pVVar4 = local_c8;
  pVVar9 = local_c0;
  if (local_c8 != (Value *)0x0) {
    while (pVVar9 != pVVar4) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_c0 = pVVar4;
    operator_delete(local_c8);
  }
  v8::HandleScope::~HandleScope(aHStack_b0);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

