
/* v8::internal::interpreter::BytecodeGenerator::GenerateBytecode(unsigned long) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::GenerateBytecode
          (BytecodeGenerator *this,ulong param_1)

{
  BytecodeArrayBuilder *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  BytecodeGenerator *pBVar6;
  long lVar7;
  BytecodeGenerator *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined4 local_78;
  int local_74;
  undefined **local_70;
  BytecodeGenerator *local_68;
  undefined8 local_60;
  BytecodeGenerator **ppBStack_58;
  BytecodeGenerator *local_50;
  undefined8 uStack_48;
  long local_40;
  undefined4 local_38;
  int local_34;
  
  uStack_48 = *(undefined8 *)(this + 0x1e0);
  *(ulong *)this = param_1;
  this[8] = (BytecodeGenerator)0x0;
  lVar7 = *(long *)(this + 0x2f8);
  local_50 = this;
  local_40 = lVar7;
  local_38 = Register::current_context();
  local_34 = 0;
  if (lVar7 != 0) {
    local_34 = *(int *)(lVar7 + 0x1c) + 1;
    iVar3 = *(int *)(this + 0x118);
    iVar1 = *(int *)(this + 0x11c);
    plVar4 = *(long **)(this + 0x120);
    if (iVar1 <= iVar3 + 1) {
      iVar1 = iVar3 + 1;
    }
    *(int *)(this + 0x118) = iVar3 + 1;
    *(int *)(this + 0x11c) = iVar1;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,iVar3);
    }
    *(int *)(lVar7 + 0x18) = iVar3;
    BytecodeArrayBuilder::PushContext((BytecodeArrayBuilder *)(this + 0x18),iVar3);
  }
  ppBStack_58 = &local_50;
  *(BytecodeGenerator ***)(this + 0x2f8) = ppBStack_58;
  local_60 = *(undefined8 *)(this + 0x2f0);
  local_70 = &PTR__ControlScope_01cc6ff8;
  *(undefined ****)(this + 0x2f0) = &local_70;
  iVar1 = *(int *)(this + 0x118);
  this_00 = (BytecodeArrayBuilder *)(this + 0x18);
  local_68 = this;
  AllocateTopLevelRegisters(this);
  iVar3 = FunctionLiteral::start_position(*(FunctionLiteral **)(*(long *)(this + 0x1d0) + 0x10));
  BytecodeArrayBuilder::StackCheck(this_00,iVar3);
  iVar3 = *(int *)(*(long *)(*(long *)(this + 0x1d0) + 0x10) + 0x18);
  if (0 < iVar3) {
    uVar5 = BytecodeArrayBuilder::AllocateJumpTable(this_00,iVar3,0);
    *(undefined8 *)(this + 0x328) = uVar5;
    BytecodeArrayBuilder::SwitchOnGeneratorState(this_00,*(undefined4 *)(this + 0x308),uVar5);
  }
  if (*(int *)(*(long *)(this + 0x1e0) + 0x7c) < 1) {
    GenerateBytecodeBody(this);
  }
  else {
    BuildNewLocalActivationContext(this);
    uStack_88 = *(undefined8 *)(this + 0x1e0);
    lVar7 = *(long *)(this + 0x2f8);
    local_90 = this;
    local_80 = lVar7;
    local_78 = Register::current_context();
    local_74 = 0;
    pBVar6 = this;
    if (lVar7 != 0) {
      local_74 = *(int *)(lVar7 + 0x1c) + 1;
      iVar2 = *(int *)(this + 0x118);
      iVar3 = *(int *)(this + 0x11c);
      plVar4 = *(long **)(this + 0x120);
      if (iVar3 <= iVar2 + 1) {
        iVar3 = iVar2 + 1;
      }
      *(int *)(this + 0x118) = iVar2 + 1;
      *(int *)(this + 0x11c) = iVar3;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,iVar2);
        pBVar6 = local_90;
        lVar7 = local_80;
      }
      *(int *)(lVar7 + 0x18) = iVar2;
      BytecodeArrayBuilder::PushContext((BytecodeArrayBuilder *)(pBVar6 + 0x18),iVar2);
      pBVar6 = local_90;
    }
    *(BytecodeGenerator ***)(pBVar6 + 0x2f8) = &local_90;
    BuildLocalActivationContextInitialization(this);
    GenerateBytecodeBody(this);
    if (local_80 != 0) {
      BytecodeArrayBuilder::PopContext
                ((BytecodeArrayBuilder *)(local_90 + 0x18),*(undefined4 *)(local_80 + 0x18));
      *(undefined4 *)(local_80 + 0x18) = local_78;
    }
    *(long *)(local_90 + 0x2f8) = local_80;
  }
  plVar4 = *(long **)(this + 0x120);
  iVar3 = *(int *)(this + 0x118);
  *(int *)(this + 0x118) = iVar1;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar3 - iVar1,iVar1));
  }
  local_70 = &PTR__ControlScope_01cc7020;
  *(undefined8 *)(local_68 + 0x2f0) = local_60;
  if (local_40 != 0) {
    BytecodeArrayBuilder::PopContext
              ((BytecodeArrayBuilder *)(local_50 + 0x18),*(undefined4 *)(local_40 + 0x18));
    *(undefined4 *)(local_40 + 0x18) = local_38;
  }
  *(long *)(local_50 + 0x2f8) = local_40;
  return;
}

