
/* universe::Decompressor::~Decompressor() */

void __thiscall universe::Decompressor::~Decompressor(Decompressor *this)

{
  long lVar1;
  long lVar2;
  Decompressor *pDVar3;
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
                    /* try { // try from 009edddc to 00aeddf3 has its CatchHandler @ 009ede9c */
  local_60 = local_80;
  *(undefined ***)this = &PTR__Decompressor_016a0dc8;
  local_80[0] = &PTR_FUN_016a0e48;
  lVar2 = core::Service::getInstance();
                    /* try { // try from 009eddf8 to 00aede0f has its CatchHandler @ 009ede98 */
  uVar5 = *(long *)(lVar2 + 0xe8) - *(long *)(lVar2 + 0xe0);
  if (0 < (int)(uVar5 >> 3)) {
    uVar7 = 0;
                    /* try { // try from 009ede10 to 00aede43 has its CatchHandler @ 009edd8c */
    do {
      local_88 = *(undefined8 *)(*(long *)(this + 0x30) + uVar7 * 8);
      if (local_60 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      (*(code *)(*local_60)[6])(local_60,&local_88);
      uVar7 = uVar7 + 1;
    } while ((uVar5 >> 3 & 0xffffffff) != uVar7);
  }
                    /* try { // try from 009ede44 to 00aede57 has its CatchHandler @ 009ede9c */
  if (local_80 == local_60) {
    pcVar6 = (code *)(*local_60)[4];
LAB_009ede6c:
    (*pcVar6)();
  }
  else if (local_60 != (undefined ***)0x0) {
                    /* try { // try from 009ede58 to 00aedeb7 has its CatchHandler @ 009edd8c */
    pcVar6 = (code *)(*local_60)[5];
    goto LAB_009ede6c;
  }
  pDVar3 = *(Decompressor **)(this + 0x60);
  if (this + 0x40 == pDVar3) {
    pcVar6 = *(code **)(*(long *)pDVar3 + 0x20);
  }
  else {
    if (pDVar3 == (Decompressor *)0x0) goto LAB_009ede9c;
    pcVar6 = *(code **)(*(long *)pDVar3 + 0x28);
  }
                    /* catch() { ... } // from try @ 009eddf8 with catch @ 009ede98 */
  (*pcVar6)();
LAB_009ede9c:
                    /* catch() { ... } // from try @ 009edddc with catch @ 009ede9c
                       catch() { ... } // from try @ 009ede44 with catch @ 009ede9c */
  pvVar4 = *(void **)(this + 0x30);
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  Example::~Example((Example *)this);
                    /* try { // try from 009edeb8 to 00aedf07 has its CatchHandler @ 009edeb8
                       catch() { ... } // from try @ 009edeb8 with catch @ 009edeb8
                       catch() { ... } // from try @ 009edf50 with catch @ 009edeb8
                       catch() { ... } // from try @ 009edf98 with catch @ 009edeb8 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

