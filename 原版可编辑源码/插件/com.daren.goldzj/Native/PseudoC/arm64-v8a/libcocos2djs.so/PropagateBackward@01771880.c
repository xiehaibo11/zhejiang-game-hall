
/* v8::internal::compiler::LoopFinderImpl::PropagateBackward() */

void __thiscall v8::internal::compiler::LoopFinderImpl::PropagateBackward(LoopFinderImpl *this)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  Node *pNVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  Node *pNVar19;
  Node *pNVar20;
  
  ResizeBackwardMarks(this);
  lVar11 = (ulong)((*(uint *)(*(long *)(this + 8) + 0x14) & 0xffffff) * *(int *)(this + 0xd4)) * 4;
  *(uint *)(*(long *)(this + 0xd8) + lVar11) = *(uint *)(*(long *)(this + 0xd8) + lVar11) | 1;
  lVar11 = *(long *)(this + 8);
  if (*(uint *)(lVar11 + 0x10) <= *(uint *)(this + 0x60)) {
    lVar12 = *(long *)(this + 0x18);
    uVar15 = 0;
    if (*(long *)(this + 0x20) - lVar12 != 0) {
      uVar15 = (*(long *)(this + 0x20) - lVar12) * 0x40 - 1;
    }
    uVar10 = *(long *)(this + 0x48) + *(long *)(this + 0x40);
    if (uVar15 == uVar10) {
      std::__ndk1::
      deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
      ::__add_back_capacity
                ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                  *)(this + 0x10));
      lVar12 = *(long *)(this + 0x18);
      uVar10 = *(long *)(this + 0x40) + *(long *)(this + 0x48);
    }
    *(long *)(*(long *)(lVar12 + (uVar10 >> 6 & 0x3fffffffffffff8)) + (uVar10 & 0x1ff) * 8) = lVar11
    ;
    *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
    *(int *)(lVar11 + 0x10) = *(int *)(this + 0x60) + 1;
  }
  if (*(long *)(this + 0x48) != 0) {
    do {
      TickCounter::DoTick(*(TickCounter **)(this + 0xe8));
      uVar15 = *(ulong *)(this + 0x40);
      puVar13 = *(undefined8 **)(this + 0x18);
      pNVar19 = *(Node **)(*(long *)((long)puVar13 + (uVar15 >> 6 & 0x3fffffffffffff8)) +
                          (uVar15 & 0x1ff) * 8);
      plVar1 = (long *)(*(long *)(this + 0x68) +
                       ((ulong)*(uint *)(pNVar19 + 0x14) & 0xffffff) * 0x10);
      if (*plVar1 == 0) {
        *plVar1 = (long)pNVar19;
        puVar13 = *(undefined8 **)(this + 0x18);
        uVar15 = *(ulong *)(this + 0x40);
      }
      uVar15 = uVar15 + 1;
      *(ulong *)(this + 0x40) = uVar15;
      *(long *)(this + 0x48) = *(long *)(this + 0x48) + -1;
      if (0x3ff < uVar15) {
        puVar17 = (undefined8 *)*puVar13;
        if ((*(long *)(this + 0x58) == 0) || (*(ulong *)(*(long *)(this + 0x58) + 8) < 0x201)) {
          puVar17[1] = 0x200;
          *puVar17 = *(undefined8 *)(this + 0x58);
          puVar13 = *(undefined8 **)(this + 0x18);
          uVar15 = *(ulong *)(this + 0x40);
          *(undefined8 **)(this + 0x58) = puVar17;
        }
        *(undefined8 **)(this + 0x18) = puVar13 + 1;
        *(ulong *)(this + 0x40) = uVar15 - 0x200;
      }
      *(undefined4 *)(pNVar19 + 0x10) = *(undefined4 *)(this + 0x60);
      uVar6 = *(ushort *)(*(long *)pNVar19 + 0x10);
      if (uVar6 == 1) {
        uVar9 = CreateLoopInfo(this,pNVar19);
      }
      else {
        if (uVar6 - 0x23 < 2) {
          if ((~*(uint *)(pNVar19 + 0x14) & 0xf000000) == 0) {
            uVar9 = *(uint *)(*(long *)(pNVar19 + 0x20) + 8);
            pNVar14 = (Node *)(*(long *)(pNVar19 + 0x20) + 0x10);
          }
          else {
            uVar9 = *(uint *)(pNVar19 + 0x14) >> 0x18 & 0xf;
            pNVar14 = pNVar19 + 0x20;
          }
          if (*(short *)(*(long *)*(Node **)(pNVar14 + (long)(int)(uVar9 - 1) * 8) + 0x10) == 1) {
            uVar9 = CreateLoopInfo(this,*(Node **)(pNVar14 + (long)(int)(uVar9 - 1) * 8));
            goto LAB_01771aec;
          }
        }
        else {
          if (uVar6 - 0x35 < 2) {
            lVar11 = NodeProperties::GetControlInput(pNVar19,0);
            uVar9 = *(uint *)(lVar11 + 0x14);
            pNVar14 = (Node *)(lVar11 + 0x20);
          }
          else {
            if (uVar6 != 0x34) goto LAB_01771ae8;
            uVar9 = *(uint *)(pNVar19 + 0x14);
            pNVar14 = pNVar19 + 0x20;
          }
          if ((~uVar9 & 0xf000000) == 0) {
            pNVar14 = (Node *)(*(long *)pNVar14 + 0x10);
          }
          CreateLoopInfo(this,*(Node **)(pNVar14 + 8));
        }
LAB_01771ae8:
        uVar9 = 0xffffffff;
      }
LAB_01771aec:
      uVar7 = 1 << (ulong)(uVar9 & 0x1f);
      uVar15 = 0;
      pNVar14 = pNVar19 + 0x20;
      while( true ) {
        uVar2 = *(uint *)(pNVar19 + 0x14);
        if ((uVar2 & 0xf000000) == 0xf000000) {
          uVar3 = *(uint *)(*(long *)pNVar14 + 8);
        }
        else {
          uVar3 = uVar2 >> 0x18 & 0xf;
        }
        if ((long)(int)uVar3 <= (long)uVar15) break;
        pNVar20 = pNVar14;
        if ((uVar2 & 0xf000000) == 0xf000000) {
          pNVar20 = (Node *)(*(long *)pNVar14 + 0x10);
        }
        pNVar20 = *(Node **)(pNVar20 + uVar15 * 8);
        if (*(int *)(*(long *)(*(long *)(this + 200) + 0x48) + ((ulong)uVar2 & 0xffffff) * 4) < 1) {
LAB_01771c04:
          if ((pNVar19 != pNVar20) && (iVar4 = *(int *)(this + 0xd4), 0 < iVar4)) {
            uVar2 = *(uint *)(pNVar19 + 0x14);
            lVar12 = *(long *)(this + 0xd8);
            uVar10 = 0;
            bVar8 = false;
            lVar11 = lVar12 + (ulong)((*(uint *)(pNVar20 + 0x14) & 0xffffff) * iVar4) * 4;
            do {
              lVar18 = uVar10 * 4;
              uVar5 = *(uint *)(lVar11 + lVar18);
              uVar3 = ~uVar7;
              if ((uint)((int)uVar9 >> 5) != uVar10) {
                uVar3 = 0xffffffff;
              }
              uVar3 = *(uint *)(lVar12 + (ulong)((uVar2 & 0xffffff) * iVar4) * 4 + lVar18) & uVar3 |
                      uVar5;
              *(uint *)(lVar11 + lVar18) = uVar3;
              uVar10 = uVar10 + 1;
              bVar8 = (bool)(bVar8 | uVar5 != uVar3);
            } while ((long)uVar10 < (long)*(int *)(this + 0xd4));
            if (bVar8) goto LAB_01771c84;
          }
        }
        else {
          if (*(ushort *)(*(long *)pNVar19 + 0x10) - 0x23 < 2) {
            uVar10 = NodeProperties::PastEffectIndex(pNVar19);
            if ((uVar15 == 0) || (uVar15 == (uVar10 & 0xffffffff))) goto LAB_01771c04;
          }
          else if ((uVar15 == 0) || (*(ushort *)(*(long *)pNVar19 + 0x10) != 1)) goto LAB_01771c04;
          lVar11 = (ulong)(((int)uVar9 >> 5) +
                          (*(uint *)(pNVar20 + 0x14) & 0xffffff) * *(int *)(this + 0xd4)) * 4;
          uVar2 = *(uint *)(*(long *)(this + 0xd8) + lVar11);
          uVar3 = uVar2 | uVar7;
          *(uint *)(*(long *)(this + 0xd8) + lVar11) = uVar3;
          if (uVar3 != uVar2) {
LAB_01771c84:
            if (*(uint *)(pNVar20 + 0x10) <= *(uint *)(this + 0x60)) {
              lVar11 = *(long *)(this + 0x18);
              uVar10 = 0;
              if (*(long *)(this + 0x20) - lVar11 != 0) {
                uVar10 = (*(long *)(this + 0x20) - lVar11) * 0x40 - 1;
              }
              uVar16 = *(long *)(this + 0x48) + *(long *)(this + 0x40);
              if (uVar10 == uVar16) {
                std::__ndk1::
                deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                ::__add_back_capacity
                          ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                            *)(this + 0x10));
                lVar11 = *(long *)(this + 0x18);
                uVar16 = *(long *)(this + 0x40) + *(long *)(this + 0x48);
              }
              *(Node **)(*(long *)(lVar11 + (uVar16 >> 6 & 0x3fffffffffffff8)) +
                        (uVar16 & 0x1ff) * 8) = pNVar20;
              *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
              *(int *)(pNVar20 + 0x10) = *(int *)(this + 0x60) + 1;
            }
          }
        }
        uVar15 = uVar15 + 1;
      }
    } while (*(long *)(this + 0x48) != 0);
  }
  return;
}

