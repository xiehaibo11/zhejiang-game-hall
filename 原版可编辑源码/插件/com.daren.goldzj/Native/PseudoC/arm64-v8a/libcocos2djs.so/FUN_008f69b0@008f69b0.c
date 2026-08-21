
void FUN_008f69b0(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *p_Var5;
  
  p_Var5 = *(__shared_weak_count **)(param_1 + 0x60);
  if (p_Var5 == (__shared_weak_count *)0x0) {
LAB_008f69e0:
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) goto LAB_008f69e8;
LAB_008f6a1c:
    operator_delete(*(void **)(param_1 + 0x50));
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) goto LAB_008f69f0;
LAB_008f6a2c:
    operator_delete(*(void **)(param_1 + 0x38));
    p_Var5 = *(__shared_weak_count **)(param_1 + 0x20);
  }
  else {
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
    if (lVar4 != 0) goto LAB_008f69e0;
    (**(code **)(*(long *)p_Var5 + 0x10))(p_Var5);
    std::__ndk1::__shared_weak_count::__release_weak(p_Var5);
    if ((*(byte *)(param_1 + 0x40) & 1) != 0) goto LAB_008f6a1c;
LAB_008f69e8:
    if ((*(byte *)(param_1 + 0x28) & 1) != 0) goto LAB_008f6a2c;
LAB_008f69f0:
    p_Var5 = *(__shared_weak_count **)(param_1 + 0x20);
  }
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
      p_Var5 = *(__shared_weak_count **)(param_1 + 0x10);
      goto joined_r0x008f6ab0;
    }
  }
  p_Var5 = *(__shared_weak_count **)(param_1 + 0x10);
joined_r0x008f6ab0:
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
      return;
    }
  }
  return;
}

