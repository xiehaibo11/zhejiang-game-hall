
void FUN_00e6ddac(long param_1)

{
  __shared_weak_count *p_Var1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *p_Var6;
  
  p_Var6 = *(__shared_weak_count **)(param_1 + 0x60);
  if (p_Var6 == (__shared_weak_count *)0x0) {
LAB_00e6dddc:
    p_Var6 = *(__shared_weak_count **)(param_1 + 0x50);
    if (p_Var6 == (__shared_weak_count *)0x0) goto LAB_00e6de40;
LAB_00e6dde4:
    p_Var1 = p_Var6 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 != 0) goto LAB_00e6de40;
    (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
    std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
    p_Var6 = *(__shared_weak_count **)(param_1 + 0x40);
    if (p_Var6 != (__shared_weak_count *)0x0) goto LAB_00e6de48;
LAB_00e6de60:
    p_Var6 = *(__shared_weak_count **)(param_1 + 0x30);
  }
  else {
    p_Var1 = p_Var6 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 != 0) goto LAB_00e6dddc;
    (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
    std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
    p_Var6 = *(__shared_weak_count **)(param_1 + 0x50);
    if (p_Var6 != (__shared_weak_count *)0x0) goto LAB_00e6dde4;
LAB_00e6de40:
    p_Var6 = *(__shared_weak_count **)(param_1 + 0x40);
    if (p_Var6 == (__shared_weak_count *)0x0) goto LAB_00e6de60;
LAB_00e6de48:
    p_Var1 = p_Var6 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 != 0) goto LAB_00e6de60;
    (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
    std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
    p_Var6 = *(__shared_weak_count **)(param_1 + 0x30);
  }
  if (p_Var6 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var6 + 8;
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
      (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
      bVar2 = *(byte *)(param_1 + 8);
      goto joined_r0x00e6de9c;
    }
  }
  bVar2 = *(byte *)(param_1 + 8);
joined_r0x00e6de9c:
  if ((bVar2 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}

