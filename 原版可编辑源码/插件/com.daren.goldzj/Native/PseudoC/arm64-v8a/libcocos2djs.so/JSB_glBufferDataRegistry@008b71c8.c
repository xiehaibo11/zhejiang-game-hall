
/* JSB_glBufferDataRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glBufferDataRegistry(FunctionCallbackInfo *param_1)

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
  HandleScope aHStack_a0 [24];
  undefined8 local_88;
  undefined8 local_80;
  uint local_74;
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
    local_74 = 0;
    local_88 = 0;
    local_80 = 0;
    uVar3 = seval_to_uint32((Value *)*plVar7,&local_74);
    pVVar8 = (Value *)(*plVar7 + 0x10);
    if (*(char *)(*plVar7 + 0x18) == '\x02') {
      uVar4 = seval_to_int32(pVVar8,(int *)&local_88);
    }
    else {
      uVar4 = FUN_008d33a4(pVVar8,&local_88,&local_80);
    }
    uVar5 = seval_to_uint32((Value *)(*plVar7 + 0x20),(uint *)((long)&local_88 + 4));
    if ((uVar3 & uVar4 & uVar5 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0x318,"JSB_glBufferData");
      __android_log_print(6,"jswrapper",&DAT_0190552e);
    }
    else {
      if ((local_74 | 1) == 0x8893) {
        if ((local_88._4_4_ - 0x88e0U < 9) &&
           ((1 << (ulong)(local_88._4_4_ - 0x88e0U & 0x1f) & 0x111U) != 0)) {
          glBufferData(local_74,(long)(int)local_88,local_80);
          goto LAB_008b741c;
        }
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x31c,"JSB_glBufferData");
      }
      else {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x31a,"JSB_glBufferData");
      }
      DAT_01d36f40 = 0x500;
    }
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x308,"JSB_glBufferData");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glBufferData",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x322);
LAB_008b741c:
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

