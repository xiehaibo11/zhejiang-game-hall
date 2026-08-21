
/* cocos2d::ui::PageView::handleReleaseLogic(cocos2d::Touch*) */

void cocos2d::ui::PageView::handleReleaseLogic(Touch *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  Vec2 *pVVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float in_s1;
  undefined8 local_48;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  ScrollView::handleReleaseLogic(param_1);
  if (*(long *)(param_1 + 0x8b8) != *(long *)(param_1 + 0x8c0)) {
    uVar8 = ScrollView::calculateTouchMoveVelocity((ScrollView *)param_1);
    local_48 = CONCAT44(in_s1,uVar8);
    local_40 = (float)ScrollView::flattenVectorByDirection((ScrollView *)param_1,(Vec2 *)&local_48);
    local_3c = in_s1;
    fVar9 = (float)Vec2::length((Vec2 *)&local_40);
    fVar10 = 500.0;
    if (500.0 <= fVar9) {
      pVVar4 = (Vec2 *)ListView::getItem((ListView *)param_1,*(long *)(param_1 + 0x960));
      fVar9 = (float)ListView::calculateItemDestination
                               (param_1,(Widget *)&Vec2::ANCHOR_MIDDLE,pVVar4);
      puVar5 = (undefined8 *)ScrollView::getInnerContainerPosition((ScrollView *)param_1);
      local_48 = CONCAT44(fVar10 - (float)((ulong)*puVar5 >> 0x20),fVar9 - (float)*puVar5);
      fVar10 = (float)ScrollView::flattenVectorByDirection((ScrollView *)param_1,(Vec2 *)&local_48);
      local_48 = CONCAT44(fVar9,fVar10);
      if ((fVar10 * local_40 <= 0.0) && (fVar9 * local_3c <= 0.0)) {
        bVar3 = true;
        if ((local_3c <= 0.0) && (bVar3 = false, !NAN(local_40))) {
          bVar3 = local_40 < 0.0;
        }
        lVar1 = -1;
        if (bVar3) {
          lVar1 = 1;
        }
        uVar6 = (*(long *)(param_1 + 0x8c0) - *(long *)(param_1 + 0x8b8) >> 3) - 1;
        uVar7 = *(long *)(param_1 + 0x960) + lVar1;
        if ((long)uVar6 <= *(long *)(param_1 + 0x960) + lVar1) {
          uVar7 = uVar6;
        }
        uVar7 = uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU);
        *(ulong *)(param_1 + 0x960) = uVar7;
        if (param_1[0x900] != (Touch)0x0) {
          (**(code **)(*(long *)param_1 + 0x6a0))(param_1);
        }
        ListView::scrollToItem
                  ((ListView *)param_1,uVar7,(Vec2 *)&Vec2::ANCHOR_MIDDLE,
                   (Vec2 *)&Vec2::ANCHOR_MIDDLE);
        goto LAB_00db9038;
      }
    }
    ListView::startMagneticScroll((ListView *)param_1);
  }
LAB_00db9038:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

