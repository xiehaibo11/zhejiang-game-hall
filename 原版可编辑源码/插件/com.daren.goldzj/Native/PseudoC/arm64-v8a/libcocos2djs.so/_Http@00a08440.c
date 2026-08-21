
/* universe::Http::~Http() */

void __thiscall universe::Http::~Http(Http *this)

{
  long lVar1;
  long lVar2;
  Http *pHVar3;
  void *pvVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 local_88;
  undefined **local_80 [4];
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = local_80;
                    /* catch() { ... } // from try @ 00a083b8 with catch @ 00a08480 */
  *(undefined ***)this = &PTR__Http_01c6cbc8;
  local_80[0] = &PTR_FUN_01c6cc48;
  lVar2 = core::Service::getInstance();
  uVar5 = *(long *)(lVar2 + 0xe8) - *(long *)(lVar2 + 0xe0);
  if (0 < (int)(uVar5 >> 3)) {
    lVar2 = 0;
    do {
      local_88 = *(undefined8 *)(*(long *)(this + 0x30) + lVar2 * 8);
      if (local_60 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
      (*(code *)(*local_60)[6])(local_60,&local_88);
      lVar2 = lVar2 + 1;
    } while (lVar2 < (long)(uVar5 * 0x20000000) >> 0x20);
  }
  if (local_80 == local_60) {
    pcVar6 = (code *)(*local_60)[4];
LAB_00a08508:
    (*pcVar6)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_60)[5];
    goto LAB_00a08508;
  }
  pHVar3 = *(Http **)(this + 0x60);
  if (this + 0x40 == pHVar3) {
    pcVar6 = *(code **)(*(long *)pHVar3 + 0x20);
  }
  else {
    if (pHVar3 == (Http *)0x0) goto LAB_00a08538;
    pcVar6 = *(code **)(*(long *)pHVar3 + 0x28);
  }
  (*pcVar6)();
LAB_00a08538:
  pvVar4 = *(void **)(this + 0x30);
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  Example::~Example((Example *)this);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

