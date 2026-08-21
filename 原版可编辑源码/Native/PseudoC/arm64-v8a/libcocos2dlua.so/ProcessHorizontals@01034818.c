
/* ClipperLib::Clipper::ProcessHorizontals(bool) */

void __thiscall ClipperLib::Clipper::ProcessHorizontals(Clipper *this,bool param_1)

{
  Clipper *pCVar1;
  TEdge *pTVar2;
  long lVar3;
  long lVar4;
  
  pTVar2 = *(TEdge **)(this + 0x90);
  while (pTVar2 != (TEdge *)0x0) {
    lVar3 = *(long *)(pTVar2 + 0x88);
    lVar4 = *(long *)(pTVar2 + 0x90);
    pCVar1 = this + 0x90;
    if (lVar4 != 0) {
      pCVar1 = (Clipper *)(lVar4 + 0x88);
    }
    *(long *)pCVar1 = lVar3;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x90) = lVar4;
    }
    *(undefined8 *)(pTVar2 + 0x88) = 0;
    *(undefined8 *)(pTVar2 + 0x90) = 0;
    ProcessHorizontal(this,pTVar2,param_1);
    pTVar2 = *(TEdge **)(this + 0x90);
  }
  return;
}

