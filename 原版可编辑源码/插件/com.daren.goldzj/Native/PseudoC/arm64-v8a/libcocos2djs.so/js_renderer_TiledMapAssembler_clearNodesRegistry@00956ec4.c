
/* js_renderer_TiledMapAssembler_clearNodesRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_TiledMapAssembler_clearNodesRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  TiledMapAssembler *this;
  undefined8 *puVar4;
  Value *pVVar5;
  ulong uVar6;
  Isolate *pIVar7;
  Value *local_98;
  Value *local_90;
  undefined8 local_88;
  HandleScope aHStack_80 [24];
  ulong local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00956ee4 to 00a56eef has its CatchHandler @ 00956fd0 */
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar7);
  local_98 = (Value *)0x0;
  local_90 = (Value *)0x0;
                    /* try { // try from 00956f14 to 00a56f1f has its CatchHandler @ 00956f9c */
  local_88 = 0;
                    /* try { // try from 00956f20 to 00a57153 has its CatchHandler @ 00956c00 */
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_98,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_98);
  this = (TiledMapAssembler *)se::State::nativeThisObject(aSStack_60);
  if (this == (TiledMapAssembler *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x10ac,"js_renderer_TiledMapAssembler_clearNodes");
                    /* catch() { ... } // from try @ 00956ee4 with catch @ 00956fd0 */
                    /* catch() { ... } // from try @ 00956ea4 with catch @ 00956fd4 */
    __android_log_print(6,"jswrapper",
                        "js_renderer_TiledMapAssembler_clearNodes : Invalid Native Object");
  }
  else {
    puVar4 = (undefined8 *)se::State::args(aSStack_60);
    uVar6 = puVar4[1] - (long)*puVar4;
    if (uVar6 == 0x10) {
      local_68 = 0;
      uVar6 = seval_to_size((Value *)*puVar4,&local_68);
      if ((uVar6 & 1) != 0) {
        cocos2d::renderer::TiledMapAssembler::clearNodes(this,local_68);
                    /* catch() { ... } // from try @ 00956f14 with catch @ 00956f9c */
        goto LAB_0095707c;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x10b3,"js_renderer_TiledMapAssembler_clearNodes");
                    /* catch() { ... } // from try @ 00956d7c with catch @ 00957038 */
      __android_log_print(6,"jswrapper",
                          "js_renderer_TiledMapAssembler_clearNodes : Error processing arguments");
    }
    else {
                    /* catch() { ... } // from try @ 00956e70 with catch @ 00956fec */
                    /* catch() { ... } // from try @ 00956e18 with catch @ 00957000 */
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 4279): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar6 >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_TiledMapAssembler_clearNodes",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x10ba);
LAB_0095707c:
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar5 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
                    /* catch() { ... } // from try @ 00956cf8 with catch @ 009570b4 */
      pVVar5 = pVVar5 + -0x10;
    }
    local_90 = pVVar2;
    operator_delete(local_98);
  }
                    /* catch() { ... } // from try @ 00956c9c with catch @ 009570d0 */
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00956c68 with catch @ 009570f0 */
  return;
}

