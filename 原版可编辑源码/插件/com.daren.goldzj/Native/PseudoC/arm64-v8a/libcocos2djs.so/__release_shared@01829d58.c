
/* std::__ndk1::__shared_weak_count::__release_shared() */

void __thiscall std::__ndk1::__shared_weak_count::__release_shared(__shared_weak_count *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  __shared_weak_count *p_Var4;
  
  p_Var4 = this + 8;
  do {
    lVar3 = *(long *)p_Var4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(p_Var4,0x10);
    if (bVar2) {
      *(long *)p_Var4 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 != 0) {
    return;
  }
  p_Var4 = this + 0x10;
  (**(code **)(*(long *)this + 0x10))(this);
  if (*(long *)p_Var4 != 0) {
    do {
      lVar3 = *(long *)p_Var4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(p_Var4,0x10);
      if (bVar2) {
        *(long *)p_Var4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01829dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x20))(this);
  return;
}

