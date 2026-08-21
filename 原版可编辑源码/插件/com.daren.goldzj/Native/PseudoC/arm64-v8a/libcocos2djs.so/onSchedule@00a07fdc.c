
/* universe::HttpTask::onSchedule() */

undefined8 __thiscall universe::HttpTask::onSchedule(HttpTask *this)

{
  HttpTask HVar1;
  int iVar2;
  int *piVar3;
  HttpTask *pHVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = **(long **)(this + 0x78);
  universe::core::Service::_curWorkerIndex::__tls_init();
  piVar3 = (int *)__emutls_get_address(__emutls_v__ZN8universe4core7Service15_curWorkerIndexE);
  lVar5 = *(long *)(lVar5 + (long)*piVar3 * 8);
                    /* catch() { ... } // from try @ 00a07e5c with catch @ 00a0801c */
  if (lVar5 == 0) {
    lVar5 = FUN_00a0ef74();
    if (lVar5 == 0) {
      this[0x68] = (HttpTask)0x1;
      return 1;
    }
                    /* catch() { ... } // from try @ 00a07e54 with catch @ 00a0802c */
                    /* catch() { ... } // from try @ 00a07e48 with catch @ 00a08030 */
    lVar6 = **(long **)(this + 0x78);
                    /* catch() { ... } // from try @ 00a07e30 with catch @ 00a08034 */
    universe::core::Service::_curWorkerIndex::__tls_init();
    piVar3 = (int *)__emutls_get_address(__emutls_v__ZN8universe4core7Service15_curWorkerIndexE);
    *(long *)(lVar6 + (long)*piVar3 * 8) = lVar5;
  }
  FUN_00a0f02c(lVar5,0x2711,this);
  FUN_00a0f02c(lVar5,0x2b,1);
  FUN_00a0f02c(lVar5,0x2d,1);
  FUN_00a0f02c(lVar5,99,1);
  FUN_00a0f02c(lVar5,0x4e,5);
  FUN_00a0f02c(lVar5,0x13,1);
  FUN_00a0f02c(lVar5,0x14,5);
  FUN_00a0f02c(lVar5,0x34,1);
  FUN_00a0f02c(lVar5,0x44,2);
  FUN_00a0f02c(lVar5,0x40,0);
  FUN_00a0f02c(lVar5,0x51,0);
  HVar1 = this[0x38];
  if (((byte)HVar1 & 1) == 0) {
    if ((byte)HVar1 >> 1 == 0) goto LAB_00a08150;
  }
  else if (*(long *)(this + 0x40) == 0) goto LAB_00a08150;
  FUN_00a0f02c(lVar5,0x2f,1);
  if (((byte)this[0x38] & 1) == 0) {
    pHVar4 = this + 0x39;
  }
  else {
    pHVar4 = *(HttpTask **)(this + 0x48);
  }
  FUN_00a0f02c(lVar5,0x271f,pHVar4);
LAB_00a08150:
  if (((byte)this[0x20] & 1) == 0) {
    pHVar4 = this + 0x21;
  }
  else {
    pHVar4 = *(HttpTask **)(this + 0x30);
  }
  FUN_00a0f02c(lVar5,0x2712,pHVar4);
  FUN_00a0f02c(lVar5,0x4e2b,FUN_00a081c4);
  iVar2 = FUN_00a0f0b4(lVar5);
  if (iVar2 != 0) {
    this[0x68] = (HttpTask)0x2;
  }
  FUN_00a0f584(lVar5);
  return 1;
}

