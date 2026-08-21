
/* cocos2d::MoveBy::create(float, cocos2d::Vec2 const&) */

void cocos2d::MoveBy::create(float param_1,Vec2 *param_2)

{
  long lVar1;
  Vec3 aVStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3(aVStack_38,*(float *)param_2,*(float *)(param_2 + 4),0.0);
  create(param_1,aVStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

