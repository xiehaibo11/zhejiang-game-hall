
/* fairygui::ScrollPane::checkRefreshBar() */

void __thiscall fairygui::ScrollPane::checkRefreshBar(ScrollPane *this)

{
  ScrollPane *pSVar1;
  GObject *pGVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  GObject *pGVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((*(long *)(this + 0x120) != 0) || (*(long *)(this + 0x128) != 0)) {
    lVar7 = *(long *)(this + 0x108);
    fVar13 = *(float *)(lVar7 + 0x50);
    lVar5 = (**(code **)(**(long **)(lVar7 + 400) + 0x168))();
    pGVar6 = *(GObject **)(this + 0x120);
    if (*(int *)(this + 0x48) != 0) {
      fVar13 = *(float *)(lVar5 + 4) - *(float *)(lVar7 + 0x54);
    }
    if (pGVar6 != (GObject *)0x0) {
      if (fVar13 <= 0.0) {
        GObject::setVisible(pGVar6,false);
        pGVar6 = *(GObject **)(this + 0x128);
        if (pGVar6 == (GObject *)0x0) {
          return;
        }
        goto LAB_00a95c68;
      }
                    /* try { // try from 00a95c38 to 00b95c3f has its CatchHandler @ 00a95dd4 */
      GObject::setVisible(pGVar6,true);
                    /* try { // try from 00a95c40 to 00b95d4b has its CatchHandler @ 00a954f4 */
      pGVar6 = *(GObject **)(this + 0x120);
      fVar10 = fVar13;
      fVar14 = *(float *)(pGVar6 + 0xcc);
      if (*(int *)(this + 0x48) != 0) {
        fVar10 = *(float *)(pGVar6 + 200);
        fVar14 = fVar13;
      }
      GObject::setSize(pGVar6,fVar10,fVar14,false);
    }
    pGVar6 = *(GObject **)(this + 0x128);
    if (pGVar6 != (GObject *)0x0) {
LAB_00a95c68:
      pSVar1 = this + 0x74;
      if (*(int *)(this + 0x48) != 0) {
        pSVar1 = this + 0x78;
      }
      fVar14 = *(float *)pSVar1;
      if ((-fVar14 <= fVar13) && ((fVar14 != 0.0 || (*(int *)(this + 0xcc) < 1)))) {
        GObject::setVisible(pGVar6,false);
        return;
      }
      GObject::setVisible(pGVar6,true);
      pGVar6 = *(GObject **)(this + 0x128);
      iVar3 = *(int *)(this + 0x48);
      if (fVar14 <= 0.0) {
        pSVar1 = this + 100;
        if (iVar3 != 0) {
          pSVar1 = this + 0x68;
        }
        fVar10 = *(float *)pSVar1;
        pSVar1 = this + 0x6c;
        if (iVar3 != 0) {
          pSVar1 = this + 0x70;
        }
        fVar12 = fVar13 + fVar10;
        fVar8 = fVar10 - (float)*(int *)(this + 0xcc);
        fVar10 = fVar10 - *(float *)pSVar1;
        fVar11 = fVar12;
        if (fVar8 <= fVar12) {
          fVar11 = fVar8;
        }
        fVar9 = fVar10;
        if (fVar10 < fVar11) {
          fVar9 = fVar12;
        }
        bVar4 = true;
        if ((fVar10 < fVar11) && (bVar4 = false, !NAN(fVar12) && !NAN(fVar8))) {
          bVar4 = fVar12 < fVar8;
        }
        if (!bVar4) {
          fVar9 = fVar8;
        }
      }
      else {
        pSVar1 = this + 0x6c;
        if (iVar3 != 0) {
          pSVar1 = this + 0x70;
        }
        fVar9 = fVar13 + *(float *)pSVar1;
      }
                    /* try { // try from 00a95d4c to 00b95d53 has its CatchHandler @ 00a95e10 */
      fVar10 = fVar9;
      fVar11 = *(float *)(pGVar6 + 0xc4);
      if (iVar3 != 0) {
        fVar10 = *(float *)(pGVar6 + 0xc0);
        fVar11 = fVar9;
      }
                    /* try { // try from 00a95d64 to 00b95d6b has its CatchHandler @ 00a95db8 */
      GObject::setPosition(pGVar6,fVar10,fVar11);
      pGVar6 = *(GObject **)(this + 0x128);
      if (fVar14 <= 0.0) {
                    /* try { // try from 00a95d94 to 00b95d9b has its CatchHandler @ 00a95db0 */
        pGVar2 = pGVar6 + 0xc0;
        pSVar1 = this + 100;
                    /* try { // try from 00a95d9c to 00b95e63 has its CatchHandler @ 00a954f4 */
        if (*(int *)(this + 0x48) != 0) {
          pGVar2 = pGVar6 + 0xc4;
          pSVar1 = this + 0x68;
        }
        fVar13 = *(float *)pSVar1 - *(float *)pGVar2;
      }
      else {
                    /* try { // try from 00a95d7c to 00b95d83 has its CatchHandler @ 00a95dc4 */
        fVar13 = -fVar14 - fVar13;
      }
                    /* catch() { ... } // from try @ 00a957b4 with catch @ 00a95db0
                       catch() { ... } // from try @ 00a95d94 with catch @ 00a95db0 */
      fVar14 = fVar13;
      fVar10 = *(float *)(pGVar6 + 0xcc);
                    /* catch() { ... } // from try @ 00a95794 with catch @ 00a95db4 */
                    /* catch() { ... } // from try @ 00a95b94 with catch @ 00a95db8
                       catch() { ... } // from try @ 00a95d64 with catch @ 00a95db8 */
                    /* catch() { ... } // from try @ 00a95b5c with catch @ 00a95dbc */
                    /* catch() { ... } // from try @ 00a95b4c with catch @ 00a95dc0 */
      if (*(int *)(this + 0x48) != 0) {
        fVar14 = *(float *)(pGVar6 + 200);
        fVar10 = fVar13;
      }
                    /* catch() { ... } // from try @ 00a95914 with catch @ 00a95dc4
                       catch() { ... } // from try @ 00a95d7c with catch @ 00a95dc4 */
                    /* catch() { ... } // from try @ 00a958f8 with catch @ 00a95dc8 */
                    /* catch() { ... } // from try @ 00a95778 with catch @ 00a95dcc */
                    /* catch() { ... } // from try @ 00a95b30 with catch @ 00a95dd0 */
                    /* catch() { ... } // from try @ 00a959f0 with catch @ 00a95dd4
                       catch() { ... } // from try @ 00a95c38 with catch @ 00a95dd4 */
                    /* catch() { ... } // from try @ 00a959b8 with catch @ 00a95dd8 */
      GObject::setSize(pGVar6,fVar14,fVar10,false);
      return;
    }
  }
  return;
}

