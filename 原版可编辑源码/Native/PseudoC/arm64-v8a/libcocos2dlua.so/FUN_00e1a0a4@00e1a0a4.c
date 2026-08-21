
bool FUN_00e1a0a4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  TableViewCell *pTVar9;
  TableViewCell *this;
  long lVar10;
  int iVar11;
  
                    /* catch() { ... } // from try @ 00e1a104 with catch @ 00e1a0d8 */
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    pTVar9 = (TableViewCell *)*param_1;
                    /* try { // try from 00e1a0fc to 00f1a103 has its CatchHandler @ 00e1a114 */
    lVar10 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)param_2[-1]);
                    /* try { // try from 00e1a104 to 00f1a12f has its CatchHandler @ 00e1a0d8 */
    lVar1 = cocos2d::extension::TableViewCell::getIdx(pTVar9);
    if (lVar10 < lVar1) {
                    /* catch() { ... } // from try @ 00e1a0fc with catch @ 00e1a114 */
      uVar7 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar7;
      return true;
    }
    break;
  case 3:
    FUN_00e19d4c(param_1,param_1 + 1,param_2 + -1);
    return true;
  case 4:
    FUN_00e19e80(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_00e19f74(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    return true;
  default:
    FUN_00e19d4c(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      lVar10 = 0;
      iVar11 = 0;
      puVar5 = param_1 + 3;
      puVar8 = param_1 + 2;
      do {
        puVar6 = puVar5;
        pTVar9 = (TableViewCell *)*puVar8;
        lVar1 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)*puVar6);
        lVar2 = cocos2d::extension::TableViewCell::getIdx(pTVar9);
        if (lVar1 < lVar2) {
          pTVar9 = (TableViewCell *)*puVar6;
          lVar1 = lVar10;
          do {
            lVar2 = lVar1;
            *(undefined8 *)((long)param_1 + lVar2 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar2 + 0x10);
            puVar5 = param_1;
            if (lVar2 == -0x10) goto LAB_00e1a15c;
            this = *(TableViewCell **)((long)param_1 + lVar2 + 8);
            lVar3 = cocos2d::extension::TableViewCell::getIdx(pTVar9);
            lVar4 = cocos2d::extension::TableViewCell::getIdx(this);
            lVar1 = lVar2 + -8;
          } while (lVar3 < lVar4);
                    /* try { // try from 00e1a1e0 to 00f1a313 has its CatchHandler @ 00e1a1e0
                       catch() { ... } // from try @ 00e1a1e0 with catch @ 00e1a1e0
                       catch() { ... } // from try @ 00e1a3c8 with catch @ 00e1a1e0 */
          puVar5 = (undefined8 *)((long)param_1 + lVar2 + 0x10);
LAB_00e1a15c:
          iVar11 = iVar11 + 1;
          *puVar5 = pTVar9;
          if (iVar11 == 8) {
            return puVar6 + 1 == param_2;
          }
        }
        lVar10 = lVar10 + 8;
        puVar5 = puVar6 + 1;
        puVar8 = puVar6;
      } while (puVar6 + 1 != param_2);
    }
  }
  return true;
}

