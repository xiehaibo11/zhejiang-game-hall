
void FUN_008f8428(void)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  __shared_weak_count *this;
  PoolManager *this_00;
  AutoreleasePool *this_01;
  long lVar4;
  
  this = DAT_01d36fa8;
  DAT_01d36fa0 = 0;
  DAT_01d36fa8 = (__shared_weak_count *)0x0;
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
  this_00 = (PoolManager *)cocos2d::PoolManager::getInstance();
  this_01 = (AutoreleasePool *)cocos2d::PoolManager::getCurrentPool(this_00);
  cocos2d::AutoreleasePool::clear(this_01);
  return;
}

