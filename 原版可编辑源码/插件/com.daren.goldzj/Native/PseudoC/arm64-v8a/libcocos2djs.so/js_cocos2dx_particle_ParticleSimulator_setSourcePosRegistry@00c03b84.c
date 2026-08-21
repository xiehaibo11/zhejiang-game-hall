
/* js_cocos2dx_particle_ParticleSimulator_setSourcePosRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_particle_ParticleSimulator_setSourcePosRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  Value *pVVar8;
  char *pcVar9;
  ulong uVar10;
  Isolate *pIVar11;
  Value *local_b0;
  Value *local_a8;
  Value *local_a0;
  HandleScope aHStack_98 [28];
  float local_7c;
  undefined8 local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar11);
  local_b0 = operator_new(0xa0);
  local_a0 = local_b0 + 0xa0;
  local_a8 = local_b0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar3,(vector *)&local_b0);
  lVar4 = se::State::nativeThisObject(aSStack_70);
  if (lVar4 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_particle_auto.cpp"
                        ,0x37,"js_cocos2dx_particle_ParticleSimulator_setSourcePos");
    pcVar9 = "js_cocos2dx_particle_ParticleSimulator_setSourcePos : Invalid Native Object";
LAB_00c03d34:
    __android_log_print(6,"jswrapper",pcVar9);
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_70);
    uVar10 = plVar5[1] - *plVar5;
    if (uVar10 == 0x30) {
      local_78 = 0;
      local_7c = 0.0;
      uVar10 = seval_to_float((Value *)*plVar5,(float *)((long)&local_78 + 4));
      uVar6 = seval_to_float((Value *)(*plVar5 + 0x10),(float *)&local_78);
      uVar7 = seval_to_float((Value *)(*plVar5 + 0x20),&local_7c);
      if ((((uVar10 & 1) != 0) && ((uVar6 & 1) != 0)) && ((uVar7 & 1) != 0)) {
        *(undefined4 *)(lVar4 + 0xe4) = local_78._4_4_;
        *(float *)(lVar4 + 0xe8) = (float)local_78;
        *(float *)(lVar4 + 0xec) = local_7c;
        goto LAB_00c03d6c;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_particle_auto.cpp"
                          ,0x42,"js_cocos2dx_particle_ParticleSimulator_setSourcePos");
      pcVar9 = "js_cocos2dx_particle_ParticleSimulator_setSourcePos : Error processing arguments";
      goto LAB_00c03d34;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_particle_auto.cpp, 70): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar10 >> 4,3);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_particle_ParticleSimulator_setSourcePos",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_particle_auto.cpp"
                      ,0x49);
LAB_00c03d6c:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_b0;
  pVVar8 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar8 != pVVar2) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_a8 = pVVar2;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

