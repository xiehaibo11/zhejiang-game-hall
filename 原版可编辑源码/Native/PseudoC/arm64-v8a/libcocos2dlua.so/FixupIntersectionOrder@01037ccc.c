
/* ClipperLib::Clipper::FixupIntersectionOrder() */

void __thiscall ClipperLib::Clipper::FixupIntersectionOrder(Clipper *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  code *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  *(long *)(this + 0x90) = *(long *)(this + 0x88);
  lVar6 = *(long *)(this + 0x88);
  while (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x90) = *(undefined8 *)(lVar6 + 0x80);
    *(long *)(lVar6 + 0x88) = *(long *)(lVar6 + 0x78);
    lVar6 = *(long *)(lVar6 + 0x78);
  }
  local_50 = IntersectListSort;
  std::__ndk1::
  __sort<bool(*&)(ClipperLib::IntersectNode*,ClipperLib::IntersectNode*),ClipperLib::IntersectNode**>
            (*(IntersectNode ***)(this + 0x50),*(IntersectNode ***)(this + 0x58),
             (_func_bool_IntersectNode_ptr_IntersectNode_ptr *)&local_50);
  lVar6 = *(long *)(this + 0x50);
  if (*(long *)(this + 0x58) - lVar6 == 0) {
LAB_01037de0:
    uVar5 = 1;
LAB_01037de4:
    if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
    return;
  }
  uVar11 = 0;
  uVar12 = *(long *)(this + 0x58) - lVar6 >> 3;
  uVar13 = 1;
  do {
    plVar8 = *(long **)(lVar6 + uVar11 * 8);
    if ((*(long *)(*plVar8 + 0x88) != plVar8[1]) && (*(long *)(*plVar8 + 0x90) != plVar8[1])) {
      puVar7 = (undefined8 *)(lVar6 + uVar13 * 8);
      uVar4 = uVar13;
      do {
        uVar10 = uVar4;
        puVar9 = puVar7;
        if (uVar12 <= uVar10) break;
        lVar1 = *(long *)*puVar9;
        lVar2 = ((long *)*puVar9)[1];
        if (*(long *)(lVar1 + 0x88) == lVar2) break;
        puVar7 = puVar9 + 1;
        uVar4 = uVar10 + 1;
      } while (*(long *)(lVar1 + 0x90) != lVar2);
      if (uVar12 == uVar10) {
        uVar5 = 0;
        goto LAB_01037de4;
      }
      *(undefined8 *)(lVar6 + uVar11 * 8) = *puVar9;
      *puVar9 = plVar8;
      lVar6 = *(long *)(this + 0x50);
    }
    puVar7 = *(undefined8 **)(lVar6 + uVar11 * 8);
    SwapPositionsInSEL(this,(TEdge *)*puVar7,(TEdge *)puVar7[1]);
    uVar11 = uVar11 + 1;
    if (uVar12 <= uVar11) goto LAB_01037de0;
    lVar6 = *(long *)(this + 0x50);
    uVar13 = uVar13 + 1;
  } while( true );
}

