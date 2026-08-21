
/* js_universe_FileInterface_isAloneFileExistRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_FileInterface_isAloneFileExistRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  long *plVar8;
  CustomFileManager *this;
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
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
                    /* catch() { ... } // from try @ 00974f58 with catch @ 009751cc */
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar10);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
                    /* try { // try from 009751e8 to 00a752d3 has its CatchHandler @ 009751e8
                       catch() { ... } // from try @ 009751e8 with catch @ 009751e8
                       catch() { ... } // from try @ 00975378 with catch @ 009751e8 */
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar7 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar7,(vector *)&local_a8);
  plVar8 = (long *)se::State::args(aSStack_60);
  if (plVar8[1] - *plVar8 == 0x10) {
    local_70 = 0;
    local_68 = (void *)0x0;
    local_78 = 0;
    uVar5 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_78);
    this = (CustomFileManager *)universe::CustomFileManager::getInstance();
    bVar4 = universe::CustomFileManager::isFileExist(this,(basic_string *)&local_78);
    pVVar9 = (Value *)se::State::rval(aSStack_60);
    uVar6 = boolean_to_seval((bool)(bVar4 & 1),pVVar9);
    bVar1 = (uVar5 & uVar6 & 1) == 0;
    if (bVar1) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                          ,0x7d6,"js_universe_FileInterface_isAloneFileExist");
                    /* try { // try from 00975354 to 00a75377 has its CatchHandler @ 009753b8 */
      __android_log_print(6,"jswrapper",
                          "js_universe_FileInterface_isAloneFileExist : Error processing arguments")
      ;
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if (!bVar1) goto LAB_009752e0;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 2009): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar8[1] - *plVar8) >> 4,1);
  }
                    /* try { // try from 009752d4 to 00a752ff has its CatchHandler @ 009753b8 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_FileInterface_isAloneFileExist",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x7dc);
LAB_009752e0:
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
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00975300 with catch @ 009753b4 */
  __stack_chk_fail();
}

