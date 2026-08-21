
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::ReduceArrayPrototypeReduce(v8::internal::compiler::MapInference*,
   bool, v8::internal::ElementsKind, v8::internal::compiler::ArrayReduceDirection,
   v8::internal::compiler::SharedFunctionInfoRef const&) */

undefined8 __thiscall
v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::ReduceArrayPrototypeReduce
          (IteratingArrayBuiltinReducerAssembler *this,undefined8 param_1,byte param_2,
          undefined4 param_4,int param_5,undefined8 *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Node *pNVar6;
  IteratingArrayBuiltinReducerAssembler *pIVar7;
  long *plVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined8 local_270;
  IteratingArrayBuiltinReducerAssembler *local_268;
  IteratingArrayBuiltinReducerAssembler *local_260;
  undefined *local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  int local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined *local_220;
  Node *local_218;
  undefined8 local_210;
  undefined8 local_208;
  Node *local_200;
  IteratingArrayBuiltinReducerAssembler *pIStack_1f8;
  IteratingArrayBuiltinReducerAssembler *local_1f0;
  IteratingArrayBuiltinReducerAssembler *pIStack_1e8;
  Node **local_1e0;
  IteratingArrayBuiltinReducerAssembler **local_1d0;
  long alStack_1c0 [4];
  long *local_1a0;
  long alStack_190 [4];
  long *local_170;
  undefined8 local_160;
  GraphAssemblerLabel local_150 [4];
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  GraphAssemblerLabel *local_130;
  Node *local_128;
  undefined8 local_120;
  undefined2 local_110;
  undefined *apuStack_100 [4];
  undefined **local_e0;
  long alStack_d0 [4];
  long *local_b0;
  undefined **local_a0;
  IteratingArrayBuiltinReducerAssembler *pIStack_98;
  undefined ***local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_210._4_1_ = param_2 & 1;
  local_210._0_1_ = (undefined1)param_4;
  local_208 = param_1;
  uVar3 = NodeProperties::GetFrameStateInput(*(Node **)(this + 0x38));
  uVar4 = NodeProperties::GetContextInput(*(Node **)(this + 0x38));
  uVar5 = NodeProperties::GetValueInput(*(Node **)(this + 0x38),0);
  pNVar6 = (Node *)NodeProperties::GetValueInput(*(Node **)(this + 0x38),1);
  local_218 = pNVar6;
  if (*(int *)(*(long *)*(Node **)(this + 0x38) + 0x14) < 3) {
    local_220 = (undefined *)GraphAssembler::UndefinedConstant((GraphAssembler *)this);
  }
  else {
    local_220 = (undefined *)NodeProperties::GetValueInput(*(Node **)(this + 0x38),2);
  }
  local_258 = *(undefined **)(this + 0x18);
  uStack_248 = param_6[1];
  local_250 = *param_6;
  local_240 = param_5;
  local_238 = uVar4;
  local_230 = uVar5;
  local_228 = uVar3;
  AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_200,param_4);
  local_260 = (IteratingArrayBuiltinReducerAssembler *)
              GraphAssembler::LoadField((GraphAssembler *)this,(FieldAccess *)&local_200,pNVar6);
  local_b0 = (long *)0x0;
  local_e0 = (undefined **)0x0;
  local_268 = (IteratingArrayBuiltinReducerAssembler *)
              GraphAssembler::ZeroConstant((GraphAssembler *)this);
  local_270 = GraphAssembler::OneConstant((GraphAssembler *)this);
  pIVar7 = local_268;
  pIStack_1f8 = this;
  local_1e0 = &local_200;
  if (param_5 == 0) {
    local_200 = (Node *)&PTR_FUN_01ccd7b0;
    local_1f0 = (IteratingArrayBuiltinReducerAssembler *)&local_270;
    FUN_016f88cc(&local_200,alStack_d0);
    if (&local_200 == local_1e0) {
      pcVar9 = *(code **)(*local_1e0 + 0x20);
LAB_016d8dc8:
      (*pcVar9)();
    }
    else if (local_1e0 != (Node **)0x0) {
      pcVar9 = *(code **)(*local_1e0 + 0x28);
      goto LAB_016d8dc8;
    }
    local_200 = (Node *)&PTR_FUN_01ccd7f8;
    local_1f0 = (IteratingArrayBuiltinReducerAssembler *)&local_260;
  }
  else {
    pIVar7 = (IteratingArrayBuiltinReducerAssembler *)
             GraphAssembler::NumberSubtract((GraphAssembler *)this,local_260,local_270);
    local_1f0 = (IteratingArrayBuiltinReducerAssembler *)&local_270;
    local_200 = (Node *)&PTR_FUN_01ccd840;
    FUN_016f88cc(&local_200,alStack_d0);
    if (&local_200 == local_1e0) {
      pcVar9 = *(code **)(*local_1e0 + 0x20);
LAB_016d8dac:
      (*pcVar9)();
    }
    else if (local_1e0 != (Node **)0x0) {
      pcVar9 = *(code **)(*local_1e0 + 0x28);
      goto LAB_016d8dac;
    }
    local_200 = (Node *)&PTR_FUN_01ccd888;
    local_1f0 = (IteratingArrayBuiltinReducerAssembler *)&local_268;
  }
  pIStack_1f8 = this;
  local_1e0 = &local_200;
  FUN_016f8a98(&local_200,apuStack_100);
  if (&local_200 == local_1e0) {
    pcVar9 = *(code **)(*local_1e0 + 0x20);
LAB_016d8e18:
    (*pcVar9)();
  }
  else if (local_1e0 != (Node **)0x0) {
    pcVar9 = *(code **)(*local_1e0 + 0x28);
    goto LAB_016d8e18;
  }
  puVar2 = local_220;
  uVar10 = 0x2c6;
  if (local_240 != 0) {
    uVar10 = 0x2c1;
  }
  local_200 = local_218;
  pIStack_1f8 = (IteratingArrayBuiltinReducerAssembler *)local_220;
  pIStack_1e8 = local_260;
  local_1f0 = pIVar7;
  uVar3 = CreateJavaScriptBuiltinContinuationFrameState
                    (local_258,&local_250,uVar10,local_230,local_238,&local_200,4,local_228,1);
  ThrowIfNotCallable(this,puVar2,uVar3);
  if (*(int *)(*(long *)*(Node **)(this + 0x38) + 0x14) < 4) {
    local_148 = GraphAssembler::NewBasicBlock((GraphAssembler *)this,false);
    local_150[0] = (GraphAssemblerLabel)0x0;
    local_14c = 1;
    uStack_140 = 0;
    local_110 = 0x808;
    local_1f0 = (IteratingArrayBuiltinReducerAssembler *)&PTR_FUN_01ccd338;
    local_80 = &local_a0;
    local_1d0 = &local_1f0;
    pIStack_1f8 = pIVar7;
    pIStack_1e8 = this;
    local_a0 = (undefined **)local_1f0;
    pIStack_98 = this;
    if (local_b0 == (long *)0x0) {
      local_1a0 = (long *)0x0;
      local_200 = (Node *)this;
    }
    else if (alStack_d0 == local_b0) {
      local_1a0 = alStack_1c0;
      local_200 = (Node *)this;
      (**(code **)(*local_b0 + 0x18))();
    }
    else {
      local_200 = (Node *)this;
      local_1a0 = (long *)(**(code **)(*local_b0 + 0x10))();
    }
    if (&local_a0 == local_80) {
      pcVar9 = (code *)(*local_80)[4];
LAB_016d8f48:
      (*pcVar9)();
    }
    else if (local_80 != (undefined ***)0x0) {
      pcVar9 = (code *)(*local_80)[5];
      goto LAB_016d8f48;
    }
    local_80 = operator_new(0x48);
    local_80[2] = &local_258;
    local_80[3] = &local_218;
    local_80[6] = apuStack_100;
    local_80[7] = (undefined **)&local_210;
    local_80[4] = &local_220;
    local_80[5] = &local_260;
    *local_80 = &PTR_FUN_01ccd8d0;
    local_80[1] = (undefined **)this;
    local_80[8] = (undefined **)local_150;
    JSCallReducerAssembler::ForBuilder0::Do((ForBuilder0 *)&local_200,(function *)&local_a0);
    if (&local_a0 == local_80) {
      pcVar9 = (code *)(*local_80)[4];
LAB_016d8fc4:
      (*pcVar9)();
    }
    else if (local_80 != (undefined ***)0x0) {
      pcVar9 = (code *)(*local_80)[5];
      goto LAB_016d8fc4;
    }
    if (alStack_1c0 == local_1a0) {
      pcVar9 = *(code **)(*local_1a0 + 0x20);
LAB_016d8ff4:
      (*pcVar9)();
    }
    else if (local_1a0 != (long *)0x0) {
      pcVar9 = *(code **)(*local_1a0 + 0x28);
      goto LAB_016d8ff4;
    }
    if (&local_1f0 == local_1d0) {
      pcVar9 = *(code **)(*local_1d0 + 0x20);
LAB_016d9024:
      (*pcVar9)();
    }
    else if (local_1d0 != (IteratingArrayBuiltinReducerAssembler **)0x0) {
      pcVar9 = *(code **)(*local_1d0 + 0x28);
      goto LAB_016d9024;
    }
    GraphAssembler::Unreachable((GraphAssembler *)this);
    GraphAssembler::InitializeEffectControl((GraphAssembler *)this,(Node *)0x0,(Node *)0x0);
    GraphAssembler::Bind<2ul>((GraphAssembler *)this,local_150);
    local_200 = local_128;
    if (local_b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    pIVar7 = (IteratingArrayBuiltinReducerAssembler *)
             (**(code **)(*local_b0 + 0x30))(local_b0,&local_200);
    uVar3 = GraphAssembler::TypeGuard((GraphAssembler *)this,0xc7f7fff,local_120);
  }
  else {
    uVar3 = NodeProperties::GetValueInput(*(Node **)(this + 0x38),3);
  }
  pIStack_1f8 = pIVar7;
  if (local_e0 == (undefined **)0x0) {
    local_1d0 = (IteratingArrayBuiltinReducerAssembler **)0x0;
    local_200 = (Node *)this;
joined_r0x016d90e0:
    if (local_b0 != (long *)0x0) goto LAB_016d90b8;
LAB_016d90e4:
    local_1a0 = (long *)0x0;
  }
  else {
    if (apuStack_100 == local_e0) {
      local_1d0 = &local_1f0;
      local_200 = (Node *)this;
      (**(code **)(*local_e0 + 0x18))();
      goto joined_r0x016d90e0;
    }
    local_200 = (Node *)this;
    local_1d0 = (IteratingArrayBuiltinReducerAssembler **)(**(code **)(*local_e0 + 0x10))();
    if (local_b0 == (long *)0x0) goto LAB_016d90e4;
LAB_016d90b8:
    if (alStack_d0 == local_b0) {
      local_1a0 = alStack_1c0;
      (**(code **)(*local_b0 + 0x18))();
    }
    else {
      local_1a0 = (long *)(**(code **)(*local_b0 + 0x10))();
    }
  }
  local_170 = (long *)0x0;
  local_160 = uVar3;
  plVar8 = operator_new(0x48);
  *plVar8 = (long)&PTR_FUN_01ccd918;
  plVar8[1] = (long)this;
  plVar8[2] = (long)&local_258;
  plVar8[3] = (long)&local_218;
  plVar8[4] = (long)&local_220;
  plVar8[5] = (long)&local_260;
  plVar8[6] = (long)&local_208;
  plVar8[7] = (long)((long)&local_210 + 4);
  plVar8[8] = (long)&local_210;
  local_130 = (GraphAssemblerLabel *)FUN_016f8f9c();
  FUN_016f610c(local_150,alStack_190);
  if (local_150 == local_130) {
    pcVar9 = *(code **)(*(long *)local_130 + 0x20);
LAB_016d91b8:
    (*pcVar9)();
  }
  else if (local_130 != (GraphAssemblerLabel *)0x0) {
    pcVar9 = *(code **)(*(long *)local_130 + 0x28);
    goto LAB_016d91b8;
  }
  uVar3 = JSCallReducerAssembler::ForBuilder1::Value((ForBuilder1 *)&local_200);
  (**(code **)(*plVar8 + 0x28))(plVar8);
  if (alStack_190 == local_170) {
    pcVar9 = *(code **)(*local_170 + 0x20);
LAB_016d9204:
    (*pcVar9)();
  }
  else if (local_170 != (long *)0x0) {
    pcVar9 = *(code **)(*local_170 + 0x28);
    goto LAB_016d9204;
  }
  if (alStack_1c0 == local_1a0) {
    pcVar9 = *(code **)(*local_1a0 + 0x20);
LAB_016d9234:
    (*pcVar9)();
  }
  else if (local_1a0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_1a0 + 0x28);
    goto LAB_016d9234;
  }
  if (&local_1f0 == local_1d0) {
    pcVar9 = *(code **)(*local_1d0 + 0x20);
LAB_016d9264:
    (*pcVar9)();
  }
  else if (local_1d0 != (IteratingArrayBuiltinReducerAssembler **)0x0) {
    pcVar9 = *(code **)(*local_1d0 + 0x28);
    goto LAB_016d9264;
  }
  if (apuStack_100 == local_e0) {
    pcVar9 = *(code **)(*local_e0 + 0x20);
LAB_016d9290:
    (*pcVar9)();
  }
  else if (local_e0 != (undefined **)0x0) {
    pcVar9 = *(code **)(*local_e0 + 0x28);
    goto LAB_016d9290;
  }
  if (alStack_d0 == local_b0) {
    pcVar9 = *(code **)(*local_b0 + 0x20);
  }
  else {
    if (local_b0 == (long *)0x0) goto LAB_016d92c0;
    pcVar9 = *(code **)(*local_b0 + 0x28);
  }
  (*pcVar9)();
LAB_016d92c0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

