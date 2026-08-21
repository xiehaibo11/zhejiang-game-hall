
/* cocos2d::ui::ScrollView::handleMoveLogic(cocos2d::Touch*) */

void cocos2d::ui::ScrollView::handleMoveLogic(Touch *param_1)

{
  long lVar1;
  ulong uVar2;
  Touch *in_x1;
  undefined4 uVar3;
  undefined4 in_s1;
  Vec3 local_68 [16];
  Vec3 local_58 [16];
  undefined4 local_48 [2];
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[0x7d4] != (Touch)0x0) {
    Vec3::Vec3(local_58);
    Vec3::Vec3(local_68);
    if (*(long *)(param_1 + 0x3b8) != 0) {
      uVar3 = Touch::getLocation(in_x1);
      local_40 = CONCAT44(in_s1,uVar3);
      uVar2 = (**(code **)(*(long *)param_1 + 0x5d0))
                        (param_1,&local_40,*(undefined8 *)(param_1 + 0x3b8),local_58);
      if ((uVar2 & 1) != 0) {
        local_48[0] = Touch::getPreviousLocation(in_x1);
                    /* try { // try from 00dbdf7c to 00ebdf97 has its CatchHandler @ 00dbe334 */
        uVar2 = (**(code **)(*(long *)param_1 + 0x5d0))
                          (param_1,local_48,*(undefined8 *)(param_1 + 0x3b8),local_68);
        if ((uVar2 & 1) != 0) {
          local_40 = CONCAT44(SUB84(local_58._0_8_,4) - SUB84(local_68._0_8_,4),
                              (float)local_58._0_8_ - (float)local_68._0_8_);
          (**(code **)(*(long *)param_1 + 2000))(param_1,&local_40);
          gatherTouchMove((ScrollView *)param_1,(Vec2 *)&local_40);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

