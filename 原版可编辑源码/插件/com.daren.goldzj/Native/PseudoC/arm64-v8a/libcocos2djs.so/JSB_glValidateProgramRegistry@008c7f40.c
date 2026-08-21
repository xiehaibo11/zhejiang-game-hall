
/* JSB_glValidateProgramRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glValidateProgramRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  Value *pVVar6;
  Object *this;
  long lVar7;
  Isolate *pIVar8;
  Value *local_90;
  Value *local_88;
  undefined8 local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar8);
  local_90 = (Value *)0x0;
  local_88 = (Value *)0x0;
  local_80 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_90);
  puVar5 = (undefined8 *)se::State::args(aSStack_60);
  pVVar6 = (Value *)*puVar5;
  if ((puVar5[1] - (long)pVVar6 & 0xffffffff0U) == 0x10) {
    if (pVVar6[8] == (Value)0x5) {
      this = (Object *)se::Value::toObject(pVVar6);
      lVar7 = se::Object::getPrivateData(this);
      if (lVar7 == 0) {
LAB_008c806c:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0xa95,"JSB_glValidateProgram");
        __android_log_print(6,"jswrapper",&DAT_0190552e);
        goto LAB_008c80b0;
      }
      uVar3 = *(undefined4 *)(lVar7 + 0xc);
    }
    else {
      if (1 < (byte)pVVar6[8]) goto LAB_008c806c;
      uVar3 = 0;
    }
    glValidateProgram(uVar3);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xa91,"JSB_glValidateProgram");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
LAB_008c80b0:
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "JSB_glValidateProgram",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xa9b);
  }
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar6 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_88 = pVVar2;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

