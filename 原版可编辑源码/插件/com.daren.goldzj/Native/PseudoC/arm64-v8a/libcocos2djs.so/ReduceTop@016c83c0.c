
/* v8::internal::compiler::GraphReducer::ReduceTop() */

void __thiscall v8::internal::compiler::GraphReducer::ReduceTop(GraphReducer *this)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  Node *pNVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  Node *pNVar14;
  uint *puVar15;
  long *plVar16;
  int iVar17;
  Node *pNVar18;
  Node *pNVar19;
  Node *pNVar20;
  
  uVar6 = (*(long *)(this + 200) + *(long *)(this + 0xc0)) - 1;
  lVar11 = *(long *)(*(long *)(this + 0x98) + (uVar6 >> 5 & 0x7fffffffffffff8));
  uVar6 = uVar6 & 0xff;
  pNVar14 = *(Node **)(lVar11 + uVar6 * 0x10);
  pNVar20 = pNVar14 + 0x20;
  uVar9 = (byte)pNVar14[0x17] & 0xf;
  pNVar5 = pNVar20;
  uVar13 = uVar9;
  if (uVar9 == 0xf) {
    uVar13 = *(uint *)(*(long *)pNVar20 + 8);
    pNVar5 = (Node *)(*(long *)pNVar20 + 0x10);
  }
  if (((int)uVar13 < 1) || (*(long *)pNVar5 != 0)) {
    pNVar5 = pNVar20;
    if (uVar9 == 0xf) {
      uVar9 = *(uint *)(*(long *)pNVar20 + 8);
      pNVar5 = (Node *)(*(long *)pNVar20 + 0x10);
    }
    puVar15 = (uint *)(lVar11 + uVar6 * 0x10 + 8);
    uVar13 = *puVar15;
    if ((int)uVar9 <= (int)uVar13) {
      uVar13 = 0;
    }
    if ((int)uVar13 < (int)uVar9) {
      pNVar19 = pNVar5 + (long)(int)uVar13 * 8;
      uVar1 = uVar13;
      do {
        pNVar18 = *(Node **)pNVar19;
        if (pNVar18 != pNVar14) {
          uVar4 = *(uint *)(this + 0x18);
          uVar2 = 0;
          if (uVar4 <= *(uint *)(pNVar18 + 0x10)) {
            uVar2 = *(uint *)(pNVar18 + 0x10) - uVar4;
          }
          if ((uVar2 & 0xff) < 2) {
            *(uint *)(pNVar18 + 0x10) = uVar4 + 2;
            lVar11 = *(long *)(this + 0x98);
            lVar7 = *(long *)(this + 0xa0);
            uVar6 = 0;
            if (lVar7 - lVar11 != 0) {
              uVar6 = (lVar7 - lVar11) * 0x20 - 1;
            }
            uVar10 = *(long *)(this + 200) + *(long *)(this + 0xc0);
            if (uVar6 == uVar10) {
              std::__ndk1::
              deque<v8::internal::compiler::GraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::GraphReducer::NodeState>>
              ::__add_back_capacity
                        ((deque<v8::internal::compiler::GraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::GraphReducer::NodeState>>
                          *)(this + 0x90));
              lVar11 = *(long *)(this + 0x98);
              lVar7 = *(long *)(this + 0xa0);
              uVar10 = *(long *)(this + 0xc0) + *(long *)(this + 200);
            }
            if (lVar7 == lVar11) {
              puVar8 = (undefined8 *)0x0;
            }
            else {
              puVar8 = (undefined8 *)
                       (*(long *)(lVar11 + (uVar10 >> 5 & 0x7fffffffffffff8)) +
                       (uVar10 & 0xff) * 0x10);
            }
            *puVar8 = pNVar18;
            *(undefined4 *)(puVar8 + 1) = 0;
            *(long *)(this + 200) = *(long *)(this + 200) + 1;
            *puVar15 = uVar1 + 1;
            return;
          }
        }
        uVar1 = uVar1 + 1;
        pNVar19 = pNVar19 + 8;
      } while (uVar9 != uVar1);
    }
    if (0 < (int)uVar13) {
      uVar6 = 0;
      do {
        pNVar19 = *(Node **)(pNVar5 + uVar6 * 8);
        if (pNVar19 != pNVar14) {
          uVar1 = *(uint *)(this + 0x18);
          uVar9 = 0;
          if (uVar1 <= *(uint *)(pNVar19 + 0x10)) {
            uVar9 = *(uint *)(pNVar19 + 0x10) - uVar1;
          }
          if ((uVar9 & 0xff) < 2) {
            *(uint *)(pNVar19 + 0x10) = uVar1 + 2;
            lVar11 = *(long *)(this + 0x98);
            lVar7 = *(long *)(this + 0xa0);
            uVar10 = 0;
            if (lVar7 - lVar11 != 0) {
              uVar10 = (lVar7 - lVar11) * 0x20 - 1;
            }
            uVar12 = *(long *)(this + 200) + *(long *)(this + 0xc0);
            if (uVar10 == uVar12) {
              std::__ndk1::
              deque<v8::internal::compiler::GraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::GraphReducer::NodeState>>
              ::__add_back_capacity
                        ((deque<v8::internal::compiler::GraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::GraphReducer::NodeState>>
                          *)(this + 0x90));
              lVar11 = *(long *)(this + 0x98);
              lVar7 = *(long *)(this + 0xa0);
              uVar12 = *(long *)(this + 0xc0) + *(long *)(this + 200);
            }
            if (lVar7 == lVar11) {
              puVar8 = (undefined8 *)0x0;
            }
            else {
              puVar8 = (undefined8 *)
                       (*(long *)(lVar11 + (uVar12 >> 5 & 0x7fffffffffffff8)) +
                       (uVar12 & 0xff) * 0x10);
            }
            *puVar8 = pNVar19;
            *(undefined4 *)(puVar8 + 1) = 0;
            lVar11 = *(long *)(this + 200);
            iVar17 = (int)uVar6;
            goto LAB_016c88e4;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar13 != uVar6);
    }
    iVar17 = *(int *)(*(long *)(this + 8) + 0x1c);
    pNVar5 = (Node *)Reduce(this,pNVar14);
    if (pNVar5 != (Node *)0x0) {
      if (pNVar14 == pNVar5) {
        uVar9 = (byte)pNVar14[0x17] & 0xf;
        if (uVar9 == 0xf) {
          uVar9 = *(uint *)(*(long *)pNVar20 + 8);
          pNVar20 = (Node *)(*(long *)pNVar20 + 0x10);
        }
        if (0 < (int)uVar9) {
          uVar6 = 0;
          do {
            pNVar19 = *(Node **)(pNVar20 + uVar6 * 8);
            if (pNVar19 != pNVar14) {
              uVar1 = *(uint *)(this + 0x18);
              uVar13 = 0;
              if (uVar1 <= *(uint *)(pNVar19 + 0x10)) {
                uVar13 = *(uint *)(pNVar19 + 0x10) - uVar1;
              }
              if ((uVar13 & 0xff) < 2) {
                *(uint *)(pNVar19 + 0x10) = uVar1 + 2;
                lVar11 = *(long *)(this + 0x98);
                lVar7 = *(long *)(this + 0xa0);
                uVar10 = 0;
                if (lVar7 - lVar11 != 0) {
                  uVar10 = (lVar7 - lVar11) * 0x20 - 1;
                }
                uVar12 = *(long *)(this + 200) + *(long *)(this + 0xc0);
                if (uVar10 == uVar12) {
                  std::__ndk1::
                  deque<v8::internal::compiler::GraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::GraphReducer::NodeState>>
                  ::__add_back_capacity
                            ((deque<v8::internal::compiler::GraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::GraphReducer::NodeState>>
                              *)(this + 0x90));
                  lVar11 = *(long *)(this + 0x98);
                  lVar7 = *(long *)(this + 0xa0);
                  uVar12 = *(long *)(this + 0xc0) + *(long *)(this + 200);
                }
                if (lVar7 == lVar11) {
                  puVar8 = (undefined8 *)0x0;
                }
                else {
                  puVar8 = (undefined8 *)
                           (*(long *)(lVar11 + (uVar12 >> 5 & 0x7fffffffffffff8)) +
                           (uVar12 & 0xff) * 0x10);
                }
                *puVar8 = pNVar19;
                *(undefined4 *)(puVar8 + 1) = 0;
                lVar11 = *(long *)(this + 200);
                iVar17 = (int)uVar6;
LAB_016c88e4:
                *(long *)(this + 200) = lVar11 + 1;
                *puVar15 = iVar17 + 1;
                return;
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar9 != uVar6);
        }
      }
      uVar6 = (*(long *)(this + 200) + *(long *)(this + 0xc0)) - 1;
      *(int *)(*(long *)(*(long *)(*(long *)(this + 0x98) + (uVar6 >> 5 & 0x7fffffffffffff8)) +
                        (uVar6 & 0xff) * 0x10) + 0x10) = *(int *)(this + 0x18) + 3;
      lVar7 = *(long *)(this + 0xa0);
      lVar3 = *(long *)(this + 200);
      lVar11 = 0;
      if (lVar7 - *(long *)(this + 0x98) != 0) {
        lVar11 = (lVar7 - *(long *)(this + 0x98)) * 0x20 + -1;
      }
      *(long *)(this + 200) = lVar3 + -1;
      if (0x1ff < (lVar11 - (lVar3 + *(long *)(this + 0xc0))) + 1U) {
        puVar8 = *(undefined8 **)(lVar7 + -8);
        if ((*(long *)(this + 0xd8) == 0) || (*(ulong *)(*(long *)(this + 0xd8) + 8) < 0x101)) {
          puVar8[1] = 0x100;
          *puVar8 = *(undefined8 *)(this + 0xd8);
          lVar7 = *(long *)(this + 0xa0);
          *(undefined8 **)(this + 0xd8) = puVar8;
        }
        *(long *)(this + 0xa0) = lVar7 + -8;
      }
      if (pNVar14 == pNVar5) {
        plVar16 = *(long **)(pNVar14 + 0x18);
        if (plVar16 == (long *)0x0) {
          return;
        }
        do {
          pNVar20 = (Node *)(plVar16 + (ulong)(*(uint *)(plVar16 + 2) >> 1) * 3 + 3);
          if ((*(uint *)(plVar16 + 2) & 1) == 0) {
            pNVar20 = *(Node **)pNVar20;
          }
          if (pNVar20 != pNVar14) {
            uVar13 = *(uint *)(this + 0x18);
            uVar9 = 0;
            if (uVar13 <= *(uint *)(pNVar20 + 0x10)) {
              uVar9 = *(uint *)(pNVar20 + 0x10) - uVar13;
            }
            if ((uVar9 & 0xff) == 3) {
              *(uint *)(pNVar20 + 0x10) = uVar13 + 1;
              lVar11 = *(long *)(this + 0x48);
              uVar6 = 0;
              if (*(long *)(this + 0x50) - lVar11 != 0) {
                uVar6 = (*(long *)(this + 0x50) - lVar11) * 0x40 - 1;
              }
              uVar10 = *(long *)(this + 0x78) + *(long *)(this + 0x70);
              if (uVar6 == uVar10) {
                std::__ndk1::
                deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                ::__add_back_capacity
                          ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                            *)(this + 0x40));
                lVar11 = *(long *)(this + 0x48);
                uVar10 = *(long *)(this + 0x70) + *(long *)(this + 0x78);
              }
              *(Node **)(*(long *)(lVar11 + (uVar10 >> 6 & 0x3fffffffffffff8)) +
                        (uVar10 & 0x1ff) * 8) = pNVar20;
              *(long *)(this + 0x78) = *(long *)(this + 0x78) + 1;
            }
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
        return;
      }
      Replace(this,pNVar14,pNVar5,iVar17 - 1);
      return;
    }
    uVar6 = (*(long *)(this + 200) + *(long *)(this + 0xc0)) - 1;
    *(int *)(*(long *)(*(long *)(*(long *)(this + 0x98) + (uVar6 >> 5 & 0x7fffffffffffff8)) +
                      (uVar6 & 0xff) * 0x10) + 0x10) = *(int *)(this + 0x18) + 3;
  }
  else {
    *(int *)(pNVar14 + 0x10) = *(int *)(this + 0x18) + 3;
  }
  lVar7 = *(long *)(this + 0xa0);
  lVar3 = *(long *)(this + 200);
  lVar11 = 0;
  if (lVar7 - *(long *)(this + 0x98) != 0) {
    lVar11 = (lVar7 - *(long *)(this + 0x98)) * 0x20 + -1;
  }
  *(long *)(this + 200) = lVar3 + -1;
  if (0x1ff < (lVar11 - (lVar3 + *(long *)(this + 0xc0))) + 1U) {
    puVar8 = *(undefined8 **)(lVar7 + -8);
    if ((*(long *)(this + 0xd8) == 0) || (*(ulong *)(*(long *)(this + 0xd8) + 8) < 0x101)) {
      puVar8[1] = 0x100;
      *puVar8 = *(undefined8 *)(this + 0xd8);
      lVar7 = *(long *)(this + 0xa0);
      *(undefined8 **)(this + 0xd8) = puVar8;
    }
    *(long *)(this + 0xa0) = lVar7 + -8;
  }
  return;
}

