
/* std::__ndk1::condition_variable_any::~condition_variable_any() */

void __thiscall
std::__ndk1::condition_variable_any::~condition_variable_any(condition_variable_any *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this_00;
  
                    /* try { // try from 009ab5b0 to 00aab6e7 has its CatchHandler @ 009ab198 */
  this_00 = *(__shared_weak_count **)(this + 0x38);
                    /* catch() { ... } // from try @ 009ab32c with catch @ 009ab5b8 */
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      lVar4 = *(long *)p_Var1;
                    /* catch() { ... } // from try @ 009ab31c with catch @ 009ab5c8 */
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 009ab300 with catch @ 009ab5d8 */
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
                    /* catch() { ... } // from try @ 009ab2f0 with catch @ 009ab5e8 */
      __shared_weak_count::__release_weak(this_00);
    }
  }
                    /* catch() { ... } // from try @ 009ab2dc with catch @ 009ab5f8 */
  condition_variable::~condition_variable((condition_variable *)this);
  return;
}

