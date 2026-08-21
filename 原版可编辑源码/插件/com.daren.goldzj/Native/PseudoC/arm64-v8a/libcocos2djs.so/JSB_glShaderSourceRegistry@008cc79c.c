
/* JSB_glShaderSourceRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glShaderSourceRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  byte bVar4;
  undefined4 uVar5;
  void *pvVar6;
  long *plVar7;
  Value *pVVar8;
  Object *this;
  long lVar9;
  Isolate *pIVar10;
  Value *local_b0;
  Value *local_a8;
  undefined8 local_a0;
  HandleScope aHStack_98 [24];
  ulong local_80;
  undefined8 local_78;
  void *local_70;
  State aSStack_68 [40];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar10);
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  local_a0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar6 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_68,pvVar6,(vector *)&local_b0);
  plVar7 = (long *)se::State::args(aSStack_68);
  if ((plVar7[1] - *plVar7 & 0xffffffff0U) == 0x20) {
    local_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    pVVar8 = (Value *)*plVar7;
    if (pVVar8[8] == (Value)0x5) {
      this = (Object *)se::Value::toObject(pVVar8);
      lVar9 = se::Object::getPrivateData(this);
      pVVar8 = (Value *)*plVar7;
      bVar3 = lVar9 == 0;
    }
    else {
      bVar3 = 1 < (byte)pVVar8[8];
      lVar9 = 0;
    }
    bVar4 = seval_to_std_string(pVVar8 + 0x10,(basic_string *)&local_80);
    if ((!bVar3 & bVar4) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0xc8f,"JSB_glShaderSource");
      __android_log_print(6,"jswrapper",&DAT_0190552e);
      bVar3 = false;
    }
    else {
      if (lVar9 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(lVar9 + 0xc);
      }
      local_40 = (void *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        local_40 = local_70;
      }
      glShaderSource(uVar5,1,&local_40,0);
      bVar3 = true;
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (bVar3) goto LAB_008cc9b8;
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xc87,"JSB_glShaderSource");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glShaderSource",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0xca6);
LAB_008cc9b8:
  pVVar8 = (Value *)se::State::rval(aSStack_68);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_68);
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
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

