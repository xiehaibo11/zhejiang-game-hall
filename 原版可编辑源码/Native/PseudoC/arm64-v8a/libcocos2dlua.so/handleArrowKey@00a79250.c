
/* fairygui::GList::handleArrowKey(int) */

void __thiscall fairygui::GList::handleArrowKey(GList *this,int param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  
  iVar2 = getSelectedIndex(this);
  if (iVar2 == -1) {
    return;
  }
  iVar13 = iVar2;
                    /* try { // try from 00a79288 to 00b792a3 has its CatchHandler @ 00a79320 */
  switch(param_1) {
  case 1:
                    /* try { // try from 00a792a4 to 00b79357 has its CatchHandler @ 00a79234 */
    switch(*(undefined4 *)(this + 0x2e4)) {
    case 0:
    case 3:
      goto switchD_00a792b4_caseD_0;
    default:
      goto switchD_00a79290_caseD_2;
    case 2:
    case 4:
      lVar3 = *(long *)(this + 0x1e0);
      lVar5 = *(long *)(lVar3 + (long)iVar2 * 8);
      lVar12 = (long)iVar2 << 0x20;
      lVar8 = (long)iVar2;
      iVar7 = 0;
      do {
        iVar9 = iVar7;
        lVar12 = lVar12 + -0x100000000;
        lVar11 = lVar5;
        if (lVar8 < 1) break;
        lVar11 = *(long *)(lVar3 + -8 + lVar8 * 8);
        lVar8 = lVar8 + -1;
        iVar7 = iVar9 + 1;
      } while (*(float *)(lVar11 + 0xc4) == *(float *)(lVar5 + 0xc4));
      if (iVar2 - iVar9 < 1) {
        return;
      }
      lVar12 = lVar12 >> 0x20;
      while (*(float *)(*(long *)(lVar3 + lVar12 * 8) + 0xc4) == *(float *)(lVar11 + 0xc4)) {
        iVar13 = iVar13 + -1;
        bVar1 = lVar12 < 1;
        lVar12 = lVar12 + -1;
        if (bVar1) {
          return;
        }
      }
    }
    break;
  default:
switchD_00a79290_caseD_2:
    return;
  case 3:
                    /* catch() { ... } // from try @ 00a79288 with catch @ 00a79320 */
    iVar13 = *(int *)(this + 0x2e4);
    if (1 < iVar13 - 1U) {
      if (iVar13 == 3) {
        lVar12 = *(long *)(this + 0x1e0);
        lVar8 = *(long *)(lVar12 + (long)iVar2 * 8);
        iVar7 = (int)((ulong)(*(long *)(this + 0x1e8) - lVar12) >> 3);
        lVar3 = 0;
        do {
          lVar5 = lVar3;
          iVar13 = (int)lVar5;
          iVar9 = iVar13;
          if ((*(long *)(this + 0x1e8) - lVar12) * 0x20000000 >> 0x20 <= (long)iVar2 + 1 + lVar5)
          goto LAB_00a795bc;
          lVar11 = *(long *)(lVar12 + ((long)iVar2 + 1) * 8 + lVar5 * 8);
          lVar3 = lVar5 + 1;
        } while (*(float *)(lVar11 + 0xc0) == *(float *)(lVar8 + 0xc0));
        lVar8 = lVar11;
        iVar9 = (int)(lVar5 + 1) + -1;
LAB_00a795bc:
        iVar10 = iVar13 + iVar2 + 1;
        if (iVar7 <= iVar10) {
          return;
        }
        uVar6 = lVar5 + (ulong)((iVar2 - iVar7) + 1);
        iVar13 = (iVar2 - iVar9) + iVar13;
        plVar4 = (long *)(lVar12 + (long)iVar10 * 8);
        while (*(float *)(*plVar4 + 0xc0) == *(float *)(lVar8 + 0xc0)) {
          iVar13 = iVar13 + 1;
          iVar2 = (int)uVar6;
          uVar6 = (ulong)(iVar2 + 1);
          plVar4 = plVar4 + 1;
          if (iVar2 == -1) {
            return;
          }
        }
        break;
      }
      if (iVar13 != 4) {
        return;
      }
    }
switchD_00a79364_caseD_0:
    iVar13 = iVar2 + 1;
    if (*(long *)(this + 0x1e8) - *(long *)(this + 0x1e0) >> 3 <= (long)iVar13) {
      return;
    }
    clearSelection(this);
    goto LAB_00a793d4;
  case 5:
    switch(*(undefined4 *)(this + 0x2e4)) {
    case 0:
    case 3:
      goto switchD_00a79364_caseD_0;
    default:
      return;
    case 2:
    case 4:
      lVar12 = *(long *)(this + 0x1e0);
      lVar8 = *(long *)(lVar12 + (long)iVar2 * 8);
      iVar7 = (int)((ulong)(*(long *)(this + 0x1e8) - lVar12) >> 3);
      lVar3 = 0;
      do {
        lVar5 = lVar3;
        iVar13 = (int)lVar5;
        iVar9 = iVar13;
        if ((*(long *)(this + 0x1e8) - lVar12) * 0x20000000 >> 0x20 <= (long)iVar2 + 1 + lVar5)
        goto LAB_00a79570;
        lVar11 = *(long *)(lVar12 + ((long)iVar2 + 1) * 8 + lVar5 * 8);
        lVar3 = lVar5 + 1;
      } while (*(float *)(lVar11 + 0xc4) == *(float *)(lVar8 + 0xc4));
      lVar8 = lVar11;
      iVar9 = (int)(lVar5 + 1) + -1;
LAB_00a79570:
      iVar10 = iVar13 + iVar2 + 1;
      if (iVar7 <= iVar10) {
        return;
      }
      uVar6 = lVar5 + (ulong)((iVar2 - iVar7) + 1);
      iVar13 = (iVar2 - iVar9) + iVar13;
      plVar4 = (long *)(lVar12 + (long)iVar10 * 8);
      while (*(float *)(*plVar4 + 0xc4) == *(float *)(lVar8 + 0xc4)) {
        iVar13 = iVar13 + 1;
        iVar2 = (int)uVar6;
        uVar6 = (ulong)(iVar2 + 1);
        plVar4 = plVar4 + 1;
        if (iVar2 == -1) {
          return;
        }
      }
      break;
    }
  case 7:
    iVar7 = *(int *)(this + 0x2e4);
    if (1 < iVar7 - 1U) {
      if (iVar7 == 3) {
        lVar3 = *(long *)(this + 0x1e0);
        lVar5 = *(long *)(lVar3 + (long)iVar2 * 8);
        lVar12 = (long)iVar2 << 0x20;
        lVar8 = (long)iVar2;
        iVar7 = 0;
        do {
          iVar9 = iVar7;
          lVar12 = lVar12 + -0x100000000;
          lVar11 = lVar5;
          if (lVar8 < 1) break;
          lVar11 = *(long *)(lVar3 + -8 + lVar8 * 8);
          lVar8 = lVar8 + -1;
          iVar7 = iVar9 + 1;
        } while (*(float *)(lVar11 + 0xc0) == *(float *)(lVar5 + 0xc0));
        if (iVar2 - iVar9 < 1) {
          return;
        }
        lVar12 = lVar12 >> 0x20;
        while (*(float *)(*(long *)(lVar3 + lVar12 * 8) + 0xc0) == *(float *)(lVar11 + 0xc0)) {
          iVar13 = iVar13 + -1;
          bVar1 = lVar12 < 1;
          lVar12 = lVar12 + -1;
          if (bVar1) {
            return;
          }
        }
        break;
      }
      if (iVar7 != 4) {
        return;
      }
    }
switchD_00a792b4_caseD_0:
    iVar13 = iVar2 + -1;
    if (iVar2 < 1) {
      return;
    }
  }
  clearSelection(this);
LAB_00a793d4:
  addSelection(this,iVar13,true);
  return;
}

