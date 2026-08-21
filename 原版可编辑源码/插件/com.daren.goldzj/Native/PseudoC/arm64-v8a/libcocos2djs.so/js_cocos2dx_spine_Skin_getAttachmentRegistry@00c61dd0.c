
/* js_cocos2dx_spine_Skin_getAttachmentRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_Skin_getAttachmentRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  Value *pVVar3;
  bool bVar4;
  void *pvVar5;
  Skin *this;
  long *plVar6;
  ulong uVar7;
  type *ptVar8;
  Value *pVVar9;
  undefined8 uVar10;
  Isolate *pIVar11;
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
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_d0,pIVar11);
  local_e8 = operator_new(0xa0);
  local_d8 = local_e8 + 0xa0;
  local_e0 = local_e8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_e8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar5,(vector *)&local_e8);
  this = (Skin *)se::State::nativeThisObject(aSStack_80);
  if (this == (Skin *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x2a68,"js_cocos2dx_spine_Skin_getAttachment");
    __android_log_print(6,"jswrapper","js_cocos2dx_spine_Skin_getAttachment : Invalid Native Object"
                       );
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
      if ((uVar7 & 1) == 0) {
        uVar10 = 0x2a71;
LAB_00c62038:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                            ,uVar10,"js_cocos2dx_spine_Skin_getAttachment");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_spine_Skin_getAttachment : Error processing arguments");
        bVar4 = false;
      }
      else {
        ptVar8 = (type *)spine::Skin::getAttachment(this,local_88,(String *)&local_a0);
        pVVar9 = (Value *)se::State::rval(aSStack_80);
        bVar4 = native_ptr_to_rooted_seval<spine::Attachment>(ptVar8,pVVar9,(bool *)0x0);
        if (!bVar4) {
          uVar10 = 0x2a74;
          goto LAB_00c62038;
        }
        bVar4 = true;
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
      if (bVar4) goto LAB_00c620c0;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 10871): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar6[1] - *plVar6) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_Skin_getAttachment",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x2a7a);
LAB_00c620c0:
  pVVar9 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_80);
  pVVar3 = local_e8;
  pVVar9 = local_e0;
  if (local_e8 != (Value *)0x0) {
    while (pVVar9 != pVVar3) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_e0 = pVVar3;
    operator_delete(local_e8);
  }
  v8::HandleScope::~HandleScope(aHStack_d0);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

