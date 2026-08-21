
/* cocos2d::AABB::getCenter() */

void cocos2d::AABB::getCenter(void)

{
  long lVar1;
  Vec3 aVStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3(aVStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

