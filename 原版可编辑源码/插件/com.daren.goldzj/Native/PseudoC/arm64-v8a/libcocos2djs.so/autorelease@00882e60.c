
/* cocos2d::Ref::autorelease() */

Ref * __thiscall cocos2d::Ref::autorelease(Ref *this)

{
  PoolManager *this_00;
  AutoreleasePool *this_01;
  
  this_00 = (PoolManager *)PoolManager::getInstance();
  this_01 = (AutoreleasePool *)PoolManager::getCurrentPool(this_00);
  AutoreleasePool::addObject(this_01,this);
  return this;
}

