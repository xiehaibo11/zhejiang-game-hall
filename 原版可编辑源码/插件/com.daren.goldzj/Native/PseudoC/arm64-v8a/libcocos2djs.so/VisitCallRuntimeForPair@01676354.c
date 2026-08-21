
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCallRuntimeForPair() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCallRuntimeForPair(BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  undefined8 uVar7;
  Node **ppNVar8;
  ulong uVar9;
  Zone *this_01;
  ulong uVar10;
  Node **ppNVar11;
  
  PrepareEagerCheckpoint(this);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRuntimeIdOperand(this_00,0);
  iVar2 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,1);
  uVar3 = interpreter::BytecodeArrayAccessor::GetRegisterCountOperand(this_00,2);
  uVar10 = (ulong)uVar3;
  uVar4 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,3);
  pOVar5 = (Operator *)
           JSOperatorBuilder::CallRuntime
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),uVar1,uVar10);
  this_01 = *(Zone **)(this + 8);
  uVar9 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
  ppNVar8 = *(Node ***)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)ppNVar8) < uVar9) {
    ppNVar8 = (Node **)Zone::NewExpand(this_01,uVar9);
  }
  else {
    *(ulong *)(this_01 + 0x10) = (long)ppNVar8 + uVar9;
  }
  ppNVar11 = ppNVar8;
  if (0 < (int)uVar3) {
    do {
      pNVar6 = (Node *)Environment::LookupRegister(*(Environment **)(this + 0xa8),iVar2);
      *ppNVar11 = pNVar6;
      uVar10 = uVar10 - 1;
      iVar2 = iVar2 + 1;
      ppNVar11 = ppNVar11 + 1;
    } while (uVar10 != 0);
  }
  uVar7 = MakeNode(this,pOVar5,uVar3,ppNVar8,false);
  Environment::BindRegistersToProjections(*(Environment **)(this + 0xa8),uVar4,uVar7,0);
  return;
}

