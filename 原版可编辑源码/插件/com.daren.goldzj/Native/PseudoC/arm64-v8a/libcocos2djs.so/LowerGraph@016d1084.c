
/* v8::internal::compiler::Int64Lowering::LowerGraph() */

void __thiscall v8::internal::compiler::Int64Lowering::LowerGraph(Int64Lowering *this)

{
  deque<v8::internal::compiler::Int64Lowering::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Int64Lowering::NodeState>>
  *this_00;
  short sVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  Node *pNVar11;
  
  if (*(char *)(*(long *)(this + 0x10) + 0x10) != '\x04') {
    return;
  }
  lVar3 = *(long *)(this + 0x30);
  uVar10 = *(undefined8 *)(*(long *)(this + 8) + 0x10);
  uVar5 = 0;
  if (*(long *)(this + 0x38) - lVar3 != 0) {
    uVar5 = (*(long *)(this + 0x38) - lVar3) * 0x20 - 1;
  }
  uVar7 = *(long *)(this + 0x60) + *(long *)(this + 0x58);
  this_00 = (deque<v8::internal::compiler::Int64Lowering::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Int64Lowering::NodeState>>
             *)(this + 0x28);
  if (uVar5 == uVar7) {
    std::__ndk1::
    deque<v8::internal::compiler::Int64Lowering::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Int64Lowering::NodeState>>
    ::__add_back_capacity(this_00);
    lVar3 = *(long *)(this + 0x30);
    uVar7 = *(long *)(this + 0x58) + *(long *)(this + 0x60);
  }
  puVar6 = (undefined8 *)
           (*(long *)(lVar3 + (uVar7 >> 5 & 0x7fffffffffffff8)) + (uVar7 & 0xff) * 0x10);
  *puVar6 = uVar10;
  *(undefined4 *)(puVar6 + 1) = 0;
  *(long *)(this + 0x60) = *(long *)(this + 0x60) + 1;
  *(int *)(*(long *)(*(long *)(this + 8) + 0x10) + 0x10) = *(int *)(this + 0x20) + 1;
  lVar3 = *(long *)(this + 0x60);
joined_r0x016d1128:
  if (lVar3 == 0) {
    return;
  }
  do {
    uVar5 = *(long *)(this + 0x58) + lVar3 + -1;
    plVar4 = (long *)(*(long *)(*(long *)(this + 0x30) + (uVar5 >> 5 & 0x7fffffffffffff8)) +
                     (uVar5 & 0xff) * 0x10);
    uVar2 = *(uint *)(plVar4 + 1);
    lVar9 = *plVar4;
    if ((~*(uint *)(lVar9 + 0x14) & 0xf000000) == 0) {
      if (uVar2 == *(uint *)(*(long *)(lVar9 + 0x20) + 8)) goto LAB_016d1294;
LAB_016d11c0:
      *(uint *)(plVar4 + 1) = uVar2 + 1;
      plVar4 = (long *)(lVar9 + 0x20);
      if ((~*(uint *)(lVar9 + 0x14) & 0xf000000) == 0) {
        plVar4 = (long *)(*plVar4 + 0x10);
      }
      pNVar11 = (Node *)plVar4[(int)uVar2];
      uVar2 = 0;
      if (*(uint *)(this + 0x20) <= *(uint *)(pNVar11 + 0x10)) {
        uVar2 = *(uint *)(pNVar11 + 0x10) - *(uint *)(this + 0x20);
      }
      if ((uVar2 & 0xff) == 0) break;
    }
    else {
      if (uVar2 != (*(uint *)(lVar9 + 0x14) >> 0x18 & 0xf)) goto LAB_016d11c0;
LAB_016d1294:
      lVar8 = *(long *)(this + 0x38);
      *(long *)(this + 0x60) = lVar3 + -1;
      lVar9 = lVar8 - *(long *)(this + 0x30);
      lVar3 = 0;
      if (lVar9 != 0) {
        lVar3 = lVar9 * 0x20 + -1;
      }
      if (0x1ff < lVar3 - uVar5) {
        puVar6 = *(undefined8 **)(lVar8 + -8);
        if ((*(long *)(this + 0x70) == 0) || (*(ulong *)(*(long *)(this + 0x70) + 8) < 0x101)) {
          puVar6[1] = 0x100;
          *puVar6 = *(undefined8 *)(this + 0x70);
          lVar8 = *(long *)(this + 0x38);
          *(undefined8 **)(this + 0x70) = puVar6;
        }
        *(long *)(this + 0x38) = lVar8 + -8;
      }
      *(int *)(*plVar4 + 0x10) = *(int *)(this + 0x20) + 2;
      LowerNode(this,(Node *)*plVar4);
    }
    lVar3 = *(long *)(this + 0x60);
    if (lVar3 == 0) {
      return;
    }
  } while( true );
  sVar1 = *(short *)(*(long *)pNVar11 + 0x10);
  if ((sVar1 != 1) && (sVar1 != 0x24)) {
    if (sVar1 != 0x23) {
      lVar3 = *(long *)(this + 0x30);
      lVar9 = *(long *)(this + 0x38);
      uVar5 = 0;
      if (lVar9 - lVar3 != 0) {
        uVar5 = (lVar9 - lVar3) * 0x20 - 1;
      }
      uVar7 = *(long *)(this + 0x60) + *(long *)(this + 0x58);
      if (uVar5 == uVar7) {
        std::__ndk1::
        deque<v8::internal::compiler::Int64Lowering::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Int64Lowering::NodeState>>
        ::__add_back_capacity(this_00);
        lVar3 = *(long *)(this + 0x30);
        lVar9 = *(long *)(this + 0x38);
        uVar7 = *(long *)(this + 0x58) + *(long *)(this + 0x60);
      }
      if (lVar9 == lVar3) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar6 = (undefined8 *)
                 (*(long *)(lVar3 + (uVar7 >> 5 & 0x7fffffffffffff8)) + (uVar7 & 0xff) * 0x10);
      }
      *puVar6 = pNVar11;
      *(undefined4 *)(puVar6 + 1) = 0;
      goto LAB_016d1334;
    }
    PreparePhiReplacement(this,pNVar11);
  }
  uVar5 = *(ulong *)(this + 0x58);
  if (uVar5 == 0) {
    std::__ndk1::
    deque<v8::internal::compiler::Int64Lowering::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Int64Lowering::NodeState>>
    ::__add_front_capacity(this_00);
    uVar5 = *(ulong *)(this + 0x58);
  }
  plVar4 = (long *)(*(long *)(this + 0x30) + (uVar5 >> 5 & 0x7fffffffffffff8));
  lVar9 = *plVar4;
  lVar3 = 0;
  if (*(long *)(this + 0x38) != *(long *)(this + 0x30)) {
    lVar3 = lVar9 + (uVar5 & 0xff) * 0x10;
  }
  if (lVar3 == lVar9) {
    lVar3 = plVar4[-1] + 0x1000;
  }
  *(Node **)(lVar3 + -0x10) = pNVar11;
  *(undefined4 *)(lVar3 + -8) = 0;
  *(long *)(this + 0x58) = *(long *)(this + 0x58) + -1;
LAB_016d1334:
  *(long *)(this + 0x60) = *(long *)(this + 0x60) + 1;
  *(int *)(pNVar11 + 0x10) = *(int *)(this + 0x20) + 1;
  lVar3 = *(long *)(this + 0x60);
  goto joined_r0x016d1128;
}

