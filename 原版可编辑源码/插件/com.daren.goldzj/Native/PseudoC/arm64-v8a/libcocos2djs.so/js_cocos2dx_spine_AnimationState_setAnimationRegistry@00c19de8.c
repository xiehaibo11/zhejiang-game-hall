
/* js_cocos2dx_spine_AnimationState_setAnimationRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_spine_AnimationState_setAnimationRegistry(FunctionCallbackInfo *param_1)

{
  char *__s;
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  AnimationState *this;
  long *plVar5;
  ulong uVar6;
  Object *this_00;
  Animation *pAVar7;
  type *ptVar8;
  Value *pVVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  Isolate *pIVar13;
  ulong uVar14;
  Value *local_e8;
  Value *local_e0;
  Value *local_d8;
  HandleScope aHStack_d0 [24];
  bool local_b8 [16];
  char *local_a8;
  undefined **local_a0;
  size_t local_98;
  void *local_90;
  ulong local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_d0,pIVar13);
  local_e8 = operator_new(0xa0);
  local_d8 = local_e8 + 0xa0;
  local_e0 = local_e8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_e8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar4,(vector *)&local_e8);
  this = (AnimationState *)se::State::nativeThisObject(aSStack_80);
  if (this == (AnimationState *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x49b,"js_cocos2dx_spine_AnimationState_setAnimation");
    puVar11 = &DAT_018f47b5;
LAB_00c19f20:
    __android_log_print(6,"jswrapper",puVar11);
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_80);
    uVar14 = plVar5[1] - *plVar5;
    if (uVar14 == 0x30) {
      local_a0 = (undefined **)0x0;
      uVar6 = seval_to_size((Value *)*plVar5,(ulong *)&local_a0);
      if ((uVar6 & 1) != 0) {
        lVar12 = *plVar5;
        if (*(byte *)(lVar12 + 0x18) == 5) {
          this_00 = (Object *)se::Value::toObject((Value *)(lVar12 + 0x10));
          pAVar7 = (Animation *)se::Object::getPrivateData(this_00);
          if (pAVar7 != (Animation *)0x0) {
            lVar12 = *plVar5;
LAB_00c19f3c:
            uVar14 = seval_to_boolean((Value *)(lVar12 + 0x20),local_b8);
            ptVar8 = (type *)spine::AnimationState::setAnimation
                                       (this,(ulong)local_a0,pAVar7,local_b8[0]);
            pVVar9 = (Value *)se::State::rval(aSStack_80);
            bVar3 = native_ptr_to_rooted_seval<spine::TrackEntry>(ptVar8,pVVar9,(bool *)0x0);
            if (((uVar14 & 1) != 0) && (bVar3)) goto LAB_00c1a108;
            __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                                ,0x4aa,"js_cocos2dx_spine_AnimationState_setAnimation");
            puVar11 = &DAT_018f47fb;
            goto LAB_00c19f20;
          }
        }
        else if (*(byte *)(lVar12 + 0x18) < 2) {
          pAVar7 = (Animation *)0x0;
          goto LAB_00c19f3c;
        }
      }
      local_88 = 0;
      uVar6 = seval_to_size((Value *)*plVar5,&local_88);
      if ((uVar6 & 1) != 0) {
        local_90 = (void *)0x0;
        local_a0 = &PTR__String_01c67868;
        local_98 = 0;
        se::Value::toStringForce();
        __s = (char *)((ulong)local_b8 | 1);
        if ((local_b8[0] & 1U) != 0) {
          __s = local_a8;
        }
        if (__s != (char *)0x0) {
          local_98 = strlen(__s);
          lVar12 = local_98 + 1;
          plVar10 = (long *)spine::SpineExtension::getInstance();
          local_90 = (void *)(**(code **)(*plVar10 + 0x18))
                                       (plVar10,lVar12,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x91);
          memcpy(local_90,__s,local_98 + 1);
        }
        if ((local_b8[0] & 1U) != 0) {
          operator_delete(local_a8);
        }
        uVar14 = seval_to_boolean((Value *)(*plVar5 + 0x20),local_b8);
        ptVar8 = (type *)spine::AnimationState::setAnimation
                                   (this,local_88,(String *)&local_a0,local_b8[0]);
        pVVar9 = (Value *)se::State::rval(aSStack_80);
        bVar3 = native_ptr_to_rooted_seval<spine::TrackEntry>(ptVar8,pVVar9,(bool *)0x0);
        if (((uVar14 & 1) == 0) || (!bVar3)) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                              ,0x4bb,"js_cocos2dx_spine_AnimationState_setAnimation");
          __android_log_print(6,"jswrapper",&DAT_018f47fb);
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        pvVar4 = local_90;
        local_a0 = &PTR__String_01c67868;
        if (local_90 != (void *)0x0) {
          plVar5 = (long *)spine::SpineExtension::getInstance();
          (**(code **)(*plVar5 + 0x28))
                    (plVar5,pvVar4,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        spine::SpineObject::~SpineObject((SpineObject *)&local_a0);
        if (bVar3) goto LAB_00c1a108;
        goto LAB_00c1a0dc;
      }
    }
    __android_log_print(6,"jswrapper",&DAT_018f4846,uVar14 >> 4);
  }
LAB_00c1a0dc:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_AnimationState_setAnimation",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x4c3);
LAB_00c1a108:
  pVVar9 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_e8;
  pVVar9 = local_e0;
  if (local_e8 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_e0 = pVVar2;
    operator_delete(local_e8);
  }
  v8::HandleScope::~HandleScope(aHStack_d0);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

