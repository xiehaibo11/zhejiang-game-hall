
/* cocos2d::Physics3DWorld::getGravity() const */

void cocos2d::Physics3DWorld::getGravity(void)

{
  long lVar1;
  long in_x0;
  undefined4 local_38 [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38[0] = (**(code **)(**(long **)(in_x0 + 0x60) + 0x98))();
  convertbtVector3ToVec3((btVector3 *)local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

