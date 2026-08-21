
/* SocketIO_sendRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void SocketIO_sendRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Value *pVVar5;
  void *pvVar6;
  long *plVar7;
  SIOClient *this;
  Value *pVVar8;
  ulong uVar9;
  Isolate *pIVar10;
  Value *local_b8;
  Value *local_b0;
  undefined8 local_a8;
  HandleScope aHStack_a0 [24];
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar10);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_b8);
  plVar7 = (long *)se::State::args(aSStack_70);
  lVar2 = *plVar7;
  lVar3 = plVar7[1];
  this = (SIOClient *)se::State::nativeThisObject(aSStack_70);
  uVar9 = (ulong)(lVar3 - lVar2) >> 4;
                    /* catch() { ... } // from try @ 0098ffa0 with catch @ 0098fddc
                       catch() { ... } // from try @ 00990068 with catch @ 0098fddc */
  if ((int)uVar9 == 1) {
    local_80 = 0;
    local_78 = (void *)0x0;
    local_88 = 0;
    uVar9 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_88);
    bVar1 = (uVar9 & 1) == 0;
    if (bVar1) {
                    /* try { // try from 0098fed8 to 00a8fee3 has its CatchHandler @ 00990070 */
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_socketio.cpp"
                          ,0xcc,"SocketIO_send");
      __android_log_print(6,"jswrapper","Converting payload failed!");
    }
    else {
      cocos2d::network::SIOClient::send(this,(basic_string *)&local_88);
    }
                    /* try { // try from 0098ff00 to 00a8ff9f has its CatchHandler @ 00990088 */
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if (!bVar1) goto LAB_0098fe6c;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_socketio.cpp, 210): Wrong number of arguments: %d, expected: %d\n"
                        ,uVar9,1);
  }
                    /* try { // try from 0098fe58 to 00a8fe67 has its CatchHandler @ 00990080 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n","SocketIO_send"
                      ,
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_socketio.cpp"
                      ,0xd5);
LAB_0098fe6c:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
  pVVar5 = local_b8;
  pVVar8 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar8 != pVVar5) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_b0 = pVVar5;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

