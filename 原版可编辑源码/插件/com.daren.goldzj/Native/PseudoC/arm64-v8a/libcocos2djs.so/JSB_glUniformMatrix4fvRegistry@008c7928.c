
/* JSB_glUniformMatrix4fvRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glUniformMatrix4fvRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  long *plVar8;
  Value *pVVar9;
  Isolate *pIVar10;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  ushort local_90 [2];
  int local_8c;
  State aSStack_88 [40];
  void *local_60;
  ulong local_58;
  char local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar10);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar7 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_88,pvVar7,(vector *)&local_c0);
  plVar8 = (long *)se::State::args(aSStack_88);
  if ((plVar8[1] - *plVar8 & 0xffffffff0U) == 0x30) {
    uVar4 = seval_to_int32((Value *)*plVar8,&local_8c);
    uVar5 = seval_to_uint16((Value *)(*plVar8 + 0x10),local_90);
    local_60 = (void *)0x0;
    local_58 = 0;
    local_50 = '\0';
    uVar6 = FUN_008d3f94(*plVar8 + 0x20,&local_60);
    if ((uVar4 & uVar5 & uVar6 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0xa70,"JSB_glUniformMatrix4fv");
      __android_log_print(6,"jswrapper",&DAT_0190552e);
joined_r0x008c7aec:
      bVar2 = false;
    }
    else {
      if (local_90[0] != 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0xa72,"JSB_glUniformMatrix4fv");
LAB_008c7be4:
        DAT_01d36f40 = 0x501;
        goto joined_r0x008c7aec;
      }
      if ((local_58 & 0xf) != 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0xa74,"JSB_glUniformMatrix4fv");
        goto LAB_008c7be4;
      }
      glUniformMatrix4fv(local_8c,local_58 >> 4,0,local_60);
      bVar2 = true;
    }
    if (local_50 != '\0') {
      free(local_60);
    }
    if (bVar2) goto LAB_008c7b28;
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xa68,"JSB_glUniformMatrix4fv");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glUniformMatrix4fv",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0xa7a);
LAB_008c7b28:
  pVVar9 = (Value *)se::State::rval(aSStack_88);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_88);
  pVVar3 = local_c0;
  pVVar9 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar9 != pVVar3) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_b8 = pVVar3;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

