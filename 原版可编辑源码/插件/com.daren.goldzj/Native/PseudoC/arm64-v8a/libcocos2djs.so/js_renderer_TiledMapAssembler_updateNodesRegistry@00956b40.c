
/* js_renderer_TiledMapAssembler_updateNodesRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_TiledMapAssembler_updateNodesRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  Value *pVVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  TiledMapAssembler *this;
  long *plVar9;
  Value *pVVar10;
  Isolate *pIVar11;
  byte *pbVar12;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  byte *local_90;
  byte *local_88;
  undefined8 local_80;
  ulong local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00956b70 to 00a56b77 has its CatchHandler @ 00956bbc */
  __jsbInvocationCount = __jsbInvocationCount + 1;
                    /* try { // try from 00956b78 to 00a56bd7 has its CatchHandler @ 00956b1c */
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar11);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
                    /* catch() { ... } // from try @ 00956b70 with catch @ 00956bbc */
  pvVar8 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar8,(vector *)&local_c0);
  this = (TiledMapAssembler *)se::State::nativeThisObject(aSStack_70);
  if (this == (TiledMapAssembler *)0x0) {
                    /* try { // try from 00956c54 to 00a56c67 has its CatchHandler @ 00957104 */
                    /* try { // try from 00956c68 to 00a56c7f has its CatchHandler @ 009570f0 */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x1097,"js_renderer_TiledMapAssembler_updateNodes");
    __android_log_print(6,"jswrapper",
                        "js_renderer_TiledMapAssembler_updateNodes : Invalid Native Object");
  }
  else {
    plVar9 = (long *)se::State::args(aSStack_70);
    if (plVar9[1] - *plVar9 == 0x20) {
      local_80 = 0;
      local_78 = 0;
                    /* try { // try from 00956c00 to 00a56c53 has its CatchHandler @ 00956c00
                       catch() { ... } // from try @ 00956c00 with catch @ 00956c00
                       catch() { ... } // from try @ 00956d94 with catch @ 00956c00
                       catch() { ... } // from try @ 00956e24 with catch @ 00956c00
                       catch() { ... } // from try @ 00956f20 with catch @ 00956c00 */
      local_90 = (byte *)0x0;
      local_88 = (byte *)0x0;
      uVar6 = seval_to_size((Value *)*plVar9,&local_78);
      uVar7 = seval_to_std_vector_string((Value *)(*plVar9 + 0x10),(vector *)&local_90);
      bVar1 = (uVar6 & uVar7 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                            ,0x10a0,"js_renderer_TiledMapAssembler_updateNodes");
                    /* try { // try from 00956cf8 to 00a56cff has its CatchHandler @ 009570b4 */
        __android_log_print(6,"jswrapper",
                            "js_renderer_TiledMapAssembler_updateNodes : Error processing arguments"
                           );
        pbVar3 = local_90;
      }
      else {
        cocos2d::renderer::TiledMapAssembler::updateNodes(this,local_78,(vector *)&local_90);
        pbVar3 = local_90;
      }
      local_90 = pbVar3;
      pbVar12 = local_88;
      if (pbVar3 != (byte *)0x0) {
                    /* try { // try from 00956d10 to 00a56d1b has its CatchHandler @ 0095712c */
        while (pbVar4 = pbVar12, pbVar4 != pbVar3) {
          pbVar12 = pbVar4 + -0x18;
          if ((*pbVar12 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
        }
        local_88 = pbVar3;
        operator_delete(local_90);
      }
      if (!bVar1) goto LAB_00956d7c;
    }
    else {
                    /* try { // try from 00956c9c to 00a56ca3 has its CatchHandler @ 009570d0 */
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 4260): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar9[1] - *plVar9) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_TiledMapAssembler_updateNodes",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x10a7);
LAB_00956d7c:
                    /* try { // try from 00956d7c to 00a56d93 has its CatchHandler @ 00957038 */
  pVVar10 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_70);
  pVVar5 = local_c0;
                    /* try { // try from 00956d94 to 00a56e17 has its CatchHandler @ 00956c00 */
  pVVar10 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar10 != pVVar5) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_b8 = pVVar5;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

