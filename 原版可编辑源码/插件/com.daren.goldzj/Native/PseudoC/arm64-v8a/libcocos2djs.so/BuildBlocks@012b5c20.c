
/* v8::internal::compiler::CFGBuilder::BuildBlocks(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::CFGBuilder::BuildBlocks(CFGBuilder *this,Node *param_1)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  Zone *pZVar4;
  Node *pNVar5;
  Schedule *this_00;
  Node **ppNVar6;
  BasicBlock *pBVar7;
  ulong uVar8;
  
  uVar1 = *(ushort *)(*(long *)param_1 + 0x10);
  if (0x6c < uVar1 - 0x2b1) {
    switch(uVar1) {
    case 0:
      this_00 = *(Schedule **)(this + 0x10);
      pBVar7 = *(BasicBlock **)(this_00 + 0x68);
      break;
    case 1:
    case 10:
      BuildBlockForNode(this,param_1);
      return;
    case 2:
    case 3:
      pZVar4 = *(Zone **)this;
      iVar2 = *(int *)(*(long *)param_1 + 0x28);
      uVar8 = (ulong)iVar2;
      ppNVar6 = *(Node ***)(pZVar4 + 0x10);
      uVar3 = uVar8 * 8;
      if (uVar3 < (ulong)(*(long *)(pZVar4 + 0x18) - (long)ppNVar6) ||
          uVar3 - (*(long *)(pZVar4 + 0x18) - (long)ppNVar6) == 0) {
        *(Node ***)(pZVar4 + 0x10) = ppNVar6 + uVar8;
      }
      else {
        ppNVar6 = (Node **)Zone::NewExpand(pZVar4,uVar3);
      }
      NodeProperties::CollectControlProjections(param_1,ppNVar6,uVar8);
      if (iVar2 != 0) {
        uVar3 = 0;
        do {
          BuildBlockForNode(this,ppNVar6[uVar3]);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar8);
      }
    default:
      return;
    case 0x12:
      pNVar5 = (Node *)NodeProperties::GetControlInput(param_1,0);
      pBVar7 = (BasicBlock *)BuildBlockForNode(this,pNVar5);
      this_00 = *(Schedule **)(this + 0x10);
      break;
    case 0x16:
      this_00 = *(Schedule **)(this + 0x10);
      pBVar7 = *(BasicBlock **)(this_00 + 0x70);
      break;
    case 0x31:
      goto switchD_012b5ce0_caseD_31;
    }
    Schedule::AddNode(this_00,pBVar7,param_1);
    Scheduler::UpdatePlacement(*(Scheduler **)(this + 8),param_1,2);
    return;
  }
switchD_012b5ce0_caseD_31:
  uVar3 = NodeProperties::IsExceptionalCall(param_1,(Node **)0x0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  pZVar4 = *(Zone **)this;
  iVar2 = *(int *)(*(long *)param_1 + 0x28);
  uVar8 = (ulong)iVar2;
  ppNVar6 = *(Node ***)(pZVar4 + 0x10);
  uVar3 = uVar8 * 8;
  if (uVar3 < (ulong)(*(long *)(pZVar4 + 0x18) - (long)ppNVar6) ||
      uVar3 - (*(long *)(pZVar4 + 0x18) - (long)ppNVar6) == 0) {
    *(Node ***)(pZVar4 + 0x10) = ppNVar6 + uVar8;
  }
  else {
    ppNVar6 = (Node **)Zone::NewExpand(pZVar4,uVar3);
  }
  NodeProperties::CollectControlProjections(param_1,ppNVar6,uVar8);
  if (iVar2 == 0) {
    return;
  }
  uVar3 = 0;
  do {
    BuildBlockForNode(this,ppNVar6[uVar3]);
    uVar3 = uVar3 + 1;
  } while (uVar3 < uVar8);
  return;
}

