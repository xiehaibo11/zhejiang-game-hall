
void FUN_00a79c38(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = *(__shared_weak_count **)(param_1 + 0x18);
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
                    /* catch() { ... } // from try @ 00a79bb0 with catch @ 00a79c5c */
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 00a79b88 with catch @ 00a79c70 */
                    /* catch() { ... } // from try @ 00a79bdc with catch @ 00a79c74 */
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
                    /* catch() { ... } // from try @ 00a79ba0 with catch @ 00a79c6c */
  return;
}

