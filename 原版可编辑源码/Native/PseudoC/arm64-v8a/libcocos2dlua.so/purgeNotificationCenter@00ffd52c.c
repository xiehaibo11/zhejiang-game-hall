
/* cocos2d::__NotificationCenter::purgeNotificationCenter() */

void cocos2d::__NotificationCenter::purgeNotificationCenter(void)

{
  if (DAT_01792c68 != (Ref *)0x0) {
    Ref::release(DAT_01792c68);
    DAT_01792c68 = (Ref *)0x0;
  }
  return;
}

