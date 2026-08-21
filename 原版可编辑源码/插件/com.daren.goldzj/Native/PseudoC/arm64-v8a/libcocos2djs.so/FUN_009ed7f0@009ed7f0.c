
void FUN_009ed7f0(undefined8 *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = (__shared_weak_count *)param_1[3];
                    /* try { // try from 009ed800 to 00aed80b has its CatchHandler @ 009ed8d4 */
  *param_1 = &PTR_FUN_01c6c248;
                    /* try { // try from 009ed80c to 00aed817 has its CatchHandler @ 009ed8d0 */
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
                    /* try { // try from 009ed824 to 00aed82b has its CatchHandler @ 009ed900 */
    if (lVar4 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
                    /* try { // try from 009ed84c to 00aed85b has its CatchHandler @ 009ed900 */
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
                    /* try { // try from 009ed82c to 00aed83b has its CatchHandler @ 009ed8d8 */
  return;
}

