
/* ClipperLib::FindNextLocMin(ClipperLib::TEdge*) */

TEdge * ClipperLib::FindNextLocMin(TEdge *param_1)

{
  TEdge *pTVar1;
  TEdge *pTVar2;
  TEdge *pTVar3;
  long lVar4;
  
  do {
    for (; ((pTVar3 = *(TEdge **)(param_1 + 0x68), *(long *)param_1 != *(long *)pTVar3 ||
            (*(long *)(param_1 + 8) != *(long *)(pTVar3 + 8))) ||
           ((*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x20) &&
            (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x28)))));
        param_1 = *(TEdge **)(param_1 + 0x60)) {
    }
    if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(pTVar3 + 0x38) != 0)) {
      return param_1;
    }
    lVar4 = *(long *)(pTVar3 + 0x38);
    pTVar2 = param_1;
    while (pTVar1 = pTVar3, lVar4 == 0) {
      pTVar3 = *(TEdge **)(pTVar1 + 0x68);
      pTVar2 = pTVar1;
      lVar4 = *(long *)(*(TEdge **)(pTVar1 + 0x68) + 0x38);
    }
    param_1 = pTVar2;
    pTVar3 = pTVar1;
    if (*(long *)(pTVar2 + 0x38) == 0) {
      do {
        param_1 = *(TEdge **)(param_1 + 0x60);
      } while (*(long *)(param_1 + 0x38) == 0);
      pTVar3 = *(TEdge **)(param_1 + 0x68);
    }
  } while (*(long *)(param_1 + 0x28) == *(long *)(pTVar3 + 8));
  if (*(long *)param_1 <= *(long *)pTVar1) {
    pTVar2 = param_1;
  }
  return pTVar2;
}

