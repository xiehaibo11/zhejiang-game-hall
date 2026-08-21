
/* js_renderer_MeshAssembler_updateIADataRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_MeshAssembler_updateIADataRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  byte bVar4;
  void *pvVar5;
  MeshAssembler *this;
  long *plVar6;
  Object *pOVar7;
  VertexFormat *pVVar8;
  Object *pOVar9;
  Value *pVVar10;
  ulong uVar11;
  long lVar12;
  Isolate *pIVar13;
  Value *local_b8;
  Value *local_b0;
  undefined8 local_a8;
  HandleScope aHStack_a0 [24];
  ulong local_88;
  State aSStack_80 [40];
  long local_58;
  
                    /* try { // try from 009580dc to 00a581ff has its CatchHandler @ 009580dc
                       catch() { ... } // from try @ 009580dc with catch @ 009580dc
                       catch() { ... } // from try @ 00958208 with catch @ 009580dc
                       catch() { ... } // from try @ 00958278 with catch @ 009580dc
                       catch() { ... } // from try @ 0095831c with catch @ 009580dc */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar13);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar5,(vector *)&local_b8);
  this = (MeshAssembler *)se::State::nativeThisObject(aSStack_80);
  if (this == (MeshAssembler *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x113c,"js_renderer_MeshAssembler_updateIAData");
                    /* try { // try from 00958200 to 00a58207 has its CatchHandler @ 0095831c */
                    /* try { // try from 00958208 to 00a5822f has its CatchHandler @ 009580dc */
    __android_log_print(6,"jswrapper",
                        "js_renderer_MeshAssembler_updateIAData : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_80);
    uVar11 = plVar6[1] - *plVar6;
    if (uVar11 == 0x40) {
      local_88 = 0;
      bVar4 = seval_to_size((Value *)*plVar6,&local_88);
      lVar12 = *plVar6;
      if (*(byte *)(lVar12 + 0x18) == 5) {
        pOVar7 = (Object *)se::Value::toObject((Value *)(lVar12 + 0x10));
        pVVar8 = (VertexFormat *)se::Object::getPrivateData(pOVar7);
        lVar12 = *plVar6;
        bVar3 = pVVar8 == (VertexFormat *)0x0;
      }
      else {
        bVar3 = 1 < *(byte *)(lVar12 + 0x18);
        pVVar8 = (VertexFormat *)0x0;
      }
      pOVar7 = (Object *)se::Value::toObject((Value *)(lVar12 + 0x20));
      pOVar9 = (Object *)se::Value::toObject((Value *)(*plVar6 + 0x30));
      if ((bVar4 & !bVar3) != 0) {
                    /* try { // try from 00958268 to 00a58277 has its CatchHandler @ 00958328 */
                    /* try { // try from 00958278 to 00a58313 has its CatchHandler @ 009580dc */
        cocos2d::renderer::MeshAssembler::updateIAData(this,local_88,pVVar8,pOVar7,pOVar9);
        goto LAB_009582f4;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x1149,"js_renderer_MeshAssembler_updateIAData");
      __android_log_print(6,"jswrapper",
                          "js_renderer_MeshAssembler_updateIAData : Error processing arguments");
    }
    else {
                    /* try { // try from 00958230 to 00a58237 has its CatchHandler @ 00958364 */
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 4429): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar11 >> 4,4);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_MeshAssembler_updateIAData",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x1150);
LAB_009582f4:
  pVVar10 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_b8;
  pVVar10 = local_b0;
  if (local_b8 != (Value *)0x0) {
                    /* catch() { ... } // from try @ 00958200 with catch @ 0095831c
                       catch() { ... } // from try @ 00958314 with catch @ 0095831c
                       try { // try from 0095831c to 00a583c3 has its CatchHandler @ 009580dc */
    while (pVVar10 != pVVar2) {
                    /* catch() { ... } // from try @ 00958268 with catch @ 00958328 */
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_b0 = pVVar2;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00958230 with catch @ 00958364 */
  return;
}

