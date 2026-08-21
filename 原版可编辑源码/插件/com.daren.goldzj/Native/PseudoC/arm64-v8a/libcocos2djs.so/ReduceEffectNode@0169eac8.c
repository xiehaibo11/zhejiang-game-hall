
/* v8::internal::compiler::DeadCodeElimination::ReduceEffectNode(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::DeadCodeElimination::ReduceEffectNode
          (DeadCodeElimination *this,Node *param_1)

{
  char cVar1;
  Node *pNVar2;
  long lVar3;
  Operator *pOVar4;
  undefined8 uVar5;
  uint uVar6;
  Node *pNVar7;
  Node *pNVar8;
  long lVar9;
  Graph *pGVar10;
  Node *local_60;
  undefined8 uStack_58;
  
  pNVar2 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  if (*(short *)(*(long *)pNVar2 + 0x10) != 0x3d) {
    pNVar8 = param_1 + 0x20;
    uVar6 = (byte)param_1[0x17] & 0xf;
    if (uVar6 == 0xf) {
      uVar6 = *(uint *)(*(long *)pNVar8 + 8);
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    if (uVar6 != 0) {
      lVar9 = (long)(int)uVar6 << 3;
      do {
        pNVar7 = *(Node **)pNVar8;
        if ((*(ushort *)(*(long *)pNVar7 + 0x10) - 0x3b < 3) ||
           (lVar3 = NodeProperties::GetTypeOrAny(pNVar7), lVar3 == 1)) {
          if (pNVar7 != (Node *)0x0) {
            if (*(short *)(*(long *)pNVar2 + 0x10) == 0x3b) {
              (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,0,0);
              if (*(short *)(*(Operator **)pNVar7 + 0x10) == 0x3c) {
                cVar1 = DeadValueRepresentationOf(*(Operator **)pNVar7);
                if (cVar1 == '\0') {
                  return pNVar7;
                }
                pNVar7 = (Node *)NodeProperties::GetValueInput(pNVar7,0);
              }
              pGVar10 = *(Graph **)(this + 0x10);
              pOVar4 = (Operator *)
                       CommonOperatorBuilder::DeadValue(*(CommonOperatorBuilder **)(this + 0x18),0);
              local_60 = pNVar7;
              pNVar2 = (Node *)Graph::NewNode(pGVar10,pOVar4,1,&local_60,false);
              *(undefined8 *)(pNVar2 + 8) = 1;
              return pNVar2;
            }
            if (*(int *)(*(long *)param_1 + 0x1c) == 1) {
              uVar5 = NodeProperties::GetControlInput(param_1,0);
              pGVar10 = *(Graph **)(this + 0x10);
            }
            else {
              pGVar10 = *(Graph **)(this + 0x10);
              uVar5 = *(undefined8 *)(pGVar10 + 8);
            }
            pOVar4 = (Operator *)
                     CommonOperatorBuilder::Unreachable(*(CommonOperatorBuilder **)(this + 0x18));
            local_60 = pNVar2;
            uStack_58 = uVar5;
            pNVar2 = (Node *)Graph::NewNode(pGVar10,pOVar4,2,&local_60,false);
            *(undefined8 *)(pNVar2 + 8) = 1;
            if (*(short *)(*(Operator **)pNVar7 + 0x10) == 0x3c) {
              cVar1 = DeadValueRepresentationOf(*(Operator **)pNVar7);
              if (cVar1 == '\0') goto LAB_0169ecec;
              pNVar7 = (Node *)NodeProperties::GetValueInput(pNVar7,0);
            }
            pGVar10 = *(Graph **)(this + 0x10);
            pOVar4 = (Operator *)
                     CommonOperatorBuilder::DeadValue(*(CommonOperatorBuilder **)(this + 0x18),0);
            local_60 = pNVar7;
            pNVar7 = (Node *)Graph::NewNode(pGVar10,pOVar4,1,&local_60,false);
            *(undefined8 *)(pNVar7 + 8) = 1;
LAB_0169ecec:
            (**(code **)(**(long **)(this + 8) + 0x20))
                      (*(long **)(this + 8),param_1,pNVar7,param_1,uVar5);
            return pNVar2;
          }
          break;
        }
        lVar9 = lVar9 + -8;
        pNVar8 = pNVar8 + 8;
      } while (lVar9 != 0);
    }
    pNVar2 = (Node *)0x0;
  }
  return pNVar2;
}

