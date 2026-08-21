
/* js_renderer_EffectBase_setBlendRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_EffectBase_setBlendRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  void *pvVar21;
  EffectBase *pEVar22;
  long *plVar23;
  Value *pVVar24;
  ulong uVar25;
  Isolate *pIVar26;
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [28];
  int local_9c;
  bool local_98 [4];
  uint local_94;
  State aSStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar26 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar26);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar21 = (void *)se::internal::getPrivate(pIVar26,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar21,(vector *)&local_d0);
  pEVar22 = (EffectBase *)se::State::nativeThisObject(aSStack_90);
  if (pEVar22 == (EffectBase *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0xd5,"js_renderer_EffectBase_setBlend");
    __android_log_print(6,"jswrapper","js_renderer_EffectBase_setBlend : Invalid Native Object");
  }
  else {
    plVar23 = (long *)se::State::args(aSStack_90);
    pVVar24 = (Value *)*plVar23;
    switch(plVar23[1] - (long)pVVar24 >> 4) {
    case 0:
      cocos2d::renderer::EffectBase::setBlend(pEVar22,0,0x8006,1,0,0x8006,1,0,0xffffffff,0xffffffff)
      ;
      goto LAB_00937140;
    case 1:
      uVar25 = seval_to_boolean(pVVar24,(bool *)&local_94);
      if ((uVar25 & 1) != 0) {
        cocos2d::renderer::EffectBase::setBlend
                  (pEVar22,local_94._0_1_,0x8006,1,0,0x8006,1,0,0xffffffff,0xffffffff);
        goto LAB_00937140;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0xe0,"js_renderer_EffectBase_setBlend");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setBlend : Error processing arguments");
      break;
    case 2:
      uVar9 = seval_to_boolean(pVVar24,(bool *)&local_9c);
      local_94 = 0;
      uVar10 = seval_to_int32((Value *)(*plVar23 + 0x10),(int *)&local_94);
      if ((uVar9 & uVar10 & 1) != 0) {
        cocos2d::renderer::EffectBase::setBlend
                  (pEVar22,local_9c._0_1_,local_94,1,0,0x8006,1,0,0xffffffff,0xffffffff);
        goto LAB_00937140;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0xe9,"js_renderer_EffectBase_setBlend");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setBlend : Error processing arguments");
      break;
    case 3:
      uVar10 = seval_to_boolean(pVVar24,(bool *)&local_9c);
      local_94 = 0;
      uVar11 = seval_to_int32((Value *)(*plVar23 + 0x10),(int *)&local_94);
      uVar9 = local_94;
      local_94 = 0;
      uVar12 = seval_to_int32((Value *)(*plVar23 + 0x20),(int *)&local_94);
      if ((uVar10 & uVar11 & uVar12 & 1) != 0) {
        cocos2d::renderer::EffectBase::setBlend
                  (pEVar22,local_9c._0_1_,uVar9,local_94,0,0x8006,1,0,0xffffffff,0xffffffff);
        goto LAB_00937140;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0xf4,"js_renderer_EffectBase_setBlend");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setBlend : Error processing arguments");
      break;
    case 4:
      uVar11 = seval_to_boolean(pVVar24,(bool *)&local_9c);
      local_94 = 0;
      uVar12 = seval_to_int32((Value *)(*plVar23 + 0x10),(int *)&local_94);
      uVar9 = local_94;
      local_94 = 0;
      uVar13 = seval_to_int32((Value *)(*plVar23 + 0x20),(int *)&local_94);
      uVar10 = local_94;
      local_94 = 0;
      uVar14 = seval_to_int32((Value *)(*plVar23 + 0x30),(int *)&local_94);
      if ((uVar11 & uVar12 & uVar13 & uVar14 & 1) != 0) {
        cocos2d::renderer::EffectBase::setBlend
                  (pEVar22,local_9c._0_1_,uVar9,uVar10,local_94,0x8006,1,0,0xffffffff,0xffffffff);
        goto LAB_00937140;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x101,"js_renderer_EffectBase_setBlend");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setBlend : Error processing arguments");
      break;
    case 5:
      uVar12 = seval_to_boolean(pVVar24,(bool *)&local_9c);
      local_94 = 0;
      uVar13 = seval_to_int32((Value *)(*plVar23 + 0x10),(int *)&local_94);
      uVar9 = local_94;
      local_94 = 0;
      uVar14 = seval_to_int32((Value *)(*plVar23 + 0x20),(int *)&local_94);
      uVar10 = local_94;
      local_94 = 0;
      uVar15 = seval_to_int32((Value *)(*plVar23 + 0x30),(int *)&local_94);
      uVar11 = local_94;
      local_94 = 0;
      uVar16 = seval_to_int32((Value *)(*plVar23 + 0x40),(int *)&local_94);
      if ((uVar12 & uVar13 & uVar14 & uVar15 & uVar16 & 1) != 0) {
        cocos2d::renderer::EffectBase::setBlend
                  (pEVar22,local_9c._0_1_,uVar9,uVar10,uVar11,local_94,1,0,0xffffffff,0xffffffff);
        goto LAB_00937140;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x110,"js_renderer_EffectBase_setBlend");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setBlend : Error processing arguments");
      break;
    case 6:
      uVar13 = seval_to_boolean(pVVar24,(bool *)&local_9c);
      local_94 = 0;
      uVar14 = seval_to_int32((Value *)(*plVar23 + 0x10),(int *)&local_94);
      uVar9 = local_94;
      local_94 = 0;
      uVar15 = seval_to_int32((Value *)(*plVar23 + 0x20),(int *)&local_94);
      uVar10 = local_94;
      local_94 = 0;
      uVar16 = seval_to_int32((Value *)(*plVar23 + 0x30),(int *)&local_94);
      uVar11 = local_94;
      local_94 = 0;
      uVar17 = seval_to_int32((Value *)(*plVar23 + 0x40),(int *)&local_94);
      uVar12 = local_94;
      local_94 = 0;
      uVar18 = seval_to_int32((Value *)(*plVar23 + 0x50),(int *)&local_94);
      if ((uVar13 & uVar14 & uVar15 & uVar16 & uVar17 & uVar18 & 1) != 0) {
        cocos2d::renderer::EffectBase::setBlend
                  (pEVar22,local_9c._0_1_,uVar9,uVar10,uVar11,uVar12,local_94,0,0xffffffff,
                   0xffffffff);
        goto LAB_00937140;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x121,"js_renderer_EffectBase_setBlend");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setBlend : Error processing arguments");
      break;
    case 7:
      uVar14 = seval_to_boolean(pVVar24,(bool *)&local_9c);
      local_94 = 0;
      uVar15 = seval_to_int32((Value *)(*plVar23 + 0x10),(int *)&local_94);
      uVar9 = local_94;
      local_94 = 0;
      uVar16 = seval_to_int32((Value *)(*plVar23 + 0x20),(int *)&local_94);
      uVar10 = local_94;
      local_94 = 0;
      uVar17 = seval_to_int32((Value *)(*plVar23 + 0x30),(int *)&local_94);
      uVar11 = local_94;
      local_94 = 0;
      uVar18 = seval_to_int32((Value *)(*plVar23 + 0x40),(int *)&local_94);
      uVar12 = local_94;
      local_94 = 0;
      uVar19 = seval_to_int32((Value *)(*plVar23 + 0x50),(int *)&local_94);
      uVar13 = local_94;
      local_94 = 0;
      uVar20 = seval_to_int32((Value *)(*plVar23 + 0x60),(int *)&local_94);
      if ((uVar14 & uVar15 & uVar16 & uVar17 & uVar18 & uVar19 & uVar20 & 1) != 0) {
        cocos2d::renderer::EffectBase::setBlend
                  (pEVar22,local_9c._0_1_,uVar9,uVar10,uVar11,uVar12,uVar13,local_94,0xffffffff,
                   0xffffffff);
        goto LAB_00937140;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x134,"js_renderer_EffectBase_setBlend");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setBlend : Error processing arguments");
      break;
    case 8:
      local_94 = 0;
      uVar9 = seval_to_boolean(pVVar24,local_98);
      local_9c = 0;
      uVar10 = seval_to_int32((Value *)(*plVar23 + 0x10),&local_9c);
      iVar3 = local_9c;
      local_9c = 0;
      uVar11 = seval_to_int32((Value *)(*plVar23 + 0x20),&local_9c);
      iVar4 = local_9c;
      local_9c = 0;
      uVar12 = seval_to_int32((Value *)(*plVar23 + 0x30),&local_9c);
      iVar5 = local_9c;
      local_9c = 0;
      uVar13 = seval_to_int32((Value *)(*plVar23 + 0x40),&local_9c);
      iVar6 = local_9c;
      local_9c = 0;
      uVar14 = seval_to_int32((Value *)(*plVar23 + 0x50),&local_9c);
      iVar7 = local_9c;
      local_9c = 0;
      uVar15 = seval_to_int32((Value *)(*plVar23 + 0x60),&local_9c);
      iVar8 = local_9c;
      uVar16 = seval_to_uint32((Value *)(*plVar23 + 0x70),&local_94);
      if ((uVar9 & uVar10 & uVar11 & uVar12 & uVar13 & uVar14 & uVar15 & uVar16 & 1) != 0) {
        cocos2d::renderer::EffectBase::setBlend
                  (pEVar22,local_98[0],iVar3,iVar4,iVar5,iVar6,iVar7,iVar8,local_94,0xffffffff);
        goto LAB_00937140;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x149,"js_renderer_EffectBase_setBlend");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setBlend : Error processing arguments");
      break;
    case 9:
      local_94 = 0;
      uVar9 = seval_to_boolean(pVVar24,local_98);
      local_9c = 0;
      uVar10 = seval_to_int32((Value *)(*plVar23 + 0x10),&local_9c);
      iVar3 = local_9c;
      local_9c = 0;
      uVar11 = seval_to_int32((Value *)(*plVar23 + 0x20),&local_9c);
      iVar4 = local_9c;
      local_9c = 0;
      uVar12 = seval_to_int32((Value *)(*plVar23 + 0x30),&local_9c);
      iVar5 = local_9c;
      local_9c = 0;
      uVar13 = seval_to_int32((Value *)(*plVar23 + 0x40),&local_9c);
      iVar6 = local_9c;
      local_9c = 0;
      uVar14 = seval_to_int32((Value *)(*plVar23 + 0x50),&local_9c);
      iVar7 = local_9c;
      local_9c = 0;
      uVar15 = seval_to_int32((Value *)(*plVar23 + 0x60),&local_9c);
      iVar8 = local_9c;
      uVar16 = seval_to_uint32((Value *)(*plVar23 + 0x70),&local_94);
      local_9c = 0;
      uVar17 = seval_to_int32((Value *)(*plVar23 + 0x80),&local_9c);
      if ((uVar9 & uVar10 & uVar11 & uVar12 & uVar13 & uVar14 & uVar15 & uVar16 & uVar17 & 1) != 0)
      {
        cocos2d::renderer::EffectBase::setBlend
                  (pEVar22,local_98[0],iVar3,iVar4,iVar5,iVar6,iVar7,iVar8,local_94,local_9c);
        goto LAB_00937140;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x160,"js_renderer_EffectBase_setBlend");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setBlend : Error processing arguments");
      break;
    default:
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 356): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar23[1] - (long)pVVar24) >> 4,9);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_EffectBase_setBlend",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x167);
LAB_00937140:
  pVVar24 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar24,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_d0;
  pVVar24 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar24 != pVVar2) {
      se::Value::~Value(pVVar24 + -0x10);
      pVVar24 = pVVar24 + -0x10;
    }
    local_c8 = pVVar2;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

