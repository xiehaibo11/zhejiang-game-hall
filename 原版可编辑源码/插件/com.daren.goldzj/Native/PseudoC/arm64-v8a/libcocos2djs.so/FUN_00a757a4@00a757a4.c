
void FUN_00a757a4(long param_1)

{
  __shared_weak_count *p_Var1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *p_Var6;
  
  p_Var6 = *(__shared_weak_count **)(param_1 + 0x60);
  if (p_Var6 == (__shared_weak_count *)0x0) {
LAB_00a757d4:
    p_Var6 = *(__shared_weak_count **)(param_1 + 0x50);
                    /* catch() { ... } // from try @ 00a75770 with catch @ 00a757d8 */
    if (p_Var6 == (__shared_weak_count *)0x0) goto LAB_00a75838;
LAB_00a757dc:
                    /* catch() { ... } // from try @ 00a75508 with catch @ 00a757dc */
    p_Var1 = p_Var6 + 8;
    do {
                    /* catch() { ... } // from try @ 00a754cc with catch @ 00a757e0 */
      lVar5 = *(long *)p_Var1;
                    /* catch() { ... } // from try @ 00a754c0 with catch @ 00a757e4 */
                    /* catch() { ... } // from try @ 00a755c8 with catch @ 00a757e8
                       catch() { ... } // from try @ 00a75658 with catch @ 00a757e8 */
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
                    /* catch() { ... } // from try @ 00a754a0 with catch @ 00a757ec */
    } while (cVar3 != '\0');
    if (lVar5 != 0) goto LAB_00a75838;
                    /* catch() { ... } // from try @ 00a75584 with catch @ 00a757fc */
    (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
    std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
    p_Var6 = *(__shared_weak_count **)(param_1 + 0x40);
    if (p_Var6 != (__shared_weak_count *)0x0) goto LAB_00a75840;
LAB_00a75858:
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
                    /* try { // try from 00a757d0 to 00b758eb has its CatchHandler @ 00a75444 */
    if (lVar5 != 0) goto LAB_00a757d4;
    (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
    std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
                    /* catch() { ... } // from try @ 00a75570 with catch @ 00a75830 */
    p_Var6 = *(__shared_weak_count **)(param_1 + 0x50);
                    /* catch() { ... } // from try @ 00a754d8 with catch @ 00a75834
                       catch() { ... } // from try @ 00a75638 with catch @ 00a75834
                       catch() { ... } // from try @ 00a756bc with catch @ 00a75834 */
    if (p_Var6 != (__shared_weak_count *)0x0) goto LAB_00a757dc;
LAB_00a75838:
    p_Var6 = *(__shared_weak_count **)(param_1 + 0x40);
                    /* catch() { ... } // from try @ 00a75544 with catch @ 00a7583c */
    if (p_Var6 == (__shared_weak_count *)0x0) goto LAB_00a75858;
LAB_00a75840:
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
    if (lVar5 != 0) goto LAB_00a75858;
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
      goto joined_r0x00a75894;
    }
  }
  bVar2 = *(byte *)(param_1 + 8);
joined_r0x00a75894:
  if ((bVar2 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}

