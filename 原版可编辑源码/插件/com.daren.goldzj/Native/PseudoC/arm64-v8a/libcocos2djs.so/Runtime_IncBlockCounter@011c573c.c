
/* v8::internal::Runtime_IncBlockCounter(int, unsigned long*, v8::internal::Isolate*) */

void v8::internal::Runtime_IncBlockCounter(int param_1,ulong *param_2,Isolate *param_3)

{
  byte *pbVar1;
  long *plVar2;
  RuntimeCallStats *pRStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if (TracingFlags::runtime_stats != 0) {
    FUN_011c5764(param_1);
    pcStack_38 = FUN_011c5764;
    uStack_60 = 0;
    uStack_78 = 0;
    pRStack_80 = (RuntimeCallStats *)0x0;
    uStack_68 = 0;
    uStack_70 = 0;
    puStack_40 = &stack0xfffffffffffffff0;
    if (TracingFlags::runtime_stats != 0) {
      pRStack_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
      puStack_40 = &stack0xfffffffffffffff0;
      RuntimeCallStats::Enter(pRStack_80,(ulong)&pRStack_80 | 8,0x113);
    }
    if (DAT_01d3f9f0 == (byte *)0x0) {
      plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3f9f0 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.runtime");
    }
    pbVar1 = DAT_01d3f9f0;
    if ((*DAT_01d3f9f0 & 5) != 0) {
      plStack_50 = (long *)0x0;
      plStack_48 = (long *)0x0;
      plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar2 + 0x18))
                (plVar2,0x58,pbVar1,"V8.Runtime_Runtime_IncBlockCounter",0,0,0,0,0,0,0,&plStack_50,0
                );
      plVar2 = plStack_48;
      plStack_48 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = plStack_50;
      plStack_50 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

