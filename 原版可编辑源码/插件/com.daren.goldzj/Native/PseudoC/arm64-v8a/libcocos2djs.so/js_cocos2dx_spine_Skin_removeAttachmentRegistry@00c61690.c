
/* js_cocos2dx_spine_Skin_removeAttachmentRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_Skin_removeAttachmentRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  char *__s;
  long lVar3;
  Value *pVVar4;
  void *pvVar5;
  Skin *this;
  long *plVar6;
  ulong uVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  Value *local_e8;
  Value *local_e0;
  Value *local_d8;
  HandleScope aHStack_d0 [24];
  byte local_b8 [16];
  char *local_a8;
  undefined **local_a0;
  size_t local_98;
  void *local_90;
  ulong local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_d0,pIVar9);
  local_e8 = operator_new(0xa0);
  local_d8 = local_e8 + 0xa0;
  local_e0 = local_e8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_e8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar5,(vector *)&local_e8);
  this = (Skin *)se::State::nativeThisObject(aSStack_80);
  if (this == (Skin *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x2a2f,"js_cocos2dx_spine_Skin_removeAttachment");
    __android_log_print(6,"jswrapper",&DAT_01915c7c);
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_80);
    if (plVar6[1] - *plVar6 == 0x20) {
      local_88 = 0;
      local_90 = (void *)0x0;
      local_a0 = &PTR__String_01c67868;
      local_98 = 0;
      uVar7 = seval_to_size((Value *)*plVar6,&local_88);
      se::Value::toStringForce();
      __s = (char *)((ulong)local_b8 | 1);
      if ((local_b8[0] & 1) != 0) {
        __s = local_a8;
      }
      if (__s != (char *)0x0) {
        local_98 = strlen(__s);
        lVar1 = local_98 + 1;
        plVar6 = (long *)spine::SpineExtension::getInstance();
        local_90 = (void *)(**(code **)(*plVar6 + 0x18))
                                     (plVar6,lVar1,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x91);
        memcpy(local_90,__s,local_98 + 1);
      }
      if ((local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      bVar2 = (uVar7 & 1) == 0;
      if (bVar2) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                            ,0x2a38,"js_cocos2dx_spine_Skin_removeAttachment");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_spine_Skin_removeAttachment : Error processing arguments");
      }
      else {
        spine::Skin::removeAttachment(this,local_88,(String *)&local_a0);
      }
      pvVar5 = local_90;
      local_a0 = &PTR__String_01c67868;
      if (local_90 != (void *)0x0) {
        plVar6 = (long *)spine::SpineExtension::getInstance();
        (**(code **)(*plVar6 + 0x28))
                  (plVar6,pvVar5,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      spine::SpineObject::~SpineObject((SpineObject *)&local_a0);
      if (!bVar2) goto LAB_00c61934;
    }
    else {
      __android_log_print(6,"jswrapper",&DAT_01915d01,(ulong)(plVar6[1] - *plVar6) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_Skin_removeAttachment",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x2a3f);
LAB_00c61934:
  pVVar8 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_80);
  pVVar4 = local_e8;
  pVVar8 = local_e0;
  if (local_e8 != (Value *)0x0) {
    while (pVVar8 != pVVar4) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_e0 = pVVar4;
    operator_delete(local_e8);
  }
  v8::HandleScope::~HandleScope(aHStack_d0);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

