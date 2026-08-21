
/* v8::internal::compiler::SimdScalarLowering::LowerGraph() */

void __thiscall v8::internal::compiler::SimdScalarLowering::LowerGraph(SimdScalarLowering *this)

{
  long *plVar1;
  deque<v8::internal::compiler::SimdScalarLowering::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState>>
  *this_00;
  short sVar2;
  uint uVar3;
  Node *pNVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  Node *pNVar12;
  
  lVar5 = *(long *)(this + 0x18);
  uVar11 = *(undefined8 *)(**(long **)this + 0x10);
  uVar6 = 0;
  if (*(long *)(this + 0x20) - lVar5 != 0) {
    uVar6 = (*(long *)(this + 0x20) - lVar5) * 0x20 - 1;
  }
  uVar8 = *(long *)(this + 0x48) + *(long *)(this + 0x40);
  this_00 = (deque<v8::internal::compiler::SimdScalarLowering::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState>>
             *)(this + 0x10);
  if (uVar6 == uVar8) {
    std::__ndk1::
    deque<v8::internal::compiler::SimdScalarLowering::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState>>
    ::__add_back_capacity(this_00);
    lVar5 = *(long *)(this + 0x18);
    uVar8 = *(long *)(this + 0x40) + *(long *)(this + 0x48);
  }
  puVar7 = (undefined8 *)
           (*(long *)(lVar5 + (uVar8 >> 5 & 0x7fffffffffffff8)) + (uVar8 & 0xff) * 0x10);
  *puVar7 = uVar11;
  *(undefined4 *)(puVar7 + 1) = 0;
  *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
  *(int *)(*(long *)(**(long **)this + 0x10) + 0x10) = *(int *)(this + 8) + 1;
  *(undefined1 *)
   (*(long *)(this + 0x60) +
    ((ulong)*(uint *)(*(long *)(**(long **)this + 0x10) + 0x14) & 0xffffff) * 0x10 + 8) = 3;
  lVar5 = *(long *)(this + 0x48);
  do {
    while( true ) {
      if (lVar5 == 0) {
        return;
      }
      uVar6 = *(long *)(this + 0x40) + lVar5 + -1;
      plVar1 = (long *)(*(long *)(*(long *)(this + 0x18) + (uVar6 >> 5 & 0x7fffffffffffff8)) +
                       (uVar6 & 0xff) * 0x10);
      uVar3 = *(uint *)(plVar1 + 1);
      pNVar4 = (Node *)*plVar1;
      if ((~*(uint *)(pNVar4 + 0x14) & 0xf000000) != 0) break;
      if (uVar3 != *(uint *)(*(long *)(pNVar4 + 0x20) + 8)) goto LAB_017a63a4;
LAB_017a6484:
      lVar9 = *(long *)(this + 0x20);
      *(long *)(this + 0x48) = lVar5 + -1;
      lVar10 = lVar9 - *(long *)(this + 0x18);
      lVar5 = 0;
      if (lVar10 != 0) {
        lVar5 = lVar10 * 0x20 + -1;
      }
      if (0x1ff < lVar5 - uVar6) {
        puVar7 = *(undefined8 **)(lVar9 + -8);
        if ((*(long *)(this + 0x58) == 0) || (*(ulong *)(*(long *)(this + 0x58) + 8) < 0x101)) {
          puVar7[1] = 0x100;
          *puVar7 = *(undefined8 *)(this + 0x58);
          lVar9 = *(long *)(this + 0x20);
          *(undefined8 **)(this + 0x58) = puVar7;
        }
        *(long *)(this + 0x20) = lVar9 + -8;
      }
      *(int *)(*plVar1 + 0x10) = *(int *)(this + 8) + 2;
      LowerNode(this,(Node *)*plVar1);
LAB_017a6350:
      lVar5 = *(long *)(this + 0x48);
    }
    if (uVar3 == (*(uint *)(pNVar4 + 0x14) >> 0x18 & 0xf)) goto LAB_017a6484;
LAB_017a63a4:
    *(uint *)(plVar1 + 1) = uVar3 + 1;
    pNVar12 = pNVar4 + 0x20;
    if ((~*(uint *)(pNVar4 + 0x14) & 0xf000000) == 0) {
      pNVar12 = (Node *)(*(long *)pNVar12 + 0x10);
    }
    pNVar12 = *(Node **)(pNVar12 + (long)(int)uVar3 * 8);
    uVar3 = 0;
    if (*(uint *)(this + 8) <= *(uint *)(pNVar12 + 0x10)) {
      uVar3 = *(uint *)(pNVar12 + 0x10) - *(uint *)(this + 8);
    }
    if ((uVar3 & 0xff) != 0) goto LAB_017a6350;
    SetLoweredType(this,pNVar12,pNVar4);
    sVar2 = *(short *)(*(long *)pNVar12 + 0x10);
    if ((sVar2 == 1) || (sVar2 == 0x24)) {
LAB_017a641c:
      uVar6 = *(ulong *)(this + 0x40);
      if (uVar6 == 0) {
        std::__ndk1::
        deque<v8::internal::compiler::SimdScalarLowering::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState>>
        ::__add_front_capacity(this_00);
        uVar6 = *(ulong *)(this + 0x40);
      }
      plVar1 = (long *)(*(long *)(this + 0x18) + (uVar6 >> 5 & 0x7fffffffffffff8));
      lVar10 = *plVar1;
      lVar5 = 0;
      if (*(long *)(this + 0x20) != *(long *)(this + 0x18)) {
        lVar5 = lVar10 + (uVar6 & 0xff) * 0x10;
      }
      if (lVar5 == lVar10) {
        lVar5 = plVar1[-1] + 0x1000;
      }
      *(Node **)(lVar5 + -0x10) = pNVar12;
      *(undefined4 *)(lVar5 + -8) = 0;
      *(long *)(this + 0x40) = *(long *)(this + 0x40) + -1;
    }
    else {
      if (sVar2 == 0x23) {
        PreparePhiReplacement(this,pNVar12);
        goto LAB_017a641c;
      }
      lVar5 = *(long *)(this + 0x18);
      lVar10 = *(long *)(this + 0x20);
      uVar6 = 0;
      if (lVar10 - lVar5 != 0) {
        uVar6 = (lVar10 - lVar5) * 0x20 - 1;
      }
      uVar8 = *(long *)(this + 0x48) + *(long *)(this + 0x40);
      if (uVar6 == uVar8) {
        std::__ndk1::
        deque<v8::internal::compiler::SimdScalarLowering::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState>>
        ::__add_back_capacity(this_00);
        lVar5 = *(long *)(this + 0x18);
        lVar10 = *(long *)(this + 0x20);
        uVar8 = *(long *)(this + 0x40) + *(long *)(this + 0x48);
      }
      if (lVar10 == lVar5) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        puVar7 = (undefined8 *)
                 (*(long *)(lVar5 + (uVar8 >> 5 & 0x7fffffffffffff8)) + (uVar8 & 0xff) * 0x10);
      }
      *puVar7 = pNVar12;
      *(undefined4 *)(puVar7 + 1) = 0;
    }
    *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
    *(int *)(pNVar12 + 0x10) = *(int *)(this + 8) + 1;
    lVar5 = *(long *)(this + 0x48);
  } while( true );
}

