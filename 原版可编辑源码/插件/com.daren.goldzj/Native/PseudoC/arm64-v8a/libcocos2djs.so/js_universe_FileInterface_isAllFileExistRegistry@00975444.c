
/* js_universe_FileInterface_isAllFileExistRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_FileInterface_isAllFileExistRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  byte *pbVar3;
  Value *pVVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  long *plVar10;
  ulong uVar11;
  Value *pVVar12;
  vector *pvVar13;
  Isolate *pIVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  Value *local_f8;
  Value *local_f0;
  undefined8 local_e8;
  HandleScope aHStack_e0 [24];
  byte local_c8 [16];
  void *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  void *local_a0;
  byte *local_98;
  byte *local_90;
  undefined8 local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_e0,pIVar14);
  local_f8 = (Value *)0x0;
  local_f0 = (Value *)0x0;
  local_e8 = 0;
                    /* catch() { ... } // from try @ 00975420 with catch @ 009754a8 */
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_f8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_f8);
  pvVar9 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  pvVar13 = (vector *)&local_f8;
  se::State::State(aSStack_80,pvVar9,pvVar13);
  plVar10 = (long *)se::State::args(aSStack_80);
                    /* try { // try from 009754e4 to 00a75537 has its CatchHandler @ 009754e4
                       catch() { ... } // from try @ 009754e4 with catch @ 009754e4
                       catch() { ... } // from try @ 00975544 with catch @ 009754e4
                       catch() { ... } // from try @ 009756e4 with catch @ 009754e4 */
  if (plVar10[1] - *plVar10 == 0x20) {
    local_98 = (byte *)0x0;
    local_90 = (byte *)0x0;
    local_88 = 0;
    local_a8 = 0;
    local_a0 = (void *)0x0;
    local_b0 = 0;
    uVar6 = seval_to_std_vector_string((Value *)*plVar10,(vector *)&local_98);
    uVar7 = seval_to_std_string((Value *)(*plVar10 + 0x10),(basic_string *)&local_b0);
    if (local_90 != local_98) {
                    /* try { // try from 00975538 to 00a75543 has its CatchHandler @ 00975774 */
      lVar15 = 0;
      uVar17 = 0;
      do {
                    /* try { // try from 00975544 to 00a755b7 has its CatchHandler @ 009754e4 */
        plVar10 = (long *)universe::CustomFileManager::getInstance();
        uVar11 = (**(code **)(*plVar10 + 0x28))(plVar10,local_98 + lVar15);
        if ((uVar11 & 1) == 0) {
          plVar10 = (long *)universe::CustomFileManager::getInstance();
          std::__ndk1::operator+
                    ((__ndk1 *)&local_b0,(basic_string *)(local_98 + lVar15),(basic_string *)pvVar13
                    );
          uVar11 = (**(code **)(*plVar10 + 0x48))(plVar10,local_c8);
          if ((local_c8[0] & 1) != 0) {
            operator_delete(local_b8);
          }
          if ((uVar11 & 1) == 0) {
                    /* catch() { ... } // from try @ 009756c4 with catch @ 00975770 */
                    /* catch() { ... } // from try @ 00975538 with catch @ 00975774 */
            pVVar12 = (Value *)se::State::rval(aSStack_80);
            uVar8 = boolean_to_seval(true,pVVar12);
                    /* catch() { ... } // from try @ 009755e0 with catch @ 00975788 */
            if ((uVar6 & uVar7 & uVar8 & 1) != 0) goto LAB_009755e4;
                    /* catch() { ... } // from try @ 00975688 with catch @ 00975798 */
                    /* catch() { ... } // from try @ 009755b8 with catch @ 0097579c */
                    /* catch() { ... } // from try @ 00975608 with catch @ 009757ac */
            __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                                ,0x7f3,"js_universe_FileInterface_isAllFileExist");
            __android_log_print(6,"jswrapper",
                                "js_universe_FileInterface_isAllFileExist : Error processing arguments"
                               );
            goto LAB_0097569c;
          }
        }
        uVar17 = uVar17 + 1;
        lVar15 = lVar15 + 0x18;
                    /* try { // try from 009755b8 to 00a755c7 has its CatchHandler @ 0097579c */
        uVar11 = ((long)local_90 - (long)local_98 >> 3) * -0x5555555555555555;
      } while (uVar17 <= uVar11 && uVar11 - uVar17 != 0);
    }
    pVVar12 = (Value *)se::State::rval(aSStack_80);
    uVar8 = boolean_to_seval(false,pVVar12);
                    /* try { // try from 009755e0 to 00a755e7 has its CatchHandler @ 00975788 */
    if ((uVar6 & uVar7 & uVar8 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                          ,0x7f9,"js_universe_FileInterface_isAllFileExist");
                    /* try { // try from 00975688 to 00a75693 has its CatchHandler @ 00975798 */
      __android_log_print(6,"jswrapper",
                          "js_universe_FileInterface_isAllFileExist : Error processing arguments");
LAB_0097569c:
      bVar2 = false;
    }
    else {
LAB_009755e4:
      bVar2 = true;
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    pbVar5 = local_98;
    pbVar16 = local_90;
    if (local_98 != (byte *)0x0) {
                    /* try { // try from 00975608 to 00a75617 has its CatchHandler @ 009757ac */
      while (pbVar3 = pbVar16, pbVar3 != pbVar5) {
        pbVar16 = pbVar3 + -0x18;
        if ((*pbVar16 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
      }
      local_90 = pbVar5;
      operator_delete(local_98);
    }
    if (bVar2) goto LAB_009756e8;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 2044): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar10[1] - *plVar10) >> 4,1);
  }
                    /* try { // try from 009756c4 to 00a756d3 has its CatchHandler @ 00975770 */
                    /* try { // try from 009756d4 to 00a756e3 has its CatchHandler @ 0097574c */
                    /* try { // try from 009756e4 to 00a757e7 has its CatchHandler @ 009754e4 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_FileInterface_isAllFileExist",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x7ff);
LAB_009756e8:
  pVVar12 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar12,param_1);
  se::State::~State(aSStack_80);
  pVVar4 = local_f8;
  pVVar12 = local_f0;
  if (local_f8 != (Value *)0x0) {
    while (pVVar12 != pVVar4) {
      se::Value::~Value(pVVar12 + -0x10);
      pVVar12 = pVVar12 + -0x10;
    }
    local_f0 = pVVar4;
    operator_delete(local_f8);
  }
  v8::HandleScope::~HandleScope(aHStack_e0);
                    /* catch() { ... } // from try @ 009756d4 with catch @ 0097574c */
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

