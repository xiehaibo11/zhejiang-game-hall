
/* cocostudio::SpriteFrameCacheHelper::purge() */

void cocostudio::SpriteFrameCacheHelper::purge(void)

{
  SpriteFrameCacheHelper *pSVar1;
  
  pSVar1 = _spriteFrameCacheHelper;
  if (_spriteFrameCacheHelper != (SpriteFrameCacheHelper *)0x0) {
    ~SpriteFrameCacheHelper(_spriteFrameCacheHelper);
    operator_delete(pSVar1);
  }
  _spriteFrameCacheHelper = (SpriteFrameCacheHelper *)0x0;
  return;
}

