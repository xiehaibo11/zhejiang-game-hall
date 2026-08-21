
/* v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::ReduceArrayPrototypeMap(v8::internal::compiler::MapInference*,
   bool, v8::internal::ElementsKind, v8::internal::compiler::SharedFunctionInfoRef const&,
   v8::internal::compiler::NativeContextRef const&) */

void __thiscall
v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::ReduceArrayPrototypeMap
          (IteratingArrayBuiltinReducerAssembler *this,undefined8 param_1,byte param_2,
          undefined4 param_4,undefined8 *param_5,NativeContextRef *param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Node *pNVar6;
  undefined8 uVar7;
  long lVar8;
  Operator *pOVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  Graph *pGVar14;
  SimplifiedOperatorBuilder *this_00;
  undefined1 local_1a8 [16];
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  Node *pNStack_178;
  undefined8 local_170;
  undefined **ppuStack_168;
  undefined8 local_160;
  undefined **ppuStack_158;
  undefined **local_150;
  undefined8 local_148;
  Node *local_140;
  undefined1 local_138 [4];
  byte local_134 [4];
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120 [16];
  undefined **local_110;
  IteratingArrayBuiltinReducerAssembler *local_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined ***local_f0;
  undefined **local_e0;
  IteratingArrayBuiltinReducerAssembler *pIStack_d8;
  undefined ***local_c0;
  long lStack_b0;
  IteratingArrayBuiltinReducerAssembler *local_a8;
  undefined **ppuStack_a0;
  long *local_90;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_134[0] = param_2 & 1;
  local_138[0] = (undefined1)param_4;
  local_130 = param_1;
  uVar3 = NodeProperties::GetFrameStateInput(*(Node **)(this + 0x38));
  uVar4 = NodeProperties::GetContextInput(*(Node **)(this + 0x38));
  uVar5 = NodeProperties::GetValueInput(*(Node **)(this + 0x38),0);
  pNVar6 = (Node *)NodeProperties::GetValueInput(*(Node **)(this + 0x38),1);
  local_140 = pNVar6;
  if (*(int *)(*(long *)*(Node **)(this + 0x38) + 0x14) < 3) {
    local_148 = GraphAssembler::UndefinedConstant((GraphAssembler *)this);
  }
  else {
    local_148 = NodeProperties::GetValueInput(*(Node **)(this + 0x38),2);
  }
  if (*(int *)(*(long *)*(Node **)(this + 0x38) + 0x14) < 4) {
    local_150 = (undefined **)GraphAssembler::UndefinedConstant((GraphAssembler *)this);
  }
  else {
    local_150 = (undefined **)NodeProperties::GetValueInput(*(Node **)(this + 0x38),3);
  }
  AccessBuilder::ForJSArrayLength((AccessBuilder *)local_120,param_4);
  pNVar6 = (Node *)GraphAssembler::LoadField((GraphAssembler *)this,(FieldAccess *)local_120,pNVar6)
  ;
  uVar7 = GraphAssembler::NumberConstant((GraphAssembler *)this,33554432.0);
  pGVar14 = (Graph *)**(undefined8 **)(this + 0x18);
  this_00 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f];
  lVar8 = CallParametersOf((Operator *)**(undefined8 **)(this + 0x38));
  pOVar9 = (Operator *)SimplifiedOperatorBuilder::CheckBounds(this_00,(FeedbackSource *)(lVar8 + 8))
  ;
  local_110 = *(undefined ***)(this + 0x20);
  local_108 = *(IteratingArrayBuiltinReducerAssembler **)(this + 0x28);
  local_120._0_8_ = pNVar6;
  local_120._8_8_ = uVar7;
  pNVar6 = (Node *)Graph::NewNode(pGVar14,pOVar9,4,(Node **)local_120,false);
  ppuVar10 = (undefined **)GraphAssembler::AddNode((GraphAssembler *)this,pNVar6);
  local_1a8 = NativeContextRef::GetInitialJSArrayMap(param_6,param_4);
  local_120 = MapRef::GetConstructor((MapRef *)local_1a8);
  pNVar6 = (Node *)GraphAssembler::Constant((GraphAssembler *)this,(ObjectRef *)local_120);
  pGVar14 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar9 = (Operator *)
           JSOperatorBuilder::CreateArray
                     ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2e],1,0);
  uVar7 = NodeProperties::GetContextInput(*(Node **)(this + 0x38));
  ppuStack_100 = (undefined **)NodeProperties::GetFrameStateInput(*(Node **)(this + 0x38));
  ppuStack_f8 = *(undefined ***)(this + 0x20);
  local_f0 = *(undefined ****)(this + 0x28);
  local_120._0_8_ = pNVar6;
  local_120._8_8_ = pNVar6;
  local_110 = ppuVar10;
  local_108 = (IteratingArrayBuiltinReducerAssembler *)uVar7;
  pNVar6 = (Node *)Graph::NewNode(pGVar14,pOVar9,7,(Node **)local_120,false);
  uVar11 = GraphAssembler::AddNode((GraphAssembler *)this,pNVar6);
  pNVar6 = local_140;
  uVar7 = local_148;
  ppuVar2 = local_150;
  uVar13 = *(undefined8 *)(this + 0x18);
  uStack_198 = param_5[1];
  local_1a8._8_8_ = *param_5;
  pNStack_178 = local_140;
  local_170 = local_148;
  ppuStack_168 = local_150;
  local_1a8._0_8_ = uVar13;
  local_190 = uVar4;
  uStack_188 = uVar5;
  local_180 = uVar3;
  local_160 = uVar11;
  ppuStack_158 = ppuVar10;
  local_128 = uVar11;
  ppuStack_100 = (undefined **)GraphAssembler::ZeroConstant((GraphAssembler *)this);
  local_120._0_8_ = pNVar6;
  local_120._8_8_ = uVar7;
  local_110 = ppuVar2;
  local_108 = (IteratingArrayBuiltinReducerAssembler *)uVar11;
  ppuStack_f8 = ppuVar10;
  uVar3 = CreateJavaScriptBuiltinContinuationFrameState
                    (uVar13,local_1a8 + 8,699,uVar5,uVar4,local_120,6,uVar3,1);
  ThrowIfNotCallable(this,uVar7,uVar3);
  local_120._8_8_ = GraphAssembler::ZeroConstant((GraphAssembler *)this);
  local_f0 = &local_110;
  local_c0 = &local_e0;
  local_110 = &PTR_FUN_01ccd2a8;
  local_e0 = &PTR_FUN_01ccd2f0;
  local_120._0_8_ = this;
  local_108 = this;
  ppuStack_100 = ppuVar10;
  pIStack_d8 = this;
  local_a8 = this;
  ppuStack_a0 = ppuVar10;
  local_90 = operator_new(0x58);
  *local_90 = (long)&PTR_FUN_01ccd960;
  local_90[1] = (long)this;
  local_90[6] = (long)&local_140;
  local_90[7] = (long)&local_148;
  local_90[2] = (long)local_1a8;
  local_90[3] = (long)&local_130;
  local_90[4] = (long)local_134;
  local_90[5] = (long)local_138;
  local_90[8] = (long)&local_150;
  local_90[9] = (long)param_6;
  local_90[10] = (long)&local_128;
  JSCallReducerAssembler::ForBuilder0::Do((ForBuilder0 *)local_120,(function *)&lStack_b0);
  if (&lStack_b0 == local_90) {
    pcVar12 = *(code **)(*local_90 + 0x20);
LAB_016d985c:
    (*pcVar12)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar12 = *(code **)(*local_90 + 0x28);
    goto LAB_016d985c;
  }
  if (&local_e0 == local_c0) {
    pcVar12 = (code *)(*local_c0)[4];
LAB_016d988c:
    (*pcVar12)();
  }
  else if (local_c0 != (undefined ***)0x0) {
    pcVar12 = (code *)(*local_c0)[5];
    goto LAB_016d988c;
  }
  if (&local_110 == local_f0) {
    pcVar12 = (code *)(*local_f0)[4];
  }
  else {
    if (local_f0 == (undefined ***)0x0) goto LAB_016d98c0;
    pcVar12 = (code *)(*local_f0)[5];
  }
  (*pcVar12)();
LAB_016d98c0:
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_128);
}

