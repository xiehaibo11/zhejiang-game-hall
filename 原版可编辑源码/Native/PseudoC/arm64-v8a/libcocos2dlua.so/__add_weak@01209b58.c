
/* std::__ndk1::__shared_weak_count::__add_weak() */

void __thiscall std::__ndk1::__shared_weak_count::__add_weak(__shared_weak_count *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  
  p_Var1 = this + 0x10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
    if (bVar3) {
      *(long *)p_Var1 = *(long *)p_Var1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}

