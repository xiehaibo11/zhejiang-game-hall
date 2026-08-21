
void FUN_015fe0a0(long param_1,char *param_2)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  __shared_weak_count *this;
  long *plVar4;
  long lVar5;
  long local_30;
  __shared_weak_count *local_28;
  
  if (*param_2 == '\x01') {
    local_30 = 0;
    local_28 = (__shared_weak_count *)0x0;
    if ((*(__shared_weak_count **)(param_1 + 0x18) != (__shared_weak_count *)0x0) &&
       (local_28 = (__shared_weak_count *)
                   std::__ndk1::__shared_weak_count::lock(*(__shared_weak_count **)(param_1 + 0x18))
       , local_28 != (__shared_weak_count *)0x0)) {
      local_30 = *(long *)(param_1 + 0x10);
      if (local_30 != 0) {
        plVar4 = *(long **)(param_1 + 0x40);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_008589d0();
        }
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_30);
        if (local_28 == (__shared_weak_count *)0x0) {
          return;
        }
      }
      this = local_28;
      p_Var1 = local_28 + 8;
      do {
        lVar5 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*(long *)local_28 + 0x10))(local_28);
        std::__ndk1::__shared_weak_count::__release_weak(this);
      }
    }
  }
  return;
}

