
/* ClipperLib::Clipper::SwapPositionsInSEL(ClipperLib::TEdge*, ClipperLib::TEdge*) */

void __thiscall ClipperLib::Clipper::SwapPositionsInSEL(Clipper *this,TEdge *param_1,TEdge *param_2)

{
  TEdge *pTVar1;
  TEdge *pTVar2;
  long lVar3;
  long lVar4;
  
  pTVar1 = *(TEdge **)(param_1 + 0x88);
  if (((pTVar1 != (TEdge *)0x0) || (*(long *)(param_1 + 0x90) != 0)) &&
     ((pTVar2 = *(TEdge **)(param_2 + 0x88), pTVar2 != (TEdge *)0x0 ||
      (*(long *)(param_2 + 0x90) != 0)))) {
    if (pTVar1 == param_2) {
      if (pTVar2 != (TEdge *)0x0) {
        *(TEdge **)(pTVar2 + 0x90) = param_1;
      }
      lVar4 = *(long *)(param_1 + 0x90);
      if (lVar4 != 0) {
        *(TEdge **)(lVar4 + 0x88) = param_2;
      }
      *(TEdge **)(param_2 + 0x88) = param_1;
      *(long *)(param_2 + 0x90) = lVar4;
      *(TEdge **)(param_1 + 0x88) = pTVar2;
      *(TEdge **)(param_1 + 0x90) = param_2;
      lVar4 = *(long *)(param_1 + 0x90);
    }
    else if (pTVar2 == param_1) {
      if (pTVar1 != (TEdge *)0x0) {
        *(TEdge **)(pTVar1 + 0x90) = param_2;
      }
      lVar4 = *(long *)(param_2 + 0x90);
      if (lVar4 != 0) {
        *(TEdge **)(lVar4 + 0x88) = param_1;
      }
      *(TEdge **)(param_1 + 0x88) = param_2;
      *(long *)(param_1 + 0x90) = lVar4;
      *(TEdge **)(param_2 + 0x88) = pTVar1;
      *(TEdge **)(param_2 + 0x90) = param_1;
                    /* try { // try from 01037770 to 01137773 has its CatchHandler @ 0103778c */
      lVar4 = *(long *)(param_1 + 0x90);
    }
    else {
      lVar4 = *(long *)(param_1 + 0x90);
      *(TEdge **)(param_1 + 0x88) = pTVar2;
      if (pTVar2 != (TEdge *)0x0) {
        *(TEdge **)(pTVar2 + 0x90) = param_1;
      }
      lVar3 = *(long *)(param_2 + 0x90);
      *(long *)(param_1 + 0x90) = lVar3;
      if (lVar3 != 0) {
        *(TEdge **)(lVar3 + 0x88) = param_1;
      }
      *(TEdge **)(param_2 + 0x88) = pTVar1;
      if (pTVar1 != (TEdge *)0x0) {
        *(TEdge **)(pTVar1 + 0x90) = param_2;
      }
      *(long *)(param_2 + 0x90) = lVar4;
      if (lVar4 != 0) {
        *(TEdge **)(lVar4 + 0x88) = param_2;
      }
      lVar4 = *(long *)(param_1 + 0x90);
    }
    if (lVar4 == 0) {
      *(TEdge **)(this + 0x90) = param_1;
      return;
    }
    if (*(long *)(param_2 + 0x90) == 0) {
      *(TEdge **)(this + 0x90) = param_2;
      return;
    }
  }
  return;
}

