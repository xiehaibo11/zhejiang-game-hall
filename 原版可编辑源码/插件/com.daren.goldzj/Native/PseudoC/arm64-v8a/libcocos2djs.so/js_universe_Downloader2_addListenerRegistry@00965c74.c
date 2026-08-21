
/* js_universe_Downloader2_addListenerRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Downloader2_addListenerRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  int iVar4;
  void *pvVar5;
  Downloader2 *this;
  undefined8 *puVar6;
  Value *pVVar7;
  Object *pOVar8;
  ulong uVar9;
  Object *pOVar10;
  long *plVar11;
  code *pcVar12;
  Isolate *pIVar13;
  Value *local_178;
  Value *local_170;
  undefined8 local_168;
  HandleScope aHStack_160 [24];
  State aSStack_148 [40];
  Value aVStack_120 [16];
  Value aVStack_110 [16];
  Value aVStack_100 [16];
  Value aVStack_f0 [16];
  Value aVStack_e0 [16];
  Value aVStack_d0 [16];
  long alStack_c0 [4];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_160,pIVar13);
  local_178 = (Value *)0x0;
  local_170 = (Value *)0x0;
  local_168 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_178,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_178);
  pvVar5 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_148,pvVar5,(vector *)&local_178);
  this = (Downloader2 *)se::State::nativeThisObject(aSStack_148);
  if (this == (Downloader2 *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x23,"js_universe_Downloader2_addListener");
    __android_log_print(6,"jswrapper","js_universe_Downloader2_addListener : Invalid Native Object")
    ;
  }
  else {
    puVar6 = (undefined8 *)se::State::args(aSStack_148);
    pVVar7 = (Value *)*puVar6;
    if (puVar6[1] - (long)pVVar7 == 0x10) {
      local_a0 = (long *)0x0;
      if (pVVar7[8] == (Value)0x5) {
        pOVar8 = (Object *)se::Value::toObject(pVVar7);
        uVar9 = se::Object::isFunction(pOVar8);
        plVar11 = local_a0;
        if ((uVar9 & 1) == 0) {
          local_a0 = (long *)0x0;
          if (alStack_c0 == plVar11) {
            pcVar12 = *(code **)(*plVar11 + 0x20);
          }
          else {
            if (plVar11 == (long *)0x0) goto LAB_00965f24;
            pcVar12 = *(code **)(*plVar11 + 0x28);
          }
          (*pcVar12)();
        }
        else {
          pOVar8 = (Object *)se::State::thisObject(aSStack_148);
          se::Value::Value(aVStack_f0,pOVar8,false);
          se::Value::Value(aVStack_100,(Value *)*puVar6);
          pOVar8 = (Object *)se::Value::toObject(aVStack_f0);
          pOVar10 = (Object *)se::Value::toObject(aVStack_100);
          se::Object::attachObject(pOVar8,pOVar10);
          se::Value::Value(aVStack_120,aVStack_f0);
          se::Value::Value(aVStack_110,aVStack_100);
          se::Value::Value(aVStack_e0,aVStack_120);
          se::Value::Value(aVStack_d0,aVStack_110);
          local_70 = (long *)0x0;
          plVar11 = operator_new(0x28);
          *plVar11 = (long)&PTR_FUN_01c698a0;
          se::Value::Value((Value *)(plVar11 + 1),aVStack_e0);
          se::Value::Value((Value *)(plVar11 + 3),aVStack_d0);
          local_70 = plVar11;
          FUN_0097a034(alStack_90,alStack_c0);
          if (alStack_90 == local_70) {
            pcVar12 = *(code **)(*local_70 + 0x20);
LAB_00965ef0:
            (*pcVar12)();
          }
          else if (local_70 != (long *)0x0) {
            pcVar12 = *(code **)(*local_70 + 0x28);
            goto LAB_00965ef0;
          }
          se::Value::~Value(aVStack_d0);
          se::Value::~Value(aVStack_e0);
          se::Value::~Value(aVStack_110);
          se::Value::~Value(aVStack_120);
          se::Value::~Value(aVStack_100);
          se::Value::~Value(aVStack_f0);
        }
      }
      else {
        local_a0 = (long *)0x0;
      }
LAB_00965f24:
      iVar4 = universe::Downloader2::addListener(this,(function *)alStack_c0);
      pVVar7 = (Value *)se::State::rval(aSStack_148);
      uVar9 = int32_to_seval(iVar4,pVVar7);
      bVar1 = (uVar9 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x4d,"js_universe_Downloader2_addListener");
        __android_log_print(6,"jswrapper",
                            "js_universe_Downloader2_addListener : Error processing arguments");
      }
      if (alStack_c0 == local_a0) {
        pcVar12 = *(code **)(*local_a0 + 0x20);
LAB_00965fc4:
        (*pcVar12)();
      }
      else if (local_a0 != (long *)0x0) {
        pcVar12 = *(code **)(*local_a0 + 0x28);
        goto LAB_00965fc4;
      }
      if (!bVar1) goto LAB_00965ff8;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 80): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(puVar6[1] - (long)pVVar7) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_Downloader2_addListener",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x53);
LAB_00965ff8:
  pVVar7 = (Value *)se::State::rval(aSStack_148);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_148);
  pVVar3 = local_178;
  pVVar7 = local_170;
  if (local_178 != (Value *)0x0) {
    while (pVVar7 != pVVar3) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_170 = pVVar3;
    operator_delete(local_178);
  }
  v8::HandleScope::~HandleScope(aHStack_160);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

