
/* js_cocos2dx_spine_SkeletonData_setImagesPathRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_spine_SkeletonData_setImagesPathRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  SkeletonData *this;
  long *plVar5;
  Value *pVVar6;
  Isolate *pIVar7;
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
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar7);
  local_d0 = operator_new(0xa0);
  local_c0 = local_d0 + 0xa0;
  local_c8 = local_d0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_d0);
  this = (SkeletonData *)se::State::nativeThisObject(aSStack_70);
  if (this == (SkeletonData *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x2803,"js_cocos2dx_spine_SkeletonData_setImagesPath");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_spine_SkeletonData_setImagesPath : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_70);
    if (plVar5[1] - *plVar5 == 0x10) {
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
        plVar5 = (long *)spine::SpineExtension::getInstance();
        local_78 = (void *)(**(code **)(*plVar5 + 0x18))
                                     (plVar5,lVar1,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x91);
        memcpy(local_78,__s,local_80 + 1);
      }
      if ((local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
      spine::SkeletonData::setImagesPath(this,(String *)&local_88);
      pvVar4 = local_78;
      local_88 = &PTR__String_01c67868;
      if (local_78 != (void *)0x0) {
        plVar5 = (long *)spine::SpineExtension::getInstance();
        (**(code **)(*plVar5 + 0x28))
                  (plVar5,pvVar4,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      spine::SpineObject::~SpineObject((SpineObject *)&local_88);
      goto LAB_00c5d3dc;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 10254): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar5[1] - *plVar5) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_SkeletonData_setImagesPath",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x2811);
LAB_00c5d3dc:
  pVVar6 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_d0;
  pVVar6 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar6 != pVVar3) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
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

