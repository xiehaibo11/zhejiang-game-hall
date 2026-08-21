
/* ClipperLib::ClipperBase::ProcessBound(ClipperLib::TEdge*, bool) */

TEdge * __thiscall
ClipperLib::ClipperBase::ProcessBound(ClipperBase *this,TEdge *param_1,bool param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  TEdge *pTVar6;
  undefined8 uVar7;
  TEdge *pTVar8;
  TEdge *pTVar9;
  TEdge *pTVar10;
  
  lVar3 = *(long *)(param_1 + 0x38);
                    /* try { // try from 01031e34 to 01131e5f has its CatchHandler @ 01031838 */
  if (lVar3 == 0) {
    lVar1 = 0x68;
    if (!param_2) {
      lVar1 = 0x60;
    }
    if (*(long *)param_1 != **(long **)(param_1 + lVar1)) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
                    /* try { // try from 01031e60 to 01131e83 has its CatchHandler @ 01033304 */
      *(long *)(param_1 + 0x20) = *(long *)param_1;
      *(undefined8 *)param_1 = uVar7;
    }
  }
  if (*(int *)(param_1 + 0x5c) != -2) {
    pTVar8 = param_1;
    if (param_2) {
      do {
        pTVar9 = pTVar8;
        pTVar8 = *(TEdge **)(pTVar9 + 0x60);
                    /* try { // try from 01031e84 to 01131eaf has its CatchHandler @ 01031838 */
        if (*(long *)(pTVar9 + 0x28) != *(long *)(pTVar8 + 8)) break;
      } while (*(int *)(pTVar8 + 0x5c) != -2);
      pTVar6 = pTVar9;
                    /* try { // try from 01031eb0 to 01131ed3 has its CatchHandler @ 01033300 */
      if ((*(long *)(pTVar9 + 0x38) == 0) && (pTVar10 = pTVar9, *(int *)(pTVar8 + 0x5c) != -2)) {
        do {
          pTVar10 = *(TEdge **)(pTVar10 + 0x68);
        } while (*(long *)(pTVar10 + 0x38) == 0);
                    /* try { // try from 01031ed4 to 01131eff has its CatchHandler @ 01031838 */
        if ((*(long *)(pTVar10 + 0x20) != *(long *)(pTVar8 + 0x20)) &&
           (pTVar6 = pTVar10, *(long *)(pTVar10 + 0x20) < *(long *)(pTVar8 + 0x20))) {
          pTVar6 = pTVar9;
        }
      }
      pTVar8 = param_1;
      if (pTVar6 != param_1) {
        while( true ) {
          pTVar9 = *(TEdge **)(pTVar8 + 0x60);
          *(TEdge **)(pTVar8 + 0x70) = pTVar9;
                    /* try { // try from 01031f00 to 01131f23 has its CatchHandler @ 010332fc */
          if (((pTVar8 != param_1) && (lVar3 == 0)) &&
             (*(long *)pTVar8 != *(long *)(*(long *)(pTVar8 + 0x68) + 0x20))) {
            uVar7 = *(undefined8 *)(pTVar8 + 0x20);
            *(long *)(pTVar8 + 0x20) = *(long *)pTVar8;
            *(undefined8 *)pTVar8 = uVar7;
          }
          if (pTVar6 == pTVar9) break;
          lVar3 = *(long *)(pTVar9 + 0x38);
          pTVar8 = pTVar9;
                    /* try { // try from 01031f24 to 01131f4f has its CatchHandler @ 01031838 */
        }
        if (((pTVar6 != param_1) && (*(long *)(pTVar6 + 0x38) == 0)) &&
           (*(long *)pTVar6 != *(long *)(*(long *)(pTVar6 + 0x68) + 0x20))) {
          uVar7 = *(undefined8 *)(pTVar6 + 0x20);
                    /* try { // try from 01031fa0 to 01131fc3 has its CatchHandler @ 010332f4 */
          *(long *)(pTVar6 + 0x20) = *(long *)pTVar6;
          *(undefined8 *)pTVar6 = uVar7;
        }
      }
      pTVar6 = pTVar6 + 0x60;
    }
    else {
      do {
        pTVar9 = pTVar8;
        pTVar8 = *(TEdge **)(pTVar9 + 0x68);
        if (*(long *)(pTVar9 + 0x28) != *(long *)(pTVar8 + 8)) break;
                    /* try { // try from 01031f50 to 01131f73 has its CatchHandler @ 010332f8 */
      } while (*(int *)(pTVar8 + 0x5c) != -2);
      pTVar6 = pTVar9;
      if ((*(long *)(pTVar9 + 0x38) == 0) && (*(int *)(pTVar8 + 0x5c) != -2)) {
        do {
          pTVar6 = *(TEdge **)(pTVar6 + 0x60);
        } while (*(long *)(pTVar6 + 0x38) == 0);
                    /* try { // try from 01031fc4 to 01131fef has its CatchHandler @ 01031838 */
        if ((*(long *)(pTVar6 + 0x20) != *(long *)(pTVar8 + 0x20)) &&
           (*(long *)(pTVar6 + 0x20) < *(long *)(pTVar8 + 0x20))) {
          pTVar6 = pTVar9;
        }
      }
      pTVar8 = param_1;
      if (pTVar6 != param_1) {
        while( true ) {
          pTVar9 = *(TEdge **)(pTVar8 + 0x68);
          *(TEdge **)(pTVar8 + 0x70) = pTVar9;
                    /* try { // try from 01031ff0 to 01132013 has its CatchHandler @ 010332f0 */
          if (((pTVar8 != param_1) && (lVar3 == 0)) &&
             (*(long *)pTVar8 != *(long *)(*(long *)(pTVar8 + 0x60) + 0x20))) {
            uVar7 = *(undefined8 *)(pTVar8 + 0x20);
            *(long *)(pTVar8 + 0x20) = *(long *)pTVar8;
            *(undefined8 *)pTVar8 = uVar7;
          }
                    /* try { // try from 01032014 to 0113203f has its CatchHandler @ 01031838 */
          if (pTVar6 == pTVar9) break;
          lVar3 = *(long *)(pTVar9 + 0x38);
          pTVar8 = pTVar9;
        }
                    /* try { // try from 01032040 to 01132063 has its CatchHandler @ 010332ec */
        if (((pTVar6 != param_1) && (*(long *)(pTVar6 + 0x38) == 0)) &&
           (*(long *)pTVar6 != *(long *)(*(long *)(pTVar6 + 0x60) + 0x20))) {
          uVar7 = *(undefined8 *)(pTVar6 + 0x20);
          *(long *)(pTVar6 + 0x20) = *(long *)pTVar6;
          *(undefined8 *)pTVar6 = uVar7;
        }
      }
      pTVar6 = pTVar6 + 0x68;
    }
    param_1 = *(TEdge **)pTVar6;
  }
                    /* try { // try from 01032064 to 0113208f has its CatchHandler @ 01031838 */
  if (*(int *)(param_1 + 0x5c) != -2) {
    return param_1;
  }
  pTVar8 = param_1;
  if (param_2) {
    do {
      pTVar9 = pTVar8;
      pTVar8 = *(TEdge **)(pTVar9 + 0x60);
    } while (*(long *)(pTVar9 + 0x28) == *(long *)(*(TEdge **)(pTVar9 + 0x60) + 8));
    for (; pTVar9 != param_1; pTVar9 = *(TEdge **)(pTVar9 + 0x68)) {
      if (*(long *)(pTVar9 + 0x38) != 0) goto LAB_010320dc;
                    /* try { // try from 010320b4 to 011320df has its CatchHandler @ 01031838 */
    }
  }
  else {
    do {
                    /* try { // try from 01032090 to 011320b3 has its CatchHandler @ 010332e8 */
      pTVar9 = pTVar8;
      pTVar8 = *(TEdge **)(pTVar9 + 0x68);
    } while (*(long *)(pTVar9 + 0x28) == *(long *)(*(TEdge **)(pTVar9 + 0x68) + 8));
    for (; pTVar9 != param_1; pTVar9 = *(TEdge **)(pTVar9 + 0x60)) {
      if (*(long *)(pTVar9 + 0x38) != 0) goto LAB_010320dc;
    }
  }
  goto LAB_01032164;
LAB_010320dc:
                    /* try { // try from 010320e0 to 01132103 has its CatchHandler @ 010332e4 */
  if (pTVar9 != param_1) {
    lVar3 = 0x60;
    if (!param_2) {
      lVar3 = 0x68;
    }
    pTVar8 = *(TEdge **)(param_1 + lVar3);
    plVar2 = operator_new(0x20);
    plVar2[3] = 0;
                    /* try { // try from 01032104 to 0113212f has its CatchHandler @ 01031838 */
    lVar3 = *(long *)(pTVar8 + 8);
    plVar2[1] = 0;
    plVar2[2] = (long)pTVar8;
    *plVar2 = lVar3;
    *(undefined4 *)(pTVar8 + 0x50) = 0;
    pTVar8 = (TEdge *)ProcessBound(this,pTVar8,param_2);
    plVar4 = *(long **)(this + 0x10);
                    /* try { // try from 01032130 to 01132153 has its CatchHandler @ 010332e0 */
    if (plVar4 == (long *)0x0) {
      *(long **)(this + 0x10) = plVar2;
      return pTVar8;
    }
    if (*plVar4 <= lVar3) {
      plVar2[3] = (long)plVar4;
      *(long **)(this + 0x10) = plVar2;
      return pTVar8;
    }
    do {
      plVar5 = plVar4;
      plVar4 = (long *)plVar5[3];
      if (plVar4 == (long *)0x0) break;
                    /* try { // try from 01032154 to 0113217f has its CatchHandler @ 01031838 */
    } while (lVar3 < *plVar4);
    plVar2[3] = (long)plVar4;
    plVar5[3] = (long)plVar2;
    return pTVar8;
  }
LAB_01032164:
  if (param_2) {
    pTVar8 = *(TEdge **)(param_1 + 0x60);
  }
  else {
    pTVar8 = *(TEdge **)(param_1 + 0x68);
  }
                    /* try { // try from 01032180 to 011321a3 has its CatchHandler @ 010332dc */
  return pTVar8;
}

