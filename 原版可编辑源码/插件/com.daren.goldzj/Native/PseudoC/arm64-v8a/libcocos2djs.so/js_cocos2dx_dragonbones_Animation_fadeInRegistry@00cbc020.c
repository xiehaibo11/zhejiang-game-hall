
/* js_cocos2dx_dragonbones_Animation_fadeInRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_dragonbones_Animation_fadeInRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  type *ptVar15;
  Value *pVVar16;
  undefined8 uVar17;
  Isolate *pIVar18;
  Value *local_f8;
  Value *local_f0;
  Value *local_e8;
  HandleScope aHStack_e0 [24];
  int local_c8;
  undefined1 local_c4 [4];
  undefined8 local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  State aSStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar18 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_e0,pIVar18);
  local_f8 = operator_new(0xa0);
  local_e8 = local_f8 + 0xa0;
  local_f0 = local_f8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_f8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar18,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar6,(vector *)&local_f8);
  lVar7 = se::State::nativeThisObject(aSStack_90);
  if (lVar7 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x164a,"js_cocos2dx_dragonbones_Animation_fadeIn");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_Animation_fadeIn : Invalid Native Object");
    goto LAB_00cbc840;
  }
  plVar8 = (long *)se::State::args(aSStack_90);
  switch(plVar8[1] - *plVar8 >> 4) {
  case 1:
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = (void *)0x0;
    uVar9 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_a8);
    if ((uVar9 & 1) == 0) {
      uVar17 = 0x1651;
      break;
    }
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = (void *)0x0;
    ptVar15 = (type *)dragonBones::Animation::fadeIn
                                ((Animation *)0xbf800000,lVar7,&local_a8,0xffffffff,0,&local_c0,3);
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    pVVar16 = (Value *)se::State::rval(aSStack_90);
    bVar5 = native_ptr_to_rooted_seval<dragonBones::AnimationState>(ptVar15,pVVar16,(bool *)0x0);
    if (!bVar5) {
      uVar17 = 0x1654;
      break;
    }
LAB_00cbc53c:
    bVar5 = true;
    goto joined_r0x00cbc7c8;
  case 2:
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = (void *)0x0;
    local_c4 = (undefined1  [4])0x0;
    uVar9 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_a8);
    uVar10 = seval_to_float((Value *)(*plVar8 + 0x10),(float *)local_c4);
    if (((uVar9 & 1) == 0) || ((uVar10 & 1) == 0)) {
      uVar17 = 0x165c;
    }
    else {
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = (void *)0x0;
      ptVar15 = (type *)dragonBones::Animation::fadeIn
                                  ((Animation *)local_c4,lVar7,&local_a8,0xffffffff,0,&local_c0,3);
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      pVVar16 = (Value *)se::State::rval(aSStack_90);
      bVar5 = native_ptr_to_rooted_seval<dragonBones::AnimationState>(ptVar15,pVVar16,(bool *)0x0);
      if (bVar5) goto LAB_00cbc53c;
      uVar17 = 0x165f;
    }
    break;
  case 3:
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = (void *)0x0;
    local_c4 = (undefined1  [4])0x0;
    uVar9 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_a8);
    uVar10 = seval_to_float((Value *)(*plVar8 + 0x10),(float *)local_c4);
    local_c0 = (ulong)local_c0._4_4_ << 0x20;
    uVar11 = seval_to_int32((Value *)(*plVar8 + 0x20),(int *)&local_c0);
    if ((((uVar9 & 1) == 0) || ((uVar10 & 1) == 0)) || ((uVar11 & 1) == 0)) {
      uVar17 = 0x1669;
    }
    else {
      uVar9 = local_c0 & 0xffffffff;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = (void *)0x0;
      ptVar15 = (type *)dragonBones::Animation::fadeIn
                                  ((Animation *)local_c4,lVar7,&local_a8,uVar9,0,&local_c0,3);
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      pVVar16 = (Value *)se::State::rval(aSStack_90);
      bVar5 = native_ptr_to_rooted_seval<dragonBones::AnimationState>(ptVar15,pVVar16,(bool *)0x0);
      if (bVar5) goto LAB_00cbc53c;
      uVar17 = 0x166c;
    }
    break;
  case 4:
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = (void *)0x0;
    local_c4 = (undefined1  [4])0x0;
    uVar9 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_a8);
    uVar10 = seval_to_float((Value *)(*plVar8 + 0x10),(float *)local_c4);
    local_c0._0_4_ = 0;
    uVar11 = seval_to_int32((Value *)(*plVar8 + 0x20),(int *)&local_c0);
    iVar3 = (int)local_c0;
    local_c0 = (ulong)local_c0._4_4_ << 0x20;
    uVar12 = seval_to_int32((Value *)(*plVar8 + 0x30),(int *)&local_c0);
    if (((((uVar9 & 1) == 0) || ((uVar10 & 1) == 0)) || ((uVar11 & 1) == 0)) || ((uVar12 & 1) == 0))
    {
      uVar17 = 0x1678;
    }
    else {
      uVar9 = local_c0 & 0xffffffff;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = (void *)0x0;
      ptVar15 = (type *)dragonBones::Animation::fadeIn
                                  ((Animation *)local_c4,lVar7,&local_a8,iVar3,uVar9,&local_c0,3);
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      pVVar16 = (Value *)se::State::rval(aSStack_90);
      bVar5 = native_ptr_to_rooted_seval<dragonBones::AnimationState>(ptVar15,pVVar16,(bool *)0x0);
      if (bVar5) goto LAB_00cbc53c;
      uVar17 = 0x167b;
    }
    break;
  case 5:
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = (void *)0x0;
    local_c4 = (undefined1  [4])0x0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = (void *)0x0;
    uVar9 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_a8);
    uVar10 = seval_to_float((Value *)(*plVar8 + 0x10),(float *)local_c4);
    local_c8 = 0;
    uVar11 = seval_to_int32((Value *)(*plVar8 + 0x20),&local_c8);
    iVar3 = local_c8;
    local_c8 = 0;
    uVar12 = seval_to_int32((Value *)(*plVar8 + 0x30),&local_c8);
    iVar4 = local_c8;
    uVar13 = seval_to_std_string((Value *)(*plVar8 + 0x40),(basic_string *)&local_c0);
    if ((((uVar9 & 1) == 0) || ((uVar10 & 1) == 0)) ||
       (((uVar11 & 1) == 0 || (((uVar12 & 1) == 0 || ((uVar13 & 1) == 0)))))) {
      uVar17 = 0x1689;
      goto LAB_00cbc804;
    }
    ptVar15 = (type *)dragonBones::Animation::fadeIn
                                ((Animation *)local_c4,lVar7,&local_a8,iVar3,iVar4,&local_c0,3);
    pVVar16 = (Value *)se::State::rval(aSStack_90);
    bVar5 = native_ptr_to_rooted_seval<dragonBones::AnimationState>(ptVar15,pVVar16,(bool *)0x0);
    if (!bVar5) {
      uVar17 = 0x168c;
      goto LAB_00cbc804;
    }
LAB_00cbc664:
    bVar5 = true;
    goto joined_r0x00cbc828;
  case 6:
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = (void *)0x0;
    local_c4 = (undefined1  [4])0x0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = (void *)0x0;
    uVar9 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_a8);
    uVar10 = seval_to_float((Value *)(*plVar8 + 0x10),(float *)local_c4);
    local_c8 = 0;
    uVar11 = seval_to_int32((Value *)(*plVar8 + 0x20),&local_c8);
    iVar3 = local_c8;
    local_c8 = 0;
    uVar12 = seval_to_int32((Value *)(*plVar8 + 0x30),&local_c8);
    iVar4 = local_c8;
    uVar13 = seval_to_std_string((Value *)(*plVar8 + 0x40),(basic_string *)&local_c0);
    local_c8 = 0;
    uVar14 = seval_to_int32((Value *)(*plVar8 + 0x50),&local_c8);
    if ((((((uVar9 & 1) == 0) || ((uVar10 & 1) == 0)) || ((uVar11 & 1) == 0)) ||
        (((uVar12 & 1) == 0 || ((uVar13 & 1) == 0)))) || ((uVar14 & 1) == 0)) {
      uVar17 = 0x169c;
    }
    else {
      ptVar15 = (type *)dragonBones::Animation::fadeIn
                                  ((Animation *)local_c4,lVar7,&local_a8,iVar3,iVar4,&local_c0,
                                   local_c8);
      pVVar16 = (Value *)se::State::rval(aSStack_90);
      bVar5 = native_ptr_to_rooted_seval<dragonBones::AnimationState>(ptVar15,pVVar16,(bool *)0x0);
      if (bVar5) goto LAB_00cbc664;
      uVar17 = 0x169f;
    }
LAB_00cbc804:
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,uVar17,"js_cocos2dx_dragonbones_Animation_fadeIn");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_Animation_fadeIn : Error processing arguments");
    bVar5 = false;
joined_r0x00cbc828:
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_a8 & 1) == 0) goto LAB_00cbc83c;
    operator_delete(local_98);
    if (bVar5) goto LAB_00cbc86c;
    goto LAB_00cbc840;
  default:
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 5794): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar8[1] - *plVar8) >> 4,6);
    goto LAB_00cbc840;
  }
  __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,uVar17,"js_cocos2dx_dragonbones_Animation_fadeIn");
  __android_log_print(6,"jswrapper",
                      "js_cocos2dx_dragonbones_Animation_fadeIn : Error processing arguments");
  bVar5 = false;
joined_r0x00cbc7c8:
  if ((local_a8 & 1) == 0) {
LAB_00cbc83c:
    if (bVar5) goto LAB_00cbc86c;
  }
  else {
    operator_delete(local_98);
    if (bVar5) goto LAB_00cbc86c;
  }
LAB_00cbc840:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_Animation_fadeIn",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x16a5);
LAB_00cbc86c:
  pVVar16 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar16,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_f8;
  pVVar16 = local_f0;
  if (local_f8 != (Value *)0x0) {
    while (pVVar16 != pVVar2) {
      se::Value::~Value(pVVar16 + -0x10);
      pVVar16 = pVVar16 + -0x10;
    }
    local_f0 = pVVar2;
    operator_delete(local_f8);
  }
  v8::HandleScope::~HandleScope(aHStack_e0);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

