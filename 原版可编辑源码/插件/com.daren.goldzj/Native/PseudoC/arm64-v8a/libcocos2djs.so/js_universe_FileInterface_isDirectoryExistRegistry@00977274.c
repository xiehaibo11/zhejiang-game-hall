
/* js_universe_FileInterface_isDirectoryExistRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_FileInterface_isDirectoryExistRegistry(FunctionCallbackInfo *param_1)

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
                    /* try { // try from 009772cc to 00a772d3 has its CatchHandler @ 00977358 */
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
                    /* try { // try from 009772d4 to 00a77307 has its CatchHandler @ 00977200 */
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar5,(vector *)&local_a8);
  plVar6 = (long *)se::State::nativeThisObject(aSStack_60);
                    /* try { // try from 00977308 to 00a77313 has its CatchHandler @ 0097735c */
  if (plVar6 == (long *)0x0) {
                    /* try { // try from 00977398 to 00a773bb has its CatchHandler @ 0097743c */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x8c8,"js_universe_FileInterface_isDirectoryExist");
    __android_log_print(6,"jswrapper",
                        "js_universe_FileInterface_isDirectoryExist : Invalid Native Object");
  }
  else {
                    /* try { // try from 00977314 to 00a7734f has its CatchHandler @ 00977200 */
    plVar7 = (long *)se::State::args(aSStack_60);
    if (plVar7[1] - *plVar7 == 0x10) {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
      uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_78);
      if ((uVar8 & 1) == 0) {
                    /* try { // try from 009773ec to 00a7744f has its CatchHandler @ 00977378 */
                    /* catch() { ... } // from try @ 009773e0 with catch @ 009773fc */
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x8cf,"js_universe_FileInterface_isDirectoryExist");
        __android_log_print(6,"jswrapper",
                            "js_universe_FileInterface_isDirectoryExist : Error processing arguments"
                           );
LAB_00977478:
        bVar2 = false;
      }
      else {
                    /* try { // try from 00977350 to 00a77357 has its CatchHandler @ 00977358 */
        bVar4 = (**(code **)(*plVar6 + 0x18))(plVar6,&local_78);
                    /* catch() { ... } // from try @ 009772cc with catch @ 00977358
                       catch() { ... } // from try @ 00977350 with catch @ 00977358
                       try { // try from 00977358 to 00a77377 has its CatchHandler @ 00977200 */
                    /* catch() { ... } // from try @ 00977308 with catch @ 0097735c */
        pVVar9 = (Value *)se::State::rval(aSStack_60);
        uVar8 = boolean_to_seval((bool)(bVar4 & 1),pVVar9);
        if ((uVar8 & 1) == 0) {
                    /* catch() { ... } // from try @ 00977398 with catch @ 0097743c */
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                              ,0x8d2,"js_universe_FileInterface_isDirectoryExist");
                    /* try { // try from 00977474 to 00a77647 has its CatchHandler @ 00977474
                       catch() { ... } // from try @ 00977474 with catch @ 00977474
                       catch() { ... } // from try @ 00977bc8 with catch @ 00977474 */
          __android_log_print(6,"jswrapper",
                              "js_universe_FileInterface_isDirectoryExist : Error processing arguments"
                             );
          goto LAB_00977478;
        }
        bVar2 = true;
                    /* catch() { ... } // from try @ 009773ec with catch @ 00977378 */
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      if (bVar2) goto LAB_009774bc;
    }
    else {
                    /* try { // try from 009773e0 to 00a773eb has its CatchHandler @ 009773fc */
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 2261): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar7[1] - *plVar7) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_FileInterface_isDirectoryExist",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x8d8);
LAB_009774bc:
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
    local_a0 = pVVar3;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

