
/* cocos2d::__NotificationCenter::destroyInstance() */

void cocos2d::__NotificationCenter::destroyInstance(void)

{
  if (DAT_01792c68 != (Ref *)0x0) {
    Ref::release(DAT_01792c68);
    DAT_01792c68 = (Ref *)0x0;
  }
                    /* try { // try from 00ffd51c to 010fd533 has its CatchHandler @ 00ffd6d0 */
  return;
}

