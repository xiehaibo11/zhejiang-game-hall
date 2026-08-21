
/* SocketIO_emitRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void SocketIO_emitRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  Value *pVVar5;
  void *pvVar6;
  long *plVar7;
  SIOClient *this;
  Value *pVVar8;
  Isolate *pIVar9;
  int iVar10;
  ulong uVar11;
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [24];
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar9);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar6 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_d0);
                    /* try { // try from 00990060 to 00a90067 has its CatchHandler @ 0099006c */
  plVar7 = (long *)se::State::args(aSStack_70);
                    /* try { // try from 00990068 to 00a9013f has its CatchHandler @ 0098fddc */
  lVar1 = *plVar7;
  lVar2 = plVar7[1];
                    /* catch() { ... } // from try @ 00990060 with catch @ 0099006c */
                    /* catch() { ... } // from try @ 0098fed8 with catch @ 00990070 */
  this = (SIOClient *)se::State::nativeThisObject(aSStack_70);
  uVar11 = (ulong)(lVar2 - lVar1) >> 4;
                    /* catch() { ... } // from try @ 0098fe58 with catch @ 00990080 */
  iVar10 = (int)uVar11;
  if (iVar10 < 1) {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_socketio.cpp, 247): Wrong number of arguments: %d, expected: %d\n"
                        ,uVar11 & 0xffffffff,2);
  }
  else {
                    /* catch() { ... } // from try @ 0098ff00 with catch @ 00990088 */
    local_80 = 0;
    local_78 = (void *)0x0;
    local_88 = 0;
    uVar11 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_88);
    if ((uVar11 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00990270 with catch @ 00990140
                       catch(type#1 @ 00000000) { ... } // from try @ 009902a8 with catch @ 00990140
                       catch(type#1 @ 00000000) { ... } // from try @ 009902b8 with catch @ 00990140
                        */
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_socketio.cpp"
                          ,0xe2,"SocketIO_emit");
      __android_log_print(6,"jswrapper","Converting eventName failed!");
      bVar4 = false;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      if (((iVar10 < 2) || (*(byte *)(*plVar7 + 0x18) < 2)) ||
         (uVar11 = seval_to_std_string((Value *)(*plVar7 + 0x10),(basic_string *)&local_a0),
         (uVar11 & 1) != 0)) {
        cocos2d::network::SIOClient::emit(this,(basic_string *)&local_88,(basic_string *)&local_a0);
        bVar4 = true;
      }
      else {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_socketio.cpp"
                            ,0xef,"SocketIO_emit");
                    /* try { // try from 0099026c to 00a9026f has its CatchHandler @ 00990288 */
                    /* try { // try from 00990270 to 00a902a3 has its CatchHandler @ 00990140 */
        __android_log_print(6,"jswrapper","Converting payload failed!");
        bVar4 = false;
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if (bVar4) goto LAB_009901b0;
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n","SocketIO_emit"
                      ,
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_socketio.cpp"
                      ,0xfa);
LAB_009901b0:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
  pVVar5 = local_d0;
  pVVar8 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar8 != pVVar5) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
                    /* try { // try from 009901fc to 00a901ff has its CatchHandler @ 00990290 */
    local_c8 = pVVar5;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
                    /* try { // try from 00990218 to 00a90223 has its CatchHandler @ 00990294 */
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0099026c with catch @ 00990288
                        */
  __stack_chk_fail();
}

