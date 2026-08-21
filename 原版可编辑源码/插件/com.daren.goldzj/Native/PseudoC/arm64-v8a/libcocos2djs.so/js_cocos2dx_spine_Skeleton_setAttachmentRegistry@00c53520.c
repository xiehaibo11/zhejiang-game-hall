
/* js_cocos2dx_spine_Skeleton_setAttachmentRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_Skeleton_setAttachmentRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  Value *pVVar4;
  char *pcVar5;
  void *pvVar6;
  Skeleton *this;
  long *plVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  Value *local_f8;
  Value *local_f0;
  Value *local_e8;
  HandleScope aHStack_e0 [24];
  byte local_c8 [16];
  char *local_b8;
  undefined **local_b0;
  size_t local_a8;
  char *local_a0;
  undefined **local_98;
  size_t local_90;
  void *local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_e0,pIVar9);
  local_f8 = operator_new(0xa0);
  local_e8 = local_f8 + 0xa0;
  local_f0 = local_f8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_f8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar6,(vector *)&local_f8);
  this = (Skeleton *)se::State::nativeThisObject(aSStack_80);
  if (this == (Skeleton *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x22d7,"js_cocos2dx_spine_Skeleton_setAttachment");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_spine_Skeleton_setAttachment : Invalid Native Object");
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_80);
    if (plVar7[1] - *plVar7 == 0x20) {
      local_88 = (void *)0x0;
      local_a0 = (char *)0x0;
      local_b0 = &PTR__String_01c67868;
      local_90 = 0;
      local_a8 = 0;
      local_98 = local_b0;
      se::Value::toStringForce();
      pcVar2 = (char *)((ulong)local_c8 | 1);
      if ((local_c8[0] & 1) != 0) {
        pcVar2 = local_b8;
      }
      if (pcVar2 != (char *)0x0) {
        local_90 = strlen(pcVar2);
        lVar1 = local_90 + 1;
        plVar7 = (long *)spine::SpineExtension::getInstance();
        local_88 = (void *)(**(code **)(*plVar7 + 0x18))
                                     (plVar7,lVar1,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x91);
        memcpy(local_88,pcVar2,local_90 + 1);
      }
      if ((local_c8[0] & 1) != 0) {
        operator_delete(local_b8);
      }
      se::Value::toStringForce();
      pcVar5 = local_a0;
      pcVar2 = (char *)((ulong)local_c8 | 1);
      if ((local_c8[0] & 1) != 0) {
        pcVar2 = local_b8;
      }
      if (local_a0 != pcVar2) {
        if (local_a0 != (char *)0x0) {
          plVar7 = (long *)spine::SpineExtension::getInstance();
          (**(code **)(*plVar7 + 0x28))
                    (plVar7,pcVar5,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0x8a);
        }
        if (pcVar2 == (char *)0x0) {
          local_a8 = 0;
          local_a0 = (char *)0x0;
        }
        else {
          local_a8 = strlen(pcVar2);
          lVar1 = local_a8 + 1;
          plVar7 = (long *)spine::SpineExtension::getInstance();
          local_a0 = (char *)(**(code **)(*plVar7 + 0x18))
                                       (plVar7,lVar1,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x91);
          memcpy(local_a0,pcVar2,local_a8 + 1);
        }
      }
      if ((local_c8[0] & 1) != 0) {
        operator_delete(local_b8);
      }
      spine::Skeleton::setAttachment(this,(String *)&local_98,(String *)&local_b0);
      pcVar2 = local_a0;
      local_b0 = &PTR__String_01c67868;
      if (local_a0 != (char *)0x0) {
        plVar7 = (long *)spine::SpineExtension::getInstance();
        (**(code **)(*plVar7 + 0x28))
                  (plVar7,pcVar2,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      spine::SpineObject::~SpineObject((SpineObject *)&local_b0);
      pvVar6 = local_88;
      local_98 = &PTR__String_01c67868;
      if (local_88 != (void *)0x0) {
        plVar7 = (long *)spine::SpineExtension::getInstance();
        (**(code **)(*plVar7 + 0x28))
                  (plVar7,pvVar6,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      spine::SpineObject::~SpineObject((SpineObject *)&local_98);
      goto LAB_00c53840;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 8932): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar7[1] - *plVar7) >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_Skeleton_setAttachment",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x22e7);
LAB_00c53840:
  pVVar8 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_80);
  pVVar4 = local_f8;
  pVVar8 = local_f0;
  if (local_f8 != (Value *)0x0) {
    while (pVVar8 != pVVar4) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_f0 = pVVar4;
    operator_delete(local_f8);
  }
  v8::HandleScope::~HandleScope(aHStack_e0);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

