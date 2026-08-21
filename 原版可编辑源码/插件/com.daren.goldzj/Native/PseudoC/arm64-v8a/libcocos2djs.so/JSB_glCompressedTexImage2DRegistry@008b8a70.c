
/* JSB_glCompressedTexImage2DRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glCompressedTexImage2DRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  long *plVar11;
  Value *pVVar12;
  Isolate *pIVar13;
  Value *local_e8;
  Value *local_e0;
  undefined8 local_d8;
  HandleScope aHStack_d0 [28];
  undefined4 local_b4;
  undefined8 local_b0;
  int local_a8;
  int iStack_a4;
  int local_a0;
  uint uStack_9c;
  int local_98;
  uint uStack_94;
  State aSStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_d0,pIVar13);
  local_e8 = (Value *)0x0;
  local_e0 = (Value *)0x0;
  local_d8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_e8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_e8);
  pvVar10 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar10,(vector *)&local_e8);
  plVar11 = (long *)se::State::args(aSStack_90);
  if ((plVar11[1] - *plVar11 & 0xffffffff0U) == 0x70) {
    uVar3 = seval_to_uint32((Value *)*plVar11,&uStack_94);
    uVar4 = seval_to_int32((Value *)(*plVar11 + 0x10),&local_98);
    uVar5 = seval_to_uint32((Value *)(*plVar11 + 0x20),&uStack_9c);
    uVar6 = seval_to_int32((Value *)(*plVar11 + 0x30),&local_a0);
    uVar7 = seval_to_int32((Value *)(*plVar11 + 0x40),&iStack_a4);
    uVar8 = seval_to_int32((Value *)(*plVar11 + 0x50),&local_a8);
    uVar9 = FUN_008d33a4(*plVar11 + 0x60,&local_b4,&local_b0);
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & 1) != 0) {
      glCompressedTexImage2D
                (uStack_94,local_98,uStack_9c,local_a0,iStack_a4,local_a8,local_b4,local_b0);
      goto LAB_008b8ca0;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x3d2,"JSB_glCompressedTexImage2D");
    __android_log_print(6,"jswrapper",&DAT_0190552e);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x3c6,"JSB_glCompressedTexImage2D");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glCompressedTexImage2D",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x3d8);
LAB_008b8ca0:
  pVVar12 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar12,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_e8;
  pVVar12 = local_e0;
  if (local_e8 != (Value *)0x0) {
    while (pVVar12 != pVVar2) {
      se::Value::~Value(pVVar12 + -0x10);
      pVVar12 = pVVar12 + -0x10;
    }
    local_e0 = pVVar2;
    operator_delete(local_e8);
  }
  v8::HandleScope::~HandleScope(aHStack_d0);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

