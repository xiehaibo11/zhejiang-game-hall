
/* v8::platform::DefaultForegroundTaskRunner::PopTaskFromDelayedQueueLocked(v8::base::LockGuard<v8::base::Mutex,
   (v8::base::NullBehavior)0> const&) */

void __thiscall
v8::platform::DefaultForegroundTaskRunner::PopTaskFromDelayedQueueLocked
          (DefaultForegroundTaskRunner *this,LockGuard *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  double *in_x8;
  double *pdVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  double dVar7;
  undefined1 auStack_38 [8];
  
  if (*(long *)(this + 0xd0) != *(long *)(this + 0xd8)) {
    dVar7 = (double)(**(code **)(this + 0xf0))();
    pdVar3 = *(double **)(this + 0xd0);
    if (*pdVar3 <= dVar7) {
      dVar7 = pdVar3[1];
      pdVar3[1] = 0.0;
      puVar1 = *(undefined8 **)(this + 0xd0);
      lVar6 = *(long *)(this + 0xd8);
      if (0x10 < lVar6 - (long)puVar1) {
        uVar4 = *puVar1;
        puVar5 = (undefined8 *)(lVar6 + -0x10);
        *puVar1 = *puVar5;
        *puVar5 = uVar4;
        uVar4 = puVar1[1];
        puVar1[1] = *(undefined8 *)(lVar6 + -8);
        *(undefined8 *)(lVar6 + -8) = uVar4;
        std::__ndk1::
        __sift_down<v8::platform::DefaultForegroundTaskRunner::DelayedEntryCompare&,std::__ndk1::__wrap_iter<std::__ndk1::pair<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>*>>
                  (puVar1,puVar5,auStack_38,((ulong)(lVar6 - (long)puVar1) >> 4) - 1,puVar1);
        lVar6 = *(long *)(this + 0xd8);
      }
      plVar2 = *(long **)(lVar6 + -8);
      *(undefined8 *)(lVar6 + -8) = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      *(long *)(this + 0xd8) = lVar6 + -0x10;
      goto LAB_01478fb8;
    }
  }
  dVar7 = 0.0;
LAB_01478fb8:
  *in_x8 = dVar7;
  return;
}

