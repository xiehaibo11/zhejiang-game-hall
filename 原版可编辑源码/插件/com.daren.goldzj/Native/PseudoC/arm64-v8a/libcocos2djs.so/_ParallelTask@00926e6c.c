
/* cocos2d::renderer::ParallelTask::~ParallelTask() */

void __thiscall cocos2d::renderer::ParallelTask::~ParallelTask(ParallelTask *this)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  thread *this_00;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  
  *(undefined ***)this = &PTR__ParallelTask_01c69728;
  destroy(this);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0x70));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x48));
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(this + 0x28);
    puVar2 = puVar4;
    if (puVar5 != puVar4) {
      do {
        puVar5 = puVar5 + -1;
        this_00 = (thread *)*puVar5;
        *puVar5 = 0;
        if (this_00 != (thread *)0x0) {
          std::__ndk1::thread::~thread(this_00);
          operator_delete(this_00);
        }
      } while (puVar4 != puVar5);
      puVar2 = *(undefined8 **)(this + 0x20);
    }
    *(undefined8 **)(this + 0x28) = puVar4;
    operator_delete(puVar2);
  }
  puVar4 = *(undefined8 **)(this + 8);
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar5 = *(undefined8 **)(this + 0x10);
  puVar2 = puVar4;
  if (puVar5 != puVar4) {
    do {
      puVar2 = puVar5 + -3;
      plVar6 = (long *)*puVar2;
      if (plVar6 != (long *)0x0) {
        plVar7 = (long *)puVar5[-2];
        plVar1 = plVar6;
        if (plVar7 != plVar6) {
          do {
            plVar1 = (long *)plVar7[-2];
            plVar7 = plVar7 + -6;
            if (plVar7 == plVar1) {
              pcVar3 = *(code **)(*plVar1 + 0x20);
LAB_00926f4c:
              (*pcVar3)();
            }
            else if (plVar1 != (long *)0x0) {
              pcVar3 = *(code **)(*plVar1 + 0x28);
              goto LAB_00926f4c;
            }
          } while (plVar6 != plVar7);
          plVar1 = (long *)*puVar2;
        }
        puVar5[-2] = plVar6;
        operator_delete(plVar1);
      }
      puVar5 = puVar2;
    } while (puVar2 != puVar4);
    puVar2 = *(undefined8 **)(this + 8);
  }
  *(undefined8 **)(this + 0x10) = puVar4;
  operator_delete(puVar2);
  return;
}

