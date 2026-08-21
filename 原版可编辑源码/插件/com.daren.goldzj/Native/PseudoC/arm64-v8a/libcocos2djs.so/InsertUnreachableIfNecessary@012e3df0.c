
/* v8::internal::compiler::RepresentationSelector::InsertUnreachableIfNecessary(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::RepresentationSelector::InsertUnreachableIfNecessary
          (RepresentationSelector *this,Node *param_1)

{
  Use *pUVar1;
  Graph *this_00;
  uint uVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  Node *this_01;
  ulong uVar5;
  Node *pNVar6;
  long lVar7;
  Node *pNVar8;
  long lVar9;
  Use *pUVar10;
  Use *pUVar11;
  Node *local_60;
  undefined8 uStack_58;
  
  lVar7 = *(long *)param_1;
  if (((0 < *(int *)(lVar7 + 0x20)) && (*(char *)(lVar7 + 0x24) != '\0')) &&
     (*(short *)(lVar7 + 0x10) != 0x3b)) {
    lVar9 = *(long *)(*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28
                     + 0x18);
    if (lVar9 == 0) {
      lVar9 = *(long *)(param_1 + 8);
    }
    if (lVar9 == 1) {
      if (*(int *)(lVar7 + 0x28) == 0) {
        uVar3 = NodeProperties::GetControlInput(param_1,0);
      }
      else {
        uVar3 = NodeProperties::FindSuccessfulControlProjection(param_1);
      }
      this_00 = (Graph *)**(undefined8 **)this;
      pOVar4 = (Operator *)
               CommonOperatorBuilder::Unreachable
                         ((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
      local_60 = param_1;
      uStack_58 = uVar3;
      this_01 = (Node *)Graph::NewNode(this_00,pOVar4,2,&local_60,false);
      pUVar10 = *(Use **)(param_1 + 0x18);
joined_r0x012e3eb0:
      pUVar11 = pUVar10;
      if (pUVar10 != (Use *)0x0) {
        while( true ) {
          pUVar10 = *(Use **)pUVar11;
          lVar7 = 0x10;
          if ((*(uint *)(pUVar11 + 0x10) & 1) != 0) {
            lVar7 = 0x20;
          }
          pUVar1 = pUVar11 + lVar7 + (ulong)(*(uint *)(pUVar11 + 0x10) >> 1) * 0x20 + 0x18;
          uVar5 = NodeProperties::IsEffectEdge(pUVar11,pUVar1);
          if ((uVar5 & 1) == 0) break;
          uVar2 = *(uint *)(pUVar11 + 0x10);
          pNVar8 = (Node *)(pUVar11 + (ulong)(uVar2 >> 1) * 0x18 + 0x18);
          pNVar6 = pNVar8;
          if ((uVar2 & 1) == 0) {
            pNVar6 = *(Node **)pNVar8;
          }
          if (pNVar6 == this_01) break;
          if ((uVar2 & 1) == 0) {
            pNVar8 = *(Node **)pNVar8;
          }
          if ((*(short *)(*(long *)pNVar8 + 0x10) == 7) ||
             (pNVar6 = *(Node **)pUVar1, pNVar6 == this_01)) break;
          if (pNVar6 != (Node *)0x0) {
            Node::RemoveUse(pNVar6,pUVar11);
          }
          *(Node **)pUVar1 = this_01;
          if (this_01 == (Node *)0x0) break;
          Node::AppendUse(this_01,pUVar11);
          pUVar11 = pUVar10;
          if (pUVar10 == (Use *)0x0) {
            return;
          }
        }
        goto joined_r0x012e3eb0;
      }
    }
  }
  return;
}

