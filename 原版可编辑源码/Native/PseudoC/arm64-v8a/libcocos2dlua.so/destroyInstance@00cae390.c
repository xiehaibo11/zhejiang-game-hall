
/* cocos2d::CSLoader::destroyInstance() */

void cocos2d::CSLoader::destroyInstance(void)

{
  CSLoader *pCVar1;
  
  pCVar1 = DAT_01786980;
  if (DAT_01786980 != (CSLoader *)0x0) {
    ~CSLoader(DAT_01786980);
    operator_delete(pCVar1);
  }
  DAT_01786980 = (CSLoader *)0x0;
  cocostudio::timeline::ActionTimelineCache::destroyInstance();
  return;
}

