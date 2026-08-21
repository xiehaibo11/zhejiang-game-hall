
/* v8::internal::compiler::DeadCodeElimination::ReduceEffectPhi(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::DeadCodeElimination::ReduceEffectPhi
          (DeadCodeElimination *this,Node *param_1)

{
  Graph *this_00;
  int iVar1;
  Node *pNVar2;
  Node *pNVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  int iVar7;
  Node *local_60;
  undefined8 uStack_58;
  
  pNVar2 = (Node *)NodeProperties::GetControlInput(param_1,0);
  if ((pNVar2 == (Node *)0x0) || (*(short *)(*(long *)pNVar2 + 0x10) != 0x3d)) {
    pNVar3 = (Node *)NodeProperties::GetControlInput(param_1,0);
    iVar1 = *(int *)(*(long *)param_1 + 0x18);
    if (iVar1 < 1) {
      pNVar2 = (Node *)0x0;
    }
    else {
      iVar7 = 0;
      pNVar2 = (Node *)0x0;
      do {
        pNVar4 = (Node *)NodeProperties::GetEffectInput(param_1,iVar7);
        if (*(short *)(*(long *)pNVar4 + 0x10) == 0x3b) {
          uVar5 = NodeProperties::GetControlInput(pNVar3,iVar7);
          this_00 = *(Graph **)(this + 0x10);
          pOVar6 = (Operator *)
                   CommonOperatorBuilder::Throw(*(CommonOperatorBuilder **)(this + 0x18));
          local_60 = pNVar4;
          uStack_58 = uVar5;
          pNVar2 = (Node *)Graph::NewNode(this_00,pOVar6,2,&local_60,false);
          NodeProperties::MergeControlToEnd
                    (*(Graph **)(this + 0x10),*(CommonOperatorBuilder **)(this + 0x18),pNVar2);
          NodeProperties::ReplaceEffectInput(param_1,*(Node **)(this + 0x20),iVar7);
          NodeProperties::ReplaceControlInput(pNVar3,*(Node **)(this + 0x20),iVar7);
          (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),pNVar3);
          (**(code **)(**(long **)(this + 8) + 0x18))
                    (*(long **)(this + 8),*(undefined8 *)(*(long *)(this + 0x10) + 0x10));
          pNVar2 = param_1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar1 != iVar7);
    }
  }
  return pNVar2;
}

