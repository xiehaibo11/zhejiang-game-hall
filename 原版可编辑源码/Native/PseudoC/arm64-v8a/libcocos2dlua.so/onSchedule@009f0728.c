
/* universe::HttpTask::onSchedule() */

undefined8 __thiscall universe::HttpTask::onSchedule(HttpTask *this)

{
  HttpTask HVar1;
  int iVar2;
  int *piVar3;
  HttpTask *pHVar4;
  long lVar5;
  long lVar6;
  
                    /* catch() { ... } // from try @ 009f06d4 with catch @ 009f0734 */
  lVar5 = **(long **)(this + 0x78);
  universe::core::Service::_curWorkerIndex::__tls_init();
  piVar3 = (int *)__emutls_get_address(__emutls_v__ZN8universe4core7Service15_curWorkerIndexE);
  lVar5 = *(long *)(lVar5 + (long)*piVar3 * 8);
  if (lVar5 == 0) {
    lVar5 = FUN_00a2495c();
    if (lVar5 == 0) {
                    /* try { // try from 009f0908 to 00af092b has its CatchHandler @ 009f0824 */
      this[0x68] = (HttpTask)0x1;
      return 1;
    }
    lVar6 = **(long **)(this + 0x78);
    universe::core::Service::_curWorkerIndex::__tls_init();
    piVar3 = (int *)__emutls_get_address(__emutls_v__ZN8universe4core7Service15_curWorkerIndexE);
    *(long *)(lVar6 + (long)*piVar3 * 8) = lVar5;
  }
  FUN_00a24a14(lVar5,0x2711,this);
  FUN_00a24a14(lVar5,0x2b,1);
  FUN_00a24a14(lVar5,0x2d,1);
  FUN_00a24a14(lVar5,99,1);
  FUN_00a24a14(lVar5,0x4e,5);
  FUN_00a24a14(lVar5,0x13,1);
  FUN_00a24a14(lVar5,0x14,5);
  FUN_00a24a14(lVar5,0x34,1);
                    /* try { // try from 009f0824 to 00af0873 has its CatchHandler @ 009f0824
                       catch() { ... } // from try @ 009f0824 with catch @ 009f0824
                       catch() { ... } // from try @ 009f089c with catch @ 009f0824
                       catch() { ... } // from try @ 009f0908 with catch @ 009f0824 */
  FUN_00a24a14(lVar5,0x44,2);
  FUN_00a24a14(lVar5,0x40,0);
  FUN_00a24a14(lVar5,0x51,0);
  HVar1 = this[0x38];
  if (((byte)HVar1 & 1) == 0) {
    if ((byte)HVar1 >> 1 == 0) goto LAB_009f089c;
  }
  else if (*(long *)(this + 0x40) == 0) goto LAB_009f089c;
                    /* try { // try from 009f0874 to 00af089b has its CatchHandler @ 009f0910 */
  FUN_00a24a14(lVar5,0x2f,1);
  if (((byte)this[0x38] & 1) == 0) {
    pHVar4 = this + 0x39;
  }
  else {
    pHVar4 = *(HttpTask **)(this + 0x48);
  }
  FUN_00a24a14(lVar5,0x271f,pHVar4);
LAB_009f089c:
                    /* try { // try from 009f089c to 00af08f3 has its CatchHandler @ 009f0824 */
  if (((byte)this[0x20] & 1) == 0) {
    pHVar4 = this + 0x21;
  }
  else {
    pHVar4 = *(HttpTask **)(this + 0x30);
  }
  FUN_00a24a14(lVar5,0x2712,pHVar4);
  FUN_00a24a14(lVar5,0x4e2b,FUN_009f0910);
  iVar2 = FUN_00a24a9c(lVar5);
  if (iVar2 != 0) {
    this[0x68] = (HttpTask)0x2;
  }
  FUN_00a24f6c(lVar5);
                    /* try { // try from 009f08f4 to 00af0907 has its CatchHandler @ 009f0910 */
  return 1;
}

