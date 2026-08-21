
void FUN_009ed600(undefined8 *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = (__shared_weak_count *)param_1[3];
                    /* try { // try from 009ed614 to 00aed62b has its CatchHandler @ 009ed724 */
  *param_1 = &PTR_FUN_01c6c1c8;
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
                    /* try { // try from 009ed634 to 00aed63f has its CatchHandler @ 009ed708 */
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
                    /* try { // try from 009ed640 to 00aed64b has its CatchHandler @ 009ed704 */
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
                    /* try { // try from 009ed658 to 00aed65f has its CatchHandler @ 009ed734 */
                    /* try { // try from 009ed660 to 00aed66f has its CatchHandler @ 009ed70c */
  operator_delete(param_1);
  return;
}

