
/* JSB_glPixelStoreiRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glPixelStoreiRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  long *plVar6;
  Value *pVVar7;
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
  pvVar5 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar5,(vector *)&local_98);
  plVar6 = (long *)se::State::args(aSStack_60);
  pVVar7 = (Value *)*plVar6;
  if ((plVar6[1] - (long)pVVar7 & 0xffffffff0U) == 0x20) {
    if ((byte)pVVar7[8] < 2) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0x72a,"JSB_glPixelStorei");
    }
    else {
      uVar3 = seval_to_uint32(pVVar7,&local_64);
      uVar4 = seval_to_int32((Value *)(*plVar6 + 0x10),&local_68);
      if ((uVar3 & uVar4 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x72e,"JSB_glPixelStorei");
        __android_log_print(6,"jswrapper",&DAT_0190552e);
        goto LAB_008c0168;
      }
      if ((((local_64 - 0x9240 < 4) && (local_64 - 0x9240 != 2)) || (local_64 == 0xcf5)) ||
         (local_64 == 0xd05)) {
        cocos2d::ccPixelStorei(local_64,local_68);
        goto LAB_008c0194;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0x732,"JSB_glPixelStorei");
    }
    DAT_01d36f40 = 0x500;
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x726,"JSB_glPixelStorei");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
LAB_008c0168:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glPixelStorei",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x737);
LAB_008c0194:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_98;
  pVVar7 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
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

