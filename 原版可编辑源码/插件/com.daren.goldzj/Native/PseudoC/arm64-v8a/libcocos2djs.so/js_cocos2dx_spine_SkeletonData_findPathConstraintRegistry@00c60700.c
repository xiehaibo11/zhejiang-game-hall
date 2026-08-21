
/* js_cocos2dx_spine_SkeletonData_findPathConstraintRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonData_findPathConstraintRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  Value *pVVar3;
  bool bVar4;
  void *pvVar5;
  SkeletonData *this;
  long *plVar6;
  type *ptVar7;
  Value *pVVar8;
  Isolate *pIVar9;
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
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar9);
  local_d0 = operator_new(0xa0);
  local_c0 = local_d0 + 0xa0;
  local_c8 = local_d0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar5 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar5,(vector *)&local_d0);
  this = (SkeletonData *)se::State::nativeThisObject(aSStack_70);
  if (this == (SkeletonData *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x29a4,&DAT_018ed8d6);
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_spine_SkeletonData_findPathConstraint : Invalid Native Object")
    ;
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_70);
    if (plVar6[1] - *plVar6 == 0x10) {
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
        plVar6 = (long *)spine::SpineExtension::getInstance();
        local_78 = (void *)(**(code **)(*plVar6 + 0x18))
                                     (plVar6,lVar1,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x91);
        memcpy(local_78,__s,local_80 + 1);
      }
      if ((local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
      ptVar7 = (type *)spine::SkeletonData::findPathConstraint(this,(String *)&local_88);
      pVVar8 = (Value *)se::State::rval(aSStack_70);
      bVar4 = native_ptr_to_rooted_seval<spine::PathConstraintData>(ptVar7,pVVar8,(bool *)0x0);
      if (!bVar4) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                            ,0x29ae,&DAT_018ed8d6);
        __android_log_print(6,"jswrapper",
                            "js_cocos2dx_spine_SkeletonData_findPathConstraint : Error processing arguments"
                           );
      }
      pvVar5 = local_78;
      local_88 = &PTR__String_01c67868;
      if (local_78 != (void *)0x0) {
        plVar6 = (long *)spine::SpineExtension::getInstance();
        (**(code **)(*plVar6 + 0x28))
                  (plVar6,pvVar5,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      spine::SpineObject::~SpineObject((SpineObject *)&local_88);
      if (bVar4) goto LAB_00c6099c;
    }
    else {
      __android_log_print(6,"jswrapper",&DAT_0191585b,(ulong)(plVar6[1] - *plVar6) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",&DAT_018ed8d6,
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x29b4);
LAB_00c6099c:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_d0;
  pVVar8 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_c8 = pVVar3;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

