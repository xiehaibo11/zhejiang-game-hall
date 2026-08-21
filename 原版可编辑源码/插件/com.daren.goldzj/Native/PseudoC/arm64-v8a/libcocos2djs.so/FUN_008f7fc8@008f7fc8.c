
void FUN_008f7fc8(undefined8 *param_1)

{
  __shared_weak_count *p_Var1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *this;
  
  this = (__shared_weak_count *)param_1[5];
  *param_1 = &PTR_FUN_01c68128;
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      bVar2 = *(byte *)(param_1 + 1);
      goto joined_r0x008f8008;
    }
  }
  bVar2 = *(byte *)(param_1 + 1);
joined_r0x008f8008:
  if ((bVar2 & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}

