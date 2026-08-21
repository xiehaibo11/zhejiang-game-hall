
/* WARNING: Removing unreachable block (ram,0x008b905c) */
/* JSB_glCompressedTexSubImage2DRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glCompressedTexSubImage2DRegistry(FunctionCallbackInfo *param_1)

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
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  long *plVar13;
  Value *pVVar14;
  Isolate *pIVar15;
  Value *local_f0;
  Value *local_e8;
  undefined8 local_e0;
  HandleScope aHStack_d8 [28];
  undefined1 auStack_bc [4];
  undefined8 local_b8;
  int local_b0;
  uint uStack_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int local_98;
  uint uStack_94;
  State aSStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar15 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_d8,pIVar15);
  local_f0 = (Value *)0x0;
  local_e8 = (Value *)0x0;
  local_e0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_f0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_f0);
  pvVar12 = (void *)se::internal::getPrivate(pIVar15,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar12,(vector *)&local_f0);
  plVar13 = (long *)se::State::args(aSStack_90);
  if ((plVar13[1] - *plVar13 & 0xffffffff0U) == 0x90) {
    uVar3 = seval_to_uint32((Value *)*plVar13,&uStack_94);
    uVar4 = seval_to_int32((Value *)(*plVar13 + 0x10),&local_98);
    uVar5 = seval_to_int32((Value *)(*plVar13 + 0x20),&iStack_9c);
    uVar6 = seval_to_int32((Value *)(*plVar13 + 0x30),&local_a0);
    uVar7 = seval_to_int32((Value *)(*plVar13 + 0x40),&iStack_a4);
    uVar8 = seval_to_int32((Value *)(*plVar13 + 0x50),&local_a8);
    uVar9 = seval_to_uint32((Value *)(*plVar13 + 0x60),&uStack_ac);
    uVar10 = seval_to_int32((Value *)(*plVar13 + 0x70),&local_b0);
    uVar11 = FUN_008d33a4(*plVar13 + 0x80,auStack_bc,&local_b8);
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & 1) != 0) {
      glCompressedTexSubImage2D
                (uStack_94,local_98,iStack_9c,local_a0,iStack_a4,local_a8,uStack_ac,local_b0,
                 local_b8);
      goto LAB_008b8fc8;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x3ed,"JSB_glCompressedTexSubImage2D");
    __android_log_print(6,"jswrapper",&DAT_0190552e);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x3df,"JSB_glCompressedTexSubImage2D");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glCompressedTexSubImage2D",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x3f3);
LAB_008b8fc8:
  pVVar14 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar14,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_f0;
  pVVar14 = local_e8;
  if (local_f0 != (Value *)0x0) {
    while (pVVar14 != pVVar2) {
      se::Value::~Value(pVVar14 + -0x10);
      pVVar14 = pVVar14 + -0x10;
    }
    local_e8 = pVVar2;
    operator_delete(local_f0);
  }
  v8::HandleScope::~HandleScope(aHStack_d8);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

