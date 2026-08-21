
/* JSB_glUniform3ivRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glUniform3ivRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  long *plVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  Value *local_b0;
  Value *local_a8;
  undefined8 local_a0;
  HandleScope aHStack_98 [28];
  int local_7c;
  State aSStack_78 [40];
  void *local_50;
  ulong uStack_48;
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar9);
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  local_a0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar6 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_78,pvVar6,(vector *)&local_b0);
  plVar7 = (long *)se::State::args(aSStack_78);
  if ((plVar7[1] - *plVar7 & 0xffffffff0U) == 0x20) {
    uVar4 = seval_to_int32((Value *)*plVar7,&local_7c);
    local_50 = (void *)0x0;
    uStack_48 = 0;
    local_40 = '\0';
    uVar5 = FUN_008d4140(*plVar7 + 0x10,&local_50);
    bVar1 = (uVar4 & uVar5 & 1) == 0;
    if (bVar1) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0x9d5,"JSB_glUniform3iv");
      __android_log_print(6,"jswrapper",&DAT_0190552e);
    }
    else {
      glUniform3iv(local_7c,uStack_48 / 3,local_50);
    }
    if (local_40 != '\0') {
      free(local_50);
    }
    if (!bVar1) goto LAB_008c6518;
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x9ce,"JSB_glUniform3iv");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glUniform3iv",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x9db);
LAB_008c6518:
  pVVar8 = (Value *)se::State::rval(aSStack_78);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_78);
  pVVar3 = local_b0;
  pVVar8 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_a8 = pVVar3;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

