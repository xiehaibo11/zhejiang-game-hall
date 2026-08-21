
void FUN_009edaf0(undefined8 *param_1)

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
                    /* try { // try from 009edb2c to 00aedb43 has its CatchHandler @ 009edc00 */
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
                    /* try { // try from 009edb4c to 00aedb57 has its CatchHandler @ 009edbfc */
  operator_delete(param_1);
  return;
}

