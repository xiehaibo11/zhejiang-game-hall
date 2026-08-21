
/* JSB_glGetUniformLocationRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glGetUniformLocationRegistry(FunctionCallbackInfo *param_1)

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
  Value *local_b8;
  Value *local_b0;
  undefined8 local_a8;
  HandleScope aHStack_a0 [24];
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar11);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar7 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar7,(vector *)&local_b8);
  plVar8 = (long *)se::State::args(aSStack_70);
  if ((plVar8[1] - *plVar8 & 0xffffffff0U) == 0x20) {
    local_80 = 0;
    local_78 = (void *)0x0;
    local_88 = 0;
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
    bVar4 = seval_to_std_string(pVVar9 + 0x10,(basic_string *)&local_88);
    pVVar9 = (Value *)se::State::rval(aSStack_70);
    se::Value::setNull(pVVar9);
    if ((!bVar3 & bVar4) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0x64b,"JSB_glGetUniformLocation");
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
      pvVar7 = (void *)((ulong)&local_88 | 1);
      if ((local_88 & 1) != 0) {
        pvVar7 = local_78;
      }
      iVar6 = glGetUniformLocation(uVar5,pvVar7);
      if (-1 < iVar6) {
        pVVar9 = (Value *)se::State::rval(aSStack_70);
        se::Value::setInt32(pVVar9,iVar6);
      }
      bVar3 = true;
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if (bVar3) goto LAB_008be3d8;
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x643,"JSB_glGetUniformLocation");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glGetUniformLocation",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x657);
LAB_008be3d8:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_b8;
  pVVar9 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_b0 = pVVar2;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

