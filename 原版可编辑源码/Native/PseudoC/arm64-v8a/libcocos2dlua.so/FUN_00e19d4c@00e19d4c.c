
undefined8 FUN_00e19d4c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  TableViewCell *pTVar6;
  
  pTVar6 = (TableViewCell *)*param_1;
  lVar1 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)*param_2);
  lVar2 = cocos2d::extension::TableViewCell::getIdx(pTVar6);
  pTVar6 = (TableViewCell *)*param_2;
  lVar3 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)*param_3);
                    /* catch() { ... } // from try @ 00e198e8 with catch @ 00e19da4 */
  lVar4 = cocos2d::extension::TableViewCell::getIdx(pTVar6);
  if (lVar1 < lVar2) {
    pTVar6 = (TableViewCell *)*param_1;
                    /* catch() { ... } // from try @ 00e198c8 with catch @ 00e19db8
                       catch() { ... } // from try @ 00e19910 with catch @ 00e19db8 */
    if (lVar3 < lVar4) {
                    /* catch() { ... } // from try @ 00e197c8 with catch @ 00e19dbc */
                    /* catch() { ... } // from try @ 00e19b3c with catch @ 00e19dc4 */
      *param_1 = *param_3;
      *param_3 = pTVar6;
      return 1;
    }
    *param_1 = *param_2;
    *param_2 = pTVar6;
    lVar1 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)*param_3);
    lVar2 = cocos2d::extension::TableViewCell::getIdx(pTVar6);
    if (lVar2 <= lVar1) {
      return 1;
    }
    uVar5 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar5;
  }
  else {
                    /* catch() { ... } // from try @ 00e19c00 with catch @ 00e19dd4 */
    if (lVar4 <= lVar3) {
      return 0;
    }
    uVar5 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar5;
    pTVar6 = (TableViewCell *)*param_1;
    lVar1 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)*param_2);
    lVar2 = cocos2d::extension::TableViewCell::getIdx(pTVar6);
    if (lVar2 <= lVar1) {
      return 1;
    }
                    /* catch() { ... } // from try @ 00e19efc with catch @ 00e19e08 */
    uVar5 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar5;
  }
  return 2;
}

