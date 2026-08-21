
/* JSB_glStencilFuncRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glStencilFuncRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
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
  uint local_7c;
  int local_78;
  uint uStack_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
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
  se::State::State(aSStack_70,pvVar6,(vector *)&local_b0);
  plVar7 = (long *)se::State::args(aSStack_70);
  if ((plVar7[1] - *plVar7 & 0xffffffff0U) == 0x30) {
    uVar3 = seval_to_uint32((Value *)*plVar7,&uStack_74);
    uVar4 = seval_to_int32((Value *)(*plVar7 + 0x10),&local_78);
    uVar5 = seval_to_uint32((Value *)(*plVar7 + 0x20),&local_7c);
    if ((uVar3 & uVar4 & uVar5 & 1) != 0) {
      glStencilFunc(uStack_74,local_78,local_7c);
      goto LAB_008c155c;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x7bc,"JSB_glStencilFunc");
    __android_log_print(6,"jswrapper",&DAT_0190552e);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x7b5,"JSB_glStencilFunc");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glStencilFunc",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x7c2);
LAB_008c155c:
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

