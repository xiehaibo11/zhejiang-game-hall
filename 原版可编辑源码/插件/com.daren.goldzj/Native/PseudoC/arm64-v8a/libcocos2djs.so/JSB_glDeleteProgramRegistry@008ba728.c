
/* JSB_glDeleteProgramRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glDeleteProgramRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  void *pvVar4;
  undefined8 *puVar5;
  Value *pVVar6;
  Object *this;
  long lVar7;
  Isolate *pIVar8;
  undefined4 uVar9;
  Value *local_a0;
  Value *local_98;
  undefined8 local_90;
  HandleScope aHStack_88 [24];
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_88,pIVar8);
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_a0);
  puVar5 = (undefined8 *)se::State::args(aSStack_70);
  pVVar6 = (Value *)*puVar5;
  if ((puVar5[1] - (long)pVVar6 & 0xffffffff0U) == 0x10) {
    if (pVVar6[8] == (Value)0x5) {
      this = (Object *)se::Value::toObject(pVVar6);
      lVar7 = se::Object::getPrivateData(this);
      if (lVar7 == 0) {
LAB_008ba884:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x48a,"JSB_glDeleteProgram");
        __android_log_print(6,"jswrapper",&DAT_0190552e);
        goto LAB_008ba8c8;
      }
      uVar9 = *(undefined4 *)(lVar7 + 0xc);
      bVar2 = false;
    }
    else {
      if (1 < (byte)pVVar6[8]) goto LAB_008ba884;
      lVar7 = 0;
      uVar9 = 0;
      bVar2 = true;
    }
    glDeleteProgram(uVar9);
    FUN_008d3790(&DAT_01d36ea8,uVar9);
    if (!bVar2) {
      *(undefined4 *)(lVar7 + 0xc) = 0;
    }
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x486,"JSB_glDeleteProgram");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
LAB_008ba8c8:
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "JSB_glDeleteProgram",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x492);
  }
  pVVar6 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_a0;
  pVVar6 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar6 != pVVar3) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_98 = pVVar3;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

