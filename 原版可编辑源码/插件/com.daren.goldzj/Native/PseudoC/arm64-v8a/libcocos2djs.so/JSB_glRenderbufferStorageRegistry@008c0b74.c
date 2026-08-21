
/* JSB_glRenderbufferStorageRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glRenderbufferStorageRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  long *plVar8;
  Value *pVVar9;
  Isolate *pIVar10;
  Value *local_b0;
  Value *local_a8;
  undefined8 local_a0;
  HandleScope aHStack_98 [24];
  int local_80;
  int iStack_7c;
  uint local_78;
  uint uStack_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar10);
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  local_a0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar7 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar7,(vector *)&local_b0);
  plVar8 = (long *)se::State::args(aSStack_70);
  if ((plVar8[1] - *plVar8 & 0xffffffff0U) == 0x40) {
    uVar3 = seval_to_uint32((Value *)*plVar8,&uStack_74);
    uVar4 = seval_to_uint32((Value *)(*plVar8 + 0x10),&local_78);
    uVar5 = seval_to_int32((Value *)(*plVar8 + 0x20),&iStack_7c);
    uVar6 = seval_to_int32((Value *)(*plVar8 + 0x30),&local_80);
    if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) != 0) {
      uVar3 = 0x88f0;
      if (local_78 != 0x84f9) {
        uVar3 = local_78;
      }
      glRenderbufferStorage(uStack_74,uVar3,iStack_7c,local_80);
      goto LAB_008c0d54;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x780,"JSB_glRenderbufferStorage");
    __android_log_print(6,"jswrapper",&DAT_0190552e);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x778,"JSB_glRenderbufferStorage");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glRenderbufferStorage",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x786);
LAB_008c0d54:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_b0;
  pVVar9 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_a8 = pVVar2;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

