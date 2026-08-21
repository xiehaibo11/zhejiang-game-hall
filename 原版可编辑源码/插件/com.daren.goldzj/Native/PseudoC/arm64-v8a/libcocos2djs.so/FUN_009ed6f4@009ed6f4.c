
void FUN_009ed6f4(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = *(__shared_weak_count **)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 009ed640 with catch @ 009ed704 */
  if (this != (__shared_weak_count *)0x0) {
                    /* catch() { ... } // from try @ 009ed634 with catch @ 009ed708 */
    p_Var1 = this + 8;
    do {
                    /* catch() { ... } // from try @ 009ed660 with catch @ 009ed70c */
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 009ed658 with catch @ 009ed734
                       catch() { ... } // from try @ 009ed680 with catch @ 009ed734 */
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
                    /* catch() { ... } // from try @ 009ed614 with catch @ 009ed724 */
  return;
}

