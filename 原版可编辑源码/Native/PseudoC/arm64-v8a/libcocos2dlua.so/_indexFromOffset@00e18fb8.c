
/* cocos2d::extension::TableView::_indexFromOffset(cocos2d::Vec2) */

ulong cocos2d::extension::TableView::_indexFromOffset
                (float param_1,float param_2,ScrollView *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  
  lVar1 = (**(code **)(**(long **)(param_3 + 0x4d0) + 0x28))(*(long **)(param_3 + 0x4d0),param_3);
  if (*(int *)(param_3 + 0x478) == 0) {
    plVar2 = (long *)ScrollView::getContainer(param_3);
    lVar3 = (**(code **)(*plVar2 + 0x168))();
    param_2 = *(float *)(lVar3 + 4) - param_2;
  }
  lVar3 = (**(code **)(**(long **)(param_3 + 0x4d0) + 0x28))(*(long **)(param_3 + 0x4d0),param_3);
  if (*(int *)(param_3 + 0x330) != 0) {
    param_1 = param_2;
  }
  lVar4 = lVar3 + -1;
  if (lVar3 < 1) {
    uVar5 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar6 = lVar4 - lVar3;
      if (lVar6 < 0) {
        lVar6 = lVar6 + 1;
      }
      uVar5 = lVar3 + (lVar6 >> 1);
      fVar7 = *(float *)(*(long *)(param_3 + 0x488) + uVar5 * 4);
      if ((fVar7 <= param_1) &&
         (param_1 <= *(float *)(*(long *)(param_3 + 0x488) + (uVar5 + 1) * 4)))
      goto joined_r0x00e1908c;
      lVar6 = uVar5 - 1;
      if (fVar7 <= param_1) {
        lVar3 = uVar5 + 1;
        lVar6 = lVar4;
      }
      lVar4 = lVar6;
    } while (lVar3 <= lVar4);
    uVar5 = -(ulong)(0 < lVar3);
joined_r0x00e1908c:
    if (uVar5 == 0xffffffffffffffff) {
      return 0xffffffffffffffff;
    }
    uVar5 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
  }
  if (lVar1 <= (long)uVar5) {
    uVar5 = 0xffffffffffffffff;
  }
  return uVar5;
}

