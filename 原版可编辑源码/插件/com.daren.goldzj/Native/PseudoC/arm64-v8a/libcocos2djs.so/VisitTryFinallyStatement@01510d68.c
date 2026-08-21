
/* v8::internal::interpreter::BytecodeGenerator::VisitTryFinallyStatement(v8::internal::TryFinallyStatement*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitTryFinallyStatement
          (BytecodeGenerator *this,TryFinallyStatement *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  BytecodeArrayBuilder *pBVar8;
  BytecodeArrayBuilder *pBVar9;
  undefined8 uVar10;
  int iVar11;
  AstNode *pAVar12;
  undefined **local_130;
  BytecodeGenerator *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined ***local_110;
  BytecodeGenerator **ppBStack_108;
  BytecodeGenerator *local_100;
  long local_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  int local_d8;
  int local_d4;
  undefined8 local_d0;
  undefined **local_c8;
  BytecodeArrayBuilder *pBStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 ***local_a0;
  undefined8 ***pppuStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  TryFinallyStatement *pTStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pBVar9 = (BytecodeArrayBuilder *)(this + 0x18);
  uVar5 = *(undefined4 *)(this + 0x338);
  if (param_1 == (TryFinallyStatement *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(this + 0x208);
  }
  local_c8 = &PTR__TryFinallyBuilder_01cc7188;
  pBStack_c0 = pBVar9;
  local_b8 = HandlerTableBuilder::NewHandlerEntry((HandlerTableBuilder *)(this + 0xf0));
  local_b0 = 0;
  local_a8 = 0xffffffffffffffff;
  local_a0 = &local_a0;
  uStack_88 = *(undefined8 *)(this + 0x18);
  local_80 = 0;
  local_90 = 0;
  iVar2 = *(int *)(this + 0x118);
  iVar3 = *(int *)(this + 0x11c);
  plVar6 = *(long **)(this + 0x120);
  iVar11 = iVar2 + 1;
  if (iVar3 <= iVar11) {
    iVar3 = iVar2 + 1;
  }
  *(int *)(this + 0x118) = iVar11;
  *(int *)(this + 0x11c) = iVar3;
  uStack_b4 = uVar5;
  pppuStack_98 = local_a0;
  local_78 = uVar10;
  pTStack_70 = param_1;
  if (plVar6 == (long *)0x0) {
    iVar1 = iVar2 + 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    *(int *)(this + 0x118) = iVar1;
    *(int *)(this + 0x11c) = iVar3;
  }
  else {
    (**(code **)(*plVar6 + 0x10))(plVar6,iVar2);
    iVar11 = *(int *)(this + 0x118);
    iVar3 = *(int *)(this + 0x11c);
    plVar6 = *(long **)(this + 0x120);
    if (iVar3 <= iVar11 + 1) {
      iVar3 = iVar11 + 1;
    }
    *(int *)(this + 0x118) = iVar11 + 1;
    *(int *)(this + 0x11c) = iVar3;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,iVar11);
    }
  }
  local_f8 = 0;
  local_e0 = *(undefined8 *)(this + 0x10);
  local_f0 = 0;
  uStack_e8 = 0;
  local_d0 = 0xffffffffffffffff;
  local_130 = (undefined **)CONCAT44(local_130._4_4_,4);
  local_128 = (BytecodeGenerator *)0x0;
  local_120 = (ulong)local_120._4_4_ << 0x20;
  local_100 = this;
  local_d8 = iVar2;
  local_d4 = iVar11;
  std::__ndk1::
  vector<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry>>
  ::
  __push_back_slow_path<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry>
            ((vector<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry>>
              *)&local_f8,(Entry *)&local_130);
  iVar3 = *(int *)(this + 0x118);
  iVar11 = *(int *)(this + 0x11c);
  plVar6 = *(long **)(this + 0x120);
  if (iVar11 <= iVar3 + 1) {
    iVar11 = iVar3 + 1;
  }
  *(int *)(this + 0x118) = iVar3 + 1;
  *(int *)(this + 0x11c) = iVar11;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6,iVar3);
  }
  uVar5 = Register::current_context();
  BytecodeArrayBuilder::MoveRegister(pBVar9,uVar5,iVar3);
  TryFinallyBuilder::BeginTry((TryFinallyBuilder *)&local_c8,iVar3);
  uStack_118 = *(undefined8 *)(this + 0x2f8);
  local_120 = *(long *)(this + 0x2f0);
  local_130 = &PTR__ControlScope_01cc70b8;
  *(undefined ****)(this + 0x2f0) = &local_130;
  local_128 = this;
  local_110 = &local_c8;
  ppBStack_108 = &local_100;
  if (this[8] == (BytecodeGenerator)0x0) {
    pAVar12 = *(AstNode **)(param_1 + 8);
    uVar7 = GetCurrentStackPosition();
    if (uVar7 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar12);
    }
  }
  local_130 = &PTR__ControlScope_01cc7020;
  *(long *)(local_128 + 0x2f0) = local_120;
  TryFinallyBuilder::EndTry((TryFinallyBuilder *)&local_c8);
  BytecodeArrayBuilder::LoadLiteral((BytecodeArrayBuilder *)(local_100 + 0x18),0xfffffffffffffffe);
  BytecodeArrayBuilder::StoreAccumulatorInRegister
            ((BytecodeArrayBuilder *)(local_100 + 0x18),local_d8);
  BytecodeArrayBuilder::StoreAccumulatorInRegister
            ((BytecodeArrayBuilder *)(local_100 + 0x18),local_d4);
  TryFinallyBuilder::LeaveTry((TryFinallyBuilder *)&local_c8);
  TryFinallyBuilder::BeginHandler((TryFinallyBuilder *)&local_c8);
  BytecodeArrayBuilder::StoreAccumulatorInRegister
            ((BytecodeArrayBuilder *)(local_100 + 0x18),local_d4);
  BytecodeArrayBuilder::LoadLiteral((BytecodeArrayBuilder *)(local_100 + 0x18),0);
  BytecodeArrayBuilder::StoreAccumulatorInRegister
            ((BytecodeArrayBuilder *)(local_100 + 0x18),local_d8);
  TryFinallyBuilder::BeginFinally((TryFinallyBuilder *)&local_c8);
  pBVar8 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadTheHole(pBVar9);
  pBVar8 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::SetPendingMessage(pBVar8);
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar8,iVar3);
  if (this[8] == (BytecodeGenerator)0x0) {
    pAVar12 = *(AstNode **)(param_1 + 0x10);
    uVar7 = GetCurrentStackPosition();
    if (uVar7 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar12);
    }
  }
  TryFinallyBuilder::EndFinally();
  pBVar9 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar9,iVar3);
  BytecodeArrayBuilder::SetPendingMessage(pBVar9);
  ControlScope::DeferredCommands::ApplyDeferredCommands((DeferredCommands *)&local_100);
  if (local_f8 != 0) {
    local_f0 = local_f8;
  }
  TryFinallyBuilder::~TryFinallyBuilder((TryFinallyBuilder *)&local_c8);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

