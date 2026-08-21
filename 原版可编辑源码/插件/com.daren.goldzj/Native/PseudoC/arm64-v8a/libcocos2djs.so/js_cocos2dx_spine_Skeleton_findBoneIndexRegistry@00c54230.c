
/* js_cocos2dx_spine_Skeleton_findBoneIndexRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_Skeleton_findBoneIndexRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  char *__s;
  long lVar3;
  Value *pVVar4;
  int iVar5;
  void *pvVar6;
  Skeleton *this;
  long *plVar7;
  Value *pVVar8;
  ulong uVar9;
  Isolate *pIVar10;
  Value *local_d0;
  Value *local_c8;
  Value *local_c0;
  HandleScope aHStack_b8 [24];
  byte local_a0 [16];
  char *local_90;
  undefined **local_88;
  size_t local_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar10);
  local_d0 = operator_new(0xa0);
  local_c0 = local_d0 + 0xa0;
  local_c8 = local_d0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar6 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_d0);
  this = (Skeleton *)se::State::nativeThisObject(aSStack_70);
  if (this == (Skeleton *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x2334,"js_cocos2dx_spine_Skeleton_findBoneIndex");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_spine_Skeleton_findBoneIndex : Invalid Native Object");
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_70);
    if (plVar7[1] - *plVar7 == 0x10) {
      local_78 = (void *)0x0;
      local_88 = &PTR__String_01c67868;
      local_80 = 0;
      se::Value::toStringForce();
      __s = (char *)((ulong)local_a0 | 1);
      if ((local_a0[0] & 1) != 0) {
        __s = local_90;
      }
      if (__s != (char *)0x0) {
        local_80 = strlen(__s);
        lVar1 = local_80 + 1;
        plVar7 = (long *)spine::SpineExtension::getInstance();
        local_78 = (void *)(**(code **)(*plVar7 + 0x18))
                                     (plVar7,lVar1,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x91);
        memcpy(local_78,__s,local_80 + 1);
      }
      if ((local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
      iVar5 = spine::Skeleton::findBoneIndex(this,(String *)&local_88);
      pVVar8 = (Value *)se::State::rval(aSStack_70);
      uVar9 = int32_to_seval(iVar5,pVVar8);
      bVar2 = (uVar9 & 1) == 0;
      if (bVar2) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                            ,0x233e,"js_cocos2dx_spine_Skeleton_findBoneIndex");
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_spine_Skeleton_findBoneIndex : Error processing arguments")
        ;
      }
      pvVar6 = local_78;
      local_88 = &PTR__String_01c67868;
      if (local_78 != (void *)0x0) {
        plVar7 = (long *)spine::SpineExtension::getInstance();
        (**(code **)(*plVar7 + 0x28))
                  (plVar7,pvVar6,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      spine::SpineObject::~SpineObject((SpineObject *)&local_88);
      if (!bVar2) goto LAB_00c544c8;
    }
    else {
      __android_log_print(6,"jswrapper",&DAT_0190fdc2,(ulong)(plVar7[1] - *plVar7) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_Skeleton_findBoneIndex",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x2344);
LAB_00c544c8:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
  pVVar4 = local_d0;
  pVVar8 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar8 != pVVar4) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_c8 = pVVar4;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

