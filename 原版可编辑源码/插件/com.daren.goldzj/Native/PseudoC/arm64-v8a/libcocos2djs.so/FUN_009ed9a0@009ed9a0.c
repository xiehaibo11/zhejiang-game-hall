
void FUN_009ed9a0(void *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
                    /* try { // try from 009ed9ac to 00aed9c3 has its CatchHandler @ 009eda88 */
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
                    /* try { // try from 009ed9cc to 00aed9d7 has its CatchHandler @ 009eda6c */
    if (lVar4 == 0) {
                    /* try { // try from 009ed9d8 to 00aed9e3 has its CatchHandler @ 009eda68 */
      (**(code **)(*(long *)this + 0x10))(this);
                    /* try { // try from 009ed9e4 to 00aed9f3 has its CatchHandler @ 009eda70 */
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
                    /* try { // try from 009ed9f4 to 00aedad7 has its CatchHandler @ 009ed958 */
  operator_delete(param_1);
  return;
}

