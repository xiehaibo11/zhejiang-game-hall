
void FUN_008f5f50(byte *param_1)

{
  __shared_weak_count *p_Var1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *p_Var6;
  
  p_Var6 = *(__shared_weak_count **)(param_1 + 0x68);
  if (p_Var6 == (__shared_weak_count *)0x0) {
LAB_008f5f80:
    bVar2 = param_1[0x48];
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
    if (lVar5 != 0) goto LAB_008f5f80;
    (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
    std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
    bVar2 = param_1[0x48];
  }
  if ((bVar2 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x58));
  }
  p_Var6 = *(__shared_weak_count **)(param_1 + 0x38);
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
      bVar2 = param_1[0x18];
      goto joined_r0x008f600c;
    }
  }
  bVar2 = param_1[0x18];
joined_r0x008f600c:
  if ((bVar2 & 1) == 0) {
    bVar2 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar2 = *param_1;
  }
  if ((bVar2 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}

