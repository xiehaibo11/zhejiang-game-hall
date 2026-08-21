
/* js_engine_CanvasRenderingContext2D_lineToRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_engine_CanvasRenderingContext2D_lineToRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  CanvasRenderingContext2D *this;
  long *plVar6;
  Value *pVVar7;
  ulong uVar8;
  Isolate *pIVar9;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  undefined8 local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar9);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar5,(vector *)&local_a8);
  this = (CanvasRenderingContext2D *)se::State::nativeThisObject(aSStack_70);
  if (this == (CanvasRenderingContext2D *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x537,"js_engine_CanvasRenderingContext2D_lineTo");
    __android_log_print(6,"jswrapper",
                        "js_engine_CanvasRenderingContext2D_lineTo : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_70);
    uVar8 = plVar6[1] - *plVar6;
    if (uVar8 == 0x20) {
      local_78 = 0;
      uVar3 = seval_to_float((Value *)*plVar6,(float *)((long)&local_78 + 4));
      uVar4 = seval_to_float((Value *)(*plVar6 + 0x10),(float *)&local_78);
      if ((uVar3 & uVar4 & 1) != 0) {
        cocos2d::CanvasRenderingContext2D::lineTo(this,local_78._4_4_,(float)local_78);
        goto LAB_0089eecc;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                          ,0x540,"js_engine_CanvasRenderingContext2D_lineTo");
      __android_log_print(6,"jswrapper",
                          "js_engine_CanvasRenderingContext2D_lineTo : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 1348): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar8 >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_CanvasRenderingContext2D_lineTo",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0x547);
LAB_0089eecc:
  pVVar7 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a8;
  pVVar7 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_a0 = pVVar2;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

