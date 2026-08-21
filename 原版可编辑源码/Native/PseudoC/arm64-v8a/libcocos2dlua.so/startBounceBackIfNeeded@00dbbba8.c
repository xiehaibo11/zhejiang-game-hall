
/* cocos2d::ui::ScrollView::startBounceBackIfNeeded() */

void cocos2d::ui::ScrollView::startBounceBackIfNeeded(void)

{
  long lVar1;
  long *in_x0;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_s1;
  float fVar9;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if ((*(char *)((long)in_x0 + 0x845) == '\0') ||
     ((fVar6 = (float)(**(code **)(*in_x0 + 0x7b8))(in_x0,&Vec2::ZERO), ABS(fVar6) <= 0.0001 &&
      (ABS(in_s1) <= 0.0001)))) {
    uVar2 = 0;
  }
  else {
    fVar9 = 0.0;
    if ((int)in_x0[0xf8] != 1) {
      fVar9 = fVar6;
    }
    fVar6 = 0.0;
    if ((int)in_x0[0xf8] != 2) {
      fVar6 = in_s1;
    }
    *(undefined1 *)((long)in_x0 + 0x81d) = 1;
    *(undefined1 *)((long)in_x0 + 0x81e) = 1;
    in_x0[0x105] = CONCAT44(fVar6,fVar9);
    plVar3 = (long *)(**(code **)(*(long *)in_x0[0xf7] + 0xb0))();
    lVar5 = *plVar3;
    *(undefined1 *)((long)in_x0 + 0x839) = 0;
    in_x0[0x104] = lVar5;
    in_x0[0x106] = 0x3f800000;
    *(undefined8 *)((long)in_x0 + 0x83c) = 0;
    fVar7 = (float)(**(code **)(*in_x0 + 0x7b8))();
    fVar9 = fVar6;
    if ((0.0001 < ABS(fVar7)) || (fVar9 = 0.0001, 0.0001 < ABS(fVar6))) {
      *(undefined1 *)(in_x0 + 0x107) = 1;
      fVar8 = (float)(**(code **)(*in_x0 + 0x7b8))();
      if ((0.0 < fVar7 * fVar8) || (0.0 < fVar6 * fVar9)) {
        *(undefined1 *)((long)in_x0 + 0x839) = 1;
      }
    }
    uVar2 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
                    /* try { // try from 00dbbd28 to 00ebbd73 has its CatchHandler @ 00dbbd28
                       catch() { ... } // from try @ 00dbbd28 with catch @ 00dbbd28
                       catch() { ... } // from try @ 00dbbdac with catch @ 00dbbd28 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

