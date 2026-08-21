
/* v8::internal::interpreter::BytecodeGenerator::VisitInScope(v8::internal::Statement*,
   v8::internal::Scope*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitInScope
          (BytecodeGenerator *this,Statement *param_1,Scope *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  BytecodeGenerator *local_60;
  Scope *pSStack_58;
  long local_50;
  undefined4 local_48;
  int local_44;
  
  lVar5 = *(long *)(this + 0x1e8);
  if (param_2 != (Scope *)0x0) {
    *(Scope **)(this + 0x1e8) = param_2;
  }
  lVar6 = *(long *)(this + 0x2f8);
  local_60 = this;
  pSStack_58 = param_2;
  local_50 = lVar6;
  local_48 = Register::current_context();
  local_44 = 0;
  if (lVar6 != 0) {
    local_44 = *(int *)(lVar6 + 0x1c) + 1;
    iVar1 = *(int *)(this + 0x118);
    iVar2 = *(int *)(this + 0x11c);
    plVar3 = *(long **)(this + 0x120);
    if (iVar2 <= iVar1 + 1) {
      iVar2 = iVar1 + 1;
    }
    *(int *)(this + 0x118) = iVar1 + 1;
    *(int *)(this + 0x11c) = iVar2;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,iVar1);
    }
    *(int *)(lVar6 + 0x18) = iVar1;
    BytecodeArrayBuilder::PushContext((BytecodeArrayBuilder *)(this + 0x18),iVar1);
  }
  *(BytecodeGenerator ***)(this + 0x2f8) = &local_60;
  if (this[8] == (BytecodeGenerator)0x0) {
    uVar4 = GetCurrentStackPosition();
    if (uVar4 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,(AstNode *)param_1);
    }
  }
  if (local_50 != 0) {
    BytecodeArrayBuilder::PopContext
              ((BytecodeArrayBuilder *)(local_60 + 0x18),*(undefined4 *)(local_50 + 0x18));
    *(undefined4 *)(local_50 + 0x18) = local_48;
  }
  *(long *)(local_60 + 0x2f8) = local_50;
  if (lVar5 != *(long *)(this + 0x1e8)) {
    *(long *)(this + 0x1e8) = lVar5;
  }
  return;
}

