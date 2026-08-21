
/* v8::internal::compiler::GraphReducer::Replace(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, unsigned int) */

void __thiscall
v8::internal::compiler::GraphReducer::Replace
          (GraphReducer *this,Node *param_1,Node *param_2,uint param_3)

{
  Node *pNVar1;
  uint uVar2;
  uint uVar3;
  Node *pNVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  Use *pUVar9;
  ulong uVar10;
  Use *pUVar11;
  Node *pNVar12;
  Node *local_68;
  
  lVar5 = *(long *)(this + 8);
  if (*(Node **)(lVar5 + 8) == param_1) {
    *(Node **)(lVar5 + 8) = param_2;
    lVar5 = *(long *)(this + 8);
  }
  if (*(Node **)(lVar5 + 0x10) == param_1) {
    *(Node **)(lVar5 + 0x10) = param_2;
  }
  pUVar9 = *(Use **)(param_1 + 0x18);
  if ((*(uint *)(param_2 + 0x14) & 0xffffff) <= param_3) {
    if (pUVar9 != (Use *)0x0) {
      do {
        uVar2 = *(uint *)(pUVar9 + 0x10);
        pUVar11 = *(Use **)pUVar9;
        uVar10 = (ulong)(uVar2 >> 1);
        pNVar1 = (Node *)(pUVar9 + uVar10 * 0x18 + 0x18);
        lVar5 = 0x10;
        if ((uVar2 & 1) != 0) {
          lVar5 = 0x20;
        }
        pNVar12 = pNVar1;
        if ((uVar2 & 1) == 0) {
          pNVar12 = *(Node **)pNVar1;
        }
        pNVar4 = *(Node **)(pNVar1 + uVar10 * 8 + lVar5);
        if (pNVar4 != param_2) {
          if (pNVar4 != (Node *)0x0) {
            Node::RemoveUse(pNVar4,pUVar9);
          }
          *(Node **)(pNVar1 + uVar10 * 8 + lVar5) = param_2;
          Node::AppendUse(param_2,pUVar9);
        }
        if (pNVar12 != param_1) {
          uVar3 = *(uint *)(this + 0x18);
          uVar2 = 0;
          if (uVar3 <= *(uint *)(pNVar12 + 0x10)) {
            uVar2 = *(uint *)(pNVar12 + 0x10) - uVar3;
          }
          if ((uVar2 & 0xff) == 3) {
            *(uint *)(pNVar12 + 0x10) = uVar3 + 1;
            lVar5 = *(long *)(this + 0x48);
            uVar10 = 0;
            if (*(long *)(this + 0x50) - lVar5 != 0) {
              uVar10 = (*(long *)(this + 0x50) - lVar5) * 0x40 - 1;
            }
            uVar7 = *(long *)(this + 0x78) + *(long *)(this + 0x70);
            if (uVar10 == uVar7) {
              std::__ndk1::
              deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
              ::__add_back_capacity
                        ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                          *)(this + 0x40));
              lVar5 = *(long *)(this + 0x48);
              uVar7 = *(long *)(this + 0x70) + *(long *)(this + 0x78);
            }
            *(Node **)(*(long *)(lVar5 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) =
                 pNVar12;
            *(long *)(this + 0x78) = *(long *)(this + 0x78) + 1;
          }
        }
        pUVar9 = pUVar11;
      } while (pUVar11 != (Use *)0x0);
    }
    Node::Kill(param_1);
    return;
  }
  if (pUVar9 != (Use *)0x0) {
    do {
      uVar2 = *(uint *)(pUVar9 + 0x10);
      pUVar11 = *(Use **)pUVar9;
      uVar10 = (ulong)(uVar2 >> 1);
      pNVar1 = (Node *)(pUVar9 + uVar10 * 0x18 + 0x18);
      lVar5 = 0x10;
      if ((uVar2 & 1) != 0) {
        lVar5 = 0x20;
      }
      pNVar12 = pNVar1;
      if ((uVar2 & 1) == 0) {
        pNVar12 = *(Node **)pNVar1;
      }
      if ((*(uint *)(pNVar12 + 0x14) & 0xffffff) <= param_3) {
        pNVar4 = *(Node **)(pNVar1 + uVar10 * 8 + lVar5);
        if (pNVar4 != param_2) {
          if (pNVar4 != (Node *)0x0) {
            Node::RemoveUse(pNVar4,pUVar9);
          }
          *(Node **)(pNVar1 + uVar10 * 8 + lVar5) = param_2;
          Node::AppendUse(param_2,pUVar9);
        }
        if (pNVar12 != param_1) {
          uVar3 = *(uint *)(this + 0x18);
          uVar2 = 0;
          if (uVar3 <= *(uint *)(pNVar12 + 0x10)) {
            uVar2 = *(uint *)(pNVar12 + 0x10) - uVar3;
          }
          if ((uVar2 & 0xff) == 3) {
            *(uint *)(pNVar12 + 0x10) = uVar3 + 1;
            lVar5 = *(long *)(this + 0x48);
            uVar10 = 0;
            if (*(long *)(this + 0x50) - lVar5 != 0) {
              uVar10 = (*(long *)(this + 0x50) - lVar5) * 0x40 - 1;
            }
            uVar7 = *(long *)(this + 0x78) + *(long *)(this + 0x70);
            if (uVar10 == uVar7) {
              std::__ndk1::
              deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
              ::__add_back_capacity
                        ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                          *)(this + 0x40));
              lVar5 = *(long *)(this + 0x48);
              uVar7 = *(long *)(this + 0x70) + *(long *)(this + 0x78);
            }
            *(Node **)(*(long *)(lVar5 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) =
                 pNVar12;
            *(long *)(this + 0x78) = *(long *)(this + 0x78) + 1;
          }
        }
      }
      pUVar9 = pUVar11;
    } while (pUVar11 != (Use *)0x0);
  }
  local_68 = param_1;
  uVar10 = Node::Uses::empty((Uses *)&local_68);
  if ((uVar10 & 1) != 0) {
    Node::Kill(param_1);
  }
  uVar3 = *(uint *)(this + 0x18);
  uVar2 = 0;
  if (uVar3 <= *(uint *)(param_2 + 0x10)) {
    uVar2 = *(uint *)(param_2 + 0x10) - uVar3;
  }
  if ((uVar2 & 0xff) < 2) {
    *(uint *)(param_2 + 0x10) = uVar3 + 2;
    lVar5 = *(long *)(this + 0x98);
    lVar8 = *(long *)(this + 0xa0);
    uVar10 = 0;
    if (lVar8 - lVar5 != 0) {
      uVar10 = (lVar8 - lVar5) * 0x20 - 1;
    }
    uVar7 = *(long *)(this + 200) + *(long *)(this + 0xc0);
    if (uVar10 == uVar7) {
      std::__ndk1::
      deque<v8::internal::compiler::GraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::GraphReducer::NodeState>>
      ::__add_back_capacity
                ((deque<v8::internal::compiler::GraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::GraphReducer::NodeState>>
                  *)(this + 0x90));
      lVar5 = *(long *)(this + 0x98);
      lVar8 = *(long *)(this + 0xa0);
      uVar7 = *(long *)(this + 0xc0) + *(long *)(this + 200);
    }
    if (lVar8 == lVar5) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)
               (*(long *)(lVar5 + (uVar7 >> 5 & 0x7fffffffffffff8)) + (uVar7 & 0xff) * 0x10);
    }
    *puVar6 = param_2;
    *(undefined4 *)(puVar6 + 1) = 0;
    *(long *)(this + 200) = *(long *)(this + 200) + 1;
  }
  return;
}

