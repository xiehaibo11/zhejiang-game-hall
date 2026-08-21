
/* cocosbuilder::CCBReader::setAnimationManagers(std::__ndk1::shared_ptr<cocos2d::Map<cocos2d::Node*,
   cocosbuilder::CCBAnimationManager*> >) */

void __thiscall cocosbuilder::CCBReader::setAnimationManagers(CCBReader *this,undefined8 *param_2)

{
  long *plVar1;
  __shared_weak_count *p_Var2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  __shared_weak_count *this_00;
  
  uVar3 = *param_2;
  lVar6 = param_2[1];
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  this_00 = *(__shared_weak_count **)(this + 0x90);
  *(undefined8 *)(this + 0x88) = uVar3;
  *(long *)(this + 0x90) = lVar6;
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var2 = this_00 + 8;
    do {
      lVar6 = *(long *)p_Var2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar5) {
        *(long *)p_Var2 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
      return;
    }
  }
  return;
}

