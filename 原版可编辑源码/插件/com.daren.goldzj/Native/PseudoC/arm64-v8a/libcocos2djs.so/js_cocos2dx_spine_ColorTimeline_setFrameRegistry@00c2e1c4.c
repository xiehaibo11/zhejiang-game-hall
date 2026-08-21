
/* js_cocos2dx_spine_ColorTimeline_setFrameRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_ColorTimeline_setFrameRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  void *pvVar4;
  ColorTimeline *this;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  Value *pVVar11;
  char *pcVar12;
  ulong uVar13;
  Isolate *pIVar14;
  Value *local_d8;
  Value *local_d0;
  Value *local_c8;
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
  local_d8 = operator_new(0xa0);
  local_c8 = local_d8 + 0xa0;
  local_d0 = local_d8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_d8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar4,(vector *)&local_d8);
  this = (ColorTimeline *)se::State::nativeThisObject(aSStack_90);
  if (this == (ColorTimeline *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0xfe4,"js_cocos2dx_spine_ColorTimeline_setFrame");
    pcVar12 = "js_cocos2dx_spine_ColorTimeline_setFrame : Invalid Native Object";
LAB_00c2e3d0:
    __android_log_print(6,"jswrapper",pcVar12);
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_90);
    uVar13 = plVar5[1] - *plVar5;
    if (uVar13 == 0x60) {
      local_a0 = 0;
      local_98 = 0;
      local_a8 = 0;
      uVar13 = seval_to_int32((Value *)*plVar5,(int *)&local_a8);
      iVar3 = (int)local_a8;
      uVar6 = seval_to_float((Value *)(*plVar5 + 0x10),(float *)((long)&local_98 + 4));
      uVar7 = seval_to_float((Value *)(*plVar5 + 0x20),(float *)&local_98);
      uVar8 = seval_to_float((Value *)(*plVar5 + 0x30),(float *)((long)&local_a0 + 4));
      uVar9 = seval_to_float((Value *)(*plVar5 + 0x40),(float *)&local_a0);
      uVar10 = seval_to_float((Value *)(*plVar5 + 0x50),(float *)((long)&local_a8 + 4));
      if (((((uVar13 & 1) != 0) && ((uVar6 & 1) != 0)) && ((uVar7 & 1) != 0)) &&
         ((((uVar8 & 1) != 0 && ((uVar9 & 1) != 0)) && ((uVar10 & 1) != 0)))) {
        spine::ColorTimeline::setFrame
                  (this,iVar3,local_98._4_4_,(float)local_98,local_a0._4_4_,(float)local_a0,
                   local_a8._4_4_);
        goto LAB_00c2e408;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                          ,0xff5,"js_cocos2dx_spine_ColorTimeline_setFrame");
      pcVar12 = "js_cocos2dx_spine_ColorTimeline_setFrame : Error processing arguments";
      goto LAB_00c2e3d0;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 4089): wrong number of arguments: %d, was expecting %d\n"
                        ,uVar13 >> 4,6);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_ColorTimeline_setFrame",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0xffc);
LAB_00c2e408:
  pVVar11 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_d8;
  pVVar11 = local_d0;
  if (local_d8 != (Value *)0x0) {
    while (pVVar11 != pVVar2) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
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

