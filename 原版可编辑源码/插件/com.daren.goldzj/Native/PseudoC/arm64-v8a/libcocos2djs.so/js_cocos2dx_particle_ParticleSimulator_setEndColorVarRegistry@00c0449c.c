
/* js_cocos2dx_particle_ParticleSimulator_setEndColorVarRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_particle_ParticleSimulator_setEndColorVarRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  Value *pVVar9;
  char *pcVar10;
  ulong uVar11;
  Isolate *pIVar12;
  Value *local_c0;
  Value *local_b8;
  Value *local_b0;
  HandleScope aHStack_a8 [24];
  uchar local_90 [4];
  uchar local_8c [4];
  uchar local_88 [4];
  uchar local_84 [4];
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar12);
  local_c0 = operator_new(0xa0);
  local_b0 = local_c0 + 0xa0;
  local_b8 = local_c0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar3,(vector *)&local_c0);
  lVar4 = se::State::nativeThisObject(aSStack_80);
  if (lVar4 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_particle_auto.cpp"
                        ,0x87,"js_cocos2dx_particle_ParticleSimulator_setEndColorVar");
    pcVar10 = "js_cocos2dx_particle_ParticleSimulator_setEndColorVar : Invalid Native Object";
LAB_00c04670:
    __android_log_print(6,"jswrapper",pcVar10);
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_80);
    uVar11 = plVar5[1] - *plVar5;
    if (uVar11 == 0x40) {
      uVar11 = seval_to_uint8((Value *)*plVar5,local_84);
      uVar6 = seval_to_uint8((Value *)(*plVar5 + 0x10),local_88);
      uVar7 = seval_to_uint8((Value *)(*plVar5 + 0x20),local_8c);
      uVar8 = seval_to_uint8((Value *)(*plVar5 + 0x30),local_90);
      if (((((uVar11 & 1) != 0) && ((uVar6 & 1) != 0)) && ((uVar7 & 1) != 0)) && ((uVar8 & 1) != 0))
      {
        *(uchar *)(lVar4 + 0x108) = local_84[0];
        *(uchar *)(lVar4 + 0x109) = local_88[0];
        *(uchar *)(lVar4 + 0x10a) = local_8c[0];
        *(uchar *)(lVar4 + 0x10b) = local_90[0];
        goto LAB_00c046a8;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_particle_auto.cpp"
                          ,0x94,"js_cocos2dx_particle_ParticleSimulator_setEndColorVar");
      pcVar10 = "js_cocos2dx_particle_ParticleSimulator_setEndColorVar : Error processing arguments"
      ;
      goto LAB_00c04670;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_particle_auto.cpp, 152): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar11 >> 4,4);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_particle_ParticleSimulator_setEndColorVar",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_particle_auto.cpp"
                      ,0x9b);
LAB_00c046a8:
  pVVar9 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_c0;
  pVVar9 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_b8 = pVVar2;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

