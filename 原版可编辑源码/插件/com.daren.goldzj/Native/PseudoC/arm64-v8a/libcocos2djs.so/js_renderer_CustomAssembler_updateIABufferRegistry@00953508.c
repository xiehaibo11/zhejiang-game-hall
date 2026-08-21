
/* js_renderer_CustomAssembler_updateIABufferRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_CustomAssembler_updateIABufferRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  void *pvVar6;
  long *plVar7;
  long *plVar8;
  Object *pOVar9;
  long lVar10;
  Value *pVVar11;
  ulong uVar12;
  long lVar13;
  Isolate *pIVar14;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar14);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_a8);
  plVar7 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar7 == (long *)0x0) {
                    /* try { // try from 00953624 to 00a5362b has its CatchHandler @ 00953a48 */
                    /* try { // try from 0095362c to 00a536ab has its CatchHandler @ 00952bb4 */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0xede,"js_renderer_CustomAssembler_updateIABuffer");
    __android_log_print(6,"jswrapper",
                        "js_renderer_CustomAssembler_updateIABuffer : Invalid Native Object");
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_70);
    uVar12 = plVar8[1] - *plVar8;
    if (uVar12 == 0x30) {
      local_78 = 0;
      bVar5 = seval_to_size((Value *)*plVar8,&local_78);
      lVar13 = *plVar8;
      if (*(byte *)(lVar13 + 0x18) == 5) {
        pOVar9 = (Object *)se::Value::toObject((Value *)(lVar13 + 0x10));
        lVar10 = se::Object::getPrivateData(pOVar9);
        lVar13 = *plVar8;
        bVar4 = lVar10 == 0;
      }
      else {
        bVar4 = 1 < *(byte *)(lVar13 + 0x18);
        lVar10 = 0;
      }
      if (*(byte *)(lVar13 + 0x28) == 5) {
        pOVar9 = (Object *)se::Value::toObject((Value *)(lVar13 + 0x20));
        lVar13 = se::Object::getPrivateData(pOVar9);
        if (lVar13 != 0) {
          bVar3 = true;
          goto LAB_009536b4;
        }
      }
      else {
        bVar3 = *(byte *)(lVar13 + 0x28) < 2;
                    /* try { // try from 009536ac to 00a536b3 has its CatchHandler @ 00953990 */
        lVar13 = 0;
LAB_009536b4:
                    /* try { // try from 009536b4 to 00a53733 has its CatchHandler @ 00952bb4 */
        if ((bVar5 & !bVar4 & bVar3) != 0) {
          (**(code **)(*plVar7 + 0x30))(plVar7,local_78,lVar10,lVar13);
          goto LAB_0095374c;
        }
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0xee9,"js_renderer_CustomAssembler_updateIABuffer");
      __android_log_print(6,"jswrapper",
                          "js_renderer_CustomAssembler_updateIABuffer : Error processing arguments")
      ;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 3821): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar12 >> 4,3);
    }
  }
                    /* try { // try from 00953734 to 00a5373b has its CatchHandler @ 00953a3c */
                    /* try { // try from 0095373c to 00a537bf has its CatchHandler @ 00952bb4 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_CustomAssembler_updateIABuffer",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0xef0);
LAB_0095374c:
  pVVar11 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a8;
  pVVar11 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar11 != pVVar2) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
    }
    local_a0 = pVVar2;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009537c0 to 00a537c7 has its CatchHandler @ 0095397c */
                    /* try { // try from 009537c8 to 00a53803 has its CatchHandler @ 00952bb4 */
  return;
}

