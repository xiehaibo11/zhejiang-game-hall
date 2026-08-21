
/* JSB_glGetTexParameterfvRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glGetTexParameterfvRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  long *plVar6;
  Value *pVVar7;
  Isolate *pIVar8;
  Value *local_a0;
  Value *local_98;
  undefined8 local_90;
  HandleScope aHStack_88 [28];
  float local_6c;
  uint local_68;
  uint local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_88,pIVar8);
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  pvVar5 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar5,(vector *)&local_a0);
  plVar6 = (long *)se::State::args(aSStack_60);
  if ((plVar6[1] - *plVar6 & 0xffffffff0U) == 0x20) {
    uVar3 = seval_to_uint32((Value *)*plVar6,&local_64);
    uVar4 = seval_to_uint32((Value *)(*plVar6 + 0x10),&local_68);
    if ((uVar3 & uVar4 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0xe16,"JSB_glGetTexParameterfv");
      __android_log_print(6,"jswrapper","JSB_glGetTexParameterfv: Error processing arguments");
    }
    else {
      if ((local_64 == 0xde1) || (local_64 == 0x8513)) {
        if (local_68 >> 2 == 0xa00) {
          glGetTexParameterfv(local_64,local_68,&local_6c);
          pVVar7 = (Value *)se::State::rval(aSStack_60);
          se::Value::setFloat(pVVar7,local_6c);
          goto LAB_008cef14;
        }
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0xe1a,"JSB_glGetTexParameterfv");
      }
      else {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0xe18,"JSB_glGetTexParameterfv");
      }
      DAT_01d36f40 = 0x500;
    }
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xe0e,"JSB_glGetTexParameterfv");
    __android_log_print(6,"jswrapper","JSB_glGetTexParameterfv: Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glGetTexParameterfv",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0xe22);
LAB_008cef14:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_a0;
  pVVar7 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_98 = pVVar2;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

