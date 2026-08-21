
/* js_cocos2dx_particle_ParticleSimulator_setStopCallbackRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_particle_ParticleSimulator_setStopCallbackRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  Value *pVVar6;
  Object *pOVar7;
  ulong uVar8;
  Object *pOVar9;
  long *plVar10;
  code *pcVar11;
  Isolate *pIVar12;
  Value *local_1a8;
  Value *local_1a0;
  Value *local_198;
  HandleScope aHStack_190 [24];
  State aSStack_178 [40];
  Value aVStack_150 [16];
  Value aVStack_140 [16];
  Value aVStack_130 [16];
  Value aVStack_120 [16];
  Value aVStack_110 [16];
  Value aVStack_100 [16];
  long local_f0 [4];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_190,pIVar12);
  local_1a8 = operator_new(0xa0);
  local_198 = local_1a8 + 0xa0;
  local_1a0 = local_1a8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_1a8);
  pvVar3 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_178,pvVar3,(vector *)&local_1a8);
  lVar4 = se::State::nativeThisObject(aSStack_178);
  if (lVar4 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_particle_auto.cpp"
                        ,0x1b4,"js_cocos2dx_particle_ParticleSimulator_setStopCallback");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_particle_ParticleSimulator_setStopCallback : Invalid Native Object"
                       );
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_178);
    pVVar6 = (Value *)*puVar5;
    if (puVar5[1] - (long)pVVar6 == 0x10) {
      local_a0 = (long *)0x0;
      if (pVVar6[8] == (Value)0x5) {
        pOVar7 = (Object *)se::Value::toObject(pVVar6);
        uVar8 = se::Object::isFunction(pOVar7);
        if ((uVar8 & 1) == 0) goto LAB_00c06910;
        pOVar7 = (Object *)se::State::thisObject(aSStack_178);
        se::Value::Value(aVStack_120,pOVar7,false);
        se::Value::Value(aVStack_130,(Value *)*puVar5);
        pOVar7 = (Object *)se::Value::toObject(aVStack_120);
        pOVar9 = (Object *)se::Value::toObject(aVStack_130);
        se::Object::attachObject(pOVar7,pOVar9);
        se::Value::Value(aVStack_150,aVStack_120);
        se::Value::Value(aVStack_140,aVStack_130);
        se::Value::Value(aVStack_110,aVStack_150);
        se::Value::Value(aVStack_100,aVStack_140);
        plVar10 = operator_new(0x28);
        *plVar10 = (long)&PTR_FUN_01c8cc20;
        se::Value::Value((Value *)(plVar10 + 1),aVStack_110);
        se::Value::Value((Value *)(plVar10 + 3),aVStack_100);
        local_70 = plVar10;
        FUN_008feca4(alStack_90,alStack_c0);
        if (alStack_90 == local_70) {
          pcVar11 = *(code **)(*local_70 + 0x20);
LAB_00c069fc:
          (*pcVar11)();
        }
        else if (local_70 != (long *)0x0) {
          pcVar11 = *(code **)(*local_70 + 0x28);
          goto LAB_00c069fc;
        }
        se::Value::~Value(aVStack_100);
        se::Value::~Value(aVStack_110);
        se::Value::~Value(aVStack_140);
        se::Value::~Value(aVStack_150);
        se::Value::~Value(aVStack_130);
        se::Value::~Value(aVStack_120);
        if (local_a0 == (long *)0x0) goto LAB_00c06914;
        if (alStack_c0 != local_a0) {
          local_d0 = (long *)(**(code **)(*local_a0 + 0x10))();
          if (local_d0 != (long *)0x0) goto LAB_00c06a7c;
          goto LAB_00c06918;
        }
        local_d0 = local_f0;
        (**(code **)(*local_a0 + 0x18))(local_a0,local_f0);
        if (local_d0 == (long *)0x0) goto LAB_00c06918;
LAB_00c06a7c:
        if (local_f0 == local_d0) {
          local_70 = alStack_90;
          (**(code **)(*local_d0 + 0x18))(local_d0,alStack_90);
        }
        else {
          local_70 = (long *)(**(code **)(*local_d0 + 0x10))();
        }
      }
      else {
LAB_00c06910:
        local_a0 = (long *)0x0;
LAB_00c06914:
        local_d0 = (long *)0x0;
LAB_00c06918:
        local_70 = (long *)0x0;
      }
      FUN_008feca4(alStack_90,lVar4 + 0x80);
      if (alStack_90 == local_70) {
        pcVar11 = *(code **)(*local_70 + 0x20);
LAB_00c06990:
        (*pcVar11)();
      }
      else if (local_70 != (long *)0x0) {
        pcVar11 = *(code **)(*local_70 + 0x28);
        goto LAB_00c06990;
      }
      if (local_f0 == local_d0) {
        pcVar11 = *(code **)(*local_d0 + 0x20);
LAB_00c069bc:
        (*pcVar11)();
      }
      else if (local_d0 != (long *)0x0) {
        pcVar11 = *(code **)(*local_d0 + 0x28);
        goto LAB_00c069bc;
      }
      if (alStack_c0 == local_a0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      else if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x28))();
      }
      goto LAB_00c068c8;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_particle_auto.cpp, 472): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(puVar5[1] - (long)pVVar6) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_particle_ParticleSimulator_setStopCallback",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_particle_auto.cpp"
                      ,0x1db);
LAB_00c068c8:
  pVVar6 = (Value *)se::State::rval(aSStack_178);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_178);
  pVVar2 = local_1a8;
  pVVar6 = local_1a0;
  if (local_1a8 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_1a0 = pVVar2;
    operator_delete(local_1a8);
  }
  v8::HandleScope::~HandleScope(aHStack_190);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

