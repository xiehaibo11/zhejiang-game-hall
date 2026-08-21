
/* universe::Downloader2::~Downloader2() */

void __thiscall universe::Downloader2::~Downloader2(Downloader2 *this)

{
  long lVar1;
  Downloader2 *pDVar2;
  undefined8 *puVar3;
  long *plVar4;
  thread *ptVar5;
  code *pcVar6;
  long lVar7;
  void *pvVar8;
  thread *ptVar9;
  Downloader2 *pDVar10;
  thread *ptVar11;
  
  puVar3 = *(void **)(this + 0x1b8);
  while (puVar3 != (void *)0x0) {
    pvVar8 = (void *)*puVar3;
    operator_delete(puVar3);
    puVar3 = pvVar8;
  }
  pvVar8 = *(void **)(this + 0x1a8);
  *(undefined8 *)(this + 0x1a8) = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  puVar3 = *(void **)(this + 400);
  while (puVar3 != (void *)0x0) {
    pvVar8 = (void *)*puVar3;
    operator_delete(puVar3);
    puVar3 = pvVar8;
  }
  pvVar8 = *(void **)(this + 0x180);
  *(undefined8 *)(this + 0x180) = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  puVar3 = *(void **)(this + 0x168);
  while (puVar3 != (void *)0x0) {
    plVar4 = (long *)puVar3[8];
    pvVar8 = (void *)*puVar3;
    if (puVar3 + 4 == plVar4) {
      pcVar6 = *(code **)(*plVar4 + 0x20);
LAB_0097a8c8:
      (*pcVar6)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar6 = *(code **)(*plVar4 + 0x28);
      goto LAB_0097a8c8;
    }
    operator_delete(puVar3);
    puVar3 = pvVar8;
  }
  pvVar8 = *(void **)(this + 0x158);
  *(undefined8 *)(this + 0x158) = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  puVar3 = *(void **)(this + 0x140);
  do {
    if (puVar3 == (void *)0x0) {
      pvVar8 = *(void **)(this + 0x130);
      *(undefined8 *)(this + 0x130) = 0;
      if (pvVar8 != (void *)0x0) {
        operator_delete(pvVar8);
      }
      pvVar8 = *(void **)(this + 0x110);
      if (pvVar8 != (void *)0x0) {
        *(void **)(this + 0x118) = pvVar8;
        operator_delete(pvVar8);
      }
      std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0xe0));
      std::__ndk1::mutex::~mutex((mutex *)(this + 0xb8));
      if (*(long *)(this + 0xb0) != 0) {
        lVar1 = *(long *)(this + 0xa0);
        pDVar2 = *(Downloader2 **)(this + 0xa8);
        lVar7 = *(long *)pDVar2;
        *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar1 + 8);
        **(long **)(lVar1 + 8) = lVar7;
        *(undefined8 *)(this + 0xb0) = 0;
        while (pDVar2 != this + 0xa0) {
          pDVar10 = *(Downloader2 **)(pDVar2 + 8);
          operator_delete(pDVar2);
          pDVar2 = pDVar10;
        }
      }
      std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0x70));
      std::__ndk1::mutex::~mutex((mutex *)(this + 0x48));
      if (*(long *)(this + 0x40) != 0) {
        lVar1 = *(long *)(this + 0x30);
        pDVar2 = *(Downloader2 **)(this + 0x38);
        lVar7 = *(long *)pDVar2;
        *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar1 + 8);
        **(long **)(lVar1 + 8) = lVar7;
        *(undefined8 *)(this + 0x40) = 0;
        while (pDVar2 != this + 0x30) {
          pDVar10 = *(Downloader2 **)(pDVar2 + 8);
          operator_delete(pDVar2);
          pDVar2 = pDVar10;
        }
      }
      ptVar11 = *(thread **)(this + 0x18);
      if (ptVar11 != (thread *)0x0) {
        ptVar9 = *(thread **)(this + 0x20);
        ptVar5 = ptVar11;
        if (ptVar9 != ptVar11) {
          do {
            ptVar9 = ptVar9 + -8;
            std::__ndk1::thread::~thread(ptVar9);
          } while (ptVar11 != ptVar9);
          ptVar5 = *(thread **)(this + 0x18);
        }
        *(thread **)(this + 0x20) = ptVar11;
        operator_delete(ptVar5);
      }
      ptVar11 = *(thread **)this;
      if (ptVar11 != (thread *)0x0) {
        ptVar9 = *(thread **)(this + 8);
        ptVar5 = ptVar11;
        if (ptVar9 != ptVar11) {
          do {
            ptVar9 = ptVar9 + -8;
            std::__ndk1::thread::~thread(ptVar9);
          } while (ptVar11 != ptVar9);
          ptVar5 = *(thread **)this;
        }
        *(thread **)(this + 8) = ptVar11;
        operator_delete(ptVar5);
        return;
      }
      return;
    }
    plVar4 = (long *)puVar3[8];
    pvVar8 = (void *)*puVar3;
    if (puVar3 + 4 == plVar4) {
      pcVar6 = *(code **)(*plVar4 + 0x20);
LAB_0097a920:
      (*pcVar6)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar6 = *(code **)(*plVar4 + 0x28);
      goto LAB_0097a920;
    }
    operator_delete(puVar3);
    puVar3 = pvVar8;
  } while( true );
}

