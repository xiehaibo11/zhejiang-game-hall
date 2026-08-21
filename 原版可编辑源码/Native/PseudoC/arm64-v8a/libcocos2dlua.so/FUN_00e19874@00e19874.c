
void FUN_00e19874(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  TableViewCell *this;
  TableViewCell *pTVar15;
  undefined8 *puVar16;
  
LAB_00e1989c:
  puVar14 = param_2 + -1;
  puVar9 = param_1;
LAB_00e198ac:
  param_1 = puVar9;
  lVar10 = (long)param_2 - (long)param_1;
  uVar8 = lVar10 >> 3;
  switch(uVar8) {
  case 0:
  case 1:
    goto switchD_00e19bb4_caseD_0;
  case 2:
    pTVar15 = (TableViewCell *)*param_1;
    lVar10 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)param_2[-1]);
    lVar3 = cocos2d::extension::TableViewCell::getIdx(pTVar15);
    if (lVar3 <= lVar10) {
      return;
    }
    uVar11 = *param_1;
    *param_1 = param_2[-1];
    param_2[-1] = uVar11;
    return;
  case 3:
    FUN_00e19d4c(param_1,param_1 + 1,puVar14);
    return;
  case 4:
    FUN_00e19e80(param_1,param_1 + 1,param_1 + 2,puVar14);
    return;
  case 5:
                    /* try { // try from 00e19d18 to 00f19e07 has its CatchHandler @ 00e195a0 */
    FUN_00e19f74(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar14);
    return;
  default:
    if (0xf7 < lVar10) {
                    /* try { // try from 00e198c8 to 00f198d7 has its CatchHandler @ 00e19db8 */
      uVar4 = uVar8;
      if ((long)uVar8 < 0) {
        uVar4 = uVar8 + 1;
      }
      puVar9 = (undefined8 *)((long)param_1 + (uVar4 & 0x3ffffffffffffffe) * 4);
      if (lVar10 < 0x1f39) {
        iVar2 = FUN_00e19d4c(param_1,puVar9,puVar14);
      }
      else {
                    /* try { // try from 00e198e8 to 00f198f3 has its CatchHandler @ 00e19da4 */
        uVar4 = uVar8 + 3;
        if (-1 < (long)uVar8) {
          uVar4 = uVar8;
        }
        lVar10 = (uVar4 & 0x7ffffffffffffffc) * 2;
                    /* try { // try from 00e19910 to 00f19917 has its CatchHandler @ 00e19db8 */
        iVar2 = FUN_00e19f74(param_1,(long)param_1 + lVar10,puVar9,(long)puVar9 + lVar10,puVar14);
      }
      pTVar15 = (TableViewCell *)*puVar9;
      lVar10 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)*param_1);
      lVar3 = cocos2d::extension::TableViewCell::getIdx(pTVar15);
      puVar16 = puVar14;
      puVar13 = param_2 + -2;
      if (lVar3 <= lVar10) goto LAB_00e19958;
      goto LAB_00e19994;
    }
    FUN_00e19d4c(param_1,param_1 + 1,param_1 + 2);
                    /* try { // try from 00e19c00 to 00f19d17 has its CatchHandler @ 00e19dd4 */
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar10 = 0;
    puVar9 = param_1 + 3;
    puVar14 = param_1 + 2;
  }
LAB_00e19c2c:
  puVar16 = puVar9;
  pTVar15 = (TableViewCell *)*puVar14;
  lVar3 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)*puVar16);
  lVar5 = cocos2d::extension::TableViewCell::getIdx(pTVar15);
  if (lVar3 < lVar5) {
    pTVar15 = (TableViewCell *)*puVar16;
    lVar3 = lVar10;
    do {
      lVar5 = lVar3;
      *(undefined8 *)((long)param_1 + lVar5 + 0x18) = *(undefined8 *)((long)param_1 + lVar5 + 0x10);
      puVar9 = param_1;
      if (lVar5 == -0x10) goto LAB_00e19c18;
      this = *(TableViewCell **)((long)param_1 + lVar5 + 8);
      lVar6 = cocos2d::extension::TableViewCell::getIdx(pTVar15);
      lVar7 = cocos2d::extension::TableViewCell::getIdx(this);
      lVar3 = lVar5 + -8;
    } while (lVar6 < lVar7);
    puVar9 = (undefined8 *)((long)param_1 + lVar5 + 0x10);
LAB_00e19c18:
    *puVar9 = pTVar15;
  }
  lVar10 = lVar10 + 8;
  puVar9 = puVar16 + 1;
  puVar14 = puVar16;
  if (puVar16 + 1 == param_2) {
switchD_00e19bb4_caseD_0:
    return;
  }
  goto LAB_00e19c2c;
LAB_00e19958:
  while (puVar16 = puVar13, param_1 != puVar16) {
    pTVar15 = (TableViewCell *)*puVar9;
    lVar10 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)*puVar16);
    lVar3 = cocos2d::extension::TableViewCell::getIdx(pTVar15);
    puVar13 = puVar16 + -1;
    if (lVar10 < lVar3) goto code_r0x00e19980;
  }
  puVar16 = param_1 + 1;
  pTVar15 = (TableViewCell *)*puVar14;
  lVar10 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)*param_1);
  lVar3 = cocos2d::extension::TableViewCell::getIdx(pTVar15);
  if (lVar3 <= lVar10) {
    if (puVar16 == puVar14) {
      return;
    }
    puVar16 = param_1 + 2;
    while( true ) {
      pTVar15 = (TableViewCell *)puVar16[-1];
      lVar10 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)*param_1);
      lVar3 = cocos2d::extension::TableViewCell::getIdx(pTVar15);
      if (lVar10 < lVar3) break;
      puVar16 = puVar16 + 1;
      if (param_2 == puVar16) {
        return;
      }
    }
    uVar11 = puVar16[-1];
    puVar16[-1] = *puVar14;
    *puVar14 = uVar11;
  }
  puVar13 = puVar14;
  if (puVar16 == puVar14) {
    return;
  }
  while( true ) {
    puVar9 = puVar16 + -1;
    do {
      puVar16 = puVar9;
      puVar9 = puVar16 + 1;
      pTVar15 = (TableViewCell *)*puVar9;
      lVar10 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)*param_1);
      lVar3 = cocos2d::extension::TableViewCell::getIdx(pTVar15);
                    /* try { // try from 00e19b3c to 00f19b43 has its CatchHandler @ 00e19dc4 */
    } while (lVar3 <= lVar10);
    puVar16 = puVar16 + 2;
    do {
      puVar13 = puVar13 + -1;
      pTVar15 = (TableViewCell *)*puVar13;
      lVar10 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)*param_1);
      lVar3 = cocos2d::extension::TableViewCell::getIdx(pTVar15);
    } while (lVar10 < lVar3);
    if (puVar13 <= puVar9) break;
    uVar11 = *puVar9;
    *puVar9 = *puVar13;
    *puVar13 = uVar11;
  }
  goto LAB_00e198ac;
code_r0x00e19980:
  uVar11 = *param_1;
  iVar2 = iVar2 + 1;
  *param_1 = *puVar16;
  *puVar16 = uVar11;
LAB_00e19994:
  puVar13 = param_1 + 1;
  puVar12 = puVar13;
  puVar1 = puVar9;
  if (puVar13 < puVar16) {
    while( true ) {
      puVar9 = puVar1;
      puVar13 = puVar12 + -1;
      do {
        puVar12 = puVar13;
        puVar13 = puVar12 + 1;
        pTVar15 = (TableViewCell *)*puVar9;
        lVar10 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)*puVar13);
        lVar3 = cocos2d::extension::TableViewCell::getIdx(pTVar15);
      } while (lVar10 < lVar3);
      puVar12 = puVar12 + 2;
      do {
        puVar16 = puVar16 + -1;
        pTVar15 = (TableViewCell *)*puVar9;
        lVar10 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)*puVar16);
        lVar3 = cocos2d::extension::TableViewCell::getIdx(pTVar15);
      } while (lVar3 <= lVar10);
      if (puVar16 < puVar13) break;
      uVar11 = *puVar13;
      iVar2 = iVar2 + 1;
      *puVar13 = *puVar16;
      *puVar16 = uVar11;
      puVar1 = puVar16;
      if (puVar9 != puVar13) {
        puVar1 = puVar9;
      }
    }
  }
  if (puVar13 != puVar9) {
    pTVar15 = (TableViewCell *)*puVar13;
    lVar10 = cocos2d::extension::TableViewCell::getIdx((TableViewCell *)*puVar9);
    lVar3 = cocos2d::extension::TableViewCell::getIdx(pTVar15);
    if (lVar10 < lVar3) {
      uVar11 = *puVar13;
      iVar2 = iVar2 + 1;
      *puVar13 = *puVar9;
      *puVar9 = uVar11;
    }
  }
  if (iVar2 == 0) {
    uVar8 = FUN_00e1a0a4(param_1,puVar13);
    uVar4 = FUN_00e1a0a4(puVar13 + 1,param_2);
    if ((uVar4 & 1) != 0) goto LAB_00e19b94;
    puVar9 = puVar13 + 1;
    if ((uVar8 & 1) != 0) goto LAB_00e198ac;
  }
  if ((long)param_2 - (long)puVar13 <= (long)puVar13 - (long)param_1) {
    FUN_00e19874(puVar13 + 1,param_2);
    param_2 = puVar13;
    goto LAB_00e1989c;
  }
  FUN_00e19874(param_1,puVar13);
  puVar9 = puVar13 + 1;
  goto LAB_00e198ac;
LAB_00e19b94:
  param_2 = puVar13;
  if ((uVar8 & 1) != 0) {
    return;
  }
  goto LAB_00e1989c;
}

