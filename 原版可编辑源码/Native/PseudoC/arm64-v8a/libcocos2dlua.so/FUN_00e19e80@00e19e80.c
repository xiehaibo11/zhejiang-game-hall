
int FUN_00e19e80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  TableViewCell *pTVar5;
  
  iVar1 = FUN_00e19d4c();
  pTVar5 = (TableViewCell *)*param_3;
  lVar2 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)*param_4);
  lVar3 = cocos2d::extension::TableViewCell::getIdx(pTVar5);
  if (lVar2 < lVar3) {
    uVar4 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar4;
    pTVar5 = (TableViewCell *)*param_2;
    lVar2 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)*param_3);
                    /* try { // try from 00e19ef0 to 00f19efb has its CatchHandler @ 00e19f3c */
    lVar3 = cocos2d::extension::TableViewCell::getIdx(pTVar5);
                    /* try { // try from 00e19efc to 00f19f43 has its CatchHandler @ 00e19e08 */
    if (lVar2 < lVar3) {
      uVar4 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar4;
      pTVar5 = (TableViewCell *)*param_1;
      lVar2 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)*param_2);
      lVar3 = cocos2d::extension::TableViewCell::getIdx(pTVar5);
      if (lVar2 < lVar3) {
        uVar4 = *param_1;
                    /* catch() { ... } // from try @ 00e19ef0 with catch @ 00e19f3c */
        iVar1 = iVar1 + 3;
        *param_1 = *param_2;
        *param_2 = uVar4;
      }
      else {
        iVar1 = iVar1 + 2;
      }
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

