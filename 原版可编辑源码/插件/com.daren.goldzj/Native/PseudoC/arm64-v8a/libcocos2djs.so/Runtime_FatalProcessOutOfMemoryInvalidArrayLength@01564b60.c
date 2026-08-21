
/* v8::internal::Runtime_FatalProcessOutOfMemoryInvalidArrayLength(int, unsigned long*,
   v8::internal::Isolate*) */

void v8::internal::Runtime_FatalProcessOutOfMemoryInvalidArrayLength
               (int param_1,ulong *param_2,Isolate *param_3)

{
  byte *pbVar1;
  long *plVar2;
  RuntimeCallStats *pRStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  if (TracingFlags::runtime_stats != 0) {
    FUN_01564bac(param_1);
    pcStack_48 = FUN_01564bac;
    uStack_70 = 0;
    uStack_88 = 0;
    pRStack_90 = (RuntimeCallStats *)0x0;
    uStack_78 = 0;
    uStack_80 = 0;
    puStack_50 = &stack0xfffffffffffffff0;
    if (TracingFlags::runtime_stats != 0) {
      pRStack_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
      puStack_50 = &stack0xfffffffffffffff0;
      RuntimeCallStats::Enter(pRStack_90,(ulong)&pRStack_90 | 8,0x14c);
    }
    if (DAT_01d46f48 == (byte *)0x0) {
      plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d46f48 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.runtime");
    }
    pbVar1 = DAT_01d46f48;
    if ((*DAT_01d46f48 & 5) != 0) {
      plStack_60 = (long *)0x0;
      plStack_58 = (long *)0x0;
      plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar2 + 0x18))
                (plVar2,0x58,pbVar1,"V8.Runtime_Runtime_FatalProcessOutOfMemoryInvalidArrayLength",0
                 ,0,0,0,0,0,0,&plStack_60,0);
      plVar2 = plStack_58;
      plStack_58 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = plStack_60;
      plStack_60 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
                    /* WARNING: Subroutine does not return */
    Heap::FatalProcessOutOfMemory((Heap *)(param_3 + 0x8850),"invalid array length");
  }
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
                    /* WARNING: Subroutine does not return */
  Heap::FatalProcessOutOfMemory((Heap *)(param_3 + 0x8850),"invalid array length");
}

