
/* cocos2d::Quaternion::zero() */

undefined8 * cocos2d::Quaternion::zero(void)

{
  int iVar1;
  
  if (((DAT_01d37c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d37c98), iVar1 != 0)) {
    DAT_01d37c88 = 0;
    DAT_01d37c90 = 0;
    __cxa_guard_release(&DAT_01d37c98);
  }
  return &DAT_01d37c88;
}

