
/* v8::platform::DefaultForegroundTaskRunner::PopTaskFromQueue(v8::platform::MessageLoopBehavior) */

void v8::platform::DefaultForegroundTaskRunner::PopTaskFromQueue
               (undefined8 *param_1,long param_2,ulong param_3)

{
  Mutex *this;
  undefined8 *puVar1;
  long *plVar2;
  double *pdVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  double dVar10;
  ulong uVar11;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  this = (Mutex *)(param_2 + 0xc);
  base::Mutex::Lock(this);
  if (*(long *)(param_2 + 0xd0) != *(long *)(param_2 + 0xd8)) {
    dVar10 = (double)(**(code **)(param_2 + 0xf0))();
    pdVar3 = *(double **)(param_2 + 0xd0);
    if (*pdVar3 <= dVar10) {
      plVar7 = (long *)pdVar3[1];
      pdVar3[1] = 0.0;
      puVar1 = *(undefined8 **)(param_2 + 0xd0);
      lVar9 = *(long *)(param_2 + 0xd8);
      if (0x10 < lVar9 - (long)puVar1) {
        uVar4 = *puVar1;
        puVar8 = (undefined8 *)(lVar9 + -0x10);
        *puVar1 = *puVar8;
        *puVar8 = uVar4;
        uVar4 = puVar1[1];
        puVar1[1] = *(undefined8 *)(lVar9 + -8);
        *(undefined8 *)(lVar9 + -8) = uVar4;
        std::__ndk1::
        __sift_down<v8::platform::DefaultForegroundTaskRunner::DelayedEntryCompare&,std::__ndk1::__wrap_iter<std::__ndk1::pair<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>*>>
                  (puVar1,puVar8,auStack_60,((ulong)(lVar9 - (long)puVar1) >> 4) - 1,puVar1);
        lVar9 = *(long *)(param_2 + 0xd8);
      }
      plVar2 = *(long **)(lVar9 + -8);
      *(undefined8 *)(lVar9 + -8) = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      *(long *)(param_2 + 0xd8) = lVar9 + -0x10;
      if (plVar7 != (long *)0x0) {
        if (*(char *)(param_2 + 8) != '\0') goto LAB_01478d04;
        do {
          lVar9 = *(long *)(param_2 + 0x70);
          lVar6 = *(long *)(param_2 + 0x78) - lVar9;
          uVar11 = 0;
          if (lVar6 != 0) {
            uVar11 = lVar6 * 0x40 - 1;
          }
          uVar5 = *(long *)(param_2 + 0x90) + *(long *)(param_2 + 0x88);
          if (uVar11 == uVar5) {
            std::__ndk1::
            deque<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>
            ::__add_back_capacity
                      ((deque<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>
                        *)(param_2 + 0x68));
            lVar9 = *(long *)(param_2 + 0x70);
            uVar5 = *(long *)(param_2 + 0x88) + *(long *)(param_2 + 0x90);
          }
          *(long **)(*(long *)(lVar9 + (uVar5 >> 6 & 0x3fffffffffffff8)) + (uVar5 & 0x1ff) * 8) =
               plVar7;
          *(long *)(param_2 + 0x90) = *(long *)(param_2 + 0x90) + 1;
          base::ConditionVariable::NotifyOne((ConditionVariable *)(param_2 + 0x34));
          while( true ) {
            if (*(long *)(param_2 + 0xd0) == *(long *)(param_2 + 0xd8)) goto LAB_01478e0c;
            dVar10 = (double)(**(code **)(param_2 + 0xf0))();
            pdVar3 = *(double **)(param_2 + 0xd0);
            if (dVar10 < *pdVar3) goto LAB_01478e0c;
            plVar7 = (long *)pdVar3[1];
            pdVar3[1] = 0.0;
            puVar1 = *(undefined8 **)(param_2 + 0xd0);
            lVar9 = *(long *)(param_2 + 0xd8);
            if (0x10 < lVar9 - (long)puVar1) {
              uVar4 = *puVar1;
              puVar8 = (undefined8 *)(lVar9 + -0x10);
              *puVar1 = *puVar8;
              *puVar8 = uVar4;
              uVar4 = puVar1[1];
              puVar1[1] = *(undefined8 *)(lVar9 + -8);
              *(undefined8 *)(lVar9 + -8) = uVar4;
              std::__ndk1::
              __sift_down<v8::platform::DefaultForegroundTaskRunner::DelayedEntryCompare&,std::__ndk1::__wrap_iter<std::__ndk1::pair<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>*>>
                        (puVar1,puVar8,auStack_58,((ulong)(lVar9 - (long)puVar1) >> 4) - 1,puVar1);
              lVar9 = *(long *)(param_2 + 0xd8);
            }
            plVar2 = *(long **)(lVar9 + -8);
            *(undefined8 *)(lVar9 + -8) = 0;
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 8))();
            }
            *(long *)(param_2 + 0xd8) = lVar9 + -0x10;
            if (plVar7 == (long *)0x0) goto LAB_01478e0c;
            if (*(char *)(param_2 + 8) == '\0') break;
LAB_01478d04:
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        } while( true );
      }
    }
  }
LAB_01478e0c:
  if (*(long *)(param_2 + 0x90) == 0) {
    if ((param_3 & 1) == 0) {
      uVar4 = 0;
      goto LAB_01478ed4;
    }
    do {
      base::ConditionVariable::Wait((ConditionVariable *)(param_2 + 0x34),this);
    } while (*(long *)(param_2 + 0x90) == 0);
  }
  lVar6 = *(long *)(*(long *)(param_2 + 0x70) +
                   (*(ulong *)(param_2 + 0x88) >> 6 & 0x3fffffffffffff8));
  lVar9 = (*(ulong *)(param_2 + 0x88) & 0x1ff) * 8;
  uVar4 = *(undefined8 *)(lVar6 + lVar9);
  *(undefined8 *)(lVar6 + lVar9) = 0;
  lVar6 = *(long *)(*(long *)(param_2 + 0x70) +
                   (*(ulong *)(param_2 + 0x88) >> 6 & 0x3fffffffffffff8));
  lVar9 = (*(ulong *)(param_2 + 0x88) & 0x1ff) * 8;
  plVar7 = *(long **)(lVar6 + lVar9);
  *(undefined8 *)(lVar6 + lVar9) = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  uVar11 = *(long *)(param_2 + 0x88) + 1;
  *(long *)(param_2 + 0x90) = *(long *)(param_2 + 0x90) + -1;
  *(ulong *)(param_2 + 0x88) = uVar11;
  if (0x3ff < uVar11) {
    operator_delete((void *)**(undefined8 **)(param_2 + 0x70));
    *(long *)(param_2 + 0x70) = *(long *)(param_2 + 0x70) + 8;
    *(long *)(param_2 + 0x88) = *(long *)(param_2 + 0x88) + -0x200;
  }
LAB_01478ed4:
  *param_1 = uVar4;
  base::Mutex::Unlock(this);
  return;
}

