
/* js_engine_CanvasRenderingContext2D__fillImageDataRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_engine_CanvasRenderingContext2D__fillImageDataRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  CanvasRenderingContext2D *this;
  long *plVar9;
  Value *pVVar10;
  Isolate *pIVar11;
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [24];
  undefined8 local_a0;
  undefined8 local_98;
  Data aDStack_90 [16];
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar11);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar8 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar8,(vector *)&local_d0);
  this = (CanvasRenderingContext2D *)se::State::nativeThisObject(aSStack_80);
  if (this == (CanvasRenderingContext2D *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x5af,"js_engine_CanvasRenderingContext2D__fillImageData");
    __android_log_print(6,"jswrapper",
                        "js_engine_CanvasRenderingContext2D__fillImageData : Invalid Native Object")
    ;
  }
  else {
    plVar9 = (long *)se::State::args(aSStack_80);
    if (plVar9[1] - *plVar9 == 0x50) {
      cocos2d::Data::Data(aDStack_90);
      local_a0 = 0;
      local_98 = 0;
      uVar3 = seval_to_Data((Value *)*plVar9,aDStack_90);
      uVar4 = seval_to_float((Value *)(*plVar9 + 0x10),(float *)((long)&local_98 + 4));
      uVar5 = seval_to_float((Value *)(*plVar9 + 0x20),(float *)&local_98);
      uVar6 = seval_to_float((Value *)(*plVar9 + 0x30),(float *)((long)&local_a0 + 4));
      uVar7 = seval_to_float((Value *)(*plVar9 + 0x40),(float *)&local_a0);
      if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & 1) != 0) {
        cocos2d::CanvasRenderingContext2D::_fillImageData
                  (this,aDStack_90,local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0);
        cocos2d::Data::~Data(aDStack_90);
        goto LAB_0089ffcc;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                          ,0x5be,"js_engine_CanvasRenderingContext2D__fillImageData");
      __android_log_print(6,"jswrapper",
                          "js_engine_CanvasRenderingContext2D__fillImageData : Error processing arguments"
                         );
      cocos2d::Data::~Data(aDStack_90);
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 1474): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar9[1] - *plVar9) >> 4,5);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_CanvasRenderingContext2D__fillImageData",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0x5c5);
LAB_0089ffcc:
  pVVar10 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_d0;
  pVVar10 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar10 != pVVar2) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_c8 = pVVar2;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

