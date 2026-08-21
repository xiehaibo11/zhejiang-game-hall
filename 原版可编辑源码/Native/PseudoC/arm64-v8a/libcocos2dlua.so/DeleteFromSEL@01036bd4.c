
/* ClipperLib::Clipper::DeleteFromSEL(ClipperLib::TEdge*) */

void __thiscall ClipperLib::Clipper::DeleteFromSEL(Clipper *this,TEdge *param_1)

{
  Clipper *pCVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x88);
  lVar3 = *(long *)(param_1 + 0x90);
  if ((lVar3 == 0 && lVar2 == 0) && (*(TEdge **)(this + 0x90) != param_1)) {
    return;
  }
  pCVar1 = (Clipper *)(lVar3 + 0x88);
  if (lVar3 == 0) {
    pCVar1 = this + 0x90;
  }
  *(long *)pCVar1 = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x90) = lVar3;
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}

