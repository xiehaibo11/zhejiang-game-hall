
/* ClipperLib::Clipper::DeleteFromAEL(ClipperLib::TEdge*) */

void __thiscall ClipperLib::Clipper::DeleteFromAEL(Clipper *this,TEdge *param_1)

{
  Clipper *pCVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x78);
  lVar3 = *(long *)(param_1 + 0x80);
  if ((lVar3 == 0 && lVar2 == 0) && (*(TEdge **)(this + 0x88) != param_1)) {
    return;
  }
  pCVar1 = (Clipper *)(lVar3 + 0x78);
  if (lVar3 == 0) {
    pCVar1 = this + 0x88;
  }
  *(long *)pCVar1 = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = lVar3;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}

