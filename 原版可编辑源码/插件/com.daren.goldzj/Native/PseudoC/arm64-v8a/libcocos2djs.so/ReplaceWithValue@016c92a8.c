
/* v8::internal::compiler::GraphReducer::ReplaceWithValue(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::GraphReducer::ReplaceWithValue
          (GraphReducer *this,Node *param_1,Node *param_2,Node *param_3,Node *param_4)

{
  Node *pNVar1;
  uint uVar2;
  ulong uVar3;
  Node *pNVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  Use *pUVar9;
  Node *pNVar10;
  Use *pUVar11;
  Node *this_00;
  
  if (param_3 == (Node *)0x0) {
    if (*(int *)(*(long *)param_1 + 0x18) < 1) {
      param_3 = (Node *)0x0;
    }
    else {
      param_3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    }
  }
  if (param_4 == (Node *)0x0) {
    if (*(int *)(*(long *)param_1 + 0x1c) < 1) {
      param_4 = (Node *)0x0;
      pUVar11 = *(Use **)(param_1 + 0x18);
    }
    else {
      param_4 = (Node *)NodeProperties::GetControlInput(param_1,0);
      pUVar11 = *(Use **)(param_1 + 0x18);
    }
  }
  else {
    pUVar11 = *(Use **)(param_1 + 0x18);
  }
  if (pUVar11 != (Use *)0x0) {
    do {
      while( true ) {
        uVar7 = *(uint *)(pUVar11 + 0x10);
        pUVar9 = *(Use **)pUVar11;
        pNVar10 = (Node *)(pUVar11 + (ulong)(uVar7 >> 1) * 0x18 + 0x18);
        lVar6 = 0x10;
        if ((uVar7 & 1) != 0) {
          lVar6 = 0x20;
        }
        pNVar1 = pNVar10 + (ulong)(uVar7 >> 1) * 8 + lVar6;
        if ((uVar7 & 1) == 0) {
          pNVar10 = *(Node **)pNVar10;
        }
        uVar3 = NodeProperties::IsControlEdge(pUVar11,pNVar1);
        if ((uVar3 & 1) != 0) break;
        uVar3 = NodeProperties::IsEffectEdge(pUVar11,pNVar1);
        pNVar4 = *(Node **)pNVar1;
        if ((uVar3 & 1) == 0) {
          if (pNVar4 != param_2) {
            if (pNVar4 != (Node *)0x0) {
              Node::RemoveUse(pNVar4,pUVar11);
            }
            *(Node **)pNVar1 = param_2;
            pNVar1 = param_2;
            goto joined_r0x016c9434;
          }
        }
        else if (pNVar4 != param_3) {
          if (pNVar4 != (Node *)0x0) {
            Node::RemoveUse(pNVar4,pUVar11);
          }
          *(Node **)pNVar1 = param_3;
          pNVar1 = param_3;
joined_r0x016c9434:
          if (pNVar1 != (Node *)0x0) {
            Node::AppendUse(pNVar1,pUVar11);
          }
        }
LAB_016c9444:
        uVar7 = *(uint *)(pNVar10 + 0x10);
        uVar5 = *(uint *)(this + 0x18);
LAB_016c944c:
        uVar2 = 0;
        if (uVar5 <= uVar7) {
          uVar2 = uVar7 - uVar5;
        }
        if ((uVar2 & 0xff) == 3) {
          *(uint *)(pNVar10 + 0x10) = uVar5 + 1;
          lVar6 = *(long *)(this + 0x48);
          uVar3 = 0;
          if (*(long *)(this + 0x50) - lVar6 != 0) {
            uVar3 = (*(long *)(this + 0x50) - lVar6) * 0x40 - 1;
          }
          uVar8 = *(long *)(this + 0x78) + *(long *)(this + 0x70);
          if (uVar3 == uVar8) {
            std::__ndk1::
            deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
            ::__add_back_capacity
                      ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                        *)(this + 0x40));
            lVar6 = *(long *)(this + 0x48);
            uVar8 = *(long *)(this + 0x70) + *(long *)(this + 0x78);
          }
          *(Node **)(*(long *)(lVar6 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
               pNVar10;
          *(long *)(this + 0x78) = *(long *)(this + 0x78) + 1;
        }
        pUVar11 = pUVar9;
        if (pUVar9 == (Use *)0x0) {
          return;
        }
      }
      if (*(short *)(*(long *)pNVar10 + 0x10) == 7) {
        this_00 = *(Node **)(this + 0x10);
        pNVar4 = *(Node **)pNVar1;
        if (pNVar4 != this_00) {
          if (pNVar4 != (Node *)0x0) {
            Node::RemoveUse(pNVar4,pUVar11);
          }
          *(Node **)pNVar1 = this_00;
          if (this_00 != (Node *)0x0) {
            Node::AppendUse(this_00,pUVar11);
          }
        }
        uVar7 = *(uint *)(pNVar10 + 0x10);
        uVar5 = *(uint *)(this + 0x18);
        goto LAB_016c944c;
      }
      if (*(short *)(*(long *)pNVar10 + 0x10) != 6) {
        pNVar4 = *(Node **)pNVar1;
        if (pNVar4 != param_4) {
          if (pNVar4 != (Node *)0x0) {
            Node::RemoveUse(pNVar4,pUVar11);
          }
          *(Node **)pNVar1 = param_4;
          pNVar1 = param_4;
          goto joined_r0x016c9434;
        }
        goto LAB_016c9444;
      }
      Replace(this,pNVar10,param_4,0xffffffff);
      pUVar11 = pUVar9;
    } while (pUVar9 != (Use *)0x0);
  }
  return;
}

