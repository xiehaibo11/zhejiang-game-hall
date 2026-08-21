
/* ClipperLib::Clipper::SetWindingCount(ClipperLib::TEdge&) */

void __thiscall ClipperLib::Clipper::SetWindingCount(Clipper *this,TEdge *param_1)

{
  TEdge *pTVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  TEdge *pTVar8;
  long lVar9;
  Clipper *pCVar10;
  uint uVar11;
  long lVar12;
  
  lVar9 = *(long *)(param_1 + 0x80);
  iVar4 = *(int *)(param_1 + 0x48);
  while( true ) {
    if (lVar9 == 0) goto LAB_010359b4;
                    /* try { // try from 01035958 to 0113598b has its CatchHandler @ 010359a4 */
    if ((*(int *)(lVar9 + 0x48) == iVar4) && (iVar5 = *(int *)(lVar9 + 0x50), iVar5 != 0)) break;
    lVar9 = *(long *)(lVar9 + 0x80);
  }
  uVar11 = *(uint *)(param_1 + 0x50);
  if ((uVar11 == 0) && (*(int *)(this + 0x68) != 1)) {
    uVar11 = 1;
    goto LAB_01035a50;
  }
  lVar12 = 0xa0;
  if (iVar4 != 0) {
    lVar12 = 0x9c;
  }
  if (*(int *)(this + lVar12) == 0) {
    if (uVar11 == 0) {
      lVar12 = *(long *)(lVar9 + 0x80);
      if (lVar12 == 0) {
                    /* catch() { ... } // from try @ 01035ab4 with catch @ 01035a44 */
        uVar11 = 1;
      }
      else {
        uVar11 = 1;
        do {
          if (*(int *)(lVar12 + 0x48) == iVar4) {
            uVar11 = uVar11 ^ *(int *)(lVar12 + 0x50) != 0;
          }
          lVar12 = *(long *)(lVar12 + 0x80);
        } while (lVar12 != 0);
      }
      uVar11 = ~uVar11 & 1;
    }
    goto LAB_01035a50;
  }
  iVar6 = *(int *)(lVar9 + 0x54);
  lVar12 = (long)iVar6;
  if (iVar5 * iVar6 < 0) {
    lVar2 = -lVar12;
    if (-1 < lVar12) {
      lVar2 = lVar12;
    }
    if (lVar2 < 2) {
      if (uVar11 == 0) {
        uVar11 = 1;
      }
      goto LAB_01035a50;
    }
  }
  else if (uVar11 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01035958 with catch @ 010359a4
                        */
    iVar5 = 1;
    if (iVar6 < 0) {
      iVar5 = -1;
    }
    uVar11 = iVar5 + iVar6;
    goto LAB_01035a50;
  }
  uVar3 = 0;
  if (-1 < (int)(iVar5 * uVar11)) {
    uVar3 = uVar11;
  }
  uVar11 = iVar6 + uVar3;
LAB_01035a50:
  *(uint *)(param_1 + 0x54) = uVar11;
  uVar11 = *(uint *)(lVar9 + 0x58);
  pCVar10 = (Clipper *)(lVar9 + 0x78);
  *(uint *)(param_1 + 0x58) = uVar11;
LAB_01035a60:
  lVar9 = 0x9c;
  if (iVar4 != 0) {
    lVar9 = 0xa0;
  }
                    /* try { // try from 01035a70 to 01135a77 has its CatchHandler @ 01035b10 */
  pTVar8 = *(TEdge **)pCVar10;
  bVar7 = pTVar8 != param_1;
  if (*(int *)(this + lVar9) == 0) {
    while (bVar7) {
                    /* try { // try from 01035ab4 to 01135b2b has its CatchHandler @ 01035a44 */
      if (*(int *)(pTVar8 + 0x50) != 0) {
        uVar11 = (uint)(uVar11 == 0);
        *(uint *)(param_1 + 0x58) = uVar11;
      }
      pTVar8 = *(TEdge **)(pTVar8 + 0x78);
      bVar7 = pTVar8 != param_1;
                    /* try { // try from 01035ab0 to 01135ab3 has its CatchHandler @ 01035b00 */
    }
  }
  else if (bVar7) {
    do {
      pTVar1 = pTVar8 + 0x50;
      pTVar8 = *(TEdge **)(pTVar8 + 0x78);
      uVar11 = uVar11 + *(int *)pTVar1;
    } while (pTVar8 != param_1);
    *(uint *)(param_1 + 0x58) = uVar11;
    return;
  }
  return;
LAB_010359b4:
  iVar5 = *(int *)(param_1 + 0x50);
  uVar11 = 0;
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  *(int *)(param_1 + 0x54) = iVar5;
  *(undefined4 *)(param_1 + 0x58) = 0;
  pCVar10 = this + 0x88;
  goto LAB_01035a60;
}

