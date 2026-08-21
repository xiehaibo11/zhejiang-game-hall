
/* JSB_glEnableRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glEnableRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  undefined8 *puVar4;
  Value *pVVar5;
  ulong uVar6;
  Isolate *pIVar7;
  Value *local_98;
  Value *local_90;
  undefined8 local_88;
  HandleScope aHStack_80 [28];
  uint local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar7);
  local_98 = (Value *)0x0;
  local_90 = (Value *)0x0;
  local_88 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_98,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_98);
  puVar4 = (undefined8 *)se::State::args(aSStack_60);
  pVVar5 = (Value *)*puVar4;
  if ((puVar4[1] - (long)pVVar5 & 0xffffffff0U) == 0x10) {
    if ((byte)pVVar5[8] < 2) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0x585,"JSB_glEnable");
    }
    else {
      uVar6 = seval_to_uint32(pVVar5,&local_64);
      if ((uVar6 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x588,"JSB_glEnable");
        __android_log_print(6,"jswrapper",&DAT_0190552e);
        goto LAB_008bc6d8;
      }
      if ((int)local_64 < 0xbe2) {
        if ((int)local_64 < 0xb90) {
          if ((local_64 == 0xb44) || (local_64 == 0xb71)) goto LAB_008bc858;
        }
        else if ((local_64 == 0xb90) || (local_64 == 0xbd0)) goto LAB_008bc858;
      }
      else if ((int)local_64 < 0x8037) {
        if ((local_64 == 0xbe2) || (local_64 == 0xc11)) goto LAB_008bc858;
      }
      else if ((local_64 == 0x8037) || ((local_64 == 0x809e || (local_64 == 0x80a0)))) {
LAB_008bc858:
        glEnable();
        goto LAB_008bc704;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0x58c,"JSB_glEnable");
    }
    DAT_01d36f40 = 0x500;
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x581,"JSB_glEnable");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
LAB_008bc6d8:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n","JSB_glEnable",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x592);
LAB_008bc704:
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar5 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
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

