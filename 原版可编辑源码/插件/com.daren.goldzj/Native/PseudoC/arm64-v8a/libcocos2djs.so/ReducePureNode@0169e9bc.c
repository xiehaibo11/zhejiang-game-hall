
/* v8::internal::compiler::DeadCodeElimination::ReducePureNode(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::DeadCodeElimination::ReducePureNode(DeadCodeElimination *this,Node *param_1)

{
  Graph *this_00;
  char cVar1;
  long lVar2;
  Operator *pOVar3;
  Node *pNVar4;
  uint uVar5;
  Node *pNVar6;
  long lVar7;
  Node *local_38;
  
  if (*(short *)(*(long *)param_1 + 0x10) != 0x3c) {
    pNVar4 = param_1 + 0x20;
    uVar5 = (byte)param_1[0x17] & 0xf;
    if (uVar5 == 0xf) {
      uVar5 = *(uint *)(*(long *)pNVar4 + 8);
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    if (uVar5 != 0) {
      lVar7 = (long)(int)uVar5 << 3;
      do {
        pNVar6 = *(Node **)pNVar4;
        if ((*(ushort *)(*(long *)pNVar6 + 0x10) - 0x3b < 3) ||
           (lVar2 = NodeProperties::GetTypeOrAny(pNVar6), lVar2 == 1)) {
          if (pNVar6 == (Node *)0x0) {
            return (Node *)0x0;
          }
          if (*(short *)(*(Operator **)pNVar6 + 0x10) == 0x3c) {
            cVar1 = DeadValueRepresentationOf(*(Operator **)pNVar6);
            if (cVar1 == '\0') {
              return pNVar6;
            }
            pNVar6 = (Node *)NodeProperties::GetValueInput(pNVar6,0);
          }
          this_00 = *(Graph **)(this + 0x10);
          pOVar3 = (Operator *)
                   CommonOperatorBuilder::DeadValue(*(CommonOperatorBuilder **)(this + 0x18),0);
          local_38 = pNVar6;
          pNVar4 = (Node *)Graph::NewNode(this_00,pOVar3,1,&local_38,false);
          *(undefined8 *)(pNVar4 + 8) = 1;
          return pNVar4;
        }
        lVar7 = lVar7 + -8;
        pNVar4 = pNVar4 + 8;
      } while (lVar7 != 0);
    }
  }
  return (Node *)0x0;
}

