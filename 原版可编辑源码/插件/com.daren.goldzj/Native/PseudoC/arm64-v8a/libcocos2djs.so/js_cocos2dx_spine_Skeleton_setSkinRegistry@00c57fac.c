
/* js_cocos2dx_spine_Skeleton_setSkinRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_spine_Skeleton_setSkinRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  Skeleton *this;
  undefined8 *puVar5;
  Value *pVVar6;
  Object *this_00;
  Skin *pSVar7;
  long *plVar8;
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
  pvVar4 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_d0);
  this = (Skeleton *)se::State::nativeThisObject(aSStack_70);
  if (this == (Skeleton *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x252a,"js_cocos2dx_spine_Skeleton_setSkin");
    __android_log_print(6,"jswrapper","js_cocos2dx_spine_Skeleton_setSkin : Invalid Native Object");
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_70);
    pVVar6 = (Value *)*puVar5;
    if (puVar5[1] - (long)pVVar6 == 0x10) {
      if (pVVar6[8] == (Value)0x5) {
        this_00 = (Object *)se::Value::toObject(pVVar6);
        pSVar7 = (Skin *)se::Object::getPrivateData(this_00);
        if (pSVar7 == (Skin *)0x0) {
LAB_00c58138:
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
            plVar8 = (long *)spine::SpineExtension::getInstance();
            local_78 = (void *)(**(code **)(*plVar8 + 0x18))
                                         (plVar8,lVar1,
                                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                          ,0x91);
            memcpy(local_78,__s,local_80 + 1);
          }
          if ((local_a0[0] & 1) != 0) {
            operator_delete(local_90);
          }
          spine::Skeleton::setSkin(this,(String *)&local_88);
          pvVar4 = local_78;
          local_88 = &PTR__String_01c67868;
          if (local_78 != (void *)0x0) {
            plVar8 = (long *)spine::SpineExtension::getInstance();
            (**(code **)(*plVar8 + 0x28))
                      (plVar8,pvVar4,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                       ,0xc9);
          }
          spine::SpineObject::~SpineObject((SpineObject *)&local_88);
          goto LAB_00c58210;
        }
      }
      else {
        if (1 < (byte)pVVar6[8]) goto LAB_00c58138;
        pSVar7 = (Skin *)0x0;
      }
      spine::Skeleton::setSkin(this,pSVar7);
      goto LAB_00c58210;
    }
    __android_log_print(6,"jswrapper",&DAT_01911c4f,(ulong)(puVar5[1] - (long)pVVar6) >> 4);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_Skeleton_setSkin",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x2544);
LAB_00c58210:
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

