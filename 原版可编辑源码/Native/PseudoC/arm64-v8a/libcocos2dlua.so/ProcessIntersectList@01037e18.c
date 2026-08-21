
/* ClipperLib::Clipper::ProcessIntersectList() */

void __thiscall ClipperLib::Clipper::ProcessIntersectList(Clipper *this)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(this + 0x58);
  if (lVar1 != *(long *)(this + 0x50)) {
    uVar3 = 0;
    lVar1 = *(long *)(this + 0x50);
    do {
      puVar2 = *(undefined8 **)(lVar1 + uVar3 * 8);
      IntersectEdges(this,(TEdge *)*puVar2,(TEdge *)puVar2[1],(IntPoint *)(puVar2 + 2),true);
      SwapPositionsInAEL(this,(TEdge *)*puVar2,(TEdge *)puVar2[1]);
      if (puVar2 != (undefined8 *)0x0) {
        operator_delete(puVar2);
      }
      lVar1 = *(long *)(this + 0x50);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(*(long *)(this + 0x58) - lVar1 >> 3));
  }
  *(long *)(this + 0x58) = lVar1;
  return;
}

