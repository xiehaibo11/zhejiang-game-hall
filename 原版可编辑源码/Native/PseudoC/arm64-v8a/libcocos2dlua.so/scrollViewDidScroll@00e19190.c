
/* cocos2d::extension::TableView::scrollViewDidScroll(cocos2d::extension::ScrollView*) */

void cocos2d::extension::TableView::scrollViewDidScroll(ScrollView *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  TableViewCell *pTVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_s1;
  float fVar16;
  float fVar17;
  float fVar18;
  
                    /* try { // try from 00e19198 to 00f191a3 has its CatchHandler @ 00e194ac */
                    /* try { // try from 00e191a4 to 00f191af has its CatchHandler @ 00e194a4 */
                    /* try { // try from 00e191b0 to 00f191b7 has its CatchHandler @ 00e194bc */
  lVar3 = (**(code **)(**(long **)(param_1 + 0x4d0) + 0x28))(*(long **)(param_1 + 0x4d0),param_1);
  if (lVar3 != 0) {
                    /* try { // try from 00e191c8 to 00f191eb has its CatchHandler @ 00e19474 */
    if (param_1[0x4e4] != (ScrollView)0x0) {
      param_1[0x4e4] = (ScrollView)0x0;
      FUN_00e19874(*(undefined8 *)(param_1 + 0x4a0),*(undefined8 *)(param_1 + 0x4a8));
    }
    fVar13 = (float)ScrollView::getContentOffset(param_1);
    uVar12 = lVar3 - 1;
    if (*(int *)(param_1 + 0x478) == 0) {
      fVar18 = *(float *)(param_1 + 0x394);
      plVar5 = (long *)ScrollView::getContainer(param_1);
      fVar16 = (float)(**(code **)(*plVar5 + 0x68))();
      fVar18 = fVar18 / fVar16;
    }
    else {
      fVar18 = -0.0;
    }
    uVar4 = _indexFromOffset(-fVar13,fVar18 - in_s1,param_1);
    iVar2 = *(int *)(param_1 + 0x478);
    fVar16 = *(float *)(param_1 + 0x394);
    uVar10 = uVar12;
                    /* try { // try from 00e19258 to 00f1925f has its CatchHandler @ 00e194bc */
    if (uVar4 != 0xffffffffffffffff) {
      uVar10 = uVar4;
    }
                    /* try { // try from 00e19260 to 00f19267 has its CatchHandler @ 00e1949c */
    plVar5 = (long *)ScrollView::getContainer(param_1);
                    /* try { // try from 00e19268 to 00f1926f has its CatchHandler @ 00e19498 */
    fVar14 = (float)(**(code **)(*plVar5 + 0x68))();
    fVar17 = *(float *)(param_1 + 0x390);
                    /* try { // try from 00e19278 to 00f1927f has its CatchHandler @ 00e19494 */
    fVar15 = -(fVar16 / fVar14);
                    /* try { // try from 00e19280 to 00f19287 has its CatchHandler @ 00e19490 */
    if (iVar2 != 0) {
      fVar15 = fVar16 / fVar14;
    }
                    /* try { // try from 00e19288 to 00f192cf has its CatchHandler @ 00e194c4 */
    plVar5 = (long *)ScrollView::getContainer(param_1);
    fVar16 = (float)(**(code **)(*plVar5 + 0x58))();
    uVar6 = _indexFromOffset(fVar17 / fVar16 - fVar13,(fVar18 - in_s1) + fVar15,param_1);
    puVar7 = *(undefined8 **)(param_1 + 0x4a0);
    uVar4 = uVar12;
    if (uVar6 != 0xffffffffffffffff) {
      uVar4 = uVar6;
    }
    if (puVar7 != *(undefined8 **)(param_1 + 0x4a8)) {
      do {
        pTVar11 = (TableViewCell *)*puVar7;
        lVar3 = TableViewCell::getIdx(pTVar11);
        if ((long)uVar10 <= lVar3) break;
        _moveCellOutOfSight((TableView *)param_1,pTVar11);
        puVar7 = *(undefined8 **)(param_1 + 0x4a0);
                    /* try { // try from 00e192f0 to 00f192f7 has its CatchHandler @ 00e1948c */
      } while (puVar7 != *(undefined8 **)(param_1 + 0x4a8));
    }
    if (*(long *)(param_1 + 0x4a0) != *(long *)(param_1 + 0x4a8)) {
      pTVar11 = *(TableViewCell **)(*(long *)(param_1 + 0x4a8) + -8);
      while ((lVar3 = TableViewCell::getIdx(pTVar11),
             lVar3 <= (long)(uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU)) &&
             ((long)uVar4 < lVar3))) {
        _moveCellOutOfSight((TableView *)param_1,pTVar11);
        if (*(long *)(param_1 + 0x4a0) == *(long *)(param_1 + 0x4a8)) break;
        pTVar11 = *(TableViewCell **)(*(long *)(param_1 + 0x4a8) + -8);
      }
    }
    if ((long)uVar10 <= (long)uVar4) {
      do {
        plVar8 = (long *)(*(long *)(param_1 + 0x480) + 8);
        plVar9 = (long *)*plVar8;
        plVar5 = plVar8;
        if (plVar9 == (long *)0x0) {
LAB_00e19384:
          updateCellAtIndex((TableView *)param_1,uVar10);
        }
        else {
          do {
                    /* try { // try from 00e193b8 to 00f193c3 has its CatchHandler @ 00e1947c */
            if ((long)uVar10 <= plVar9[4]) {
              plVar5 = plVar9;
            }
            plVar9 = (long *)plVar9[plVar9[4] < (long)uVar10];
          } while (plVar9 != (long *)0x0);
                    /* try { // try from 00e193c4 to 00f194e7 has its CatchHandler @ 00e1913c */
          if ((plVar5 == plVar8) || ((long)uVar10 < plVar5[4])) goto LAB_00e19384;
        }
        bVar1 = (long)uVar10 < (long)uVar4;
        uVar10 = uVar10 + 1;
      } while (bVar1);
    }
    plVar5 = *(long **)(param_1 + 0x4d8);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e19380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))(plVar5,param_1);
      return;
    }
  }
  return;
}

