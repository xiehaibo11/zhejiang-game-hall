
/* JSB_glGetShaderParameterRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glGetShaderParameterRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  byte bVar3;
  void *pvVar4;
  long *plVar5;
  Value *pVVar6;
  Object *this;
  long lVar7;
  Isolate *pIVar8;
  Value *local_98;
  Value *local_90;
  undefined8 local_88;
  HandleScope aHStack_80 [24];
  int local_68;
  uint local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar8);
  local_98 = (Value *)0x0;
  local_90 = (Value *)0x0;
  local_88 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_98,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_98);
  plVar5 = (long *)se::State::args(aSStack_60);
  if ((plVar5[1] - *plVar5 & 0xffffffff0U) == 0x20) {
    pVVar6 = (Value *)se::State::rval(aSStack_60);
    se::Value::setNull(pVVar6);
    pVVar6 = (Value *)*plVar5;
    if ((byte)pVVar6[8] < 2) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0xcb2,"JSB_glGetShaderParameter");
      __android_log_print(6,"jswrapper",&DAT_0190552e);
    }
    else {
      if (pVVar6[8] == (Value)0x5) {
        this = (Object *)se::Value::toObject(pVVar6);
        lVar7 = se::Object::getPrivateData(this);
        bVar3 = seval_to_uint32((Value *)(*plVar5 + 0x10),&local_64);
        if ((lVar7 != 0 & bVar3) != 0) {
          local_68 = 0;
          glGetShaderiv(*(undefined4 *)(lVar7 + 0xc),local_64,&local_68);
          pVVar6 = (Value *)se::State::rval(aSStack_60);
          if ((local_64 | 1) == 0x8b81) {
            se::Value::setBoolean(pVVar6,local_68 != 0);
          }
          else {
            se::Value::setInt32(pVVar6,local_68);
          }
          goto LAB_008ccd14;
        }
      }
      else {
        seval_to_uint32(pVVar6 + 0x10,&local_64);
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0xcb5,"JSB_glGetShaderParameter");
      __android_log_print(6,"jswrapper",&DAT_0190552e);
    }
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xcab,"JSB_glGetShaderParameter");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glGetShaderParameter",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0xcc5);
LAB_008ccd14:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar6 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_90 = pVVar2;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

