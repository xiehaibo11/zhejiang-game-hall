
/* universe::Http::~Http() */

void __thiscall universe::Http::~Http(Http *this)

{
  long lVar1;
  long lVar2;
  Http *pHVar3;
  void *pvVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 local_88;
  undefined **local_80 [4];
  undefined ***local_60;
  long local_48;
  
                    /* try { // try from 009f0ae4 to 00af0b07 has its CatchHandler @ 009f0a00 */
                    /* catch() { ... } // from try @ 009f0a50 with catch @ 009f0aec
                       catch() { ... } // from try @ 009f0ad0 with catch @ 009f0aec */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = local_80;
  *(undefined ***)this = &PTR__Http_016a10c8;
  local_80[0] = &PTR_FUN_016a1148;
  lVar2 = core::Service::getInstance();
  uVar5 = *(long *)(lVar2 + 0xe8) - *(long *)(lVar2 + 0xe0);
  if (0 < (int)(uVar5 >> 3)) {
    uVar7 = 0;
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
  if (local_80 == local_60) {
    pcVar6 = (code *)(*local_60)[4];
LAB_009f0ba0:
    (*pcVar6)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_60)[5];
    goto LAB_009f0ba0;
  }
  pHVar3 = *(Http **)(this + 0x60);
  if (this + 0x40 == pHVar3) {
    pcVar6 = *(code **)(*(long *)pHVar3 + 0x20);
  }
  else {
    if (pHVar3 == (Http *)0x0) goto LAB_009f0bd0;
    pcVar6 = *(code **)(*(long *)pHVar3 + 0x28);
  }
  (*pcVar6)();
LAB_009f0bd0:
  pvVar4 = *(void **)(this + 0x30);
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
                    /* try { // try from 009f0bdc to 00af0c33 has its CatchHandler @ 009f0bdc
                       catch() { ... } // from try @ 009f0bdc with catch @ 009f0bdc
                       catch() { ... } // from try @ 009f0c38 with catch @ 009f0bdc */
  Example::~Example((Example *)this);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

