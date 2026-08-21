
/* v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::ReduceArrayPrototypeForEach(v8::internal::compiler::MapInference*,
   bool, v8::internal::ElementsKind, v8::internal::compiler::SharedFunctionInfoRef const&) */

void __thiscall
v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::ReduceArrayPrototypeForEach
          (IteratingArrayBuiltinReducerAssembler *this,undefined8 param_1,byte param_2,
          undefined4 param_4,undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Node *pNVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  Node *pNStack_168;
  undefined8 local_160;
  undefined **ppuStack_158;
  undefined8 local_150;
  undefined **local_148;
  undefined8 local_140;
  Node *local_138;
  undefined1 local_130 [4];
  byte local_12c [4];
  undefined8 local_128;
  Node *local_120;
  undefined8 uStack_118;
  undefined **local_110;
  IteratingArrayBuiltinReducerAssembler *local_108;
  undefined8 uStack_100;
  undefined ***local_f0;
  undefined **local_e0;
  IteratingArrayBuiltinReducerAssembler *pIStack_d8;
  undefined ***local_c0;
  long lStack_b0;
  IteratingArrayBuiltinReducerAssembler *local_a8;
  undefined8 uStack_a0;
  long *local_90;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_12c[0] = param_2 & 1;
  local_130[0] = (undefined1)param_4;
  local_128 = param_1;
  uVar2 = NodeProperties::GetFrameStateInput(*(Node **)(this + 0x38));
  uVar3 = NodeProperties::GetContextInput(*(Node **)(this + 0x38));
  uVar4 = NodeProperties::GetValueInput(*(Node **)(this + 0x38),0);
  pNVar5 = (Node *)NodeProperties::GetValueInput(*(Node **)(this + 0x38),1);
  local_138 = pNVar5;
  if (*(int *)(*(long *)*(Node **)(this + 0x38) + 0x14) < 3) {
    uVar6 = GraphAssembler::UndefinedConstant((GraphAssembler *)this);
  }
  else {
    uVar6 = NodeProperties::GetValueInput(*(Node **)(this + 0x38),2);
  }
  local_140 = uVar6;
  if (*(int *)(*(long *)*(Node **)(this + 0x38) + 0x14) < 4) {
    ppuVar7 = (undefined **)GraphAssembler::UndefinedConstant((GraphAssembler *)this);
  }
  else {
    ppuVar7 = (undefined **)NodeProperties::GetValueInput(*(Node **)(this + 0x38),3);
  }
  local_148 = ppuVar7;
  AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_120,param_4);
  uVar8 = GraphAssembler::LoadField((GraphAssembler *)this,(FieldAccess *)&local_120,pNVar5);
  uVar10 = *(undefined8 *)(this + 0x18);
  uStack_188 = param_5[1];
  local_190 = *param_5;
  local_198 = uVar10;
  local_180 = uVar3;
  uStack_178 = uVar4;
  local_170 = uVar2;
  pNStack_168 = pNVar5;
  local_160 = uVar6;
  ppuStack_158 = ppuVar7;
  local_150 = uVar8;
  local_108 = (IteratingArrayBuiltinReducerAssembler *)
              GraphAssembler::ZeroConstant((GraphAssembler *)this);
  local_120 = pNVar5;
  uStack_118 = uVar6;
  local_110 = ppuVar7;
  uStack_100 = uVar8;
  uVar2 = CreateJavaScriptBuiltinContinuationFrameState
                    (uVar10,&local_190,0x2aa,uVar4,uVar3,&local_120,5,uVar2,1);
  ThrowIfNotCallable(this,uVar6,uVar2);
  uStack_118 = GraphAssembler::ZeroConstant((GraphAssembler *)this);
  local_f0 = &local_110;
  local_c0 = &local_e0;
  local_110 = &PTR_FUN_01ccd2a8;
  local_e0 = &PTR_FUN_01ccd2f0;
  local_120 = (Node *)this;
  local_108 = this;
  uStack_100 = uVar8;
  pIStack_d8 = this;
  local_a8 = this;
  uStack_a0 = uVar8;
  local_90 = operator_new(0x48);
  local_90[2] = (long)&local_198;
  local_90[3] = (long)&local_128;
  local_90[4] = (long)local_12c;
  local_90[5] = (long)local_130;
  *local_90 = (long)&PTR_FUN_01ccd768;
  local_90[1] = (long)this;
  local_90[6] = (long)&local_138;
  local_90[7] = (long)&local_140;
  local_90[8] = (long)&local_148;
  JSCallReducerAssembler::ForBuilder0::Do((ForBuilder0 *)&local_120,(function *)&lStack_b0);
  if (&lStack_b0 == local_90) {
    pcVar9 = *(code **)(*local_90 + 0x20);
LAB_016d8820:
    (*pcVar9)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar9 = *(code **)(*local_90 + 0x28);
    goto LAB_016d8820;
  }
  if (&local_e0 == local_c0) {
    pcVar9 = (code *)(*local_c0)[4];
LAB_016d8850:
    (*pcVar9)();
  }
  else if (local_c0 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_c0)[5];
    goto LAB_016d8850;
  }
  if (&local_110 == local_f0) {
    pcVar9 = (code *)(*local_f0)[4];
  }
  else {
    if (local_f0 == (undefined ***)0x0) goto LAB_016d8884;
    pcVar9 = (code *)(*local_f0)[5];
  }
  (*pcVar9)();
LAB_016d8884:
  GraphAssembler::UndefinedConstant((GraphAssembler *)this);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

