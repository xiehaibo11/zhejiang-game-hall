
void FUN_015e899c(undefined8 *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *p_Var5;
  
  *(undefined ***)(param_1 + -4) = &PTR_FUN_01cc9ac0;
  p_Var5 = (__shared_weak_count *)param_1[4];
  *param_1 = &PTR_FUN_01cc9af0;
  if (p_Var5 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var5 + 8;
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
      (**(code **)(*(long *)p_Var5 + 0x10))(p_Var5);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var5);
      p_Var5 = (__shared_weak_count *)param_1[2];
      goto joined_r0x015e8a38;
    }
  }
  p_Var5 = (__shared_weak_count *)param_1[2];
joined_r0x015e8a38:
  if (p_Var5 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var5 + 8;
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
      (**(code **)(*(long *)p_Var5 + 0x10))(p_Var5);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var5);
    }
  }
  v8::internal::Cancelable::~Cancelable((Cancelable *)(param_1 + -4));
  return;
}

