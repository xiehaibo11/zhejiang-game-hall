
/* v8::internal::compiler::BytecodeGraphBuilder::BuildSwitchOnGeneratorState(v8::internal::ZoneVector<v8::internal::compiler::ResumeJumpTarget>
   const&, bool) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildSwitchOnGeneratorState
          (BytecodeGraphBuilder *this,ZoneVector *param_1,bool param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  Operator *pOVar3;
  Environment *this_00;
  undefined8 uVar4;
  int iVar5;
  Node *pNVar6;
  long lVar7;
  Node *local_48;
  
  pNVar6 = *(Node **)(*(long *)(this + 0xa8) + 0x50);
  iVar5 = 1;
  if (param_2) {
    iVar5 = 2;
  }
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Switch
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),
                      (long)(iVar5 + (int)((ulong)(*(long *)(param_1 + 8) - *(long *)param_1) >> 2)
                                     * -0x55555555));
  local_48 = pNVar6;
  MakeNode(this,pOVar3,1,&local_48,false);
  puVar1 = *(undefined4 **)param_1;
  puVar2 = *(undefined4 **)(param_1 + 8);
  this_00 = (Environment *)Environment::Copy(*(Environment **)(this + 0xa8));
  for (; puVar1 != puVar2; puVar1 = puVar1 + 3) {
    pOVar3 = (Operator *)
             CommonOperatorBuilder::IfValue
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),*puVar1,0,0);
    MakeNode(this,pOVar3,0,(Node **)0x0,false);
    iVar5 = puVar1[1];
    if (iVar5 == puVar1[2]) {
      lVar7 = *(long *)(this + 0xa8);
      uVar4 = JSGraph::Constant(*(JSGraph **)(this + 0x10),-2.0);
      *(undefined8 *)(lVar7 + 0x50) = uVar4;
      iVar5 = puVar1[1];
    }
    MergeIntoSuccessorEnvironment(this,iVar5);
    *(Environment **)(this + 0xa8) = this_00;
    this_00 = (Environment *)Environment::Copy(this_00);
  }
  pOVar3 = (Operator *)
           CommonOperatorBuilder::IfDefault
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),0);
  MakeNode(this,pOVar3,0,(Node **)0x0,false);
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::RuntimeAbort
                     (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178),0xc);
  MakeNode(this,pOVar3,0,(Node **)0x0,false);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Throw(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
  pNVar6 = (Node *)MakeNode(this,pOVar3,0,(Node **)0x0,false);
  MergeControlToLeaveFunction(this,pNVar6);
  *(Environment **)(this + 0xa8) = this_00;
  if (param_2) {
    pOVar3 = (Operator *)
             CommonOperatorBuilder::IfValue
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),0xfffffffe,0,0);
    MakeNode(this,pOVar3,0,(Node **)0x0,false);
  }
  else {
    *(undefined8 *)(this + 0xa8) = 0;
  }
  return;
}

