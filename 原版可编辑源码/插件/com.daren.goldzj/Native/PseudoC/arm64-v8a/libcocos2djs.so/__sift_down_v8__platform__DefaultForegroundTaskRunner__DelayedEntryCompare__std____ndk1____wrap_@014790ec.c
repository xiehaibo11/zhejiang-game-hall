
/* void std::__ndk1::__sift_down<v8::platform::DefaultForegroundTaskRunner::DelayedEntryCompare&,
   std::__ndk1::__wrap_iter<std::__ndk1::pair<double, std::__ndk1::unique_ptr<v8::Task,
   std::__ndk1::default_delete<v8::Task> > >*> >(std::__ndk1::__wrap_iter<std::__ndk1::pair<double,
   std::__ndk1::unique_ptr<v8::Task, std::__ndk1::default_delete<v8::Task> > >*>,
   std::__ndk1::__wrap_iter<std::__ndk1::pair<double, std::__ndk1::unique_ptr<v8::Task,
   std::__ndk1::default_delete<v8::Task> > >*>,
   v8::platform::DefaultForegroundTaskRunner::DelayedEntryCompare&,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<std::__ndk1::pair<double,
   std::__ndk1::unique_ptr<v8::Task, std::__ndk1::default_delete<v8::Task> > >*> >::difference_type,
   std::__ndk1::__wrap_iter<std::__ndk1::pair<double, std::__ndk1::unique_ptr<v8::Task,
   std::__ndk1::default_delete<v8::Task> > >*>) */

void std::__ndk1::
     __sift_down<v8::platform::DefaultForegroundTaskRunner::DelayedEntryCompare&,std::__ndk1::__wrap_iter<std::__ndk1::pair<double,std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>*>>
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,double *param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  long *plVar4;
  double *pdVar5;
  double *pdVar6;
  double dVar7;
  ulong uVar8;
  
  if (1 < param_4) {
    lVar1 = param_4 + -1;
    if (-1 < param_4 + -2) {
      lVar1 = param_4 + -2;
    }
    if ((long)param_5 - param_1 >> 4 <= lVar1 >> 1) {
      uVar8 = (long)param_5 - param_1 >> 3 | 1;
      pdVar5 = (double *)(param_1 + uVar8 * 0x10);
      if (((long)(uVar8 + 1) < param_4) && (pdVar5[2] < *pdVar5)) {
        pdVar5 = pdVar5 + 2;
        uVar8 = uVar8 + 1;
      }
      if (*pdVar5 <= *param_5) {
        dVar2 = *param_5;
        dVar3 = param_5[1];
        param_5[1] = 0.0;
        do {
          pdVar6 = pdVar5;
          *param_5 = *pdVar6;
          dVar7 = pdVar6[1];
          pdVar6[1] = 0.0;
          plVar4 = (long *)param_5[1];
          param_5[1] = dVar7;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))();
          }
          if (lVar1 >> 1 < (long)uVar8) break;
          uVar8 = uVar8 << 1 | 1;
          pdVar5 = (double *)(param_1 + uVar8 * 0x10);
          if (((long)(uVar8 + 1) < param_4) && (pdVar5[2] < *pdVar5)) {
            pdVar5 = pdVar5 + 2;
            uVar8 = uVar8 + 1;
          }
          param_5 = pdVar6;
        } while (*pdVar5 <= dVar2);
        plVar4 = (long *)pdVar6[1];
        *pdVar6 = dVar2;
        pdVar6[1] = dVar3;
        if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01479238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 8))();
          return;
        }
      }
    }
  }
  return;
}

