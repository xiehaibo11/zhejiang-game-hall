
/* cocos2d::Scheduler::~Scheduler() */

void __thiscall cocos2d::Scheduler::~Scheduler(Scheduler *this)

{
  long *plVar1;
  void *pvVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  *(undefined ***)this = &PTR__Scheduler_017237b0;
  unscheduleAllWithMinPriority(this,-0x80000000);
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xa8));
  plVar4 = *(long **)(this + 0x90);
  if (plVar4 != (long *)0x0) {
    plVar6 = *(long **)(this + 0x98);
    plVar1 = plVar4;
    if (plVar6 != plVar4) {
      do {
        plVar1 = (long *)plVar6[-2];
        plVar6 = plVar6 + -6;
        if (plVar6 == plVar1) {
          pcVar3 = *(code **)(*plVar1 + 0x20);
LAB_00fb3070:
          (*pcVar3)();
        }
        else if (plVar1 != (long *)0x0) {
          pcVar3 = *(code **)(*plVar1 + 0x28);
          goto LAB_00fb3070;
        }
      } while (plVar4 != plVar6);
      plVar1 = *(long **)(this + 0x90);
    }
    *(long **)(this + 0x98) = plVar4;
    operator_delete(plVar1);
  }
  puVar5 = *(undefined8 **)(this + 0x78);
  puVar7 = *(undefined8 **)(this + 0x80);
  if (puVar5 != puVar7) {
    do {
      Ref::release((Ref *)*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar7 != puVar5);
    puVar5 = *(undefined8 **)(this + 0x78);
  }
  *(undefined8 **)(this + 0x80) = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x80) = puVar5;
    operator_delete(puVar5);
  }
  pvVar2 = *(void **)(this + 0x48);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar2;
    operator_delete(pvVar2);
  }
  Ref::~Ref((Ref *)this);
  return;
}

