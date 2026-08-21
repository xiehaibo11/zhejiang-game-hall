
/* JSB_glFramebufferTexture2DRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glFramebufferTexture2DRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  void *pvVar8;
  long *plVar9;
  Object *this;
  long lVar10;
  Value *pVVar11;
  undefined4 uVar12;
  long lVar13;
  Isolate *pIVar14;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  int local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar14);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar8 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar8,(vector *)&local_c0);
  plVar9 = (long *)se::State::args(aSStack_80);
  if ((plVar9[1] - *plVar9 & 0xffffffff0U) == 0x50) {
    bVar4 = seval_to_uint32((Value *)*plVar9,&local_84);
    bVar5 = seval_to_uint32((Value *)(*plVar9 + 0x10),&local_88);
    bVar6 = seval_to_uint32((Value *)(*plVar9 + 0x20),&local_8c);
    lVar13 = *plVar9;
    if (*(byte *)(lVar13 + 0x38) == 5) {
      this = (Object *)se::Value::toObject((Value *)(lVar13 + 0x30));
      lVar10 = se::Object::getPrivateData(this);
      lVar13 = *plVar9;
      bVar3 = lVar10 == 0;
    }
    else {
      bVar3 = 1 < *(byte *)(lVar13 + 0x38);
      lVar10 = 0;
    }
    bVar7 = seval_to_int32((Value *)(lVar13 + 0x40),&local_90);
    if ((bVar4 & bVar5 & bVar6 & !bVar3 & bVar7) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0x5e5,"JSB_glFramebufferTexture2D");
      __android_log_print(6,"jswrapper",&DAT_0190552e);
    }
    else {
      if (lVar10 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)(lVar10 + 0xc);
      }
      if (local_84 == 0x8d40) {
        if (((local_88 == 0x8ce0) || (local_88 == 0x8d00)) || (local_88 == 0x8d20)) {
          if (local_90 == 0) {
            glFramebufferTexture2D(0x8d40,local_88,local_8c,uVar12,0);
            goto LAB_008bd658;
          }
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                              ,0x5eb,"JSB_glFramebufferTexture2D");
          DAT_01d36f40 = 0x501;
          goto LAB_008bd62c;
        }
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x5ea,"JSB_glFramebufferTexture2D");
      }
      else {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x5e9,"JSB_glFramebufferTexture2D");
      }
      DAT_01d36f40 = 0x500;
    }
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x5dc,"JSB_glFramebufferTexture2D");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
LAB_008bd62c:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glFramebufferTexture2D",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x5f1);
LAB_008bd658:
  pVVar11 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_c0;
  pVVar11 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar11 != pVVar2) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
    }
    local_b8 = pVVar2;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

