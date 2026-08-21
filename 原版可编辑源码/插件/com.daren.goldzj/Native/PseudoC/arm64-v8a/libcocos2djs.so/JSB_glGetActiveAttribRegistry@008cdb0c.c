
/* JSB_glGetActiveAttribRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glGetActiveAttribRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  byte bVar4;
  void *pvVar5;
  undefined8 *puVar6;
  Value *pVVar7;
  Object *pOVar8;
  long lVar9;
  char *pcVar10;
  Isolate *pIVar11;
  undefined4 uVar12;
  ulong uVar13;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  State aSStack_80 [40];
  Value aVStack_58 [16];
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
  pvVar5 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar5,(vector *)&local_c0);
  puVar6 = (undefined8 *)se::State::args(aSStack_80);
  pVVar7 = (Value *)*puVar6;
  if ((puVar6[1] - (long)pVVar7 & 0xffffffff0U) == 0x20) {
    if (pVVar7[8] == (Value)0x5) {
      pOVar8 = (Object *)se::Value::toObject(pVVar7);
      lVar9 = se::Object::getPrivateData(pOVar8);
      pVVar7 = (Value *)*puVar6;
      bVar3 = lVar9 == 0;
    }
    else {
      bVar3 = 1 < (byte)pVVar7[8];
      lVar9 = 0;
    }
    bVar4 = seval_to_int32(pVVar7 + 0x10,&local_84);
    if ((!bVar3 & bVar4) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0xd51,"JSB_glGetActiveAttrib");
      __android_log_print(6,"jswrapper",&DAT_0190552e);
    }
    else {
      pVVar7 = (Value *)se::State::rval(aSStack_80);
      se::Value::setNull(pVVar7);
      if (-1 < local_84) {
        if (lVar9 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined4 *)(lVar9 + 0xc);
        }
        glGetProgramiv(uVar12,0x8b8a,&local_88);
        uVar13 = (ulong)local_88;
        if ((long)uVar13 < 0) {
          uVar13 = 0xffffffffffffffff;
        }
        pcVar10 = operator_new__(uVar13,(nothrow_t *)&std::nothrow);
        local_90 = -1;
        local_8c = -1;
        glGetActiveAttrib(uVar12,local_84,local_88,0,&local_8c,&local_90,pcVar10);
        if ((local_8c == -1) || (local_90 == -1)) {
          pVVar7 = (Value *)se::State::rval(aSStack_80);
          se::Value::setNull(pVVar7);
        }
        else {
          pOVar8 = (Object *)se::Object::createObjectWithClass(DAT_01d36f38);
          pVVar7 = (Value *)se::State::rval(aSStack_80);
          se::Value::setObject(pVVar7,pOVar8,true);
          se::RefCounter::decRef((RefCounter *)pOVar8);
          se::Value::Value(aVStack_58,local_8c);
          se::Object::setProperty(pOVar8,"size",aVStack_58);
          se::Value::~Value(aVStack_58);
          se::Value::Value(aVStack_58,local_90);
          se::Object::setProperty(pOVar8,"type",aVStack_58);
          se::Value::~Value(aVStack_58);
          se::Value::Value(aVStack_58,pcVar10);
          se::Object::setProperty(pOVar8,"name",aVStack_58);
          se::Value::~Value(aVStack_58);
        }
        if (pcVar10 != (char *)0x0) {
          operator_delete__(pcVar10);
        }
        goto LAB_008cdd1c;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0xd54,"JSB_glGetActiveAttrib");
      DAT_01d36f40 = 0x501;
    }
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xd49,"JSB_glGetActiveAttrib");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glGetActiveAttrib",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0xd6f);
LAB_008cdd1c:
  pVVar7 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_c0;
  pVVar7 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
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

