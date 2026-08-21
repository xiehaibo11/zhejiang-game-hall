
/* ClipperLib::Clipper::SwapPositionsInAEL(ClipperLib::TEdge*, ClipperLib::TEdge*) */

void __thiscall ClipperLib::Clipper::SwapPositionsInAEL(Clipper *this,TEdge *param_1,TEdge *param_2)

{
  TEdge *pTVar1;
  TEdge *pTVar2;
  TEdge *pTVar3;
  long lVar4;
  TEdge *pTVar5;
  
  pTVar1 = *(TEdge **)(param_1 + 0x78);
  pTVar3 = *(TEdge **)(param_1 + 0x80);
  if (pTVar1 != pTVar3) {
    pTVar2 = *(TEdge **)(param_2 + 0x78);
    pTVar5 = *(TEdge **)(param_2 + 0x80);
    if (pTVar2 != pTVar5) {
      if (pTVar1 == param_2) {
        if (pTVar2 != (TEdge *)0x0) {
          *(TEdge **)(pTVar2 + 0x80) = param_1;
          pTVar3 = *(TEdge **)(param_1 + 0x80);
        }
        if (pTVar3 != (TEdge *)0x0) {
          *(TEdge **)(pTVar3 + 0x78) = param_2;
        }
        *(TEdge **)(param_2 + 0x78) = param_1;
        *(TEdge **)(param_2 + 0x80) = pTVar3;
        *(TEdge **)(param_1 + 0x78) = pTVar2;
        *(TEdge **)(param_1 + 0x80) = param_2;
        pTVar3 = *(TEdge **)(param_2 + 0x80);
      }
      else {
        if (pTVar2 == param_1) {
          if (pTVar1 != (TEdge *)0x0) {
            *(TEdge **)(pTVar1 + 0x80) = param_2;
            pTVar5 = *(TEdge **)(param_2 + 0x80);
          }
          if (pTVar5 != (TEdge *)0x0) {
            *(TEdge **)(pTVar5 + 0x78) = param_1;
          }
          *(TEdge **)(param_1 + 0x78) = param_2;
          *(TEdge **)(param_1 + 0x80) = pTVar5;
          *(TEdge **)(param_2 + 0x78) = pTVar1;
          *(TEdge **)(param_2 + 0x80) = param_1;
          lVar4 = *(long *)(param_1 + 0x80);
          pTVar3 = param_1;
        }
        else {
          *(TEdge **)(param_1 + 0x78) = pTVar2;
          if (pTVar2 != (TEdge *)0x0) {
            *(TEdge **)(pTVar2 + 0x80) = param_1;
            pTVar5 = *(TEdge **)(param_2 + 0x80);
          }
          *(TEdge **)(param_1 + 0x80) = pTVar5;
          if (pTVar5 != (TEdge *)0x0) {
            *(TEdge **)(pTVar5 + 0x78) = param_1;
          }
          *(TEdge **)(param_2 + 0x78) = pTVar1;
          if (pTVar1 != (TEdge *)0x0) {
            *(TEdge **)(pTVar1 + 0x80) = param_2;
          }
          *(TEdge **)(param_2 + 0x80) = pTVar3;
          if (pTVar3 != (TEdge *)0x0) {
            *(TEdge **)(pTVar3 + 0x78) = param_2;
          }
          lVar4 = *(long *)(param_1 + 0x80);
        }
        if (lVar4 == 0) {
          *(TEdge **)(this + 0x88) = param_1;
          return;
        }
      }
      if (pTVar3 == (TEdge *)0x0) {
        *(TEdge **)(this + 0x88) = param_2;
        return;
      }
    }
  }
  return;
}

