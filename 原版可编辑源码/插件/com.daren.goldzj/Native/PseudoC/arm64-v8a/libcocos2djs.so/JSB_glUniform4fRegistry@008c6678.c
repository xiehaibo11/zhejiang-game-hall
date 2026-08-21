
/* JSB_glUniform4fRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glUniform4fRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  long *plVar9;
  Value *pVVar10;
  Isolate *pIVar11;
  Value *local_c8;
  Value *local_c0;
  undefined8 local_b8;
  HandleScope aHStack_b0 [28];
  float local_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  int local_84;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b0,pIVar11);
  local_c8 = (Value *)0x0;
  local_c0 = (Value *)0x0;
  local_b8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c8);
  pvVar8 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar8,(vector *)&local_c8);
  plVar9 = (long *)se::State::args(aSStack_80);
  if ((plVar9[1] - *plVar9 & 0xffffffff0U) == 0x50) {
    uVar3 = seval_to_int32((Value *)*plVar9,&local_84);
    uVar4 = seval_to_float((Value *)(*plVar9 + 0x10),&fStack_88);
    uVar5 = seval_to_float((Value *)(*plVar9 + 0x20),&local_8c);
    uVar6 = seval_to_float((Value *)(*plVar9 + 0x30),&fStack_90);
    uVar7 = seval_to_float((Value *)(*plVar9 + 0x40),&local_94);
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & 1) != 0) {
      glUniform4f(fStack_88,local_8c,fStack_90,local_94,local_84);
      goto LAB_008c6868;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x9eb,"JSB_glUniform4f");
    __android_log_print(6,"jswrapper",&DAT_0190552e);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x9e2,"JSB_glUniform4f");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glUniform4f",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x9f1);
LAB_008c6868:
  pVVar10 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_c8;
  pVVar10 = local_c0;
  if (local_c8 != (Value *)0x0) {
    while (pVVar10 != pVVar2) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_c0 = pVVar2;
    operator_delete(local_c8);
  }
  v8::HandleScope::~HandleScope(aHStack_b0);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

