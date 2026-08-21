
/* convertbtVector3ToVec3(btVector3 const&) */

void convertbtVector3ToVec3(btVector3 *param_1)

{
  long lVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  cocos2d::Vec3::Vec3((Vec3 *)&local_38,*(float *)param_1,*(float *)(param_1 + 4),
                      *(float *)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_34,local_30);
}

