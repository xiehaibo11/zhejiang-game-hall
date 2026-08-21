
/* v8::internal::interpreter::BytecodeGenerator::VisitForOfStatement(v8::internal::ForOfStatement*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitForOfStatement
          (BytecodeGenerator *this,ForOfStatement *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  BytecodeArrayBuilder *pBVar8;
  BytecodeArrayBuilder *pBVar9;
  AstNode *pAVar10;
  int iVar11;
  BytecodeGenerator *local_190;
  ForOfStatement **ppFStack_188;
  int *local_180;
  undefined1 *puStack_178;
  int local_170 [2];
  undefined1 local_168 [12];
  ForOfStatement *local_158;
  undefined **local_150;
  BytecodeGenerator *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined ***local_130;
  BytecodeGenerator **ppBStack_128;
  BytecodeGenerator *local_120;
  long local_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  int local_f8;
  int local_f4;
  undefined8 local_f0;
  undefined *local_e8;
  BytecodeGenerator *pBStack_e0;
  int local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  BytecodeGenerator *pBStack_c0;
  int local_b8;
  undefined4 uStack_b4;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 ***local_a0;
  undefined8 ***pppuStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_c8 = &local_e8;
  local_e8 = *(undefined **)(this + 0x300);
  local_d8 = *(int *)(this + 0x118);
  local_d0 = 1;
  *(undefined ***)(this + 0x300) = local_c8;
  pAVar10 = *(AstNode **)(param_1 + 0x28);
  iVar11 = *(int *)pAVar10;
  if (iVar11 != -1) {
    this[0x1c0] = (BytecodeGenerator)0x2;
    *(int *)(this + 0x1c4) = iVar11;
    pAVar10 = *(AstNode **)(param_1 + 0x28);
  }
  local_b0 = 2;
  *(undefined ****)(this + 0x300) = &local_c8;
  local_158 = param_1;
  pBStack_e0 = this;
  pBStack_c0 = this;
  local_b8 = local_d8;
  if (this[8] == (BytecodeGenerator)0x0) {
    uVar6 = GetCurrentStackPosition();
    if (uVar6 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar10);
    }
  }
  pBVar9 = (BytecodeArrayBuilder *)(this + 0x18);
  *(undefined ***)(pBStack_c0 + 0x300) = local_c8;
  plVar7 = *(long **)(pBStack_c0 + 0x120);
  iVar11 = *(int *)(pBStack_c0 + 0x118);
  *(int *)(pBStack_c0 + 0x118) = local_b8;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7,CONCAT44(iVar11 - local_b8,local_b8));
  }
  local_168 = BuildGetIteratorRecord(this,*(undefined4 *)(local_158 + 0x30));
  iVar2 = *(int *)(this + 0x118);
  iVar11 = *(int *)(this + 0x11c);
  plVar7 = *(long **)(this + 0x120);
  if (iVar11 <= iVar2 + 1) {
    iVar11 = iVar2 + 1;
  }
  *(int *)(this + 0x118) = iVar2 + 1;
  *(int *)(this + 0x11c) = iVar11;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7,iVar2);
  }
  local_170[0] = iVar2;
  BytecodeArrayBuilder::LoadFalse(pBVar9);
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar9,iVar2);
  ppFStack_188 = &local_158;
  local_180 = local_170;
  puStack_178 = local_168;
  local_c8 = &PTR__TryFinallyBuilder_01cc7188;
  local_190 = this;
  pBStack_c0 = (BytecodeGenerator *)pBVar9;
  local_b8 = HandlerTableBuilder::NewHandlerEntry((HandlerTableBuilder *)(this + 0xf0));
  uStack_b4 = 0;
  local_b0 = local_b0 & 0xffffffffffffff00;
  local_a8 = 0xffffffffffffffff;
  local_a0 = &local_a0;
  uStack_88 = *(undefined8 *)(this + 0x18);
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_90 = 0;
  iVar3 = *(int *)(this + 0x118);
  iVar2 = *(int *)(this + 0x11c);
  plVar7 = *(long **)(this + 0x120);
  iVar11 = iVar3 + 1;
  if (iVar2 <= iVar11) {
    iVar2 = iVar3 + 1;
  }
  *(int *)(this + 0x118) = iVar11;
  *(int *)(this + 0x11c) = iVar2;
  pppuStack_98 = local_a0;
  if (plVar7 == (long *)0x0) {
    iVar1 = iVar3 + 2;
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    *(int *)(this + 0x118) = iVar1;
    *(int *)(this + 0x11c) = iVar2;
  }
  else {
    (**(code **)(*plVar7 + 0x10))(plVar7,iVar3);
    iVar11 = *(int *)(this + 0x118);
    iVar2 = *(int *)(this + 0x11c);
    plVar7 = *(long **)(this + 0x120);
    if (iVar2 <= iVar11 + 1) {
      iVar2 = iVar11 + 1;
    }
    *(int *)(this + 0x118) = iVar11 + 1;
    *(int *)(this + 0x11c) = iVar2;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,iVar11);
    }
  }
  local_118 = 0;
  local_100 = *(undefined8 *)(this + 0x10);
  local_110 = 0;
  uStack_108 = 0;
  local_f0 = 0xffffffffffffffff;
  local_150 = (undefined **)CONCAT44(local_150._4_4_,4);
  local_148 = (BytecodeGenerator *)0x0;
  local_140 = (ulong)local_140._4_4_ << 0x20;
  local_120 = this;
  local_f8 = iVar3;
  local_f4 = iVar11;
  std::__ndk1::
  vector<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry>>
  ::
  __push_back_slow_path<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry>
            ((vector<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry>>
              *)&local_118,(Entry *)&local_150);
  iVar2 = *(int *)(this + 0x118);
  iVar11 = *(int *)(this + 0x11c);
  plVar7 = *(long **)(this + 0x120);
  if (iVar11 <= iVar2 + 1) {
    iVar11 = iVar2 + 1;
  }
  *(int *)(this + 0x118) = iVar2 + 1;
  *(int *)(this + 0x11c) = iVar11;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7,iVar2);
  }
  uVar5 = Register::current_context();
  BytecodeArrayBuilder::MoveRegister(pBVar9,uVar5,iVar2);
  TryFinallyBuilder::BeginTry((TryFinallyBuilder *)&local_c8,iVar2);
  uStack_138 = *(undefined8 *)(this + 0x2f8);
  local_140 = *(long *)(this + 0x2f0);
  local_150 = &PTR__ControlScope_01cc70b8;
  *(undefined ****)(this + 0x2f0) = &local_150;
  local_148 = this;
  local_130 = &local_c8;
  ppBStack_128 = &local_120;
  FUN_01520a5c(&local_190);
  local_150 = &PTR__ControlScope_01cc7020;
  *(long *)(local_148 + 0x2f0) = local_140;
  TryFinallyBuilder::EndTry((TryFinallyBuilder *)&local_c8);
  BytecodeArrayBuilder::LoadLiteral((BytecodeArrayBuilder *)(local_120 + 0x18),0xfffffffffffffffe);
  BytecodeArrayBuilder::StoreAccumulatorInRegister
            ((BytecodeArrayBuilder *)(local_120 + 0x18),local_f8);
  BytecodeArrayBuilder::StoreAccumulatorInRegister
            ((BytecodeArrayBuilder *)(local_120 + 0x18),local_f4);
  TryFinallyBuilder::LeaveTry((TryFinallyBuilder *)&local_c8);
  TryFinallyBuilder::BeginHandler((TryFinallyBuilder *)&local_c8);
  BytecodeArrayBuilder::StoreAccumulatorInRegister
            ((BytecodeArrayBuilder *)(local_120 + 0x18),local_f4);
  BytecodeArrayBuilder::LoadLiteral((BytecodeArrayBuilder *)(local_120 + 0x18),0);
  BytecodeArrayBuilder::StoreAccumulatorInRegister
            ((BytecodeArrayBuilder *)(local_120 + 0x18),local_f8);
  TryFinallyBuilder::BeginFinally((TryFinallyBuilder *)&local_c8);
  pBVar8 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadTheHole(pBVar9);
  pBVar8 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::SetPendingMessage(pBVar8);
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar8,iVar2);
  BuildFinalizeIteration(this,local_168._0_8_,local_168._8_4_,local_170[0],iVar3);
  TryFinallyBuilder::EndFinally();
  pBVar9 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar9,iVar2);
  BytecodeArrayBuilder::SetPendingMessage(pBVar9);
  ControlScope::DeferredCommands::ApplyDeferredCommands((DeferredCommands *)&local_120);
  if (local_118 != 0) {
    local_110 = local_118;
  }
  TryFinallyBuilder::~TryFinallyBuilder((TryFinallyBuilder *)&local_c8);
  *(undefined **)(pBStack_e0 + 0x300) = local_e8;
  plVar7 = *(long **)(pBStack_e0 + 0x120);
  iVar11 = *(int *)(pBStack_e0 + 0x118);
  *(int *)(pBStack_e0 + 0x118) = local_d8;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7,CONCAT44(iVar11 - local_d8,local_d8));
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

