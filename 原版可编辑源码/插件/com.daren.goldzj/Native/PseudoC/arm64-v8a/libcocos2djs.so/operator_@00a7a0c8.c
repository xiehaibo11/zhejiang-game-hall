
/* cocos2d::PcmData::TEMPNAMEPLACEHOLDERVALUE(cocos2d::PcmData&&) */

PcmData * __thiscall cocos2d::PcmData::operator=(PcmData *this,PcmData *param_1)

{
  __shared_weak_count *p_Var1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *p_Var6;
  undefined8 uVar7;
  
                    /* try { // try from 00a7a0c8 to 00b7a0d3 has its CatchHandler @ 00a7a198 */
                    /* try { // try from 00a7a0d4 to 00b7a0fb has its CatchHandler @ 00a7a034 */
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = uVar7;
  uVar7 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
                    /* try { // try from 00a7a0fc to 00b7a103 has its CatchHandler @ 00a7a194 */
  p_Var6 = *(__shared_weak_count **)(this + 8);
  *(undefined8 *)this = uVar7;
  *(undefined8 *)(this + 8) = uVar2;
                    /* try { // try from 00a7a104 to 00b7a123 has its CatchHandler @ 00a7a034 */
  if (p_Var6 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var6 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
                    /* try { // try from 00a7a124 to 00b7a12b has its CatchHandler @ 00a7a194 */
                    /* try { // try from 00a7a12c to 00b7a14b has its CatchHandler @ 00a7a034 */
      (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  p_Var6 = *(__shared_weak_count **)(param_1 + 8);
                    /* try { // try from 00a7a14c to 00b7a157 has its CatchHandler @ 00a7a194 */
  *(undefined4 *)(param_1 + 0x2c) = 0xbf800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
                    /* try { // try from 00a7a158 to 00b7a19b has its CatchHandler @ 00a7a034 */
  if (p_Var6 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var6 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7a0fc with catch @ 00a7a194
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7a124 with catch @ 00a7a194
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7a14c with catch @ 00a7a194
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7a09c with catch @ 00a7a198
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7a0c8 with catch @ 00a7a198
                        */
  return this;
}

