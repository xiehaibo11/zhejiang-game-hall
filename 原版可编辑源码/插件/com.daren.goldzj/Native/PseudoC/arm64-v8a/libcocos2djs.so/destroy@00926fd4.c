
/* cocos2d::renderer::ParallelTask::destroy() */

void __thiscall cocos2d::renderer::ParallelTask::destroy(ParallelTask *this)

{
  undefined8 *puVar1;
  thread *ptVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  
  this[0x40] = (ParallelTask)0x1;
  if (*(void **)(this + 0x38) != (void *)0x0) {
    memset(*(void **)(this + 0x38),0,(long)*(int *)(this + 0x44));
    std::__ndk1::mutex::lock((mutex *)(this + 0x48));
    std::__ndk1::condition_variable::notify_all((condition_variable *)(this + 0x70));
    std::__ndk1::mutex::unlock((mutex *)(this + 0x48));
  }
  lVar4 = *(long *)(this + 0x20);
  lVar6 = *(long *)(this + 0x28);
  uVar7 = lVar6 - lVar4;
  if (0 < (int)(uVar7 >> 3)) {
    lVar8 = 0;
    while( true ) {
      if ((lVar8 < (int)((ulong)(lVar6 - lVar4) >> 3)) &&
         (ptVar2 = *(thread **)(lVar4 + lVar8 * 8), *(long *)ptVar2 != 0)) {
        std::__ndk1::thread::join(ptVar2);
      }
      if ((uVar7 >> 3 & 0xffffffff) - 1 == lVar8) break;
      lVar4 = *(long *)(this + 0x20);
      lVar6 = *(long *)(this + 0x28);
      lVar8 = lVar8 + 1;
    }
  }
  puVar1 = *(undefined8 **)(this + 8);
  puVar9 = *(undefined8 **)(this + 0x10);
  do {
    do {
      puVar10 = puVar9;
      if (puVar10 == puVar1) {
        puVar9 = *(undefined8 **)(this + 0x20);
        puVar10 = *(undefined8 **)(this + 0x28);
        *(undefined8 **)(this + 0x10) = puVar1;
        while (puVar10 != puVar9) {
          puVar10 = puVar10 + -1;
          ptVar2 = (thread *)*puVar10;
          *puVar10 = 0;
          if (ptVar2 != (thread *)0x0) {
            std::__ndk1::thread::~thread(ptVar2);
            operator_delete(ptVar2);
          }
        }
        *(undefined8 **)(this + 0x28) = puVar9;
        if (*(void **)(this + 0x38) != (void *)0x0) {
          operator_delete(*(void **)(this + 0x38));
        }
        *(undefined8 *)(this + 0x38) = 0;
        *(undefined4 *)(this + 0x44) = 0;
        return;
      }
      puVar9 = puVar10 + -3;
      plVar11 = (long *)*puVar9;
    } while (plVar11 == (long *)0x0);
    plVar12 = (long *)puVar10[-2];
    plVar3 = plVar11;
    if (plVar12 != plVar11) {
      do {
        plVar3 = (long *)plVar12[-2];
        plVar12 = plVar12 + -6;
        if (plVar12 == plVar3) {
          pcVar5 = *(code **)(*plVar3 + 0x20);
LAB_009270c8:
          (*pcVar5)();
        }
        else if (plVar3 != (long *)0x0) {
          pcVar5 = *(code **)(*plVar3 + 0x28);
          goto LAB_009270c8;
        }
      } while (plVar11 != plVar12);
      plVar3 = (long *)*puVar9;
    }
    puVar10[-2] = plVar11;
    operator_delete(plVar3);
  } while( true );
}

