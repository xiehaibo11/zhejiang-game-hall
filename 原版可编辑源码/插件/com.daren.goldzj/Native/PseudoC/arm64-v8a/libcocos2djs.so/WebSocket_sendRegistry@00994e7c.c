
/* WebSocket_sendRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void WebSocket_sendRegistry(FunctionCallbackInfo *param_1)

{
  Value VVar1;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  long *plVar5;
  WebSocket *this;
  ulong uVar6;
  Value *pVVar7;
  Object *this_00;
  Isolate *pIVar8;
  Value *local_b0;
  Value *local_a8;
  undefined8 local_a0;
  HandleScope aHStack_98 [24];
  ulong local_80;
  uchar *local_78;
  undefined8 local_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar8);
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  local_a0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
                    /* try { // try from 00994eec to 00a94f2f has its CatchHandler @ 00994f44 */
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_b0);
  plVar5 = (long *)se::State::args(aSStack_60);
  if ((int)((ulong)(plVar5[1] - *plVar5) >> 4) == 1) {
    this = (WebSocket *)se::State::nativeThisObject(aSStack_60);
                    /* try { // try from 00994f30 to 00a94fcb has its CatchHandler @ 00994cdc */
    VVar1 = ((Value *)*plVar5)[8];
    if (VVar1 == (Value)0x5) {
      this_00 = (Object *)se::Value::toObject((Value *)*plVar5);
                    /* try { // try from 0099504c to 00a95057 has its CatchHandler @ 00995208 */
      local_80 = 0;
      local_78 = (uchar *)0x0;
      uVar6 = se::Object::isArrayBuffer(this_00);
                    /* try { // try from 00995058 to 00a95193 has its CatchHandler @ 00995220 */
      if ((uVar6 & 1) == 0) {
        uVar6 = se::Object::isTypedArray(this_00);
        if (((uVar6 & 1) == 0) ||
           (uVar6 = se::Object::getTypedArrayData(this_00,&local_78,&local_80), (uVar6 & 1) != 0))
        goto LAB_00995130;
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp"
                            ,0x1ad,"WebSocket_send");
        __android_log_print(6,"jswrapper","getTypedArrayData failed!");
      }
      else {
        uVar6 = se::Object::getArrayBufferData(this_00,&local_78,&local_80);
        if ((uVar6 & 1) != 0) {
LAB_00995130:
          cocos2d::network::WebSocket::send(this,local_78,(uint)local_80);
          goto LAB_00994fc8;
        }
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp"
                            ,0x1a8,"WebSocket_send");
        __android_log_print(6,"jswrapper","getArrayBufferData failed!");
      }
    }
    else {
                    /* catch() { ... } // from try @ 00994d9c with catch @ 00994f44
                       catch() { ... } // from try @ 00994eec with catch @ 00994f44 */
      if (VVar1 != (Value)0x4) goto LAB_00994fc8;
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = (uchar *)0x0;
                    /* catch() { ... } // from try @ 00994d5c with catch @ 00994f5c */
      uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_78);
                    /* catch() { ... } // from try @ 00994d50 with catch @ 00994f60 */
      if ((uVar6 & 1) != 0) {
                    /* catch() { ... } // from try @ 00994d30 with catch @ 00994f64 */
        cocos2d::network::WebSocket::send(this,(basic_string *)&local_78);
                    /* catch() { ... } // from try @ 00994d68 with catch @ 00994f74
                       catch() { ... } // from try @ 00994dd8 with catch @ 00994f74 */
        if (((ulong)local_78 & 1) != 0) {
          operator_delete(local_68);
        }
        goto LAB_00994fc8;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp"
                          ,0x194,"WebSocket_send");
      __android_log_print(6,"jswrapper","Convert string failed");
      if (((ulong)local_78 & 1) != 0) {
        operator_delete(local_68);
      }
    }
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp, 445): wrong number of arguments: %d, was expecting 1\n"
                       );
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "WebSocket_send",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp"
                      ,0x1c0);
LAB_00994fc8:
                    /* try { // try from 00994fcc to 00a9501f has its CatchHandler @ 00994fcc
                       catch() { ... } // from try @ 00994fcc with catch @ 00994fcc
                       catch() { ... } // from try @ 00995194 with catch @ 00994fcc */
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_b0;
  pVVar7 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar7 != pVVar3) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_a8 = pVVar3;
    operator_delete(local_b0);
  }
                    /* try { // try from 00995020 to 00a95037 has its CatchHandler @ 00995210 */
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00995040 to 00a9504b has its CatchHandler @ 0099520c */
  return;
}

