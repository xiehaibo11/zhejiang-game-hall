
/* JSB_glBufferSubDataRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glBufferSubDataRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  long *plVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  Value *local_b8;
  Value *local_b0;
  undefined8 local_a8;
  HandleScope aHStack_a0 [28];
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar9);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_b8);
  plVar7 = (long *)se::State::args(aSStack_70);
  if ((plVar7[1] - *plVar7 & 0xffffffff0U) == 0x30) {
    local_80 = 0;
    local_78 = 0;
    local_84 = 0;
    uVar3 = seval_to_uint32((Value *)*plVar7,(uint *)((long)&local_78 + 4));
    uVar4 = seval_to_int32((Value *)(*plVar7 + 0x10),(int *)&local_78);
    uVar5 = FUN_008d33a4(*plVar7 + 0x20,&local_84,&local_80);
    if ((uVar3 & uVar4 & uVar5 & 1) != 0) {
      glBufferSubData(local_78._4_4_,(long)(int)local_78,(long)local_84,local_80);
      goto LAB_008b7710;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x334,"JSB_glBufferSubData");
    __android_log_print(6,"jswrapper",&DAT_0190552e);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x329,"JSB_glBufferSubData");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glBufferSubData",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x33a);
LAB_008b7710:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_b8;
  pVVar8 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar8 != pVVar2) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
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

