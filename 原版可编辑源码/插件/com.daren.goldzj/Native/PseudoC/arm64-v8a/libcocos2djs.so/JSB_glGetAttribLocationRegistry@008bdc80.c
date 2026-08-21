
/* JSB_glGetAttribLocationRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glGetAttribLocationRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  long *plVar8;
  Value *pVVar9;
  Object *this;
  long lVar10;
  Isolate *pIVar11;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar11);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar7 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar7,(vector *)&local_a8);
  plVar8 = (long *)se::State::args(aSStack_60);
  if ((plVar8[1] - *plVar8 & 0xffffffff0U) == 0x20) {
    local_70 = 0;
    local_68 = (void *)0x0;
    local_78 = 0;
    pVVar9 = (Value *)*plVar8;
    if (pVVar9[8] == (Value)0x5) {
      this = (Object *)se::Value::toObject(pVVar9);
      lVar10 = se::Object::getPrivateData(this);
      pVVar9 = (Value *)*plVar8;
      bVar3 = lVar10 == 0;
    }
    else {
      bVar3 = 1 < (byte)pVVar9[8];
      lVar10 = 0;
    }
    bVar4 = seval_to_std_string(pVVar9 + 0x10,(basic_string *)&local_78);
    if ((!bVar3 & bVar4) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0x622,"JSB_glGetAttribLocation");
      __android_log_print(6,"jswrapper",&DAT_0190552e);
      bVar3 = false;
    }
    else {
      if (lVar10 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(lVar10 + 0xc);
      }
      pvVar7 = (void *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        pvVar7 = local_68;
      }
      iVar6 = glGetAttribLocation(uVar5,pvVar7);
      pVVar9 = (Value *)se::State::rval(aSStack_60);
      se::Value::setInt32(pVVar9,iVar6);
      bVar3 = true;
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if (bVar3) goto LAB_008bde5c;
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x61c,"JSB_glGetAttribLocation");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glGetAttribLocation",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x629);
LAB_008bde5c:
  pVVar9 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_a8;
  pVVar9 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_a0 = pVVar2;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

