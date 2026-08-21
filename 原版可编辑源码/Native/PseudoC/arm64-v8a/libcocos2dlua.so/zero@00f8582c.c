
/* cocos2d::Quaternion::zero() */

undefined8 * cocos2d::Quaternion::zero(void)

{
  int iVar1;
  
  if (((DAT_0178fba8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0178fba8), iVar1 != 0)) {
    DAT_0178fb98 = 0;
    DAT_0178fba0 = 0;
    __cxa_guard_release(&DAT_0178fba8);
  }
  return &DAT_0178fb98;
}

