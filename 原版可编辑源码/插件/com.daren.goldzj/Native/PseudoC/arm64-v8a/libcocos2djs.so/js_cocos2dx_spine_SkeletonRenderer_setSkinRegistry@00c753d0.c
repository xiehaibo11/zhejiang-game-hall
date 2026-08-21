
/* js_cocos2dx_spine_SkeletonRenderer_setSkinRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_SkeletonRenderer_setSkinRegistry(FunctionCallbackInfo *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  Value *pVVar6;
  void *pvVar7;
  SkeletonRenderer *this;
  long *plVar8;
  ulong uVar9;
  Value *pVVar10;
  Isolate *pIVar11;
  Value *local_b8;
  Value *local_b0;
  Value *local_a8;
  HandleScope aHStack_a0 [24];
  ulong local_88;
  undefined8 uStack_80;
  char *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar11);
  local_b8 = operator_new(0xa0);
  local_a8 = local_b8 + 0xa0;
  local_b0 = local_b8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar7 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar7,(vector *)&local_b8);
  this = (SkeletonRenderer *)se::State::nativeThisObject(aSStack_70);
  if (this == (SkeletonRenderer *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x3557,"js_cocos2dx_spine_SkeletonRenderer_setSkin");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_spine_SkeletonRenderer_setSkin : Invalid Native Object");
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_70);
    lVar2 = *plVar8;
    lVar3 = plVar8[1];
    if (lVar3 - lVar2 == 0x10) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (char *)0x0;
      uVar9 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_88);
      if ((uVar9 & 1) == 0) {
        bVar5 = true;
      }
      else {
        pcVar1 = (char *)((ulong)&local_88 | 1);
        if ((local_88 & 1) != 0) {
          pcVar1 = local_78;
        }
        spine::SkeletonRenderer::setSkin(this,pcVar1);
        bVar5 = false;
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (!bVar5) goto LAB_00c755c4;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (char *)0x0;
      uVar9 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_88);
      if ((uVar9 & 1) != 0) {
        spine::SkeletonRenderer::setSkin(this,(basic_string *)&local_88);
        if ((local_88 & 1) != 0) {
          operator_delete(local_78);
        }
        goto LAB_00c755c4;
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 13678): wrong number of arguments: %d\n"
                        ,(ulong)(lVar3 - lVar2) >> 4);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_SkeletonRenderer_setSkin",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x3571);
LAB_00c755c4:
  pVVar10 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_70);
  pVVar6 = local_b8;
  pVVar10 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar10 != pVVar6) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_b0 = pVVar6;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

