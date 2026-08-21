
/* cocos2d::PcmData::TEMPNAMEPLACEHOLDERVALUE(cocos2d::PcmData const&) */

PcmData * __thiscall cocos2d::PcmData::operator=(PcmData *this,PcmData *param_1)

{
  long *plVar1;
  __shared_weak_count *p_Var2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *this_00;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = uVar6;
  uVar6 = *(undefined8 *)param_1;
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  this_00 = *(__shared_weak_count **)(this + 8);
  *(undefined8 *)this = uVar6;
  *(long *)(this + 8) = lVar5;
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var2 = this_00 + 8;
    do {
      lVar5 = *(long *)p_Var2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar4) {
        *(long *)p_Var2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
                    /* try { // try from 00a7a09c to 00b7a0a3 has its CatchHandler @ 00a7a198 */
    if (lVar5 == 0) {
                    /* try { // try from 00a7a0a4 to 00b7a0c7 has its CatchHandler @ 00a7a034 */
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
  return this;
}

