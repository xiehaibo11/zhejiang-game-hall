
/* JSB_glBindAttribLocationRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glBindAttribLocationRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  void *pvVar7;
  long *plVar8;
  Value *pVVar9;
  Object *this;
  long lVar10;
  Isolate *pIVar11;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  uint local_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar11);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar7 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar7,(vector *)&local_c0);
  plVar8 = (long *)se::State::args(aSStack_70);
  if ((plVar8[1] - *plVar8 & 0xffffffff0U) == 0x30) {
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
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
    bVar4 = seval_to_uint32(pVVar9 + 0x10,&local_74);
    bVar5 = seval_to_std_string((Value *)(*plVar8 + 0x20),(basic_string *)&local_90);
    if ((!bVar3 & bVar4 & bVar5) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0x237,"JSB_glBindAttribLocation");
      __android_log_print(6,"jswrapper",&DAT_0190552e);
      bVar3 = false;
    }
    else {
      if (lVar10 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(lVar10 + 0xc);
      }
      pvVar7 = (void *)((ulong)&local_90 | 1);
      if ((local_90 & 1) != 0) {
        pvVar7 = local_80;
      }
      glBindAttribLocation(uVar6,local_74,pvVar7);
      bVar3 = true;
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if (bVar3) goto LAB_008b55f0;
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x22e,"JSB_glBindAttribLocation");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glBindAttribLocation",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x23e);
LAB_008b55f0:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_c0;
  pVVar9 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_b8 = pVVar2;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

