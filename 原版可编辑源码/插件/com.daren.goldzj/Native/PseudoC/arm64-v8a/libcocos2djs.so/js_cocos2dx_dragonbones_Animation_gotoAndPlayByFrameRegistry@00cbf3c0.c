
/* js_cocos2dx_dragonbones_Animation_gotoAndPlayByFrameRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_Animation_gotoAndPlayByFrameRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  Animation *this;
  long *plVar5;
  ulong uVar6;
  type *ptVar7;
  Value *pVVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  Isolate *pIVar13;
  Value *local_c0;
  Value *local_b8;
  Value *local_b0;
  HandleScope aHStack_a8 [24];
  int local_90;
  uint local_8c;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar13);
  local_c0 = operator_new(0xa0);
  local_b0 = local_c0 + 0xa0;
  local_b8 = local_c0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_c0);
  this = (Animation *)se::State::nativeThisObject(aSStack_70);
  if (this == (Animation *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x181d,"js_cocos2dx_dragonbones_Animation_gotoAndPlayByFrame");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_Animation_gotoAndPlayByFrame : Invalid Native Object"
                       );
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_70);
    lVar12 = plVar5[1] - *plVar5 >> 4;
    if (lVar12 == 3) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      local_8c = 0;
      uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_88);
      uVar9 = seval_to_uint32((Value *)(*plVar5 + 0x10),&local_8c);
      local_90 = 0;
      uVar10 = seval_to_int32((Value *)(*plVar5 + 0x20),&local_90);
      if ((((uVar6 & 1) == 0) || ((uVar9 & 1) == 0)) || ((uVar10 & 1) == 0)) {
        uVar11 = 0x183c;
        goto LAB_00cbf744;
      }
      ptVar7 = (type *)dragonBones::Animation::gotoAndPlayByFrame
                                 (this,(basic_string *)&local_88,local_8c,local_90);
      pVVar8 = (Value *)se::State::rval(aSStack_70);
      bVar3 = native_ptr_to_rooted_seval<dragonBones::AnimationState>(ptVar7,pVVar8,(bool *)0x0);
      if (!bVar3) {
        uVar11 = 0x183f;
        goto LAB_00cbf744;
      }
LAB_00cbf664:
      bVar3 = true;
    }
    else {
      if (lVar12 == 2) {
        local_88 = 0;
        uStack_80 = 0;
        local_78 = (void *)0x0;
        local_8c = 0;
        uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_88);
        uVar9 = seval_to_uint32((Value *)(*plVar5 + 0x10),&local_8c);
        if (((uVar6 & 1) == 0) || ((uVar9 & 1) == 0)) {
          uVar11 = 0x182f;
        }
        else {
          ptVar7 = (type *)dragonBones::Animation::gotoAndPlayByFrame
                                     (this,(basic_string *)&local_88,local_8c,-1);
          pVVar8 = (Value *)se::State::rval(aSStack_70);
          bVar3 = native_ptr_to_rooted_seval<dragonBones::AnimationState>(ptVar7,pVVar8,(bool *)0x0)
          ;
          if (bVar3) goto LAB_00cbf664;
          uVar11 = 0x1832;
        }
      }
      else {
        if (lVar12 != 1) {
          __android_log_print(6,"jswrapper",
                              "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 6210): wrong number of arguments: %d, was expecting %d\n"
                              ,(ulong)(plVar5[1] - *plVar5) >> 4,3);
          goto LAB_00cbf778;
        }
        local_88 = 0;
        uStack_80 = 0;
        local_78 = (void *)0x0;
        uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_88);
        if ((uVar6 & 1) == 0) {
          uVar11 = 0x1824;
        }
        else {
          ptVar7 = (type *)dragonBones::Animation::gotoAndPlayByFrame
                                     (this,(basic_string *)&local_88,0,-1);
          pVVar8 = (Value *)se::State::rval(aSStack_70);
          bVar3 = native_ptr_to_rooted_seval<dragonBones::AnimationState>(ptVar7,pVVar8,(bool *)0x0)
          ;
          if (bVar3) goto LAB_00cbf664;
          uVar11 = 0x1827;
        }
      }
LAB_00cbf744:
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,uVar11,"js_cocos2dx_dragonbones_Animation_gotoAndPlayByFrame");
      __android_log_print(6,"jswrapper",
                          "js_cocos2dx_dragonbones_Animation_gotoAndPlayByFrame : Error processing arguments"
                         );
      bVar3 = false;
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if (bVar3) goto LAB_00cbf7a4;
  }
LAB_00cbf778:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_Animation_gotoAndPlayByFrame",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x1845);
LAB_00cbf7a4:
  pVVar8 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_c0;
  pVVar8 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar8 != pVVar2) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_b8 = pVVar2;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

