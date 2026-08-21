
/* js_cocos2dx_dragonbones_CCArmatureDisplay_removeDBEventListenerRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_CCArmatureDisplay_removeDBEventListenerRegistry
               (FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  Object *pOVar9;
  ulong uVar10;
  Object *pOVar11;
  Value *pVVar12;
  code *pcVar13;
  Isolate *pIVar14;
  Value *local_1a0;
  Value *local_198;
  Value *local_190;
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
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_188,pIVar14);
  local_1a0 = operator_new(0xa0);
  local_190 = local_1a0 + 0xa0;
  local_198 = local_1a0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_1a0);
  pvVar5 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_158,pvVar5,(vector *)&local_1a0);
  plVar6 = (long *)se::State::nativeThisObject(aSStack_158);
  if (plVar6 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x1cd5,"js_cocos2dx_dragonbones_CCArmatureDisplay_removeDBEventListener");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_CCArmatureDisplay_removeDBEventListener : Invalid Native Object"
                       );
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_158);
    if (plVar7[1] - *plVar7 == 0x20) {
      local_170 = 0;
      uStack_168 = 0;
      local_160 = (void *)0x0;
      local_b0 = (long *)0x0;
      uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_170);
      if (*(char *)(*plVar7 + 0x18) == '\x05') {
        pOVar9 = (Object *)se::Value::toObject((Value *)(*plVar7 + 0x10));
        uVar10 = se::Object::isFunction(pOVar9);
        plVar4 = local_b0;
        if ((uVar10 & 1) == 0) {
          local_b0 = (long *)0x0;
          if (alStack_d0 == plVar4) {
            (**(code **)(*plVar4 + 0x20))();
          }
          else if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x28))();
            goto joined_r0x00cc7f4c;
          }
        }
        else {
          pOVar9 = (Object *)se::State::thisObject(aSStack_158);
          se::Value::Value(aVStack_100,pOVar9,false);
          se::Value::Value(aVStack_110,(Value *)(*plVar7 + 0x10));
          pOVar9 = (Object *)se::Value::toObject(aVStack_100);
          pOVar11 = (Object *)se::Value::toObject(aVStack_110);
          se::Object::attachObject(pOVar9,pOVar11);
          se::Value::Value(aVStack_130,aVStack_100);
          se::Value::Value(aVStack_120,aVStack_110);
          se::Value::Value(aVStack_f0,aVStack_130);
          se::Value::Value(aVStack_e0,aVStack_120);
          plVar7 = operator_new(0x28);
          *plVar7 = (long)&PTR_FUN_01c8df40;
          se::Value::Value((Value *)(plVar7 + 1),aVStack_f0);
          se::Value::Value((Value *)(plVar7 + 3),aVStack_e0);
          local_80 = plVar7;
          FUN_00cd7f88(alStack_a0,alStack_d0);
          if (alStack_a0 == local_80) {
            pcVar13 = *(code **)(*local_80 + 0x20);
LAB_00cc7f88:
            (*pcVar13)();
          }
          else if (local_80 != (long *)0x0) {
            pcVar13 = *(code **)(*local_80 + 0x28);
            goto LAB_00cc7f88;
          }
          se::Value::~Value(aVStack_e0);
          se::Value::~Value(aVStack_f0);
          se::Value::~Value(aVStack_120);
          se::Value::~Value(aVStack_130);
          se::Value::~Value(aVStack_110);
          se::Value::~Value(aVStack_100);
        }
        if ((uVar8 & 1) != 0) goto LAB_00cc7fc0;
LAB_00cc7ff0:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,0x1cfb,
                            "js_cocos2dx_dragonbones_CCArmatureDisplay_removeDBEventListener");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_dragonbones_CCArmatureDisplay_removeDBEventListener : Error processing arguments"
                           );
        bVar2 = false;
      }
      else {
        local_b0 = (long *)0x0;
joined_r0x00cc7f4c:
        if ((uVar8 & 1) == 0) goto LAB_00cc7ff0;
LAB_00cc7fc0:
        (**(code **)(*plVar6 + 0x50))(plVar6,&local_170,alStack_d0);
        bVar2 = true;
      }
      if (alStack_d0 == local_b0) {
        pcVar13 = *(code **)(*local_b0 + 0x20);
LAB_00cc8060:
        (*pcVar13)();
      }
      else if (local_b0 != (long *)0x0) {
        pcVar13 = *(code **)(*local_b0 + 0x28);
        goto LAB_00cc8060;
      }
      if ((local_170 & 1) != 0) {
        operator_delete(local_160);
      }
      if (bVar2) goto LAB_00cc80a4;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 7423): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar7[1] - *plVar7) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_CCArmatureDisplay_removeDBEventListener",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x1d02);
LAB_00cc80a4:
  pVVar12 = (Value *)se::State::rval(aSStack_158);
  se::internal::setReturnValue(pVVar12,param_1);
  se::State::~State(aSStack_158);
  pVVar3 = local_1a0;
  pVVar12 = local_198;
  if (local_1a0 != (Value *)0x0) {
    while (pVVar12 != pVVar3) {
      se::Value::~Value(pVVar12 + -0x10);
      pVVar12 = pVVar12 + -0x10;
    }
    local_198 = pVVar3;
    operator_delete(local_1a0);
  }
  v8::HandleScope::~HandleScope(aHStack_188);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

