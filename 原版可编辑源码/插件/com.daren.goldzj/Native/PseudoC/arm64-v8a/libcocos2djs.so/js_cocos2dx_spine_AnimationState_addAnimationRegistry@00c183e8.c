
/* js_cocos2dx_spine_AnimationState_addAnimationRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_spine_AnimationState_addAnimationRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  AnimationState *this;
  long *plVar5;
  ulong uVar6;
  Object *this_00;
  Animation *pAVar7;
  ulong uVar8;
  type *ptVar9;
  Value *pVVar10;
  long *plVar11;
  char *pcVar12;
  long lVar13;
  Isolate *pIVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  Value *local_f0;
  Value *local_e8;
  Value *local_e0;
  HandleScope aHStack_d8 [28];
  bool local_bc [4];
  float local_b8 [4];
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
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_d8,pIVar14);
  local_f0 = operator_new(0xa0);
  local_e0 = local_f0 + 0xa0;
  local_e8 = local_f0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_f0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar4,(vector *)&local_f0);
  this = (AnimationState *)se::State::nativeThisObject(aSStack_80);
  if (this == (AnimationState *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x3b0,"js_cocos2dx_spine_AnimationState_addAnimation");
    pcVar12 = "js_cocos2dx_spine_AnimationState_addAnimation : Invalid Native Object";
LAB_00c18520:
    __android_log_print(6,"jswrapper",pcVar12);
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_80);
    uVar17 = plVar5[1] - *plVar5;
    if (uVar17 == 0x40) {
      local_a0 = (undefined **)0x0;
      uVar6 = seval_to_size((Value *)*plVar5,(ulong *)&local_a0);
      if ((uVar6 & 1) != 0) {
        lVar13 = *plVar5;
        if (*(byte *)(lVar13 + 0x18) == 5) {
          this_00 = (Object *)se::Value::toObject((Value *)(lVar13 + 0x10));
          pAVar7 = (Animation *)se::Object::getPrivateData(this_00);
          if (pAVar7 != (Animation *)0x0) {
            lVar13 = *plVar5;
LAB_00c1853c:
            uVar6 = seval_to_boolean((Value *)(lVar13 + 0x20),(bool *)&local_88);
            local_b8[0] = 0.0;
            uVar8 = seval_to_float((Value *)(*plVar5 + 0x30),local_b8);
            if (((uVar6 & 1) != 0) && ((uVar8 & 1) != 0)) {
              ptVar9 = (type *)spine::AnimationState::addAnimation
                                         (this,(ulong)local_a0,pAVar7,local_88._0_1_,local_b8[0]);
              pVVar10 = (Value *)se::State::rval(aSStack_80);
              bVar3 = native_ptr_to_rooted_seval<spine::TrackEntry>(ptVar9,pVVar10,(bool *)0x0);
              if (bVar3) goto LAB_00c187d8;
              __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                                  ,0x3c2,"js_cocos2dx_spine_AnimationState_addAnimation");
              pcVar12 = "js_cocos2dx_spine_AnimationState_addAnimation : Error processing arguments"
              ;
              goto LAB_00c18520;
            }
          }
        }
        else if (*(byte *)(lVar13 + 0x18) < 2) {
          pAVar7 = (Animation *)0x0;
          goto LAB_00c1853c;
        }
      }
      local_88 = 0;
      uVar6 = seval_to_size((Value *)*plVar5,&local_88);
      if ((uVar6 & 1) != 0) {
        local_90 = (void *)0x0;
        local_a0 = &PTR__String_01c67868;
        local_98 = 0;
        se::Value::toStringForce();
        pcVar12 = (char *)((ulong)local_b8 | 1);
        if (((uint)local_b8[0] & 1) != 0) {
          pcVar12 = local_a8;
        }
        if (pcVar12 != (char *)0x0) {
          local_98 = strlen(pcVar12);
          lVar13 = local_98 + 1;
          plVar11 = (long *)spine::SpineExtension::getInstance();
          local_90 = (void *)(**(code **)(*plVar11 + 0x18))
                                       (plVar11,lVar13,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x91);
          memcpy(local_90,pcVar12,local_98 + 1);
        }
        if ((local_b8[0]._0_1_ & 1) != 0) {
          operator_delete(local_a8);
        }
        uVar6 = seval_to_boolean((Value *)(*plVar5 + 0x20),local_bc);
        local_b8[0] = 0.0;
        uVar16 = uVar6 & 0xffffffff;
        uVar8 = seval_to_float((Value *)(*plVar5 + 0x30),local_b8);
        iVar15 = 8;
        if (((uVar6 & 1) != 0) && ((uVar8 & 1) != 0)) {
          ptVar9 = (type *)spine::AnimationState::addAnimation
                                     (this,local_88,(String *)&local_a0,local_bc[0],local_b8[0]);
          pVVar10 = (Value *)se::State::rval(aSStack_80);
          bVar3 = native_ptr_to_rooted_seval<spine::TrackEntry>(ptVar9,pVVar10,(bool *)0x0);
          if (bVar3) {
            iVar15 = 1;
            uVar16 = 1;
          }
          else {
            __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                                ,0x3d6,"js_cocos2dx_spine_AnimationState_addAnimation");
            __android_log_print(6,"jswrapper",
                                "js_cocos2dx_spine_AnimationState_addAnimation : Error processing arguments"
                               );
            uVar16 = 0;
            iVar15 = 1;
          }
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
        if (iVar15 != 8) {
          if ((uVar16 & 1) != 0) goto LAB_00c187d8;
          goto LAB_00c187ac;
        }
      }
    }
    __android_log_print(6,"jswrapper",&DAT_018f3b33,uVar17 >> 4);
  }
LAB_00c187ac:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_AnimationState_addAnimation",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x3de);
LAB_00c187d8:
  pVVar10 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_f0;
  pVVar10 = local_e8;
  if (local_f0 != (Value *)0x0) {
    while (pVVar10 != pVVar2) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_e8 = pVVar2;
    operator_delete(local_f0);
  }
  v8::HandleScope::~HandleScope(aHStack_d8);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

