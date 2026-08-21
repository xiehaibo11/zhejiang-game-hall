
void FUN_008579f0(long param_1)

{
  PoolManager *pPVar1;
  AutoreleasePool *pAVar2;
  
  se::ScriptEngine::garbageCollect(*(ScriptEngine **)(param_1 + 8));
  pPVar1 = (PoolManager *)cocos2d::PoolManager::getInstance();
  pAVar2 = (AutoreleasePool *)cocos2d::PoolManager::getCurrentPool(pPVar1);
  cocos2d::AutoreleasePool::clear(pAVar2);
  se::ScriptEngine::garbageCollect(*(ScriptEngine **)(param_1 + 8));
  pPVar1 = (PoolManager *)cocos2d::PoolManager::getInstance();
  pAVar2 = (AutoreleasePool *)cocos2d::PoolManager::getCurrentPool(pPVar1);
  cocos2d::AutoreleasePool::clear(pAVar2);
  return;
}

