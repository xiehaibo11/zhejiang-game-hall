
/* v8::internal::interpreter::BytecodeGenerator::VisitNamedSuperPropertyLoad(v8::internal::Property*,
   v8::internal::interpreter::Register) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitNamedSuperPropertyLoad
          (BytecodeGenerator *this,int *param_1,int param_3)

{
  int iVar1;
  BytecodeArrayBuilder *this_00;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  BytecodeArrayBuilder *pBVar8;
  long lVar9;
  ulong uVar10;
  AstNode *pAVar11;
  undefined8 local_78;
  BytecodeGenerator *pBStack_70;
  int local_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar9 = *(long *)(param_1 + 2);
  uVar3 = *(uint *)(this + 0x118);
  uVar10 = (ulong)uVar3;
  plVar5 = *(long **)(this + 0x120);
  iVar1 = uVar3 + 3;
  if ((*(uint *)(lVar9 + 4) & 0x3f) != 0x30) {
    lVar9 = 0;
  }
  iVar2 = *(int *)(this + 0x11c);
  if (*(int *)(this + 0x11c) <= iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(this + 0x118) = iVar1;
  *(int *)(this + 0x11c) = iVar2;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5,uVar10 | 0x300000000);
  }
  lVar6 = Scope::GetReceiverScope(*(Scope **)(this + 0x1e0));
  BuildVariableLoad(this,*(undefined8 *)(lVar6 + 0xb0),1 < *(byte *)(lVar6 + 0x85) - 5,1);
  this_00 = (BytecodeArrayBuilder *)(this + 0x18);
  BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,uVar10);
  local_78 = *(undefined8 *)(this + 0x300);
  pAVar11 = *(AstNode **)(lVar9 + 8);
  local_68 = *(int *)(this + 0x118);
  local_60 = 2;
  *(undefined8 **)(this + 0x300) = &local_78;
  pBStack_70 = this;
  if (this[8] == (BytecodeGenerator)0x0) {
    uVar7 = GetCurrentStackPosition();
    if (uVar7 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar11);
    }
  }
  BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,uVar3 + 1);
  *(undefined8 *)(pBStack_70 + 0x300) = local_78;
  plVar5 = *(long **)(pBStack_70 + 0x120);
  iVar1 = *(int *)(pBStack_70 + 0x118);
  *(int *)(pBStack_70 + 0x118) = local_68;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar1 - local_68,local_68));
  }
  iVar1 = *param_1;
  if ((iVar1 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
    this[0x1c0] = (BytecodeGenerator)0x1;
    *(int *)(this + 0x1c4) = iVar1;
  }
  lVar9 = *(long *)(param_1 + 4);
  if ((*(uint *)(lVar9 + 4) & 0x3f) != 0x29) {
    lVar9 = 0;
  }
  pBVar8 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::LoadLiteral(this_00,*(AstRawString **)(lVar9 + 8));
  pBVar8 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar8,uVar3 + 2);
  BytecodeArrayBuilder::CallRuntime(pBVar8,0x24,uVar10 | 0x300000000);
  if (param_3 != 0x7fffffff) {
    BytecodeArrayBuilder::MoveRegister(this_00,uVar10,param_3);
  }
  plVar5 = *(long **)(this + 0x120);
  iVar1 = *(int *)(this + 0x118);
  *(uint *)(this + 0x118) = uVar3;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar1 - uVar3,uVar3));
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

