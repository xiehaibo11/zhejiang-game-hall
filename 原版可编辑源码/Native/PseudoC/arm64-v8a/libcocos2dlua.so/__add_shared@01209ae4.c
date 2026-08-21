
/* std::__ndk1::__shared_count::__add_shared() */

void __thiscall std::__ndk1::__shared_count::__add_shared(__shared_count *this)

{
  __shared_count *p_Var1;
  char cVar2;
  bool bVar3;
  
  p_Var1 = this + 8;
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

