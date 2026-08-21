
/* cocostudio::ArmatureDataManager::destroyInstance() */

void cocostudio::ArmatureDataManager::destroyInstance(void)

{
  SpriteFrameCacheHelper::purge();
  DataReaderHelper::purge();
  if (DAT_01785700 != (Ref *)0x0) {
    cocos2d::Ref::release(DAT_01785700);
    DAT_01785700 = (Ref *)0x0;
  }
  return;
}

