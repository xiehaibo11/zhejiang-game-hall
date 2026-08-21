
/* cocos2d::UserDefault::purgeSharedUserDefault() */

void cocos2d::UserDefault::purgeSharedUserDefault(void)

{
  if (_userDefault != (long *)0x0) {
    (**(code **)(*_userDefault + 0x78))();
  }
  _userDefault = (long *)0x0;
  return;
}

