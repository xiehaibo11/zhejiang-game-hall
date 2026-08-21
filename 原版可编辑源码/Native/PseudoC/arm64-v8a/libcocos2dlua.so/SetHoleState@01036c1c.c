
/* ClipperLib::Clipper::SetHoleState(ClipperLib::TEdge*, ClipperLib::OutRec*) */

void __thiscall ClipperLib::Clipper::SetHoleState(Clipper *this,TEdge *param_1,OutRec *param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 != 0) {
    bVar2 = false;
    iVar1 = *(int *)(lVar3 + 0x5c);
    while( true ) {
      if (((iVar1 < 0) || (*(int *)(lVar3 + 0x50) == 0)) ||
         (bVar2 = (bool)(bVar2 ^ 1), *(long *)(param_2 + 8) != 0)) {
        lVar3 = *(long *)(lVar3 + 0x80);
      }
      else {
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*(long *)(this + 8) + (long)iVar1 * 8);
        lVar3 = *(long *)(lVar3 + 0x80);
      }
      if (lVar3 == 0) break;
      iVar1 = *(int *)(lVar3 + 0x5c);
    }
    if (bVar2) {
      param_2[4] = (OutRec)0x1;
    }
  }
  return;
}

