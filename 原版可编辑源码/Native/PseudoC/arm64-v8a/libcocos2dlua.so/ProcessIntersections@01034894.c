
/* ClipperLib::Clipper::ProcessIntersections(long long, long long) */

undefined8 __thiscall
ClipperLib::Clipper::ProcessIntersections(Clipper *this,longlong param_1,longlong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (*(long *)(this + 0x88) != 0) {
    BuildIntersectList(this,param_1,param_2);
    lVar2 = *(long *)(this + 0x50);
    lVar3 = *(long *)(this + 0x58);
    lVar4 = lVar3 - lVar2 >> 3;
    if (lVar4 != 0) {
      if (lVar4 != 1) {
        uVar1 = FixupIntersectionOrder(this);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        lVar2 = *(long *)(this + 0x50);
        lVar3 = *(long *)(this + 0x58);
      }
      if (lVar3 != lVar2) {
        uVar1 = 0;
        do {
          puVar5 = *(undefined8 **)(lVar2 + uVar1 * 8);
          IntersectEdges(this,(TEdge *)*puVar5,(TEdge *)puVar5[1],(IntPoint *)(puVar5 + 2),true);
          SwapPositionsInAEL(this,(TEdge *)*puVar5,(TEdge *)puVar5[1]);
          if (puVar5 != (undefined8 *)0x0) {
            operator_delete(puVar5);
          }
          lVar2 = *(long *)(this + 0x50);
          uVar1 = uVar1 + 1;
        } while (uVar1 < (ulong)(*(long *)(this + 0x58) - lVar2 >> 3));
      }
      *(long *)(this + 0x58) = lVar2;
      *(undefined8 *)(this + 0x90) = 0;
    }
  }
  return 1;
}

