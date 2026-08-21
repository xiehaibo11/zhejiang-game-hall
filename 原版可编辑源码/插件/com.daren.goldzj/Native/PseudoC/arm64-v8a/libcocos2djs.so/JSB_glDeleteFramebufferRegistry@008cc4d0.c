
/* JSB_glDeleteFramebufferRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glDeleteFramebufferRegistry(FunctionCallbackInfo *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  undefined8 *puVar5;
  Value *pVVar6;
  Object *this;
  long lVar7;
  Isolate *pIVar8;
  Value *local_98;
  Value *local_90;
  undefined8 local_88;
  HandleScope aHStack_80 [28];
  undefined4 local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
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
  puVar5 = (undefined8 *)se::State::args(aSStack_60);
  pVVar6 = (Value *)*puVar5;
  if ((puVar5[1] - (long)pVVar6 & 0xffffffff0U) == 0x10) {
    if (pVVar6[8] == (Value)0x5) {
      this = (Object *)se::Value::toObject(pVVar6);
      lVar7 = se::Object::getPrivateData(this);
      if (lVar7 != 0) {
LAB_008cc5f0:
        puVar1 = &DAT_01d36ef8;
        if (lVar7 != 0) {
          puVar1 = (undefined4 *)(lVar7 + 0xc);
        }
        local_64 = *puVar1;
        glDeleteFramebuffers(1,&local_64);
        FUN_008d3790(&DAT_01d36e80,local_64);
        *(undefined4 *)(lVar7 + 0xc) = DAT_01d36ef8;
        goto LAB_008cc6a8;
      }
    }
    else if ((byte)pVVar6[8] < 2) {
      lVar7 = 0;
      goto LAB_008cc5f0;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xc7b,"JSB_glDeleteFramebuffer");
    __android_log_print(6,"jswrapper",&DAT_0190552e);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xc76,"JSB_glDeleteFramebuffer");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glDeleteFramebuffer",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0xc82);
LAB_008cc6a8:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_98;
  pVVar6 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar6 != pVVar3) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_90 = pVVar3;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

