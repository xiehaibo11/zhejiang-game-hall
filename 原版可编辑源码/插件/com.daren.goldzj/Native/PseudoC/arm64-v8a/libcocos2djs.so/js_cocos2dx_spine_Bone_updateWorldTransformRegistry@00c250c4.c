
/* js_cocos2dx_spine_Bone_updateWorldTransformRegistry(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void js_cocos2dx_spine_Bone_updateWorldTransformRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  Bone *this;
  long *plVar4;
  ulong uVar5;
  Value *pVVar6;
  long lVar7;
  Isolate *pIVar8;
  ulong uVar9;
  Value *local_c0;
  Value *local_b8;
  Value *local_b0;
  HandleScope aHStack_a8 [28];
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar8);
  local_c0 = operator_new(0xa0);
  local_b0 = local_c0 + 0xa0;
  local_b8 = local_c0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar3,(vector *)&local_c0);
  this = (Bone *)se::State::nativeThisObject(aSStack_70);
  if (this == (Bone *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0xabb,"js_cocos2dx_spine_Bone_updateWorldTransform");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_spine_Bone_updateWorldTransform : Invalid Native Object");
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_70);
    uVar9 = plVar4[1] - *plVar4;
    lVar7 = (long)uVar9 >> 4;
    if (lVar7 == 0) {
      spine::Bone::updateWorldTransform(this);
      goto LAB_00c252fc;
    }
    if (lVar7 == 7) {
      local_74 = 0.0;
      uVar5 = seval_to_float((Value *)*plVar4,&local_74);
      if ((uVar5 & 1) != 0) {
        local_78 = 0.0;
        uVar5 = seval_to_float((Value *)(*plVar4 + 0x10),&local_78);
        if ((uVar5 & 1) != 0) {
          local_7c = 0.0;
          uVar5 = seval_to_float((Value *)(*plVar4 + 0x20),&local_7c);
          if ((uVar5 & 1) != 0) {
            local_80 = 0.0;
            uVar5 = seval_to_float((Value *)(*plVar4 + 0x30),&local_80);
            if ((uVar5 & 1) != 0) {
              local_84 = 0.0;
              uVar5 = seval_to_float((Value *)(*plVar4 + 0x40),&local_84);
              if ((uVar5 & 1) != 0) {
                local_88 = 0.0;
                uVar5 = seval_to_float((Value *)(*plVar4 + 0x50),&local_88);
                if ((uVar5 & 1) != 0) {
                  local_8c = 0.0;
                  uVar5 = seval_to_float((Value *)(*plVar4 + 0x60),&local_8c);
                  if ((uVar5 & 1) != 0) {
                    spine::Bone::updateWorldTransform
                              (this,local_74,local_78,local_7c,local_80,local_84,local_88,local_8c);
                    goto LAB_00c252fc;
                  }
                }
              }
            }
          }
        }
      }
    }
    __android_log_print(6,"jswrapper",&DAT_018fa0cb,uVar9 >> 4);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_Bone_updateWorldTransform",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0xae4);
LAB_00c252fc:
  pVVar6 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_c0;
  pVVar6 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_b8 = pVVar2;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

