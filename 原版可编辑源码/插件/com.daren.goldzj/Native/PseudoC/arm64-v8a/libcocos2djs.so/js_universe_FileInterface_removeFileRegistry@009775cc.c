
/* js_universe_FileInterface_removeFileRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_FileInterface_removeFileRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  byte bVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  Value *pVVar9;
  Isolate *pIVar10;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar10);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 00977648 to 00a77653 has its CatchHandler @ 00977cc0 */
  se::State::State(aSStack_60,pvVar5,(vector *)&local_a8);
  plVar6 = (long *)se::State::nativeThisObject(aSStack_60);
                    /* try { // try from 00977660 to 00a77683 has its CatchHandler @ 00977d24 */
  if (plVar6 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x8dd,"js_universe_FileInterface_removeFile");
    __android_log_print(6,"jswrapper","js_universe_FileInterface_removeFile : Invalid Native Object"
                       );
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_60);
    if (plVar7[1] - *plVar7 == 0x10) {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
      uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_78);
      if ((uVar8 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x8e4,"js_universe_FileInterface_removeFile");
        __android_log_print(6,"jswrapper",
                            "js_universe_FileInterface_removeFile : Error processing arguments");
LAB_009777d0:
        bVar2 = false;
      }
      else {
        bVar4 = (**(code **)(*plVar6 + 0x40))(plVar6,&local_78);
        pVVar9 = (Value *)se::State::rval(aSStack_60);
        uVar8 = boolean_to_seval((bool)(bVar4 & 1),pVVar9);
        if ((uVar8 & 1) == 0) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                              ,0x8e7,"js_universe_FileInterface_removeFile");
          __android_log_print(6,"jswrapper",
                              "js_universe_FileInterface_removeFile : Error processing arguments");
          goto LAB_009777d0;
        }
        bVar2 = true;
      }
      if ((local_78 & 1) != 0) {
                    /* try { // try from 009777e0 to 00a777eb has its CatchHandler @ 00977c54 */
        operator_delete(local_68);
      }
      if (bVar2) goto LAB_00977814;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 2282): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar7[1] - *plVar7) >> 4,1);
    }
  }
                    /* try { // try from 009777f8 to 00a777ff has its CatchHandler @ 00977c14 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_FileInterface_removeFile",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x8ed);
LAB_00977814:
  pVVar9 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_a8;
  pVVar9 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar9 != pVVar3) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
                    /* try { // try from 00977860 to 00a7786b has its CatchHandler @ 00977c90 */
    local_a0 = pVVar3;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
                    /* try { // try from 00977878 to 00a7787f has its CatchHandler @ 00977c2c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

