
void FUN_00857a98(void)

{
  PoolManager *this;
  AutoreleasePool *this_00;
  
  this = (PoolManager *)cocos2d::PoolManager::getInstance();
  this_00 = (AutoreleasePool *)cocos2d::PoolManager::getCurrentPool(this);
  cocos2d::AutoreleasePool::clear(this_00);
  JSBClassType::destroy();
  return;
}

