
/* v8::internal::Builtin_Illegal(int, unsigned long*, v8::internal::Isolate*) */

void v8::internal::Builtin_Illegal(int param_1,ulong *param_2,Isolate *param_3)

{
  byte *pbVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  RuntimeCallStats *pRStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  uVar2 = (ulong)(uint)param_1;
  if (TracingFlags::runtime_stats == 0) {
    auVar4 = FUN_014c9ad4(uVar2);
    param_2 = auVar4._8_8_;
    uVar2 = auVar4._0_8_;
  }
  FUN_014c99b0(uVar2,param_2);
  pcStack_38 = FUN_014c99b0;
  uStack_60 = 0;
  uStack_78 = 0;
  pRStack_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  puStack_40 = &stack0xfffffffffffffff0;
  if (TracingFlags::runtime_stats != 0) {
    pRStack_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    puStack_40 = &stack0xfffffffffffffff0;
    RuntimeCallStats::Enter(pRStack_80,(ulong)&pRStack_80 | 8,0x298);
  }
  if (DAT_01d46588 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d46588 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar1 = DAT_01d46588;
  if ((*DAT_01d46588 & 5) != 0) {
    plStack_50 = (long *)0x0;
    plStack_48 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x18))
              (plVar3,0x58,pbVar1,"V8.Builtin_Illegal",0,0,0,0,0,0,0,&plStack_50,0);
    plVar3 = plStack_48;
    plStack_48 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_50;
    plStack_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  FUN_014c9ad4();
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

