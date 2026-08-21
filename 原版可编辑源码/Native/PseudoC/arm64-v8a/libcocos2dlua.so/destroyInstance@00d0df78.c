
/* cocos2d::Animation3DCache::destroyInstance() */

void cocos2d::Animation3DCache::destroyInstance(void)

{
  Animation3DCache *pAVar1;
  
  pAVar1 = _cacheInstance;
  if (_cacheInstance != (Animation3DCache *)0x0) {
    ~Animation3DCache(_cacheInstance);
    operator_delete(pAVar1);
  }
  _cacheInstance = (Animation3DCache *)0x0;
  return;
}

