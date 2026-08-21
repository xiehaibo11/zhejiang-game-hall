
/* js_engine_CanvasRenderingContext2D_strokeTextRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_engine_CanvasRenderingContext2D_strokeTextRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  CanvasRenderingContext2D *this;
  long *plVar8;
  Value *pVVar9;
  long lVar10;
  bool bVar11;
  Isolate *pIVar12;
  Value *local_d8;
  Value *local_d0;
  undefined8 local_c8;
  HandleScope aHStack_c0 [28];
  float local_a4;
  undefined8 local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c0,pIVar12);
  local_d8 = (Value *)0x0;
  local_d0 = (Value *)0x0;
  local_c8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d8);
  pvVar7 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar7,(vector *)&local_d8);
  this = (CanvasRenderingContext2D *)se::State::nativeThisObject(aSStack_80);
  if (this == (CanvasRenderingContext2D *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x639,"js_engine_CanvasRenderingContext2D_strokeText");
    __android_log_print(6,"jswrapper",
                        "js_engine_CanvasRenderingContext2D_strokeText : Invalid Native Object");
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_80);
    lVar10 = plVar8[1] - *plVar8 >> 4;
    if (lVar10 == 4) {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      local_a0 = 0;
      local_a4 = 0.0;
      uVar3 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_98);
      uVar4 = seval_to_float((Value *)(*plVar8 + 0x10),(float *)((long)&local_a0 + 4));
      uVar5 = seval_to_float((Value *)(*plVar8 + 0x20),(float *)&local_a0);
      uVar6 = seval_to_float((Value *)(*plVar8 + 0x30),&local_a4);
      if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) != 0) {
        cocos2d::CanvasRenderingContext2D::strokeText
                  (this,(basic_string *)&local_98,local_a0._4_4_,(float)local_a0,local_a4);
        goto LAB_008a0ff8;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                          ,0x651,"js_engine_CanvasRenderingContext2D_strokeText");
      __android_log_print(6,"jswrapper",
                          "js_engine_CanvasRenderingContext2D_strokeText : Error processing arguments"
                         );
LAB_008a1174:
      bVar11 = false;
    }
    else {
      if (lVar10 != 3) {
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 1621): wrong number of arguments: %d, was expecting %d\n"
                            ,(ulong)(plVar8[1] - *plVar8) >> 4,4);
        goto LAB_008a1034;
      }
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      local_a0 = 0;
      uVar3 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_98);
      uVar4 = seval_to_float((Value *)(*plVar8 + 0x10),(float *)((long)&local_a0 + 4));
      uVar5 = seval_to_float((Value *)(*plVar8 + 0x20),(float *)&local_a0);
      if ((uVar3 & uVar4 & uVar5 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                            ,0x644,"js_engine_CanvasRenderingContext2D_strokeText");
        __android_log_print(6,"jswrapper",
                            "js_engine_CanvasRenderingContext2D_strokeText : Error processing arguments"
                           );
        goto LAB_008a1174;
      }
      cocos2d::CanvasRenderingContext2D::strokeText
                (this,(basic_string *)&local_98,local_a0._4_4_,(float)local_a0,-1.0);
LAB_008a0ff8:
      bVar11 = true;
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (bVar11) goto LAB_008a1060;
  }
LAB_008a1034:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_CanvasRenderingContext2D_strokeText",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0x658);
LAB_008a1060:
  pVVar9 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_d8;
  pVVar9 = local_d0;
  if (local_d8 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_d0 = pVVar2;
    operator_delete(local_d8);
  }
  v8::HandleScope::~HandleScope(aHStack_c0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

