
/* JSB_glDetachShaderRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glDetachShaderRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  undefined8 *puVar5;
  Value *pVVar6;
  Object *pOVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  Isolate *pIVar12;
  Value *local_90;
  Value *local_88;
  undefined8 local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar12);
  local_90 = (Value *)0x0;
  local_88 = (Value *)0x0;
  local_80 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar4 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_90);
  puVar5 = (undefined8 *)se::State::args(aSStack_60);
  pVVar6 = (Value *)*puVar5;
  if ((puVar5[1] - (long)pVVar6 & 0xffffffff0U) == 0x20) {
    if (pVVar6[8] == (Value)0x5) {
      pOVar7 = (Object *)se::Value::toObject(pVVar6);
      lVar8 = se::Object::getPrivateData(pOVar7);
      pVVar6 = (Value *)*puVar5;
      bVar3 = lVar8 == 0;
    }
    else {
      bVar3 = 1 < (byte)pVVar6[8];
      lVar8 = 0;
    }
    if (pVVar6[0x18] == (Value)0x5) {
      pOVar7 = (Object *)se::Value::toObject(pVVar6 + 0x10);
      lVar9 = se::Object::getPrivateData(pOVar7);
      if ((lVar9 != 0) && (!bVar3)) {
LAB_008bb704:
        if (lVar8 == 0) {
          uVar11 = 0;
          if (lVar9 != 0) goto LAB_008bb710;
LAB_008bb720:
          uVar10 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(lVar8 + 0xc);
          if (lVar9 == 0) goto LAB_008bb720;
LAB_008bb710:
          uVar10 = *(undefined4 *)(lVar9 + 0xc);
        }
        glDetachShader(uVar11,uVar10);
        goto LAB_008bb72c;
      }
    }
    else {
      lVar9 = 0;
      if (!bVar3 && (byte)pVVar6[0x18] < 2) goto LAB_008bb704;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x4f1,"JSB_glDetachShader");
    __android_log_print(6,"jswrapper",&DAT_0190552e);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x4ea,"JSB_glDetachShader");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glDetachShader",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x4fa);
LAB_008bb72c:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar6 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_88 = pVVar2;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

