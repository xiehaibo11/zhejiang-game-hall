
/* cocos2d::ui::ScrollView::handleReleaseLogic(cocos2d::Touch*) */

void cocos2d::ui::ScrollView::handleReleaseLogic(Touch *param_1)

{
  Touch *pTVar1;
  long lVar2;
  ulong uVar3;
  Touch *in_x1;
  Touch *pTVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 in_s1;
  float fVar7;
  float fVar8;
  undefined8 local_68 [2];
  undefined8 local_58 [2];
  undefined4 local_48 [2];
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1[0x7d4] == (Touch)0x0) goto LAB_00dbe1bc;
  Vec3::Vec3((Vec3 *)local_58);
                    /* try { // try from 00dbe01c to 00ebe023 has its CatchHandler @ 00dbe258 */
  Vec3::Vec3((Vec3 *)local_68);
                    /* try { // try from 00dbe024 to 00ebe047 has its CatchHandler @ 00dbd918 */
  if (*(long *)(param_1 + 0x3b8) != 0) {
    uVar5 = Touch::getLocation(in_x1);
    local_40 = CONCAT44(in_s1,uVar5);
                    /* try { // try from 00dbe048 to 00ebe067 has its CatchHandler @ 00dbe304 */
    uVar3 = (**(code **)(*(long *)param_1 + 0x5d0))
                      (param_1,&local_40,*(undefined8 *)(param_1 + 0x3b8),local_58);
    if ((uVar3 & 1) != 0) {
      local_48[0] = Touch::getPreviousLocation(in_x1);
      uVar3 = (**(code **)(*(long *)param_1 + 0x5d0))
                        (param_1,local_48,*(undefined8 *)(param_1 + 0x3b8),local_68);
      if ((uVar3 & 1) != 0) {
        local_40 = CONCAT44((float)((ulong)local_58[0] >> 0x20) -
                            (float)((ulong)local_68[0] >> 0x20),
                            (float)local_58[0] - (float)local_68[0]);
        gatherTouchMove((ScrollView *)param_1,(Vec2 *)&local_40);
      }
    }
  }
                    /* try { // try from 00dbe0a0 to 00ebe0ab has its CatchHandler @ 00dbe2c4 */
  param_1[0x7d4] = (Touch)0x0;
  uVar3 = startBounceBackIfNeeded();
  if (((uVar3 & 1) == 0) && (param_1[0x844] != (Touch)0x0)) {
    pTVar4 = *(Touch **)(param_1 + 0x800);
    if (param_1 + 0x7f8 == pTVar4) {
LAB_00dbe130:
      local_68[0] = 0;
    }
    else {
                    /* try { // try from 00dbe0c4 to 00ebe0d3 has its CatchHandler @ 00dbe268 */
      fVar6 = 0.0;
      do {
        pTVar1 = pTVar4 + 0x10;
        pTVar4 = *(Touch **)(pTVar4 + 8);
        fVar6 = fVar6 + *(float *)pTVar1;
      } while (param_1 + 0x7f8 != pTVar4);
      if ((fVar6 == 0.0) || (*(float *)(param_1 + 0x818) <= fVar6)) goto LAB_00dbe130;
      fVar7 = 0.0;
      fVar8 = 0.0;
      for (pTVar4 = *(Touch **)(param_1 + 0x7e8); param_1 + 0x7e0 != pTVar4;
          pTVar4 = *(Touch **)(pTVar4 + 8)) {
        fVar7 = fVar7 + (float)*(undefined8 *)(pTVar4 + 0x10);
        fVar8 = fVar8 + (float)((ulong)*(undefined8 *)(pTVar4 + 0x10) >> 0x20);
      }
      local_68[0] = CONCAT44(fVar8 / fVar6,fVar7 / fVar6);
    }
    fVar6 = (float)((ulong)local_68[0] >> 0x20);
                    /* try { // try from 00dbe148 to 00ebe157 has its CatchHandler @ 00dbe358 */
    if (((bool)(~((float)local_68[0] == 0.0) & 1)) || ((bool)(~(fVar6 == 0.0) & 1))) {
      local_58[0] = CONCAT44(fVar6 * 0.7,(float)local_68[0] * 0.7);
      (**(code **)(*(long *)param_1 + 0x7c8))(param_1,local_58,local_68);
    }
  }
  if (*(ScrollViewBar **)(param_1 + 0x858) != (ScrollViewBar *)0x0) {
    ScrollViewBar::onTouchEnded(*(ScrollViewBar **)(param_1 + 0x858));
  }
  if (*(ScrollViewBar **)(param_1 + 0x860) != (ScrollViewBar *)0x0) {
    ScrollViewBar::onTouchEnded(*(ScrollViewBar **)(param_1 + 0x860));
  }
  if (param_1[0x81c] != (Touch)0x0) {
    param_1[0x81c] = (Touch)0x0;
                    /* try { // try from 00dbe1b8 to 00ebe1c7 has its CatchHandler @ 00dbe2c4 */
    dispatchEvent((ScrollView *)param_1,10,0xb);
  }
LAB_00dbe1bc:
                    /* try { // try from 00dbe1c8 to 00ebe23f has its CatchHandler @ 00dbd918 */
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

