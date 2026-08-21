
/* JSB_glGetShaderInfoLogRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glGetShaderInfoLogRegistry(FunctionCallbackInfo *param_1)

{
  Value VVar1;
  long lVar2;
  Value *pVVar3;
  int iVar4;
  void *pvVar5;
  long *plVar6;
  Value *pVVar7;
  Object *this;
  long lVar8;
  char *pcVar9;
  undefined4 uVar10;
  Isolate *pIVar11;
  ulong uVar12;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [28];
  int local_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar11);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar5,(vector *)&local_a8);
  plVar6 = (long *)se::State::args(aSStack_70);
  if ((plVar6[1] - *plVar6 & 0xffffffff0U) == 0x10) {
    pVVar7 = (Value *)se::State::rval(aSStack_70);
    se::Value::setNull(pVVar7);
    VVar1 = ((Value *)*plVar6)[8];
    if (VVar1 == (Value)0x5) {
      this = (Object *)se::Value::toObject((Value *)*plVar6);
      lVar8 = se::Object::getPrivateData(this);
      if (lVar8 == 0) {
LAB_008cd62c:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0xd0c,"JSB_glGetShaderInfoLog");
        __android_log_print(6,"jswrapper",&DAT_0190552e);
        goto LAB_008cd670;
      }
      uVar10 = *(undefined4 *)(lVar8 + 0xc);
    }
    else {
      if (1 < (byte)VVar1) goto LAB_008cd62c;
      uVar10 = 0;
    }
    glGetShaderiv(uVar10,0x8b84,&local_74);
    if ((local_74 < 1) || (iVar4 = glGetError(), iVar4 != 0)) {
      pVVar7 = (Value *)se::State::rval(aSStack_70);
      se::Value::setString(pVVar7,"");
    }
    else {
      uVar12 = (ulong)local_74;
      if ((long)uVar12 < 0) {
        uVar12 = 0xffffffffffffffff;
      }
      pcVar9 = operator_new__(uVar12,(nothrow_t *)&std::nothrow);
      glGetShaderInfoLog(uVar10,local_74,0,pcVar9);
      pVVar7 = (Value *)se::State::rval(aSStack_70);
      se::Value::setString(pVVar7,pcVar9);
      if (pcVar9 != (char *)0x0) {
        operator_delete__(pcVar9);
      }
    }
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xd06,"JSB_glGetShaderInfoLog");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
LAB_008cd670:
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "JSB_glGetShaderInfoLog",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xd20);
  }
  pVVar7 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_a8;
  pVVar7 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar7 != pVVar3) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_a0 = pVVar3;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

