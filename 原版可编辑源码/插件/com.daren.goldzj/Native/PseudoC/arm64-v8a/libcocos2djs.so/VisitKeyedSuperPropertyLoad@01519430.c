
/* v8::internal::interpreter::BytecodeGenerator::VisitKeyedSuperPropertyLoad(v8::internal::Property*,
   v8::internal::interpreter::Register) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitKeyedSuperPropertyLoad
          (BytecodeGenerator *this,int *param_1,int param_3)

{
  int iVar1;
  BytecodeArrayBuilder *pBVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  AstNode *pAVar11;
  undefined8 local_88;
  BytecodeGenerator *pBStack_80;
  int local_78;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar9 = *(long *)(param_1 + 2);
  uVar4 = *(uint *)(this + 0x118);
  uVar10 = (ulong)uVar4;
  plVar6 = *(long **)(this + 0x120);
  iVar1 = uVar4 + 3;
  if ((*(uint *)(lVar9 + 4) & 0x3f) != 0x30) {
    lVar9 = 0;
  }
  iVar3 = *(int *)(this + 0x11c);
  if (*(int *)(this + 0x11c) <= iVar1) {
    iVar3 = iVar1;
  }
  *(int *)(this + 0x118) = iVar1;
  *(int *)(this + 0x11c) = iVar3;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6,uVar10 | 0x300000000);
  }
  lVar7 = Scope::GetReceiverScope(*(Scope **)(this + 0x1e0));
  BuildVariableLoad(this,*(undefined8 *)(lVar7 + 0xb0),1 < *(byte *)(lVar7 + 0x85) - 5,1);
  pBVar2 = (BytecodeArrayBuilder *)(this + 0x18);
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar2,uVar10);
  local_88 = *(undefined8 *)(this + 0x300);
  pAVar11 = *(AstNode **)(lVar9 + 8);
  local_78 = *(int *)(this + 0x118);
  local_70 = 2;
  *(undefined8 **)(this + 0x300) = &local_88;
  pBStack_80 = this;
  if (this[8] == (BytecodeGenerator)0x0) {
    uVar8 = GetCurrentStackPosition();
    if (uVar8 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar11);
    }
  }
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar2,uVar4 + 1);
  *(undefined8 *)(pBStack_80 + 0x300) = local_88;
  plVar6 = *(long **)(pBStack_80 + 0x120);
  iVar1 = *(int *)(pBStack_80 + 0x118);
  *(int *)(pBStack_80 + 0x118) = local_78;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar1 - local_78,local_78));
  }
  local_88 = *(undefined8 *)(this + 0x300);
  pAVar11 = *(AstNode **)(param_1 + 4);
  local_78 = *(int *)(this + 0x118);
  local_70 = 2;
  *(undefined8 **)(this + 0x300) = &local_88;
  pBStack_80 = this;
  if (this[8] == (BytecodeGenerator)0x0) {
    uVar8 = GetCurrentStackPosition();
    if (uVar8 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar11);
    }
  }
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar2,uVar4 + 2);
  *(undefined8 *)(pBStack_80 + 0x300) = local_88;
  plVar6 = *(long **)(pBStack_80 + 0x120);
  iVar1 = *(int *)(pBStack_80 + 0x118);
  *(int *)(pBStack_80 + 0x118) = local_78;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar1 - local_78,local_78));
  }
  iVar1 = *param_1;
  if ((iVar1 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
    this[0x1c0] = (BytecodeGenerator)0x1;
    *(int *)(this + 0x1c4) = iVar1;
  }
  BytecodeArrayBuilder::CallRuntime(pBVar2,0x25,uVar10 | 0x300000000);
  if (param_3 != 0x7fffffff) {
    BytecodeArrayBuilder::MoveRegister(pBVar2,uVar10,param_3);
  }
  plVar6 = *(long **)(this + 0x120);
  iVar1 = *(int *)(this + 0x118);
  *(uint *)(this + 0x118) = uVar4;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar1 - uVar4,uVar4));
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

