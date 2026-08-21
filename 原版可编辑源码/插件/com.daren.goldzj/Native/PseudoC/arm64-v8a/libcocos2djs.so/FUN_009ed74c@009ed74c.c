
void FUN_009ed74c(void *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = *(__shared_weak_count **)((long)param_1 + 0x18);
  if (this != (__shared_weak_count *)0x0) {
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
    if (lVar4 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
                    /* try { // try from 009ed78c to 00aed7df has its CatchHandler @ 009ed78c
                       catch() { ... } // from try @ 009ed78c with catch @ 009ed78c
                       catch() { ... } // from try @ 009ed85c with catch @ 009ed78c */
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
  operator_delete(param_1);
  return;
}

