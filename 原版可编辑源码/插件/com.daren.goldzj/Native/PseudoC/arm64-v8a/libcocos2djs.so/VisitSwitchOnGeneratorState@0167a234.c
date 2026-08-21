
/* v8::internal::compiler::BytecodeGraphBuilder::VisitSwitchOnGeneratorState() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitSwitchOnGeneratorState
          (BytecodeGraphBuilder *this)

{
  undefined4 uVar1;
  Node *pNVar2;
  Operator *pOVar3;
  Node *pNVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Environment *pEVar7;
  Node *local_40;
  undefined8 uStack_38;
  
  pEVar7 = *(Environment **)(this + 0xa8);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  pNVar2 = (Node *)Environment::LookupRegister(pEVar7,uVar1);
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::ReferenceEqual
                     (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
  uStack_38 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  local_40 = pNVar2;
  pNVar4 = (Node *)MakeNode(this,pOVar3,2,&local_40,false);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Branch
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),0,1);
  local_40 = pNVar4;
  MakeNode(this,pOVar3,1,&local_40,false);
  uVar5 = Environment::Copy(*(Environment **)(this + 0xa8));
  pOVar3 = (Operator *)
           CommonOperatorBuilder::IfFalse(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
  MakeNode(this,pOVar3,0,(Node **)0x0,false);
  pOVar3 = (Operator *)
           JSOperatorBuilder::GeneratorRestoreContinuation
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  local_40 = pNVar2;
  uVar6 = MakeNode(this,pOVar3,1,&local_40,false);
  *(undefined8 *)(*(long *)(this + 0xa8) + 0x50) = uVar6;
  pOVar3 = (Operator *)
           JSOperatorBuilder::GeneratorRestoreContext
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  local_40 = pNVar2;
  uVar6 = MakeNode(this,pOVar3,1,&local_40,false);
  *(undefined8 *)(*(long *)(this + 0xa8) + 0x10) = uVar6;
  BuildSwitchOnGeneratorState(this,(ZoneVector *)(*(long *)(this + 0xa0) + 0x88),false);
  *(undefined8 *)(this + 0xa8) = uVar5;
  pOVar3 = (Operator *)
           CommonOperatorBuilder::IfTrue(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
  MakeNode(this,pOVar3,0,(Node **)0x0,false);
  return;
}

