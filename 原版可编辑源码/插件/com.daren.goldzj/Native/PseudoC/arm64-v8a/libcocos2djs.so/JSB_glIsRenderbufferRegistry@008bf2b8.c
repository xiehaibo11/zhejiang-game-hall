
/* JSB_glIsRenderbufferRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glIsRenderbufferRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  undefined8 *puVar6;
  Value *pVVar7;
  Object *this;
  long lVar8;
  long lVar9;
  Isolate *pIVar10;
  Value *local_90;
  Value *local_88;
  undefined8 local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar10);
  local_90 = (Value *)0x0;
  local_88 = (Value *)0x0;
  local_80 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar5 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar5,(vector *)&local_90);
  puVar6 = (undefined8 *)se::State::args(aSStack_60);
  pVVar7 = (Value *)*puVar6;
  if ((puVar6[1] - (long)pVVar7 & 0xffffffff0U) == 0x10) {
    if (pVVar7[8] == (Value)0x5) {
      this = (Object *)se::Value::toObject(pVVar7);
      lVar8 = se::Object::getPrivateData(this);
      if (lVar8 == 0) {
LAB_008bf424:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x6c8,"JSB_glIsRenderbuffer");
        __android_log_print(6,"jswrapper",&DAT_0190552e);
        goto LAB_008bf468;
      }
      lVar9 = __dynamic_cast(lVar8,&PTR_PTR_01c67690,&PTR_PTR_01c67728,0);
      if (lVar9 == 0) goto LAB_008bf40c;
      cVar4 = glIsRenderbuffer(*(undefined4 *)(lVar8 + 0xc));
      bVar3 = cVar4 == '\x01';
    }
    else {
      if (1 < (byte)pVVar7[8]) goto LAB_008bf424;
LAB_008bf40c:
      bVar3 = false;
    }
    pVVar7 = (Value *)se::State::rval(aSStack_60);
    se::Value::setBoolean(pVVar7,bVar3);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x6c4,"JSB_glIsRenderbuffer");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
LAB_008bf468:
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "JSB_glIsRenderbuffer",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x6d2);
  }
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar7 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
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

