
/* js_cocos2dx_spine_AttachmentTimeline_setFrameRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_spine_AttachmentTimeline_setFrameRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  char *__s;
  long lVar3;
  Value *pVVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  AttachmentTimeline *this;
  long *plVar9;
  Value *pVVar10;
  Isolate *pIVar11;
  Value *local_f8;
  Value *local_f0;
  Value *local_e8;
  HandleScope aHStack_e0 [24];
  uint local_c8 [4];
  char *local_b8;
  undefined **local_b0;
  size_t local_a8;
  void *local_a0;
  float local_94;
  State aSStack_90 [40];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_e0,pIVar11);
  local_f8 = operator_new(0xa0);
  local_e8 = local_f8 + 0xa0;
  local_f0 = local_f8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_f8);
  pvVar8 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar8,(vector *)&local_f8);
  this = (AttachmentTimeline *)se::State::nativeThisObject(aSStack_90);
  if (this == (AttachmentTimeline *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x674,"js_cocos2dx_spine_AttachmentTimeline_setFrame");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_spine_AttachmentTimeline_setFrame : Invalid Native Object");
  }
  else {
    plVar9 = (long *)se::State::args(aSStack_90);
    if (plVar9[1] - *plVar9 == 0x30) {
      local_94 = 0.0;
      local_a0 = (void *)0x0;
      local_c8[0] = 0;
      local_b0 = &PTR__String_01c67868;
      local_a8 = 0;
      uVar6 = seval_to_int32((Value *)*plVar9,(int *)local_c8);
      uVar5 = local_c8[0];
      uVar7 = seval_to_float((Value *)(*plVar9 + 0x10),&local_94);
      se::Value::toStringForce();
      __s = (char *)((ulong)local_c8 | 1);
      if ((local_c8[0] & 1) != 0) {
        __s = local_b8;
      }
      if (__s != (char *)0x0) {
        local_a8 = strlen(__s);
        lVar1 = local_a8 + 1;
        plVar9 = (long *)spine::SpineExtension::getInstance();
        local_a0 = (void *)(**(code **)(*plVar9 + 0x18))
                                     (plVar9,lVar1,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x91);
        memcpy(local_a0,__s,local_a8 + 1);
      }
      if (((byte)local_c8[0] & 1) != 0) {
        operator_delete(local_b8);
      }
      bVar2 = (uVar6 & uVar7 & 1) == 0;
      if (bVar2) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                            ,0x67f,"js_cocos2dx_spine_AttachmentTimeline_setFrame");
        __android_log_print(6,"jswrapper",&DAT_018f5c6d);
      }
      else {
        spine::AttachmentTimeline::setFrame(this,uVar5,local_94,(String *)&local_b0);
      }
      pvVar8 = local_a0;
      local_b0 = &PTR__String_01c67868;
      if (local_a0 != (void *)0x0) {
        plVar9 = (long *)spine::SpineExtension::getInstance();
        (**(code **)(*plVar9 + 0x28))
                  (plVar9,pvVar8,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      spine::SpineObject::~SpineObject((SpineObject *)&local_b0);
      if (!bVar2) goto LAB_00c1d290;
    }
    else {
      __android_log_print(6,"jswrapper",&DAT_018f5cb8,(ulong)(plVar9[1] - *plVar9) >> 4,3);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_AttachmentTimeline_setFrame",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x686);
LAB_00c1d290:
  pVVar10 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_90);
  pVVar4 = local_f8;
  pVVar10 = local_f0;
  if (local_f8 != (Value *)0x0) {
    while (pVVar10 != pVVar4) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_f0 = pVVar4;
    operator_delete(local_f8);
  }
  v8::HandleScope::~HandleScope(aHStack_e0);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

