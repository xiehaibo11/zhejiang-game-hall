
/* universe::Downloader::~Downloader() */

void __thiscall universe::Downloader::~Downloader(Downloader *this)

{
  long lVar1;
  long lVar2;
  Downloader *pDVar3;
  void *pvVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 local_88;
  undefined **local_80 [4];
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009efc2c to 00aefc33 has its CatchHandler @ 009efd64 */
  local_60 = local_80;
                    /* try { // try from 009efc34 to 00aefc77 has its CatchHandler @ 009efbe4 */
  *(undefined ***)this = &PTR__Downloader_016a0f28;
  local_80[0] = &PTR_FUN_016a0ff8;
  lVar2 = core::Service::getInstance();
  uVar5 = *(long *)(lVar2 + 0xe8) - *(long *)(lVar2 + 0xe0);
  if (0 < (int)(uVar5 >> 3)) {
    uVar7 = 0;
    do {
      local_88 = *(undefined8 *)(*(long *)(this + 0x30) + uVar7 * 8);
      if (local_60 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009efc94 with catch @ 009efd60
                       catch() { ... } // from try @ 009efd18 with catch @ 009efd60 */
        FUN_009d64e4();
      }
                    /* try { // try from 009efc78 to 00aefc8f has its CatchHandler @ 009efd68 */
      (*(code *)(*local_60)[6])(local_60,&local_88);
      uVar7 = uVar7 + 1;
    } while ((uVar5 >> 3 & 0xffffffff) != uVar7);
  }
                    /* try { // try from 009efc94 to 00aefcbb has its CatchHandler @ 009efd60 */
  if (local_80 == local_60) {
    pcVar6 = (code *)(*local_60)[4];
LAB_009efcb8:
    (*pcVar6)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_60)[5];
    goto LAB_009efcb8;
  }
                    /* try { // try from 009efcbc to 00aefce3 has its CatchHandler @ 009efbe4 */
  if (((byte)this[0xa8] & 1) != 0) {
    operator_delete(*(void **)(this + 0xb8));
  }
  pDVar3 = *(Downloader **)(this + 0x90);
  if (this + 0x70 == pDVar3) {
    pcVar6 = *(code **)(*(long *)pDVar3 + 0x20);
LAB_009efcf4:
    (*pcVar6)();
  }
  else if (pDVar3 != (Downloader *)0x0) {
                    /* try { // try from 009efce4 to 00aefcf7 has its CatchHandler @ 009efd68 */
    pcVar6 = *(code **)(*(long *)pDVar3 + 0x28);
    goto LAB_009efcf4;
  }
                    /* try { // try from 009efcf8 to 00aefd17 has its CatchHandler @ 009efbe4 */
  pDVar3 = *(Downloader **)(this + 0x60);
  if (this + 0x40 == pDVar3) {
                    /* try { // try from 009efd18 to 00aefd1f has its CatchHandler @ 009efd60 */
    pcVar6 = *(code **)(*(long *)pDVar3 + 0x20);
  }
  else {
    if (pDVar3 == (Downloader *)0x0) goto LAB_009efd24;
    pcVar6 = *(code **)(*(long *)pDVar3 + 0x28);
  }
                    /* try { // try from 009efd20 to 00aefd83 has its CatchHandler @ 009efbe4 */
  (*pcVar6)();
LAB_009efd24:
  pvVar4 = *(void **)(this + 0x30);
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  Example::~Example((Example *)this);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009efc2c with catch @ 009efd64 */
  __stack_chk_fail();
}

