
/* std::__ndk1::__shared_weak_count::lock() */

__shared_weak_count * __thiscall std::__ndk1::__shared_weak_count::lock(__shared_weak_count *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  p_Var1 = this + 8;
  lVar4 = *(long *)p_Var1;
  do {
    while( true ) {
      if (lVar4 == -1) {
        return (__shared_weak_count *)0x0;
      }
      lVar5 = *(long *)p_Var1;
      if (lVar5 == lVar4) break;
      ClearExclusiveLocal();
      lVar4 = lVar5;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
    if (bVar3) {
      *(long *)p_Var1 = lVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    lVar4 = lVar5;
  } while (cVar2 != '\0');
  return this;
}

