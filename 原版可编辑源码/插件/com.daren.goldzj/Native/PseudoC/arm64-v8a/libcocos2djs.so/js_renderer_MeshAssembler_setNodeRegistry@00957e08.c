
/* js_renderer_MeshAssembler_setNodeRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_MeshAssembler_setNodeRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  MeshAssembler *this;
  undefined8 *puVar4;
  Value *pVVar5;
  Object *this_00;
  NodeProxy *pNVar6;
  Isolate *pIVar7;
  Value *local_90;
  Value *local_88;
  undefined8 local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar7);
  local_90 = (Value *)0x0;
  local_88 = (Value *)0x0;
  local_80 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
                    /* try { // try from 00957e7c to 00a57ebb has its CatchHandler @ 00957e7c
                       catch() { ... } // from try @ 00957e7c with catch @ 00957e7c
                       catch() { ... } // from try @ 00957ee4 with catch @ 00957e7c */
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_90);
  this = (MeshAssembler *)se::State::nativeThisObject(aSStack_60);
  if (this == (MeshAssembler *)0x0) {
                    /* try { // try from 00957ee4 to 00a57f4f has its CatchHandler @ 00957e7c */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x1129,"js_renderer_MeshAssembler_setNode");
    __android_log_print(6,"jswrapper","js_renderer_MeshAssembler_setNode : Invalid Native Object");
  }
  else {
    puVar4 = (undefined8 *)se::State::args(aSStack_60);
    pVVar5 = (Value *)*puVar4;
                    /* try { // try from 00957ebc to 00a57ee3 has its CatchHandler @ 00957f34 */
    if (puVar4[1] - (long)pVVar5 == 0x10) {
      if (pVVar5[8] == (Value)0x5) {
        this_00 = (Object *)se::Value::toObject(pVVar5);
        pNVar6 = (NodeProxy *)se::Object::getPrivateData(this_00);
        if (pNVar6 != (NodeProxy *)0x0) {
LAB_00957f5c:
          cocos2d::renderer::MeshAssembler::setNode(this,pNVar6);
          goto LAB_00957fd8;
        }
      }
      else if ((byte)pVVar5[8] < 2) {
        pNVar6 = (NodeProxy *)0x0;
        goto LAB_00957f5c;
      }
                    /* try { // try from 00957f74 to 00a58003 has its CatchHandler @ 00957f74
                       catch() { ... } // from try @ 00957f74 with catch @ 00957f74
                       catch() { ... } // from try @ 0095800c with catch @ 00957f74
                       catch() { ... } // from try @ 0095803c with catch @ 00957f74
                       catch() { ... } // from try @ 00958090 with catch @ 00957f74 */
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x1130,"js_renderer_MeshAssembler_setNode");
      __android_log_print(6,"jswrapper",
                          "js_renderer_MeshAssembler_setNode : Error processing arguments");
    }
    else {
                    /* catch() { ... } // from try @ 00957ebc with catch @ 00957f34 */
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 4404): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(puVar4[1] - (long)pVVar5) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_MeshAssembler_setNode",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x1137);
LAB_00957fd8:
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar5 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
                    /* try { // try from 00958004 to 00a5800b has its CatchHandler @ 00958090 */
                    /* try { // try from 0095800c to 00a5802f has its CatchHandler @ 00957f74 */
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
    }
    local_88 = pVVar2;
    operator_delete(local_90);
  }
                    /* try { // try from 00958030 to 00a5803b has its CatchHandler @ 009580a0 */
  v8::HandleScope::~HandleScope(aHStack_78);
                    /* try { // try from 0095803c to 00a58087 has its CatchHandler @ 00957f74 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

