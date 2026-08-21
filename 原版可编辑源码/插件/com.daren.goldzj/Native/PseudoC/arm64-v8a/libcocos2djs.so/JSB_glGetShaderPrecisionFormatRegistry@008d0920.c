
/* JSB_glGetShaderPrecisionFormatRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glGetShaderPrecisionFormatRegistry(FunctionCallbackInfo *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  Value *pVVar4;
  void *pvVar5;
  long *plVar6;
  ulong uVar7;
  Object *pOVar8;
  Value *pVVar9;
  Isolate *pIVar10;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  Object *local_90;
  uint local_88;
  uint local_84;
  State aSStack_80 [40];
  Value aVStack_58 [16];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar10);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar5 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar5,(vector *)&local_c0);
  plVar6 = (long *)se::State::args(aSStack_80);
  if ((int)((ulong)(plVar6[1] - *plVar6) >> 4) < 2) {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp, 4192): Wrong argument count passed to gl.getParameter, expected: %d, get: %d\n"
                        ,1);
  }
  else {
    uVar7 = seval_to_uint32((Value *)*plVar6,&local_84);
    if ((uVar7 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0x1068,"JSB_glGetShaderPrecisionFormat");
      __android_log_print(6,"jswrapper","Convert shadertype failed!");
    }
    else {
      uVar7 = seval_to_uint32((Value *)(*plVar6 + 0x10),&local_88);
      if ((uVar7 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x106a,"JSB_glGetShaderPrecisionFormat");
        __android_log_print(6,"jswrapper","Convert precisiontype failed!");
      }
      else if ((local_84 | 1) == 0x8b31) {
        uVar1 = local_88 - 0x8df0;
        if (uVar1 < 6) {
          pOVar8 = (Object *)se::Object::createPlainObject();
          se::HandleObject::HandleObject((HandleObject *)&local_90,pOVar8);
          pOVar8 = local_90;
          uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
          se::Value::Value(aVStack_58,*(int *)(&DAT_01861ca4 + uVar7));
          se::Object::setProperty(pOVar8,"rangeMin",aVStack_58);
          iVar2 = *(int *)(&DAT_01861cbc + uVar7);
          se::Value::~Value(aVStack_58);
          pOVar8 = local_90;
          se::Value::Value(aVStack_58,iVar2);
          se::Object::setProperty(pOVar8,"rangeMax",aVStack_58);
          iVar2 = *(int *)(&DAT_01861cd4 + uVar7);
          se::Value::~Value(aVStack_58);
          se::Value::Value(aVStack_58,iVar2);
          se::Object::setProperty(local_90,"precision",aVStack_58);
          se::Value::~Value(aVStack_58);
          pVVar9 = (Value *)se::State::rval(aSStack_80);
          se::Value::setObject(pVVar9,(HandleObject *)&local_90,false);
          se::HandleObject::~HandleObject((HandleObject *)&local_90);
          goto LAB_008d0c04;
        }
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp, 4229): Unsupported precisiontype: %u\n"
                           );
      }
      else {
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp, 4205): Unsupported shadertype: %u\n"
                           );
      }
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glGetShaderPrecisionFormat",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x1091);
LAB_008d0c04:
  pVVar9 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_80);
  pVVar4 = local_c0;
  pVVar9 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar9 != pVVar4) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_b8 = pVVar4;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

