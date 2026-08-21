
/* cocos2d::PcmData::reset() */

void __thiscall cocos2d::PcmData::reset(PcmData *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this_00;
  
  this_00 = *(__shared_weak_count **)(this + 8);
  *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x28) = 0xbf800000ffffffff;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  if (this_00 != (__shared_weak_count *)0x0) {
                    /* try { // try from 00a79e34 to 00b79e8b has its CatchHandler @ 00a79e34
                       catch() { ... } // from try @ 00a79e34 with catch @ 00a79e34
                       catch() { ... } // from try @ 00a79f20 with catch @ 00a79e34 */
    p_Var1 = this_00 + 8;
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
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
      return;
    }
  }
  return;
}

