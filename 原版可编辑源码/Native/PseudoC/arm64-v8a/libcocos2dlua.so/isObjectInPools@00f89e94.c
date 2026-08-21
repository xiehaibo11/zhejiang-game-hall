
/* cocos2d::PoolManager::isObjectInPools(cocos2d::Ref*) const */

undefined8 __thiscall cocos2d::PoolManager::isObjectInPools(PoolManager *this,Ref *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  Ref *pRVar3;
  
  puVar1 = *(undefined8 **)this;
  do {
    if (puVar1 == *(undefined8 **)(this + 8)) {
      return 0;
    }
    puVar2 = *(undefined8 **)*puVar1;
    while (puVar2 != (undefined8 *)((long *)*puVar1)[1]) {
      pRVar3 = (Ref *)*puVar2;
      puVar2 = puVar2 + 1;
      if (pRVar3 == param_1) {
        return 1;
      }
    }
    puVar1 = puVar1 + 1;
  } while( true );
}

