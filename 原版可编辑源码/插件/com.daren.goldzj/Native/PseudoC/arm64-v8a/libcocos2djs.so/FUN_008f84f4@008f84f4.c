
void FUN_008f84f4(void)

{
  long lVar1;
  undefined8 *puVar2;
  PoolManager *this;
  AutoreleasePool *this_00;
  long lVar3;
  void *pvVar4;
  
  this = (PoolManager *)cocos2d::PoolManager::getInstance();
  this_00 = (AutoreleasePool *)cocos2d::PoolManager::getCurrentPool(this);
  cocos2d::AutoreleasePool::clear(this_00);
  lVar1 = DAT_01d370c0;
  puVar2 = DAT_01d370c8;
  if (DAT_01d370d0 != 0) {
    while (DAT_01d370c0 = lVar1, puVar2 != (void *)0x0) {
      pvVar4 = (void *)*puVar2;
      se::Value::~Value((Value *)(puVar2 + 5));
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      lVar1 = DAT_01d370c0;
      puVar2 = pvVar4;
    }
    DAT_01d370c8 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(DAT_01d370b8 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
    }
    DAT_01d370d0 = 0;
  }
  if (__jsbObj != (RefCounter *)0x0) {
    se::RefCounter::decRef(__jsbObj);
    __jsbObj = (RefCounter *)0x0;
  }
  if (__glObj != (RefCounter *)0x0) {
    se::RefCounter::decRef(__glObj);
    __glObj = (RefCounter *)0x0;
  }
  return;
}

