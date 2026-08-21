
/* JSB_glFramebufferRenderbufferRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glFramebufferRenderbufferRegistry(FunctionCallbackInfo *param_1)

{
  byte bVar1;
  long lVar2;
  Value *pVVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  void *pvVar8;
  long *plVar9;
  Object *this;
  long lVar10;
  Value *pVVar11;
  undefined4 uVar12;
  Isolate *pIVar13;
  Value *local_b0;
  Value *local_a8;
  undefined8 local_a0;
  HandleScope aHStack_98 [28];
  uint local_7c;
  uint local_78;
  uint local_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar13);
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  local_a0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar8 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar8,(vector *)&local_b0);
  plVar9 = (long *)se::State::args(aSStack_70);
  if ((plVar9[1] - *plVar9 & 0xffffffff0U) == 0x40) {
    bVar5 = seval_to_uint32((Value *)*plVar9,&local_74);
    bVar6 = seval_to_uint32((Value *)(*plVar9 + 0x10),&local_78);
    bVar7 = seval_to_uint32((Value *)(*plVar9 + 0x20),&local_7c);
    bVar1 = *(byte *)(*plVar9 + 0x38);
    if (bVar1 == 5) {
      this = (Object *)se::Value::toObject((Value *)(*plVar9 + 0x30));
      lVar10 = se::Object::getPrivateData(this);
      if (lVar10 != 0) {
        bVar4 = true;
        goto LAB_008bd0fc;
      }
    }
    else {
      bVar4 = bVar1 < 2;
      lVar10 = 0;
LAB_008bd0fc:
      if ((bVar5 & bVar6 & bVar7 & bVar4) != 0) {
        if (lVar10 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined4 *)(lVar10 + 0xc);
        }
        if (local_74 == 0x8d40) {
          if ((int)local_78 < 0x8d00) {
            if ((local_78 == 0x821a) || (local_78 == 0x8ce0)) {
LAB_008bd2a0:
              if (local_78 == 0x821a) {
                glFramebufferRenderbuffer(0x8d40,0x8d00,local_7c,uVar12);
                glFramebufferRenderbuffer(0x8d40,0x8d20,local_7c,uVar12);
              }
              else {
                glFramebufferRenderbuffer(0x8d40,local_78,local_7c,uVar12);
              }
              goto LAB_008bd204;
            }
          }
          else if ((local_78 == 0x8d00) || (local_78 == 0x8d20)) goto LAB_008bd2a0;
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                              ,0x5d0,"JSB_glFramebufferRenderbuffer");
        }
        else {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                              ,0x5ce,"JSB_glFramebufferRenderbuffer");
        }
        DAT_01d36f40 = 0x500;
        goto LAB_008bd1d8;
      }
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x5cb,"JSB_glFramebufferRenderbuffer");
    __android_log_print(6,"jswrapper",&DAT_0190552e);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x5c3,"JSB_glFramebufferRenderbuffer");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
LAB_008bd1d8:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glFramebufferRenderbuffer",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x5d5);
LAB_008bd204:
  pVVar11 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_b0;
  pVVar11 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar11 != pVVar3) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
    }
    local_a8 = pVVar3;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

