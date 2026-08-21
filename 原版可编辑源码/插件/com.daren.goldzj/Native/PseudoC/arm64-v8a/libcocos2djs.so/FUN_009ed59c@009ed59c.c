
void FUN_009ed59c(undefined8 *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = (__shared_weak_count *)param_1[3];
  *param_1 = &PTR_FUN_01c6c1c8;
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
                    /* try { // try from 009ed5c0 to 00aed613 has its CatchHandler @ 009ed5c0
                       catch() { ... } // from try @ 009ed5c0 with catch @ 009ed5c0
                       catch() { ... } // from try @ 009ed690 with catch @ 009ed5c0 */
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
      return;
    }
  }
  return;
}

