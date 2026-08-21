
/* js_renderer_CustomAssembler_updateEffectRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_CustomAssembler_updateEffectRegistry(FunctionCallbackInfo *param_1)

{
  byte bVar1;
  long lVar2;
  Value *pVVar3;
  byte bVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  Object *this;
  long lVar8;
  Value *pVVar9;
  ulong uVar10;
  Isolate *pIVar11;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar11);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
                    /* try { // try from 00953268 to 00a5326f has its CatchHandler @ 009539e0 */
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
                    /* try { // try from 00953270 to 00a532ef has its CatchHandler @ 00952bb4 */
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar5,(vector *)&local_a8);
  plVar6 = (long *)se::State::nativeThisObject(aSStack_70);
  if (plVar6 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0xec9,"js_renderer_CustomAssembler_updateEffect");
                    /* try { // try from 0095337c to 00a53383 has its CatchHandler @ 009539c8 */
                    /* try { // try from 00953384 to 00a53403 has its CatchHandler @ 00952bb4 */
    __android_log_print(6,"jswrapper",
                        "js_renderer_CustomAssembler_updateEffect : Invalid Native Object");
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_70);
    uVar10 = plVar7[1] - *plVar7;
    if (uVar10 == 0x20) {
      local_78 = 0;
      bVar4 = seval_to_size((Value *)*plVar7,&local_78);
      bVar1 = *(byte *)(*plVar7 + 0x18);
      if (bVar1 == 5) {
        this = (Object *)se::Value::toObject((Value *)(*plVar7 + 0x10));
                    /* try { // try from 009532f0 to 00a532f7 has its CatchHandler @ 00953a5c */
        lVar8 = se::Object::getPrivateData(this);
                    /* try { // try from 009532f8 to 00a5337b has its CatchHandler @ 00952bb4 */
        if (lVar8 != 0) {
          bVar4 = bVar4 & 1;
          goto joined_r0x00953478;
        }
      }
      else {
        lVar8 = 0;
        bVar4 = bVar4 & bVar1 < 2;
joined_r0x00953478:
        if (bVar4 != 0) {
          (**(code **)(*plVar6 + 0x48))(plVar6,local_78,lVar8);
                    /* try { // try from 00953490 to 00a53497 has its CatchHandler @ 009539b4 */
          goto LAB_009533e4;
        }
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0xed2,"js_renderer_CustomAssembler_updateEffect");
      __android_log_print(6,"jswrapper",
                          "js_renderer_CustomAssembler_updateEffect : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 3798): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar10 >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_CustomAssembler_updateEffect",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0xed9);
LAB_009533e4:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_a8;
  pVVar9 = local_a0;
  if (local_a8 != (Value *)0x0) {
                    /* try { // try from 0095340c to 00a5348f has its CatchHandler @ 00952bb4 */
    while (pVVar9 != pVVar3) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_a0 = pVVar3;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

