
/* universe::Downloader::~Downloader() */

void __thiscall universe::Downloader::~Downloader(Downloader *this)

{
  long lVar1;
  long lVar2;
  Downloader *pDVar3;
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
  *(undefined ***)this = &PTR__Downloader_01c6ca18;
  local_80[0] = &PTR_FUN_01c6cae8;
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
LAB_00a075ac:
    (*pcVar6)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_60)[5];
    goto LAB_00a075ac;
  }
  if (((byte)this[0xa8] & 1) != 0) {
    operator_delete(*(void **)(this + 0xb8));
  }
  pDVar3 = *(Downloader **)(this + 0x90);
  if (this + 0x70 == pDVar3) {
    pcVar6 = *(code **)(*(long *)pDVar3 + 0x20);
LAB_00a075e8:
    (*pcVar6)();
  }
  else if (pDVar3 != (Downloader *)0x0) {
    pcVar6 = *(code **)(*(long *)pDVar3 + 0x28);
    goto LAB_00a075e8;
  }
  pDVar3 = *(Downloader **)(this + 0x60);
  if (this + 0x40 == pDVar3) {
    pcVar6 = *(code **)(*(long *)pDVar3 + 0x20);
  }
  else {
    if (pDVar3 == (Downloader *)0x0) goto LAB_00a07618;
    pcVar6 = *(code **)(*(long *)pDVar3 + 0x28);
  }
  (*pcVar6)();
LAB_00a07618:
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

