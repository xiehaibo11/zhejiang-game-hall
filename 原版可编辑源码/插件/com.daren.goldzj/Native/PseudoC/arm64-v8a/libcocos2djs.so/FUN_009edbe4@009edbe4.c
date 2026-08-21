
void FUN_009edbe4(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = *(__shared_weak_count **)(param_1 + 0x18);
  if (this != (__shared_weak_count *)0x0) {
                    /* catch() { ... } // from try @ 009edb58 with catch @ 009edbf8 */
    p_Var1 = this + 8;
    do {
                    /* catch() { ... } // from try @ 009edb4c with catch @ 009edbfc */
      lVar4 = *(long *)p_Var1;
                    /* catch() { ... } // from try @ 009edb2c with catch @ 009edc00 */
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
                    /* catch() { ... } // from try @ 009edb70 with catch @ 009edc10 */
  return;
}

