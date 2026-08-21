
/* JSB_glCopyTexSubImage2DRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glCopyTexSubImage2DRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  void *pvVar11;
  long *plVar12;
  Value *pVVar13;
  Isolate *pIVar14;
  Value *local_e0;
  Value *local_d8;
  undefined8 local_d0;
  HandleScope aHStack_c8 [24];
  int local_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int local_98;
  uint uStack_94;
  State aSStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c8,pIVar14);
  local_e0 = (Value *)0x0;
  local_d8 = (Value *)0x0;
  local_d0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_e0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_e0);
  pvVar11 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar11,(vector *)&local_e0);
  plVar12 = (long *)se::State::args(aSStack_90);
  if ((plVar12[1] - *plVar12 & 0xffffffff0U) == 0x80) {
    uVar3 = seval_to_uint32((Value *)*plVar12,&uStack_94);
    uVar4 = seval_to_int32((Value *)(*plVar12 + 0x10),&local_98);
    uVar5 = seval_to_int32((Value *)(*plVar12 + 0x20),&iStack_9c);
    uVar6 = seval_to_int32((Value *)(*plVar12 + 0x30),&local_a0);
    uVar7 = seval_to_int32((Value *)(*plVar12 + 0x40),&iStack_a4);
    uVar8 = seval_to_int32((Value *)(*plVar12 + 0x50),&local_a8);
    uVar9 = seval_to_int32((Value *)(*plVar12 + 0x60),&iStack_ac);
    uVar10 = seval_to_int32((Value *)(*plVar12 + 0x70),&local_b0);
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & 1) != 0) {
      glCopyTexSubImage2D(uStack_94,local_98,iStack_9c,local_a0,iStack_a4,local_a8,iStack_ac,
                          local_b0);
      goto LAB_008b96e8;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x422,"JSB_glCopyTexSubImage2D");
    __android_log_print(6,"jswrapper",&DAT_0190552e);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x416,"JSB_glCopyTexSubImage2D");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glCopyTexSubImage2D",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x428);
LAB_008b96e8:
  pVVar13 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar13,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_e0;
  pVVar13 = local_d8;
  if (local_e0 != (Value *)0x0) {
    while (pVVar13 != pVVar2) {
      se::Value::~Value(pVVar13 + -0x10);
      pVVar13 = pVVar13 + -0x10;
    }
    local_d8 = pVVar2;
    operator_delete(local_e0);
  }
  v8::HandleScope::~HandleScope(aHStack_c8);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

