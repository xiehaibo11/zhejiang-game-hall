
/* v8::internal::compiler::CommonOperatorReducer::ReduceReturn(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::CommonOperatorReducer::ReduceReturn
          (CommonOperatorReducer *this,Node *param_1)

{
  int iVar1;
  Node *pNVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *this_00;
  Node *pNVar5;
  ulong uVar6;
  long *plVar7;
  Node *pNVar8;
  uint uVar9;
  Node *local_80;
  undefined8 uStack_78;
  Node *local_70;
  undefined8 uStack_68;
  
  pNVar2 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  if (*(short *)(*(long *)pNVar2 + 0x10) == 0x26) {
    pNVar2 = (Node *)NodeProperties::GetEffectInput(pNVar2,0);
    NodeProperties::ReplaceEffectInput(param_1,pNVar2,0);
    pNVar2 = (Node *)ReduceReturn(this,param_1);
    if (pNVar2 != (Node *)0x0) {
      return pNVar2;
    }
    return param_1;
  }
  iVar1 = ValueInputCountOfReturn(*(Operator **)param_1);
  if (iVar1 == 1) {
    pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,0);
    pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,1);
    this_00 = (Node *)NodeProperties::GetControlInput(param_1,0);
    if (*(short *)(*(long *)pNVar4 + 0x10) != 0x23) {
      return (Node *)0x0;
    }
    pNVar5 = (Node *)NodeProperties::GetControlInput(pNVar4,0);
    if (pNVar5 != this_00) {
      return (Node *)0x0;
    }
    if (*(short *)(*(long *)this_00 + 0x10) != 10) {
      return (Node *)0x0;
    }
    pNVar5 = this_00 + 0x20;
    uVar9 = (byte)this_00[0x17] & 0xf;
    if (uVar9 == 0xf) {
      uVar9 = *(uint *)(*(long *)pNVar5 + 8);
      pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
    }
    pNVar8 = pNVar4 + 0x20;
    if ((~*(uint *)(pNVar4 + 0x14) & 0xf000000) == 0) {
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    uVar6 = Node::OwnedBy(this_00,param_1,pNVar4);
    if (((uVar6 & 1) != 0) && (plVar7 = *(long **)(pNVar4 + 0x18), plVar7 != (long *)0x0)) {
      pNVar4 = (Node *)(plVar7 + (ulong)(*(uint *)(plVar7 + 2) >> 1) * 3 + 3);
      if ((*(uint *)(plVar7 + 2) & 1) == 0) {
        pNVar4 = *(Node **)pNVar4;
      }
      if ((pNVar4 == param_1) && (*plVar7 == 0)) {
        if (0 < (int)uVar9) {
          uVar6 = (ulong)uVar9;
          do {
            uStack_78 = *(undefined8 *)pNVar8;
            uStack_68 = *(undefined8 *)pNVar5;
            local_80 = pNVar3;
            local_70 = pNVar2;
            pNVar4 = (Node *)Graph::NewNode(*(Graph **)(this + 0x10),*(Operator **)param_1,4,
                                            &local_80,false);
            NodeProperties::MergeControlToEnd
                      (*(Graph **)(this + 0x10),*(CommonOperatorBuilder **)(this + 0x20),pNVar4);
            uVar6 = uVar6 - 1;
            pNVar5 = pNVar5 + 8;
            pNVar8 = pNVar8 + 8;
          } while (uVar6 != 0);
        }
        goto LAB_0168c388;
      }
    }
    if ((*(short *)(*(long *)pNVar2 + 0x10) == 0x24) &&
       (pNVar4 = (Node *)NodeProperties::GetControlInput(pNVar2,0), pNVar4 == this_00)) {
      pNVar4 = pNVar2 + 0x20;
      if ((~*(uint *)(pNVar2 + 0x14) & 0xf000000) == 0) {
        pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
      }
      if (0 < (int)uVar9) {
        uVar6 = (ulong)uVar9;
        do {
          uStack_78 = *(undefined8 *)pNVar8;
          local_70 = *(Node **)pNVar4;
          uStack_68 = *(undefined8 *)pNVar5;
          local_80 = pNVar3;
          pNVar2 = (Node *)Graph::NewNode(*(Graph **)(this + 0x10),*(Operator **)param_1,4,&local_80
                                          ,false);
          NodeProperties::MergeControlToEnd
                    (*(Graph **)(this + 0x10),*(CommonOperatorBuilder **)(this + 0x20),pNVar2);
          uVar6 = uVar6 - 1;
          pNVar4 = pNVar4 + 8;
          pNVar5 = pNVar5 + 8;
          pNVar8 = pNVar8 + 8;
        } while (uVar6 != 0);
      }
LAB_0168c388:
      (**(code **)(**(long **)(this + 8) + 0x10))
                (*(long **)(this + 8),this_00,*(undefined8 *)(this + 0x30));
      return *(Node **)(this + 0x30);
    }
  }
  return (Node *)0x0;
}

