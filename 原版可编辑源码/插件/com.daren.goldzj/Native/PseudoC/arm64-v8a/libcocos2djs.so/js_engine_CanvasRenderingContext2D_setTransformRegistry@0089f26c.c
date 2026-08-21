
/* js_engine_CanvasRenderingContext2D_setTransformRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_engine_CanvasRenderingContext2D_setTransformRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  long lVar10;
  long *plVar11;
  Value *pVVar12;
  ulong uVar13;
  Isolate *pIVar14;
  Value *local_d8;
  Value *local_d0;
  undefined8 local_c8;
  HandleScope aHStack_c0 [24];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  State aSStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c0,pIVar14);
  local_d8 = (Value *)0x0;
  local_d0 = (Value *)0x0;
  local_c8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d8);
  pvVar9 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar9,(vector *)&local_d8);
  lVar10 = se::State::nativeThisObject(aSStack_90);
  if (lVar10 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x55f,"js_engine_CanvasRenderingContext2D_setTransform");
    __android_log_print(6,"jswrapper",
                        "js_engine_CanvasRenderingContext2D_setTransform : Invalid Native Object");
  }
  else {
    plVar11 = (long *)se::State::args(aSStack_90);
    uVar13 = plVar11[1] - *plVar11;
    if (uVar13 == 0x60) {
      local_a0 = 0;
      local_98 = 0;
      local_a8 = 0;
      uVar3 = seval_to_float((Value *)*plVar11,(float *)((long)&local_98 + 4));
      uVar4 = seval_to_float((Value *)(*plVar11 + 0x10),(float *)&local_98);
      uVar5 = seval_to_float((Value *)(*plVar11 + 0x20),(float *)((long)&local_a0 + 4));
      uVar6 = seval_to_float((Value *)(*plVar11 + 0x30),(float *)&local_a0);
      uVar7 = seval_to_float((Value *)(*plVar11 + 0x40),(float *)((long)&local_a8 + 4));
      uVar8 = seval_to_float((Value *)(*plVar11 + 0x50),(float *)&local_a8);
      if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & 1) != 0) {
        cocos2d::CanvasRenderingContext2D::setTransform
                  (local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,local_a8._4_4_,
                   (float)local_a8);
        goto LAB_0089f4b4;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                          ,0x570,"js_engine_CanvasRenderingContext2D_setTransform");
      __android_log_print(6,"jswrapper",
                          "js_engine_CanvasRenderingContext2D_setTransform : Error processing arguments"
                         );
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp, 1396): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar13 >> 4,6);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_CanvasRenderingContext2D_setTransform",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                      ,0x577);
LAB_0089f4b4:
  pVVar12 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar12,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_d8;
  pVVar12 = local_d0;
  if (local_d8 != (Value *)0x0) {
    while (pVVar12 != pVVar2) {
      se::Value::~Value(pVVar12 + -0x10);
      pVVar12 = pVVar12 + -0x10;
    }
    local_d0 = pVVar2;
    operator_delete(local_d8);
  }
  v8::HandleScope::~HandleScope(aHStack_c0);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

