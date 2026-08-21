
/* js_gfx_Program_initRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_Program_initRegistry(FunctionCallbackInfo *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  Value *pVVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  void *pvVar8;
  Program *this;
  long *plVar9;
  Value *pVVar10;
  Object *this_00;
  DeviceGraphics *pDVar11;
  ulong uVar12;
  Isolate *pIVar13;
  Value *local_e0;
  Value *local_d8;
  undefined8 local_d0;
  HandleScope aHStack_c8 [24];
  ulong local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  ulong local_98;
  undefined8 local_90;
  char *local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c8,pIVar13);
  local_e0 = (Value *)0x0;
  local_d8 = (Value *)0x0;
  local_d0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_e0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_e0);
  pvVar8 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar8,(vector *)&local_e0);
  this = (Program *)se::State::nativeThisObject(aSStack_80);
  if (this == (Program *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                        ,0x651,"js_gfx_Program_init");
    __android_log_print(6,"jswrapper","js_gfx_Program_init : Invalid Native Object");
  }
  else {
    plVar9 = (long *)se::State::args(aSStack_80);
    pVVar10 = (Value *)*plVar9;
    if (plVar9[1] - (long)pVVar10 == 0x30) {
      if (pVVar10[8] == (Value)0x5) {
        this_00 = (Object *)se::Value::toObject(pVVar10);
        pDVar11 = (DeviceGraphics *)se::Object::getPrivateData(this_00);
        bVar5 = pDVar11 == (DeviceGraphics *)0x0;
      }
      else {
        bVar5 = 1 < (byte)pVVar10[8];
        pDVar11 = (DeviceGraphics *)0x0;
      }
      local_90 = 0;
      local_88 = (char *)0x0;
      local_98 = 0;
      bVar6 = seval_to_std_string((Value *)(*plVar9 + 0x10),(basic_string *)&local_98);
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (char *)0x0;
      pcVar1 = (char *)((ulong)&local_98 | 1);
      if ((local_98 & 1) != 0) {
        pcVar1 = local_88;
      }
      bVar7 = seval_to_std_string((Value *)(*plVar9 + 0x20),(basic_string *)&local_b0);
      if ((!bVar5 & bVar6 & bVar7) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                            ,0x65c,"js_gfx_Program_init");
        __android_log_print(6,"jswrapper","js_gfx_Program_init : Error processing arguments");
LAB_00934c34:
        bVar5 = false;
      }
      else {
        pcVar2 = (char *)((ulong)&local_b0 | 1);
        if ((local_b0 & 1) != 0) {
          pcVar2 = local_a0;
        }
        bVar6 = cocos2d::renderer::Program::init(this,pDVar11,pcVar1,pcVar2);
        pVVar10 = (Value *)se::State::rval(aSStack_80);
        uVar12 = boolean_to_seval((bool)(bVar6 & 1),pVVar10);
        if ((uVar12 & 1) == 0) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                              ,0x65f,"js_gfx_Program_init");
          __android_log_print(6,"jswrapper","js_gfx_Program_init : Error processing arguments");
          goto LAB_00934c34;
        }
        bVar5 = true;
      }
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if (bVar5) goto LAB_00934c90;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp, 1634): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar9[1] - (long)pVVar10) >> 4,3);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_Program_init",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                      ,0x665);
LAB_00934c90:
  pVVar10 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_80);
  pVVar4 = local_e0;
  pVVar10 = local_d8;
  if (local_e0 != (Value *)0x0) {
    while (pVVar10 != pVVar4) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_d8 = pVVar4;
    operator_delete(local_e0);
  }
  v8::HandleScope::~HandleScope(aHStack_c8);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

