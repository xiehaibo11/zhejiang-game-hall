
/* v8::platform::DefaultForegroundTaskRunner::Terminate() */

void __thiscall
v8::platform::DefaultForegroundTaskRunner::Terminate(DefaultForegroundTaskRunner *this)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_18 [8];
  
  base::Mutex::Lock((Mutex *)(this + 0xc));
  this[8] = (DefaultForegroundTaskRunner)0x1;
  if (*(long *)(this + 0x90) != 0) {
    uVar3 = *(ulong *)(this + 0x88);
    do {
      lVar5 = *(long *)(*(long *)(this + 0x70) + (uVar3 >> 6 & 0x3fffffffffffff8));
      lVar4 = (uVar3 & 0x1ff) * 8;
      plVar1 = *(long **)(lVar5 + lVar4);
      *(undefined8 *)(lVar5 + lVar4) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      lVar4 = *(long *)(this + 0x90) + -1;
      uVar3 = *(long *)(this + 0x88) + 1;
      *(ulong *)(this + 0x88) = uVar3;
      *(long *)(this + 0x90) = lVar4;
      if (0x3ff < uVar3) {
        operator_delete((void *)**(undefined8 **)(this + 0x70));
        lVar4 = *(long *)(this + 0x90);
        uVar3 = *(long *)(this + 0x88) - 0x200;
        *(long *)(this + 0x70) = *(long *)(this + 0x70) + 8;
        *(ulong *)(this + 0x88) = uVar3;
      }
    } while (lVar4 != 0);
  }
  puVar2 = *(undefined8 **)(this + 0xd0);
  puVar8 = *(undefined8 **)(this + 0xd8);
  if (puVar2 != puVar8) {
    do {
      if (0x10 < (long)puVar8 - (long)puVar2) {
        uVar6 = *puVar2;
        puVar7 = puVar8 + -2;
        *puVar2 = *puVar7;
        *puVar7 = uVar6;
        uVar6 = puVar2[1];
        puVar2[1] = puVar8[-1];
        puVar8[-1] = uVar6;
        std::__ndk1::
        __sift_down<v8::platform::DefaultForegroundTaskRunner::DelayedEntryCompare&,std::__ndk1::__wrap_iter<std::__ndk1::pair<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>*>>
                  (puVar2,puVar7,auStack_18,((ulong)((long)puVar8 - (long)puVar2) >> 4) - 1,puVar2);
        puVar8 = *(undefined8 **)(this + 0xd8);
      }
      plVar1 = (long *)puVar8[-1];
      puVar8[-1] = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      puVar2 = *(undefined8 **)(this + 0xd0);
      puVar8 = puVar8 + -2;
      *(undefined8 **)(this + 0xd8) = puVar8;
    } while (puVar2 != puVar8);
  }
  if (*(long *)(this + 200) != 0) {
    uVar3 = *(ulong *)(this + 0xc0);
    do {
      lVar5 = *(long *)(*(long *)(this + 0xa8) + (uVar3 >> 6 & 0x3fffffffffffff8));
      lVar4 = (uVar3 & 0x1ff) * 8;
      plVar1 = *(long **)(lVar5 + lVar4);
      *(undefined8 *)(lVar5 + lVar4) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      lVar4 = *(long *)(this + 200) + -1;
      uVar3 = *(long *)(this + 0xc0) + 1;
      *(ulong *)(this + 0xc0) = uVar3;
      *(long *)(this + 200) = lVar4;
      if (0x3ff < uVar3) {
        operator_delete((void *)**(undefined8 **)(this + 0xa8));
        lVar4 = *(long *)(this + 200);
        uVar3 = *(long *)(this + 0xc0) - 0x200;
        *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + 8;
        *(ulong *)(this + 0xc0) = uVar3;
      }
    } while (lVar4 != 0);
  }
  base::Mutex::Unlock((Mutex *)(this + 0xc));
  return;
}

