
/* js_cocos2dx_spine_Skeleton_getAttachmentRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_Skeleton_getAttachmentRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  Value *pVVar4;
  int iVar5;
  bool bVar6;
  void *pvVar7;
  Skeleton *this;
  undefined8 *puVar8;
  long *plVar9;
  type *ptVar10;
  Value *pVVar11;
  ulong uVar12;
  Isolate *pIVar13;
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
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_e0,pIVar13);
  local_f8 = operator_new(0xa0);
  local_e8 = local_f8 + 0xa0;
  local_f0 = local_f8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_f8);
  pvVar7 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar7,(vector *)&local_f8);
  this = (Skeleton *)se::State::nativeThisObject(aSStack_80);
  if (this == (Skeleton *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x2431,"js_cocos2dx_spine_Skeleton_getAttachment");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_spine_Skeleton_getAttachment : Invalid Native Object");
  }
  else {
    puVar8 = (undefined8 *)se::State::args(aSStack_80);
    uVar12 = puVar8[1] - (long)*puVar8;
    if (uVar12 == 0x20) {
      local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
      uVar12 = seval_to_int32((Value *)*puVar8,(int *)&local_98);
      if ((uVar12 & 1) == 0) {
        local_88 = (void *)0x0;
        local_98 = &PTR__String_01c67868;
        local_90 = 0;
        se::Value::toStringForce();
        pcVar2 = (char *)((ulong)&local_b0 | 1);
        if (((ulong)local_b0 & 1) != 0) {
          pcVar2 = local_a0;
        }
        if (pcVar2 != (char *)0x0) {
          local_90 = strlen(pcVar2);
          lVar1 = local_90 + 1;
          plVar9 = (long *)spine::SpineExtension::getInstance();
          local_88 = (void *)(**(code **)(*plVar9 + 0x18))
                                       (plVar9,lVar1,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x91);
          memcpy(local_88,pcVar2,local_90 + 1);
        }
        if (((byte)local_b0._0_1_ & 1) != 0) {
          operator_delete(local_a0);
        }
        local_b0 = &PTR__String_01c67868;
        local_a8 = 0;
        local_a0 = (char *)0x0;
        se::Value::toStringForce();
        pcVar2 = (char *)((ulong)local_c8 | 1);
        if ((local_c8[0] & 1) != 0) {
          pcVar2 = local_b8;
        }
        if (pcVar2 != (char *)0x0) {
          local_a8 = strlen(pcVar2);
          lVar1 = local_a8 + 1;
          plVar9 = (long *)spine::SpineExtension::getInstance();
          local_a0 = (char *)(**(code **)(*plVar9 + 0x18))
                                       (plVar9,lVar1,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x91);
          memcpy(local_a0,pcVar2,local_a8 + 1);
        }
        if ((local_c8[0] & 1) != 0) {
          operator_delete(local_b8);
        }
        ptVar10 = (type *)spine::Skeleton::getAttachment
                                    (this,(String *)&local_98,(String *)&local_b0);
        pVVar11 = (Value *)se::State::rval(aSStack_80);
        bVar6 = native_ptr_to_rooted_seval<spine::Attachment>(ptVar10,pVVar11,(bool *)0x0);
        bVar6 = !bVar6;
        if (bVar6) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                              ,0x244d,"js_cocos2dx_spine_Skeleton_getAttachment");
          __android_log_print(6,"jswrapper",
                              "js_cocos2dx_spine_Skeleton_getAttachment : Error processing arguments"
                             );
        }
        pcVar2 = local_a0;
        local_b0 = &PTR__String_01c67868;
        if (local_a0 != (char *)0x0) {
          plVar9 = (long *)spine::SpineExtension::getInstance();
          (**(code **)(*plVar9 + 0x28))
                    (plVar9,pcVar2,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        spine::SpineObject::~SpineObject((SpineObject *)&local_b0);
        pvVar7 = local_88;
      }
      else {
        iVar5 = (int)local_98;
        local_88 = (void *)0x0;
        local_98 = &PTR__String_01c67868;
        local_90 = 0;
        se::Value::toStringForce();
        pcVar2 = (char *)((ulong)&local_b0 | 1);
        if (((ulong)local_b0 & 1) != 0) {
          pcVar2 = local_a0;
        }
        if (pcVar2 != (char *)0x0) {
          local_90 = strlen(pcVar2);
          lVar1 = local_90 + 1;
          plVar9 = (long *)spine::SpineExtension::getInstance();
          local_88 = (void *)(**(code **)(*plVar9 + 0x18))
                                       (plVar9,lVar1,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x91);
          memcpy(local_88,pcVar2,local_90 + 1);
        }
        if (((byte)local_b0._0_1_ & 1) != 0) {
          operator_delete(local_a0);
        }
        ptVar10 = (type *)spine::Skeleton::getAttachment(this,iVar5,(String *)&local_98);
        pVVar11 = (Value *)se::State::rval(aSStack_80);
        bVar6 = native_ptr_to_rooted_seval<spine::Attachment>(ptVar10,pVVar11,(bool *)0x0);
        bVar6 = !bVar6;
        pvVar7 = local_88;
        if (bVar6) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                              ,0x243e,"js_cocos2dx_spine_Skeleton_getAttachment");
          __android_log_print(6,"jswrapper",
                              "js_cocos2dx_spine_Skeleton_getAttachment : Error processing arguments"
                             );
          pvVar7 = local_88;
        }
      }
      local_98 = &PTR__String_01c67868;
      local_88 = pvVar7;
      if (pvVar7 != (void *)0x0) {
        local_98 = &PTR__String_01c67868;
        plVar9 = (long *)spine::SpineExtension::getInstance();
        (**(code **)(*plVar9 + 0x28))
                  (plVar9,pvVar7,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      spine::SpineObject::~SpineObject((SpineObject *)&local_98);
      if (!bVar6) goto LAB_00c56580;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 9298): wrong number of arguments: %d\n"
                          ,uVar12 >> 4);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_Skeleton_getAttachment",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x2455);
LAB_00c56580:
  pVVar11 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_80);
  pVVar4 = local_f8;
  pVVar11 = local_f0;
  if (local_f8 != (Value *)0x0) {
    while (pVVar11 != pVVar4) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
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

