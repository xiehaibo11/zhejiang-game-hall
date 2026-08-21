
/* ClipperLib::Clipper::InsertEdgeIntoAEL(ClipperLib::TEdge*, ClipperLib::TEdge*) */

void __thiscall ClipperLib::Clipper::InsertEdgeIntoAEL(Clipper *this,TEdge *param_1,TEdge *param_2)

{
  Clipper *pCVar1;
  TEdge *pTVar2;
  TEdge *pTVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  pCVar1 = this + 0x88;
  pTVar2 = *(TEdge **)pCVar1;
  if (pTVar2 == (TEdge *)0x0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(TEdge **)pCVar1 = param_1;
    return;
  }
  if (param_2 == (TEdge *)0x0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(pTVar2 + 0x10)) {
      lVar4 = *(long *)(param_1 + 0x28);
      lVar5 = *(long *)(pTVar2 + 0x28);
      if (lVar5 < lVar4) {
        dVar6 = *(double *)(pTVar2 + 0x40) * (double)(lVar4 - *(long *)(pTVar2 + 8));
        dVar7 = -0.5;
        if (0.0 <= dVar6) {
          dVar7 = 0.5;
        }
        if (*(long *)(param_1 + 0x20) < *(long *)pTVar2 + (long)(dVar6 + dVar7)) {
LAB_010365c0:
          *(TEdge **)(param_1 + 0x78) = pTVar2;
          *(undefined8 *)(param_1 + 0x80) = 0;
          *(TEdge **)(pTVar2 + 0x80) = param_1;
          *(TEdge **)pCVar1 = param_1;
          return;
        }
      }
      else {
        if (lVar4 == lVar5) {
          lVar4 = *(long *)(param_1 + 0x20);
        }
        else {
          dVar6 = *(double *)(param_1 + 0x40) * (double)(lVar5 - *(long *)(param_1 + 8));
          dVar7 = -0.5;
          if (0.0 <= dVar6) {
            dVar7 = 0.5;
          }
          lVar4 = *(long *)param_1 + (long)(dVar6 + dVar7);
        }
        if (lVar4 < *(long *)(pTVar2 + 0x20)) goto LAB_010365c0;
      }
    }
    else if (*(long *)(param_1 + 0x10) < *(long *)(pTVar2 + 0x10)) goto LAB_010365c0;
    pTVar3 = *(TEdge **)(pTVar2 + 0x78);
    param_2 = pTVar2;
  }
  else {
    pTVar3 = *(TEdge **)(param_2 + 0x78);
  }
  if (pTVar3 != (TEdge *)0x0) {
    do {
      if (*(long *)(param_1 + 0x10) == *(long *)(pTVar3 + 0x10)) {
        lVar4 = *(long *)(param_1 + 0x28);
        lVar5 = *(long *)(pTVar3 + 0x28);
        if (lVar5 < lVar4) {
          dVar6 = *(double *)(pTVar3 + 0x40) * (double)(lVar4 - *(long *)(pTVar3 + 8));
          dVar7 = -0.5;
          if (0.0 <= dVar6) {
            dVar7 = 0.5;
          }
          if (*(long *)(param_1 + 0x20) < *(long *)pTVar3 + (long)(dVar6 + dVar7)) break;
        }
        else {
          if (lVar4 == lVar5) {
            lVar4 = *(long *)(param_1 + 0x20);
          }
          else {
            dVar6 = *(double *)(param_1 + 0x40) * (double)(lVar5 - *(long *)(param_1 + 8));
            dVar7 = -0.5;
            if (0.0 <= dVar6) {
              dVar7 = 0.5;
            }
            lVar4 = *(long *)param_1 + (long)(dVar6 + dVar7);
          }
          if (lVar4 < *(long *)(pTVar3 + 0x20)) break;
        }
      }
      else if (*(long *)(param_1 + 0x10) < *(long *)(pTVar3 + 0x10)) break;
      pTVar2 = *(TEdge **)(pTVar3 + 0x78);
      param_2 = pTVar3;
      pTVar3 = pTVar2;
    } while (pTVar2 != (TEdge *)0x0);
  }
  *(TEdge **)(param_1 + 0x78) = pTVar3;
  lVar4 = *(long *)(param_2 + 0x78);
  if (lVar4 != 0) {
    *(TEdge **)(lVar4 + 0x80) = param_1;
  }
  *(TEdge **)(param_1 + 0x80) = param_2;
  *(TEdge **)(param_2 + 0x78) = param_1;
  return;
}

