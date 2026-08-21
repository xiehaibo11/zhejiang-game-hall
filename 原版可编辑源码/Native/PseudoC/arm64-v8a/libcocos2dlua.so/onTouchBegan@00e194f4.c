
/* cocos2d::extension::TableView::onTouchBegan(cocos2d::Touch*, cocos2d::Event*) */

uint cocos2d::extension::TableView::onTouchBegan(Touch *param_1,Event *param_2)

{
  uint uVar1;
  ulong uVar2;
  Touch *pTVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  for (pTVar3 = param_1; pTVar3 != (Touch *)0x0;
      pTVar3 = (Touch *)(**(code **)(*(long *)pTVar3 + 0x260))(pTVar3)) {
    uVar2 = (**(code **)(*(long *)pTVar3 + 0x178))(pTVar3);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
      goto LAB_00e19638;
    }
  }
  uVar1 = ScrollView::onTouchBegan(param_1,param_2);
  if (*(long *)(param_1 + 0x380) - *(long *)(param_1 + 0x378) == 8) {
    pTVar3 = (Touch *)ScrollView::getContainer((ScrollView *)param_1);
    Node::convertTouchToNodeSpace(pTVar3);
    lVar4 = _indexFromOffset(param_1);
    if (lVar4 != -1) {
                    /* try { // try from 00e195a0 to 00f197c7 has its CatchHandler @ 00e195a0
                       catch() { ... } // from try @ 00e195a0 with catch @ 00e195a0
                       catch() { ... } // from try @ 00e19d18 with catch @ 00e195a0 */
      plVar8 = (long *)(*(long *)(param_1 + 0x480) + 8);
      plVar9 = (long *)*plVar8;
      plVar6 = plVar8;
      if (plVar9 != (long *)0x0) {
        do {
          if (lVar4 <= plVar9[4]) {
            plVar6 = plVar9;
          }
          plVar9 = (long *)plVar9[plVar9[4] < lVar4];
        } while (plVar9 != (long *)0x0);
        if ((plVar6 != plVar8) && (plVar6[4] <= lVar4)) {
          plVar8 = *(long **)(param_1 + 0x4a8);
          plVar6 = *(long **)(param_1 + 0x4a0);
          do {
            if (plVar6 == plVar8) goto LAB_00e1962c;
            lVar5 = TableViewCell::getIdx((TableViewCell *)*plVar6);
            lVar7 = *plVar6;
            plVar6 = plVar6 + 1;
          } while (lVar5 != lVar4);
          *(long *)(param_1 + 0x470) = lVar7;
          if ((lVar7 != 0) && (plVar6 = *(long **)(param_1 + 0x4d8), plVar6 != (long *)0x0)) {
            (**(code **)(*plVar6 + 0x28))(plVar6,param_1);
          }
          goto LAB_00e19638;
        }
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x470) == 0) goto LAB_00e19638;
    plVar6 = *(long **)(param_1 + 0x4d8);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x30))(plVar6,param_1);
    }
  }
LAB_00e1962c:
  *(undefined8 *)(param_1 + 0x470) = 0;
LAB_00e19638:
  return uVar1 & 1;
}

