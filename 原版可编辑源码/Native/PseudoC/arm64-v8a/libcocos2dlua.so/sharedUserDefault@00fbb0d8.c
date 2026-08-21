
/* cocos2d::UserDefault::sharedUserDefault() */

void cocos2d::UserDefault::sharedUserDefault(void)

{
  if (_userDefault == (undefined8 *)0x0) {
    initXMLFilePath();
    _userDefault = operator_new(8,(nothrow_t *)&std::nothrow);
    if (_userDefault != (undefined8 *)0x0) {
      *_userDefault = &PTR_getBoolForKey_01723920;
    }
  }
  return;
}

