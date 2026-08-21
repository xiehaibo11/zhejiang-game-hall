
/* ClipperLib::Clipper::DoMaxima(ClipperLib::TEdge*) */

void __thiscall ClipperLib::Clipper::DoMaxima(Clipper *this,TEdge *param_1)

{
  Clipper *pCVar1;
  clipperException *this_00;
  long lVar2;
  long lVar3;
  TEdge *pTVar4;
  TEdge *pTVar5;
  
  pTVar4 = *(TEdge **)(param_1 + 0x60);
  if (((((*(long *)(pTVar4 + 0x20) != *(long *)(param_1 + 0x20)) ||
        (*(long *)(pTVar4 + 0x28) != *(long *)(param_1 + 0x28))) || (*(long *)(pTVar4 + 0x70) != 0))
      && (((pTVar4 = *(TEdge **)(param_1 + 0x68),
           *(long *)(pTVar4 + 0x20) != *(long *)(param_1 + 0x20) ||
           (*(long *)(pTVar4 + 0x28) != *(long *)(param_1 + 0x28))) ||
          (*(long *)(pTVar4 + 0x70) != 0)))) ||
     ((*(int *)(pTVar4 + 0x5c) == -2 ||
      ((*(long *)(pTVar4 + 0x78) == *(long *)(pTVar4 + 0x80) && (*(long *)(pTVar4 + 0x38) != 0))))))
  {
    if (-1 < *(int *)(param_1 + 0x5c)) {
      AddOutPt(this,param_1,(IntPoint *)(param_1 + 0x20));
    }
    lVar2 = *(long *)(param_1 + 0x78);
    lVar3 = *(long *)(param_1 + 0x80);
    if ((lVar3 != 0 || lVar2 != 0) || (*(TEdge **)(this + 0x88) == param_1)) {
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
    }
    return;
  }
  pTVar5 = *(TEdge **)(param_1 + 0x78);
  if ((pTVar5 != pTVar4) && (pTVar5 != (TEdge *)0x0)) {
    do {
      IntersectEdges(this,param_1,pTVar5,(IntPoint *)(param_1 + 0x20),true);
      SwapPositionsInAEL(this,param_1,pTVar5);
      pTVar5 = *(TEdge **)(param_1 + 0x78);
      if (pTVar5 == pTVar4) break;
    } while (pTVar5 != (TEdge *)0x0);
  }
  if (*(int *)(param_1 + 0x5c) == -1) {
    if (*(int *)(pTVar4 + 0x5c) == -1) {
      lVar2 = *(long *)(param_1 + 0x80);
      if ((pTVar5 != (TEdge *)0x0 || lVar2 != 0) || (*(TEdge **)(this + 0x88) == param_1)) {
        pCVar1 = (Clipper *)(lVar2 + 0x78);
        if (lVar2 == 0) {
          pCVar1 = this + 0x88;
        }
        *(TEdge **)pCVar1 = pTVar5;
        if (pTVar5 != (TEdge *)0x0) {
          *(long *)(pTVar5 + 0x80) = lVar2;
        }
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x80) = 0;
      }
      lVar2 = *(long *)(pTVar4 + 0x78);
      lVar3 = *(long *)(pTVar4 + 0x80);
      if ((lVar3 == 0 && lVar2 == 0) && (*(TEdge **)(this + 0x88) != pTVar4)) {
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
      *(long *)(pTVar4 + 0x78) = 0;
      *(undefined8 *)(pTVar4 + 0x80) = 0;
      return;
    }
  }
  else if ((-1 < *(int *)(param_1 + 0x5c)) && (-1 < *(int *)(pTVar4 + 0x5c))) {
    IntersectEdges(this,param_1,pTVar4,(IntPoint *)(param_1 + 0x20),false);
    return;
  }
  this_00 = (clipperException *)__cxa_allocate_exception(0x20);
  clipperException::clipperException(this_00,"DoMaxima error");
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&clipperException::typeinfo,clipperException::~clipperException);
}

