
/* js_cocos2dx_spine_AnimationStateData_setMixRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_spine_AnimationStateData_setMixRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  Value *pVVar4;
  void *pvVar5;
  AnimationStateData *this;
  long *plVar6;
  Value *pVVar7;
  Object *pOVar8;
  Animation *pAVar9;
  Animation *pAVar10;
  ulong uVar11;
  long *plVar12;
  Isolate *pIVar13;
  int iVar14;
  ulong uVar15;
  Value *local_f8;
  Value *local_f0;
  Value *local_e8;
  HandleScope aHStack_e0 [24];
  float local_c8 [4];
  char *local_b8;
  undefined **local_b0;
  size_t local_a8;
  char *local_a0;
  undefined8 local_98;
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
  pvVar5 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar5,(vector *)&local_f8);
  this = (AnimationStateData *)se::State::nativeThisObject(aSStack_80);
  if (this == (AnimationStateData *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x540,"js_cocos2dx_spine_AnimationStateData_setMix");
    __android_log_print(6,"jswrapper",&DAT_018f4e16);
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_80);
    pVVar7 = (Value *)*plVar6;
    uVar15 = plVar6[1] - (long)pVVar7;
    if (uVar15 == 0x30) {
      if (pVVar7[8] == (Value)0x5) {
        pOVar8 = (Object *)se::Value::toObject(pVVar7);
        pAVar9 = (Animation *)se::Object::getPrivateData(pOVar8);
        if (pAVar9 != (Animation *)0x0) {
          pVVar7 = (Value *)*plVar6;
LAB_00c1b030:
          if (pVVar7[0x18] == (Value)0x5) {
            pOVar8 = (Object *)se::Value::toObject(pVVar7 + 0x10);
            pAVar10 = (Animation *)se::Object::getPrivateData(pOVar8);
            if (pAVar10 != (Animation *)0x0) {
              pVVar7 = (Value *)*plVar6;
LAB_00c1b064:
              local_98 = (undefined **)((ulong)local_98._4_4_ << 0x20);
              uVar11 = seval_to_float(pVVar7 + 0x20,(float *)&local_98);
              if ((uVar11 & 1) != 0) {
                spine::AnimationStateData::setMix(this,pAVar9,pAVar10,(float)local_98);
                goto LAB_00c1b2a8;
              }
            }
          }
          else if ((byte)pVVar7[0x18] < 2) {
            pAVar10 = (Animation *)0x0;
            goto LAB_00c1b064;
          }
        }
      }
      else if ((byte)pVVar7[8] < 2) {
        pAVar9 = (Animation *)0x0;
        goto LAB_00c1b030;
      }
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
        plVar12 = (long *)spine::SpineExtension::getInstance();
        local_88 = (void *)(**(code **)(*plVar12 + 0x18))
                                     (plVar12,lVar1,
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
      if (((uint)local_c8[0] & 1) != 0) {
        pcVar2 = local_b8;
      }
      if (pcVar2 != (char *)0x0) {
        local_a8 = strlen(pcVar2);
        lVar1 = local_a8 + 1;
        plVar12 = (long *)spine::SpineExtension::getInstance();
        local_a0 = (char *)(**(code **)(*plVar12 + 0x18))
                                     (plVar12,lVar1,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x91);
        memcpy(local_a0,pcVar2,local_a8 + 1);
      }
      if ((local_c8[0]._0_1_ & 1) != 0) {
        operator_delete(local_b8);
      }
      local_c8[0] = 0.0;
      uVar11 = seval_to_float((Value *)(*plVar6 + 0x20),local_c8);
      if ((uVar11 & 1) == 0) {
        iVar14 = 6;
      }
      else {
        spine::AnimationStateData::setMix(this,(String *)&local_98,(String *)&local_b0,local_c8[0]);
        iVar14 = 1;
      }
      pcVar2 = local_a0;
      local_b0 = &PTR__String_01c67868;
      if (local_a0 != (char *)0x0) {
        plVar6 = (long *)spine::SpineExtension::getInstance();
        (**(code **)(*plVar6 + 0x28))
                  (plVar6,pcVar2,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      spine::SpineObject::~SpineObject((SpineObject *)&local_b0);
      pvVar5 = local_88;
      local_98 = &PTR__String_01c67868;
      if (local_88 != (void *)0x0) {
        plVar6 = (long *)spine::SpineExtension::getInstance();
        (**(code **)(*plVar6 + 0x28))
                  (plVar6,pvVar5,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      spine::SpineObject::~SpineObject((SpineObject *)&local_98);
      if (iVar14 != 6) goto LAB_00c1b2a8;
    }
    __android_log_print(6,"jswrapper",&DAT_018f4e5a,uVar15 >> 4);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_AnimationStateData_setMix",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x566);
LAB_00c1b2a8:
  pVVar7 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_80);
  pVVar4 = local_f8;
  pVVar7 = local_f0;
  if (local_f8 != (Value *)0x0) {
    while (pVVar7 != pVVar4) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_f0 = pVVar4;
    operator_delete(local_f8);
  }
  v8::HandleScope::~HandleScope(aHStack_e0);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

