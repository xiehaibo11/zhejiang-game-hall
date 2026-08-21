
/* v8::internal::compiler::JSCallReducer::ReduceReflectConstruct(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSCallReducer::ReduceReflectConstruct(JSCallReducer *this,Node *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  Node *pNVar6;
  Operator *pOVar7;
  int iVar8;
  Zone *pZVar9;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  puVar5 = (uint *)CallParametersOf(*(Operator **)param_1);
  uVar3 = *puVar5;
  iVar8 = (uVar3 & 0x7ffffff) - 2;
  Node::RemoveInput(param_1,0);
  Node::RemoveInput(param_1,0);
  if (iVar8 < 2) {
    do {
      iVar2 = iVar8 + 1;
      pZVar9 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
      pNVar6 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
      Node::InsertInput(param_1,pZVar9,iVar8,pNVar6);
      iVar8 = iVar2;
    } while (iVar2 != 2);
  }
  else if (iVar8 != 2) {
    if (3 < iVar8) {
      iVar8 = (uVar3 & 0x7ffffff) - 3;
      do {
        Node::RemoveInput(param_1,iVar8);
        bVar1 = 3 < iVar8;
        iVar8 = iVar8 + -1;
      } while (bVar1);
    }
    goto LAB_016ddd94;
  }
  pNVar6 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),2,*(Node **)pNVar6);
LAB_016ddd94:
  pOVar7 = (Operator *)
           JSOperatorBuilder::ConstructWithArrayLike
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),
                      (CallFrequency *)(puVar5 + 1));
  NodeProperties::ChangeOp(param_1,pOVar7);
  local_70[0] = CallFrequencyOf(*(Operator **)param_1);
  local_68 = 0;
  local_60 = 0xffffffff;
  pNVar6 = (Node *)ReduceCallOrConstructWithArrayLikeOrSpread(this,param_1,1,local_70,&local_68,1);
  if (pNVar6 != (Node *)0x0) {
    param_1 = pNVar6;
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}

