
/* WARNING: Type propagation algorithm not settling */
/* js_universe_Downloader2_addProgressListenerRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_universe_Downloader2_addProgressListenerRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  int iVar4;
  void *pvVar5;
  Downloader2 *this;
  long *plVar6;
  Object *pOVar7;
  ulong uVar8;
  Object *pOVar9;
  Value *pVVar10;
  ulong uVar11;
  code *pcVar12;
  Isolate *pIVar13;
  Value *local_188;
  Value *local_180;
  undefined8 local_178;
  HandleScope aHStack_170 [24];
  State aSStack_158 [40];
  Value aVStack_130 [16];
  Value aVStack_120 [16];
  Value aVStack_110 [16];
  Value aVStack_100 [16];
  Value aVStack_f0 [16];
  Value aVStack_e0 [16];
  long alStack_d0 [4];
  long *local_b0;
  long local_a0 [4];
  long *local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_170,pIVar13);
  local_188 = (Value *)0x0;
  local_180 = (Value *)0x0;
  local_178 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_188,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_188);
  pvVar5 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_158,pvVar5,(vector *)&local_188);
  this = (Downloader2 *)se::State::nativeThisObject(aSStack_158);
  if (this == (Downloader2 *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0xe7,"js_universe_Downloader2_addProgressListener");
    __android_log_print(6,"jswrapper",
                        "js_universe_Downloader2_addProgressListener : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_158);
    uVar11 = plVar6[1] - *plVar6;
    if (uVar11 == 0x20) {
      local_b0 = (long *)0x0;
      local_a0[0]._0_4_ = 0;
      uVar11 = seval_to_int32((Value *)*plVar6,(int *)local_a0);
      iVar4 = (int)local_a0[0];
      if (*(char *)(*plVar6 + 0x18) == '\x05') {
        pOVar7 = (Object *)se::Value::toObject((Value *)(*plVar6 + 0x10));
        uVar8 = se::Object::isFunction(pOVar7);
        if ((uVar8 & 1) == 0) goto LAB_009677a4;
        pOVar7 = (Object *)se::State::thisObject(aSStack_158);
        se::Value::Value(aVStack_100,pOVar7,false);
        se::Value::Value(aVStack_110,(Value *)(*plVar6 + 0x10));
        pOVar7 = (Object *)se::Value::toObject(aVStack_100);
        pOVar9 = (Object *)se::Value::toObject(aVStack_110);
        se::Object::attachObject(pOVar7,pOVar9);
        se::Value::Value(aVStack_130,aVStack_100);
        se::Value::Value(aVStack_120,aVStack_110);
        se::Value::Value(aVStack_f0,aVStack_130);
        se::Value::Value(aVStack_e0,aVStack_120);
        local_80 = (long *)0x0;
        plVar6 = operator_new(0x28);
        *plVar6 = (long)&PTR_FUN_01c69930;
        se::Value::Value((Value *)(plVar6 + 1),aVStack_f0);
        se::Value::Value((Value *)(plVar6 + 3),aVStack_e0);
        local_80 = plVar6;
        FUN_0097a520(local_a0,alStack_d0);
        if (local_a0 == local_80) {
          pcVar12 = *(code **)(*local_80 + 0x20);
LAB_009677f8:
          (*pcVar12)();
        }
        else if (local_80 != (long *)0x0) {
          pcVar12 = *(code **)(*local_80 + 0x28);
          goto LAB_009677f8;
        }
        se::Value::~Value(aVStack_e0);
        se::Value::~Value(aVStack_f0);
        se::Value::~Value(aVStack_120);
        se::Value::~Value(aVStack_130);
        se::Value::~Value(aVStack_110);
        se::Value::~Value(aVStack_100);
        if ((uVar11 & 1) != 0) goto LAB_009677d8;
LAB_00967830:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x10e,"js_universe_Downloader2_addProgressListener");
        __android_log_print(6,"jswrapper",
                            "js_universe_Downloader2_addProgressListener : Error processing arguments"
                           );
        bVar2 = false;
      }
      else {
LAB_009677a4:
        plVar6 = local_b0;
        local_b0 = (long *)0x0;
        if (alStack_d0 == plVar6) {
          pcVar12 = *(code **)(*plVar6 + 0x20);
LAB_009677d0:
          (*pcVar12)();
        }
        else if (plVar6 != (long *)0x0) {
          pcVar12 = *(code **)(*plVar6 + 0x28);
          goto LAB_009677d0;
        }
        if ((uVar11 & 1) == 0) goto LAB_00967830;
LAB_009677d8:
        universe::Downloader2::addProgressListener(this,iVar4,(function *)alStack_d0);
        bVar2 = true;
      }
      if (alStack_d0 == local_b0) {
        pcVar12 = *(code **)(*local_b0 + 0x20);
LAB_009678a0:
        (*pcVar12)();
      }
      else if (local_b0 != (long *)0x0) {
        pcVar12 = *(code **)(*local_b0 + 0x28);
        goto LAB_009678a0;
      }
      if (bVar2) goto LAB_009678d4;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 274): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar11 >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Downloader2_addProgressListener",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x115);
LAB_009678d4:
  pVVar10 = (Value *)se::State::rval(aSStack_158);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_158);
  pVVar3 = local_188;
  pVVar10 = local_180;
  if (local_188 != (Value *)0x0) {
    while (pVVar10 != pVVar3) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_180 = pVVar3;
    operator_delete(local_188);
  }
  v8::HandleScope::~HandleScope(aHStack_170);
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

