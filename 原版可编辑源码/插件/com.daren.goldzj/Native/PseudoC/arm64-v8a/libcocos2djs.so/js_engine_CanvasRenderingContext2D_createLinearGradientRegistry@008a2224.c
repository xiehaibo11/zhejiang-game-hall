
/* js_engine_CanvasRenderingContext2D_createLinearGradientRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_engine_CanvasRenderingContext2D_createLinearGradientRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  long lVar9;
  long *plVar10;
  type *ptVar11;
  Value *pVVar12;
  ulong uVar13;
  Isolate *pIVar14;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  undefined8 local_90;
  undefined8 local_88;
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
  lVar9 = se::State::nativeThisObject(aSStack_80);
  if (lVar9 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x6d5,"js_engine_CanvasRenderingContext2D_createLinearGradient");
    __android_log_print(6,"jswrapper",
                        "js_engine_CanvasRenderingContext2D_createLinearGradient : Invalid Native Object"
                       );
  }
  else {
    plVar10 = (long *)se::State::args(aSStack_80);
    uVar13 = plVar10[1] - *plVar10;
    if (uVar13 == 0x40) {
      local_90 = 0;
      local_88 = 0;
      uVar4 = seval_to_float((Value *)*plVar10,(float *)((long)&local_88 + 4));
      uVar5 = seval_to_float((Value *)(*plVar10 + 0x10),(float *)&local_88);
      uVar6 = seval_to_float((Value *)(*plVar10 + 0x20),(float *)((long)&local_90 + 4));
      uVar7 = seval_to_float((Value *)(*plVar10 + 0x30),(float *)&local_90);
      if ((uVar4 & uVar5 & uVar6 & uVar7 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                            ,0x6e2,"js_engine_CanvasRenderingContext2D_createLinearGradient");
        __android_log_print(6,"jswrapper",
                            "js_engine_CanvasRenderingContext2D_createLinearGradient : Error processing arguments"
                           );
      }
      else {
        ptVar11 = (type *)cocos2d::CanvasRenderingContext2D::createLinearGradient
                                    (local_88._4_4_,(float)local_88,local_90._4_4_,(float)local_90);
        pVVar12 = (Value *)se::State::rval(aSStack_80);
        bVar3 = native_ptr_to_seval<cocos2d::CanvasGradient>(ptVar11,pVVar12,(bool *)0x0);
        if (bVar3) goto LAB_008a2494;
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                            ,0x6e5,"js_engine_CanvasRenderingContext2D_createLinearGradient");
        __android_log_print(6,"jswrapper",
                            "js_engine_CanvasRenderingContext2D_createLinearGradient : Error processing arguments"
                           );
      }
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 1768): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar13 >> 4,4);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_CanvasRenderingContext2D_createLinearGradient",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0x6eb);
LAB_008a2494:
  pVVar12 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar12,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_c0;
  pVVar12 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar12 != pVVar2) {
      se::Value::~Value(pVVar12 + -0x10);
      pVVar12 = pVVar12 + -0x10;
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

