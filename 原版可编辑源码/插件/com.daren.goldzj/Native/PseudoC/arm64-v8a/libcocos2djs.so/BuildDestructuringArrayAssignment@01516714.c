
/* v8::internal::interpreter::BytecodeGenerator::BuildDestructuringArrayAssignment(v8::internal::ArrayLiteral*,
   v8::internal::Token::Value, v8::internal::LookupHoistingMode) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildDestructuringArrayAssignment
          (BytecodeGenerator *this,undefined8 param_1,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  BytecodeArrayBuilder *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  BytecodeArrayBuilder *pBVar8;
  int iVar9;
  BytecodeGenerator *local_188;
  undefined8 *puStack_180;
  int *local_178;
  undefined1 *puStack_170;
  undefined1 *local_168;
  undefined4 *puStack_160;
  int local_158 [2];
  undefined1 local_150 [12];
  undefined4 local_140;
  undefined1 local_13c [4];
  undefined8 local_138;
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
  undefined8 uStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  iVar2 = *(int *)(this + 0x118);
  iVar9 = *(int *)(this + 0x11c);
  plVar7 = *(long **)(this + 0x120);
  if (iVar9 <= iVar2 + 1) {
    iVar9 = iVar2 + 1;
  }
  *(int *)(this + 0x118) = iVar2 + 1;
  *(int *)(this + 0x11c) = iVar9;
  local_140 = param_4;
  local_13c[0] = param_3;
  local_138 = param_1;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7,iVar2);
  }
  this_00 = (BytecodeArrayBuilder *)(this + 0x18);
  BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,iVar2);
  local_150 = BuildGetIteratorRecord(this,0);
  iVar3 = *(int *)(this + 0x118);
  iVar9 = *(int *)(this + 0x11c);
  plVar7 = *(long **)(this + 0x120);
  if (iVar9 <= iVar3 + 1) {
    iVar9 = iVar3 + 1;
  }
  *(int *)(this + 0x118) = iVar3 + 1;
  *(int *)(this + 0x11c) = iVar9;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7,iVar3);
  }
  local_158[0] = iVar3;
  BytecodeArrayBuilder::LoadFalse(this_00);
  BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,iVar3);
  local_178 = local_158;
  puStack_170 = local_150;
  local_168 = local_13c;
  puStack_160 = &local_140;
  puStack_180 = &local_138;
  local_c8 = &PTR__TryFinallyBuilder_01cc7188;
  local_188 = this;
  pBStack_c0 = this_00;
  local_b8 = HandlerTableBuilder::NewHandlerEntry((HandlerTableBuilder *)(this + 0xf0));
  uStack_b4 = 0;
  local_b0 = 0;
  local_a8 = 0xffffffffffffffff;
  local_a0 = &local_a0;
  uStack_88 = *(undefined8 *)(this + 0x18);
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_90 = 0;
  iVar4 = *(int *)(this + 0x118);
  iVar3 = *(int *)(this + 0x11c);
  plVar7 = *(long **)(this + 0x120);
  iVar9 = iVar4 + 1;
  if (iVar3 <= iVar9) {
    iVar3 = iVar4 + 1;
  }
  *(int *)(this + 0x118) = iVar9;
  *(int *)(this + 0x11c) = iVar3;
  pppuStack_98 = local_a0;
  if (plVar7 == (long *)0x0) {
    iVar1 = iVar4 + 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    *(int *)(this + 0x118) = iVar1;
    *(int *)(this + 0x11c) = iVar3;
  }
  else {
    (**(code **)(*plVar7 + 0x10))(plVar7,iVar4);
    iVar9 = *(int *)(this + 0x118);
    iVar3 = *(int *)(this + 0x11c);
    plVar7 = *(long **)(this + 0x120);
    if (iVar3 <= iVar9 + 1) {
      iVar3 = iVar9 + 1;
    }
    *(int *)(this + 0x118) = iVar9 + 1;
    *(int *)(this + 0x11c) = iVar3;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,iVar9);
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
  local_d8 = iVar4;
  local_d4 = iVar9;
  std::__ndk1::
  vector<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry>>
  ::
  __push_back_slow_path<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry>
            ((vector<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::Entry>>
              *)&local_f8,(Entry *)&local_130);
  iVar3 = *(int *)(this + 0x118);
  iVar9 = *(int *)(this + 0x11c);
  plVar7 = *(long **)(this + 0x120);
  if (iVar9 <= iVar3 + 1) {
    iVar9 = iVar3 + 1;
  }
  *(int *)(this + 0x118) = iVar3 + 1;
  *(int *)(this + 0x11c) = iVar9;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7,iVar3);
  }
  uVar6 = Register::current_context();
  BytecodeArrayBuilder::MoveRegister(this_00,uVar6,iVar3);
  TryFinallyBuilder::BeginTry((TryFinallyBuilder *)&local_c8,iVar3);
  uStack_118 = *(undefined8 *)(this + 0x2f8);
  local_120 = *(long *)(this + 0x2f0);
  local_130 = &PTR__ControlScope_01cc70b8;
  *(undefined ****)(this + 0x2f0) = &local_130;
  local_128 = this;
  local_110 = &local_c8;
  ppBStack_108 = &local_100;
  FUN_01521380(&local_188);
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
  pBVar8 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadTheHole(this_00);
  pBVar8 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::SetPendingMessage(pBVar8);
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar8,iVar3);
  BuildFinalizeIteration(this,local_150._0_8_,local_150._8_4_,local_158[0],iVar4);
  TryFinallyBuilder::EndFinally();
  pBVar8 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,iVar3);
  BytecodeArrayBuilder::SetPendingMessage(pBVar8);
  ControlScope::DeferredCommands::ApplyDeferredCommands((DeferredCommands *)&local_100);
  if (local_f8 != 0) {
    local_f0 = local_f8;
  }
  TryFinallyBuilder::~TryFinallyBuilder((TryFinallyBuilder *)&local_c8);
  if (*(int *)(*(long *)(this + 0x300) + 0x18) != 1) {
    BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,iVar2);
  }
  plVar7 = *(long **)(this + 0x120);
  iVar9 = *(int *)(this + 0x118);
  *(int *)(this + 0x118) = iVar2;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7,CONCAT44(iVar9 - iVar2,iVar2));
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

