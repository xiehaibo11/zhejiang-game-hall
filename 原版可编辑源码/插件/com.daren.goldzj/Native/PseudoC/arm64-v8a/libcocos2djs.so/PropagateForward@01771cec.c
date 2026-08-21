
/* v8::internal::compiler::LoopFinderImpl::PropagateForward() */

void __thiscall v8::internal::compiler::LoopFinderImpl::PropagateForward(LoopFinderImpl *this)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  void *__s;
  ulong uVar5;
  Zone *this_00;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  Node *pNVar13;
  Node *pNVar14;
  long *plVar15;
  ulong uVar16;
  
  this_00 = *(Zone **)this;
  __s = *(void **)(this_00 + 0x10);
  iVar11 = (int)((ulong)(*(long *)(*(long *)(this + 200) + 0x50) -
                        *(long *)(*(long *)(this + 200) + 0x48)) >> 2);
  uVar1 = *(int *)(this + 0xd4) * iVar11;
  uVar5 = (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2) + 7 &
          0xfffffffffffffff8;
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)__s) < uVar5) {
    __s = (void *)Zone::NewExpand(this_00,uVar5);
  }
  else {
    *(ulong *)(this_00 + 0x10) = uVar5 + (long)__s;
  }
  *(void **)(this + 0xe0) = __s;
  uVar1 = *(int *)(this + 0xd4) * iVar11;
  memset(__s,0,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  plVar12 = *(long **)(this + 0x88);
  plVar15 = *(long **)(this + 0x90);
  if (plVar12 != plVar15) {
    do {
      uVar5 = (ulong)*(uint *)(*plVar12 + 0x14) & 0xffffff;
      uVar1 = *(uint *)(*(long *)(*(long *)(this + 200) + 0x48) + uVar5 * 4);
      lVar6 = (ulong)(uint)(*(int *)(this + 0xd4) * (int)uVar5 + ((int)uVar1 >> 5)) * 4;
      *(uint *)(*(long *)(this + 0xe0) + lVar6) =
           *(uint *)(*(long *)(this + 0xe0) + lVar6) | 1 << (ulong)(uVar1 & 0x1f);
      lVar6 = *plVar12;
      if (*(uint *)(lVar6 + 0x10) <= *(uint *)(this + 0x60)) {
        lVar7 = *(long *)(this + 0x18);
        uVar5 = 0;
        if (*(long *)(this + 0x20) - lVar7 != 0) {
          uVar5 = (*(long *)(this + 0x20) - lVar7) * 0x40 - 1;
        }
        uVar16 = *(long *)(this + 0x48) + *(long *)(this + 0x40);
        if (uVar5 == uVar16) {
          std::__ndk1::
          deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
          ::__add_back_capacity
                    ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                      *)(this + 0x10));
          lVar7 = *(long *)(this + 0x18);
          uVar16 = *(long *)(this + 0x40) + *(long *)(this + 0x48);
        }
        *(long *)(*(long *)(lVar7 + (uVar16 >> 6 & 0x3fffffffffffff8)) + (uVar16 & 0x1ff) * 8) =
             lVar6;
        *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
        *(int *)(lVar6 + 0x10) = *(int *)(this + 0x60) + 1;
      }
      plVar12 = plVar12 + 5;
    } while (plVar15 != plVar12);
  }
  if (*(long *)(this + 0x48) != 0) {
    do {
      TickCounter::DoTick(*(TickCounter **)(this + 0xe8));
      uVar16 = *(ulong *)(this + 0x40);
      puVar8 = *(undefined8 **)(this + 0x18);
      uVar5 = uVar16 + 1;
      pNVar14 = *(Node **)(*(long *)((long)puVar8 + (uVar16 >> 6 & 0x3fffffffffffff8)) +
                          (uVar16 & 0x1ff) * 8);
      *(long *)(this + 0x48) = *(long *)(this + 0x48) + -1;
      *(ulong *)(this + 0x40) = uVar5;
      if (0x3ff < uVar5) {
        puVar9 = (undefined8 *)*puVar8;
        if ((*(long *)(this + 0x58) == 0) || (*(ulong *)(*(long *)(this + 0x58) + 8) < 0x201)) {
          puVar9[1] = 0x200;
          *puVar9 = *(undefined8 *)(this + 0x58);
          puVar8 = *(undefined8 **)(this + 0x18);
          uVar5 = *(ulong *)(this + 0x40);
          *(undefined8 **)(this + 0x58) = puVar9;
        }
        *(undefined8 **)(this + 0x18) = puVar8 + 1;
        *(ulong *)(this + 0x40) = uVar5 - 0x200;
      }
      *(undefined4 *)(pNVar14 + 0x10) = *(undefined4 *)(this + 0x60);
      plVar12 = (long *)*(long *)(pNVar14 + 0x18);
joined_r0x01771ef8:
      while (plVar12 != (long *)0x0) {
        plVar15 = (long *)*plVar12;
        uVar1 = *(uint *)(plVar12 + 2) >> 1;
        pNVar13 = (Node *)(plVar12 + (ulong)uVar1 * 3 + 3);
        if ((*(uint *)(plVar12 + 2) & 1) == 0) {
          pNVar13 = *(Node **)pNVar13;
        }
        plVar12 = plVar15;
        if (*(int *)(*(long *)(*(long *)(this + 200) + 0x48) +
                    ((ulong)*(uint *)(pNVar13 + 0x14) & 0xffffff) * 4) < 1) goto LAB_01771f60;
        if (*(ushort *)(*(long *)pNVar13 + 0x10) - 0x23 < 2) {
          uVar4 = NodeProperties::PastEffectIndex(pNVar13);
          bVar3 = uVar4 != uVar1;
        }
        else {
          bVar3 = *(ushort *)(*(long *)pNVar13 + 0x10) == 1;
        }
        if ((pNVar14 != pNVar13) && (!(bool)(uVar1 != 0 & bVar3))) goto LAB_01771f8c;
      }
    } while (*(long *)(this + 0x48) != 0);
  }
  return;
LAB_01771f60:
  if (pNVar14 != pNVar13) {
LAB_01771f8c:
    iVar11 = *(int *)(this + 0xd4);
    if (0 < iVar11) {
      lVar6 = 0;
      bVar3 = false;
      uVar1 = (*(uint *)(pNVar13 + 0x14) & 0xffffff) * iVar11;
      uVar4 = (*(uint *)(pNVar14 + 0x14) & 0xffffff) * iVar11;
      uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      do {
        lVar10 = lVar6 * 4;
        lVar6 = lVar6 + 1;
        lVar7 = *(long *)(this + 0xe0) + uVar5;
        uVar1 = *(uint *)(lVar7 + lVar10);
        uVar2 = uVar1 | *(uint *)(*(long *)(this + 0xe0) +
                                  (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2)
                                 + lVar10) & *(uint *)(*(long *)(this + 0xd8) + uVar5 + lVar10);
        *(uint *)(lVar7 + lVar10) = uVar2;
        bVar3 = (bool)(bVar3 | uVar1 != uVar2);
      } while (lVar6 < *(int *)(this + 0xd4));
      if ((bVar3) && (*(uint *)(pNVar13 + 0x10) <= *(uint *)(this + 0x60))) {
        lVar6 = *(long *)(this + 0x18);
        uVar5 = 0;
        if (*(long *)(this + 0x20) - lVar6 != 0) {
          uVar5 = (*(long *)(this + 0x20) - lVar6) * 0x40 - 1;
        }
        uVar16 = *(long *)(this + 0x48) + *(long *)(this + 0x40);
        if (uVar5 == uVar16) {
          std::__ndk1::
          deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
          ::__add_back_capacity
                    ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                      *)(this + 0x10));
          lVar6 = *(long *)(this + 0x18);
          uVar16 = *(long *)(this + 0x40) + *(long *)(this + 0x48);
        }
        *(Node **)(*(long *)(lVar6 + (uVar16 >> 6 & 0x3fffffffffffff8)) + (uVar16 & 0x1ff) * 8) =
             pNVar13;
        *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
        *(int *)(pNVar13 + 0x10) = *(int *)(this + 0x60) + 1;
      }
    }
  }
  goto joined_r0x01771ef8;
}

