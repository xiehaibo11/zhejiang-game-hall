
/* js_universe_Downloader2_addRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Downloader2_addRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  void *pvVar17;
  Downloader2 *this;
  long *plVar18;
  Value *pVVar19;
  Isolate *pIVar20;
  Value *local_158;
  Value *local_150;
  undefined8 local_148;
  HandleScope aHStack_140 [28];
  int local_124;
  ulong local_120;
  undefined8 local_118;
  void *local_110;
  bool local_104 [4];
  bool local_100 [4];
  bool local_fc [4];
  ulong local_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  State aSStack_98 [40];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar20 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_140,pIVar20);
  local_158 = (Value *)0x0;
  local_150 = (Value *)0x0;
  local_148 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_158,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_158);
  pvVar17 = (void *)se::internal::getPrivate(pIVar20,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_98,pvVar17,(vector *)&local_158);
  this = (Downloader2 *)se::State::nativeThisObject(aSStack_98);
  if (this == (Downloader2 *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0xa9,"js_universe_Downloader2_add");
    __android_log_print(6,"jswrapper","js_universe_Downloader2_add : Invalid Native Object");
  }
  else {
    plVar18 = (long *)se::State::args(aSStack_98);
    if (plVar18[1] - *plVar18 == 0xc0) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = (void *)0x0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = (void *)0x0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_f8 = 0;
      local_118 = 0;
      local_110 = (void *)0x0;
      local_120 = 0;
      uVar5 = seval_to_std_string((Value *)*plVar18,(basic_string *)&local_b0);
      uVar6 = seval_to_std_string((Value *)(*plVar18 + 0x10),(basic_string *)&local_c8);
      uVar7 = seval_to_std_string((Value *)(*plVar18 + 0x20),(basic_string *)&local_e0);
      uVar8 = seval_to_ulong((Value *)(*plVar18 + 0x30),&uStack_e8);
      uVar9 = seval_to_ulong((Value *)(*plVar18 + 0x40),&local_f0);
      uVar10 = seval_to_ulong((Value *)(*plVar18 + 0x50),&local_f8);
      uVar11 = seval_to_boolean((Value *)(*plVar18 + 0x60),local_fc);
      uVar12 = seval_to_boolean((Value *)(*plVar18 + 0x70),local_100);
      uVar13 = seval_to_boolean((Value *)(*plVar18 + 0x80),local_104);
      local_124 = 0;
      uVar14 = seval_to_int32((Value *)(*plVar18 + 0x90),&local_124);
      iVar4 = local_124;
      uVar15 = seval_to_std_string((Value *)(*plVar18 + 0xa0),(basic_string *)&local_120);
      local_124 = 0;
      uVar16 = seval_to_int32((Value *)(*plVar18 + 0xb0),&local_124);
      bVar1 = (uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & uVar12 & uVar13 & uVar14 &
               uVar15 & uVar16 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0xc6,"js_universe_Downloader2_add");
        __android_log_print(6,"jswrapper","js_universe_Downloader2_add : Error processing arguments"
                           );
      }
      else {
        universe::Downloader2::add
                  (this,(basic_string *)&local_b0,(basic_string *)&local_c8,
                   (basic_string *)&local_e0,uStack_e8,local_f0,local_f8,local_fc[0],local_100[0],
                   local_104[0],iVar4,(basic_string *)&local_120,local_124);
      }
      if ((local_120 & 1) != 0) {
        operator_delete(local_110);
      }
      if ((local_e0 & 1) != 0) {
        operator_delete(local_d0);
      }
      if ((local_c8 & 1) != 0) {
        operator_delete(local_b8);
      }
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      if (!bVar1) goto LAB_0096704c;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 202): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar18[1] - *plVar18) >> 4,0xc);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Downloader2_add",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0xcd);
LAB_0096704c:
  pVVar19 = (Value *)se::State::rval(aSStack_98);
  se::internal::setReturnValue(pVVar19,param_1);
  se::State::~State(aSStack_98);
  pVVar3 = local_158;
  pVVar19 = local_150;
  if (local_158 != (Value *)0x0) {
    while (pVVar19 != pVVar3) {
      se::Value::~Value(pVVar19 + -0x10);
      pVVar19 = pVVar19 + -0x10;
    }
    local_150 = pVVar3;
    operator_delete(local_158);
  }
  v8::HandleScope::~HandleScope(aHStack_140);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

