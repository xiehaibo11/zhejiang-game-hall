
/* js_cocos2dx_particle_ParticleSimulator_updateUVsRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_particle_ParticleSimulator_updateUVsRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  Value *local_a8;
  Value *local_a0;
  Value *local_98;
  HandleScope aHStack_90 [24];
  float *local_78;
  float *local_70;
  undefined8 local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar9);
  local_a8 = operator_new(0xa0);
  local_98 = local_a8 + 0xa0;
  local_a0 = local_a8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_a8);
  lVar5 = se::State::nativeThisObject(aSStack_60);
  if (lVar5 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_particle_auto.cpp"
                        ,0x112,"js_cocos2dx_particle_ParticleSimulator_updateUVs");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_particle_ParticleSimulator_updateUVs : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_60);
    if (plVar6[1] - *plVar6 == 0x10) {
      local_78 = (float *)0x0;
      local_70 = (float *)0x0;
      local_68 = 0;
      uVar7 = seval_to_std_vector_float((Value *)*plVar6,(vector *)&local_78);
      if ((uVar7 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_particle_auto.cpp"
                            ,0x119,"js_cocos2dx_particle_ParticleSimulator_updateUVs");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_particle_ParticleSimulator_updateUVs : Error processing arguments"
                           );
        bVar2 = false;
      }
      else {
        if ((vector<float,std::__ndk1::allocator<float>> *)&local_78 !=
            (vector<float,std::__ndk1::allocator<float>> *)(lVar5 + 0xb8)) {
          std::__ndk1::vector<float,std::__ndk1::allocator<float>>::assign<float*>
                    ((vector<float,std::__ndk1::allocator<float>> *)(lVar5 + 0xb8),local_78,local_70
                    );
        }
        bVar2 = true;
      }
      if (local_78 != (float *)0x0) {
        local_70 = local_78;
        operator_delete(local_78);
      }
      if (bVar2) goto LAB_00c05658;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_particle_auto.cpp, 285): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar6[1] - *plVar6) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_particle_ParticleSimulator_updateUVs",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_particle_auto.cpp"
                      ,0x120);
LAB_00c05658:
  pVVar8 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_a8;
  pVVar8 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_a0 = pVVar3;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

