
/* JSB_glDrawArraysRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glDrawArraysRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  long *plVar8;
  Value *pVVar9;
  long lVar10;
  Isolate *pIVar11;
  Value *local_b8;
  Value *local_b0;
  undefined8 local_a8;
  HandleScope aHStack_a0 [28];
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  uint local_74;
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
  if ((plVar8[1] - *plVar8 & 0xffffffff0U) == 0x30) {
    uVar3 = seval_to_uint32((Value *)*plVar8,&local_74);
    uVar4 = seval_to_int32((Value *)(*plVar8 + 0x10),&local_78);
    uVar5 = seval_to_int32((Value *)(*plVar8 + 0x20),&local_7c);
    if ((uVar3 & uVar4 & uVar5 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0x52c,"JSB_glDrawArrays");
      __android_log_print(6,"jswrapper",&DAT_0190552e);
    }
    else if (local_78 < 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0x52e,"JSB_glDrawArrays");
      DAT_01d36f40 = 0x501;
    }
    else {
      local_80 = 0;
      glGetIntegerv(0x8b8d,&local_80);
      if (local_80 < 1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x533,"JSB_glDrawArrays");
      }
      else {
        local_84 = 0;
        glGetBufferParameteriv(0x8892,0x8764,&local_84);
        iVar6 = cocos2d::ccGetBufferDataSize();
        if (local_7c < 1) {
          local_78 = 0;
        }
        lVar10 = ((long)local_7c + (long)local_78) * (long)iVar6;
        if (lVar10 - local_84 == 0 || lVar10 < local_84) {
          glDrawArrays(local_74);
          goto LAB_008bbfb8;
        }
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x539,"JSB_glDrawArrays");
      }
      DAT_01d36f40 = 0x502;
    }
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x525,"JSB_glDrawArrays");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glDrawArrays",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x53f);
LAB_008bbfb8:
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
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

