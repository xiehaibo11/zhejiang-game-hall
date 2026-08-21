
/* js_engine_CanvasRenderingContext2D_measureTextRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_engine_CanvasRenderingContext2D_measureTextRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  void *pvVar4;
  basic_string *pbVar5;
  long *plVar6;
  ulong uVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  Value *local_b0;
  Value *local_a8;
  undefined8 local_a0;
  HandleScope aHStack_98 [24];
  Size aSStack_80 [8];
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar9);
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  local_a0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_b0);
  pbVar5 = (basic_string *)se::State::nativeThisObject(aSStack_60);
  if (pbVar5 == (basic_string *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x58b,"js_engine_CanvasRenderingContext2D_measureText");
    __android_log_print(6,"jswrapper",
                        "js_engine_CanvasRenderingContext2D_measureText : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_60);
    if (plVar6[1] - *plVar6 == 0x10) {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
      uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_78);
      if ((uVar7 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                            ,0x592,"js_engine_CanvasRenderingContext2D_measureText");
        __android_log_print(6,"jswrapper",
                            "js_engine_CanvasRenderingContext2D_measureText : Error processing arguments"
                           );
LAB_0089f9f4:
        bVar2 = false;
      }
      else {
        cocos2d::CanvasRenderingContext2D::measureText(pbVar5);
        pVVar8 = (Value *)se::State::rval(aSStack_60);
        uVar7 = Size_to_seval(aSStack_80,pVVar8);
        if ((uVar7 & 1) == 0) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                              ,0x595,"js_engine_CanvasRenderingContext2D_measureText");
          __android_log_print(6,"jswrapper",
                              "js_engine_CanvasRenderingContext2D_measureText : Error processing arguments"
                             );
          goto LAB_0089f9f4;
        }
        bVar2 = true;
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      if (bVar2) goto LAB_0089fa38;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 1432): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar6[1] - *plVar6) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_CanvasRenderingContext2D_measureText",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0x59b);
LAB_0089fa38:
  pVVar8 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_b0;
  pVVar8 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_a8 = pVVar3;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

