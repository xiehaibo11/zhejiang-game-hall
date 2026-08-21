
/* std::__ndk1::__shared_count::__release_shared() */

undefined8 __thiscall std::__ndk1::__shared_count::__release_shared(__shared_count *this)

{
  __shared_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
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
  if (lVar4 != 0) {
    return 0;
  }
  (**(code **)(*(long *)this + 0x10))();
  return 1;
}

