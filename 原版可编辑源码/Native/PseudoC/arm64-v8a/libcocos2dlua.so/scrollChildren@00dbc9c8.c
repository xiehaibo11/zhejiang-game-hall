
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::ui::ScrollView::scrollChildren(cocos2d::Vec2 const&) */

void cocos2d::ui::ScrollView::scrollChildren(Vec2 *param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *in_x1;
  float fVar7;
  float fVar8;
  float in_s1;
  float fVar9;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_60 = *in_x1;
  if (param_1[0x845] != '\0') {
    uVar4 = (ulong)local_60 >> 0x20;
    fVar8 = (float)local_60;
    fVar7 = (float)(**(code **)(*(long *)param_1 + 0x7b8))(param_1,&Vec2::ZERO);
    fVar9 = 1.0;
    if (fVar7 != 0.0) {
      fVar9 = 0.5;
    }
    fVar7 = 1.0;
    if (in_s1 != 0.0) {
      fVar7 = 0.5;
    }
    in_s1 = fVar9 * fVar8;
    fVar7 = fVar7 * (float)uVar4;
    local_60 = CONCAT44(fVar7,in_s1);
    if (param_1[0x845] != '\0') goto joined_r0x00dbcaa8;
  }
  fVar8 = (float)(**(code **)(*(long *)param_1 + 0x7b8))(param_1,&local_60);
  fVar7 = in_s1 + local_60._4_4_;
  local_60 = CONCAT44(fVar7,fVar8 + (float)local_60);
joined_r0x00dbcaa8:
  if (fVar7 <= 0.0) {
    if (0.0 <= fVar7) {
      bVar5 = false;
      bVar1 = false;
    }
    else {
      fVar8 = (float)Widget::getTopBoundary(*(Widget **)(param_1 + 0x7b8));
      bVar5 = false;
      bVar1 = fVar8 + local_60._4_4_ <= *(float *)(param_1 + 0x7c4);
    }
  }
  else {
    fVar8 = (float)Widget::getBottomBoundary(*(Widget **)(param_1 + 0x7b8));
    bVar1 = false;
    bVar5 = *(float *)(param_1 + 0x7c8) <= fVar8 + local_60._4_4_;
  }
  if (0.0 <= (float)local_60) {
    if ((float)local_60 <= 0.0) {
      bVar2 = false;
      bVar6 = false;
    }
    else {
      fVar8 = (float)Widget::getLeftBoundary(*(Widget **)(param_1 + 0x7b8));
      bVar2 = false;
      bVar6 = *(float *)(param_1 + 0x7cc) <= fVar8 + (float)local_60;
    }
  }
  else {
    fVar8 = (float)Widget::getRightBoundary(*(Widget **)(param_1 + 0x7b8));
    bVar6 = false;
    bVar2 = fVar8 + (float)local_60 <= *(float *)(param_1 + 2000);
  }
  (**(code **)(*(long *)param_1 + 0x7c0))(param_1,&local_60,0);
                    /* try { // try from 00dbcb64 to 00ebcba7 has its CatchHandler @ 00dbcb64
                       catch() { ... } // from try @ 00dbcb64 with catch @ 00dbcb64
                       catch() { ... } // from try @ 00dbcbac with catch @ 00dbcb64 */
  if (((float)local_60 != 0.0) || (local_60._4_4_ != 0.0)) {
                    /* catch() { ... } // from try @ 00dbcba8 with catch @ 00dbcbbc */
    if (param_1[0x81c] == '\0') {
      param_1[0x81c] = 1;
      dispatchEvent((ScrollView *)param_1,9,10);
    }
    dispatchEvent((ScrollView *)param_1,4,4);
  }
  if (bVar5) {
    dispatchEvent((ScrollView *)param_1,1,1);
  }
  if (bVar1) {
    dispatchEvent((ScrollView *)param_1,0,0);
  }
  if (bVar6) {
    dispatchEvent((ScrollView *)param_1,2,2);
  }
  if (bVar2) {
    dispatchEvent((ScrollView *)param_1,3,3);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00dbcba8 to 00ebcbab has its CatchHandler @ 00dbcbbc */
                    /* try { // try from 00dbcbac to 00ebcbcf has its CatchHandler @ 00dbcb64 */
  return;
}

