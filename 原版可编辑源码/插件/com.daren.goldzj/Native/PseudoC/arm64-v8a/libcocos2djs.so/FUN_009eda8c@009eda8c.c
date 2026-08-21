
void FUN_009eda8c(undefined8 *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = (__shared_weak_count *)param_1[3];
  *param_1 = &PTR_FUN_01c6c2c8;
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
                    /* try { // try from 009edad8 to 00aedb2b has its CatchHandler @ 009edad8
                       catch() { ... } // from try @ 009edad8 with catch @ 009edad8
                       catch() { ... } // from try @ 009edb84 with catch @ 009edad8 */
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}

