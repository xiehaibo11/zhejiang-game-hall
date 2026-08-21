
/* cocos2d::ui::ScrollView::calculateCurrAndPrevTouchPoints(cocos2d::Touch*, cocos2d::Vec3*,
   cocos2d::Vec3*) */

uint cocos2d::ui::ScrollView::calculateCurrAndPrevTouchPoints
               (Touch *param_1,Vec3 *param_2,Vec3 *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x3b8) != 0) {
                    /* try { // try from 00dbdc50 to 00ebdc57 has its CatchHandler @ 00dbe380 */
    local_50[0] = Touch::getLocation((Touch *)param_2);
    uVar3 = (**(code **)(*(long *)param_1 + 0x5d0))
                      (param_1,local_50,*(undefined8 *)(param_1 + 0x3b8),param_3);
    if ((uVar3 & 1) != 0) {
      local_58[0] = Touch::getPreviousLocation((Touch *)param_2);
                    /* try { // try from 00dbdc90 to 00ebdc9b has its CatchHandler @ 00dbe2dc */
                    /* try { // try from 00dbdca8 to 00ebdce3 has its CatchHandler @ 00dbe3bc */
      uVar2 = (**(code **)(*(long *)param_1 + 0x5d0))
                        (param_1,local_58,*(undefined8 *)(param_1 + 0x3b8));
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return uVar2 & 1;
      }
      goto LAB_00dbdcf0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00dbdcec to 00ebdd8b has its CatchHandler @ 00dbe2d8 */
    return 0;
  }
LAB_00dbdcf0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

