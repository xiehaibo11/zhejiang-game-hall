
/* js_video_VideoPlayer_addEventListenerRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_video_VideoPlayer_addEventListenerRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  Object *pOVar8;
  ulong uVar9;
  Object *pOVar10;
  Value *pVVar11;
  code *pcVar12;
  Isolate *pIVar13;
  Value *local_1a0;
  Value *local_198;
  undefined8 local_190;
  HandleScope aHStack_188 [24];
  ulong local_170;
  undefined8 uStack_168;
  void *local_160;
  State aSStack_158 [40];
  Value aVStack_130 [16];
  Value aVStack_120 [16];
  Value aVStack_110 [16];
  Value aVStack_100 [16];
  Value aVStack_f0 [16];
  Value aVStack_e0 [16];
  long alStack_d0 [4];
  long *local_b0;
  long alStack_a0 [4];
  long *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_188,pIVar13);
  local_1a0 = (Value *)0x0;
  local_198 = (Value *)0x0;
  local_190 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_1a0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_1a0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_158,pvVar4,(vector *)&local_1a0);
  plVar5 = (long *)se::State::nativeThisObject(aSStack_158);
  if (plVar5 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp"
                        ,0x7c,"js_video_VideoPlayer_addEventListener");
    __android_log_print(6,"jswrapper",
                        "js_video_VideoPlayer_addEventListener : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_158);
    if (plVar6[1] - *plVar6 == 0x20) {
      local_170 = 0;
      uStack_168 = 0;
      local_160 = (void *)0x0;
      local_b0 = (long *)0x0;
      uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_170);
      if (*(char *)(*plVar6 + 0x18) == '\x05') {
        pOVar8 = (Object *)se::Value::toObject((Value *)(*plVar6 + 0x10));
        uVar9 = se::Object::isFunction(pOVar8);
        if ((uVar9 & 1) == 0) goto LAB_0097fc3c;
        pOVar8 = (Object *)se::State::thisObject(aSStack_158);
        se::Value::Value(aVStack_100,pOVar8,false);
        se::Value::Value(aVStack_110,(Value *)(*plVar6 + 0x10));
        pOVar8 = (Object *)se::Value::toObject(aVStack_100);
        pOVar10 = (Object *)se::Value::toObject(aVStack_110);
        se::Object::attachObject(pOVar8,pOVar10);
        se::Value::Value(aVStack_130,aVStack_100);
        se::Value::Value(aVStack_120,aVStack_110);
        se::Value::Value(aVStack_f0,aVStack_130);
        se::Value::Value(aVStack_e0,aVStack_120);
        local_80 = (long *)0x0;
        plVar6 = operator_new(0x28);
        *plVar6 = (long)&PTR_FUN_01c6a0e8;
        se::Value::Value((Value *)(plVar6 + 1),aVStack_f0);
        se::Value::Value((Value *)(plVar6 + 3),aVStack_e0);
        local_80 = plVar6;
        FUN_008feca4(alStack_a0,alStack_d0);
        if (alStack_a0 == local_80) {
          pcVar12 = *(code **)(*local_80 + 0x20);
LAB_0097fc98:
          (*pcVar12)();
        }
        else if (local_80 != (long *)0x0) {
          pcVar12 = *(code **)(*local_80 + 0x28);
          goto LAB_0097fc98;
        }
        se::Value::~Value(aVStack_e0);
        se::Value::~Value(aVStack_f0);
        se::Value::~Value(aVStack_120);
        se::Value::~Value(aVStack_130);
        se::Value::~Value(aVStack_110);
        se::Value::~Value(aVStack_100);
        if ((uVar7 & 1) != 0) goto LAB_0097fc70;
LAB_0097fcd0:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp"
                            ,0x9e,"js_video_VideoPlayer_addEventListener");
        __android_log_print(6,"jswrapper",
                            "js_video_VideoPlayer_addEventListener : Error processing arguments");
        bVar2 = false;
      }
      else {
LAB_0097fc3c:
        plVar6 = local_b0;
        local_b0 = (long *)0x0;
        if (alStack_d0 == plVar6) {
          pcVar12 = *(code **)(*plVar6 + 0x20);
LAB_0097fc68:
          (*pcVar12)();
        }
        else if (plVar6 != (long *)0x0) {
          pcVar12 = *(code **)(*plVar6 + 0x28);
          goto LAB_0097fc68;
        }
        if ((uVar7 & 1) == 0) goto LAB_0097fcd0;
LAB_0097fc70:
        (**(code **)(*plVar5 + 0x50))(plVar5,&local_170,alStack_d0);
        bVar2 = true;
      }
      if (alStack_d0 == local_b0) {
        pcVar12 = *(code **)(*local_b0 + 0x20);
LAB_0097fd40:
        (*pcVar12)();
      }
      else if (local_b0 != (long *)0x0) {
        pcVar12 = *(code **)(*local_b0 + 0x28);
        goto LAB_0097fd40;
      }
      if ((local_170 & 1) != 0) {
        operator_delete(local_160);
      }
      if (bVar2) goto LAB_0097fd84;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp, 162): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar6[1] - *plVar6) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_video_VideoPlayer_addEventListener",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_video_auto.cpp"
                      ,0xa5);
LAB_0097fd84:
  pVVar11 = (Value *)se::State::rval(aSStack_158);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_158);
  pVVar3 = local_1a0;
  pVVar11 = local_198;
  if (local_1a0 != (Value *)0x0) {
    while (pVVar11 != pVVar3) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
    }
    local_198 = pVVar3;
    operator_delete(local_1a0);
  }
  v8::HandleScope::~HandleScope(aHStack_188);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

