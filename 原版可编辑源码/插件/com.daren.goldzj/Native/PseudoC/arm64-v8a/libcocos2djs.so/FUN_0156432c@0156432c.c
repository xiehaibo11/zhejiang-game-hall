
undefined8 FUN_0156432c(undefined8 param_1,ulong *param_2,long param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte **local_a0;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_50;
  long *local_48;
  int local_24;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x124);
  }
  if (DAT_01d46f30 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46f30 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d46f30;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d46f30 & 5) == 0) {
    uVar10 = *param_2;
  }
  else {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.Runtime_Runtime_AsyncGeneratorHasCatchHandlerForPC",0,
                       0,0,0,0,0,0,&local_50,0);
    plVar3 = local_48;
    local_48 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_50;
    local_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_AsyncGeneratorHasCatchHandlerForPC";
    uVar10 = *param_2;
    local_98 = pbVar2;
    local_88 = uVar4;
  }
  if ((uVar10 & 1) != 0) {
    uVar5 = uVar10 & 0xffffffff00000000;
    uVar7 = uVar5 | 7;
    if (*(short *)(uVar7 + *(uint *)(uVar10 - 1)) == 0x419) {
      if (*(int *)(uVar10 + 0x1f) < 2) {
        uVar4 = *(undefined8 *)(param_3 + 0xc0);
      }
      else {
        uVar8 = uVar5 | *(uint *)((uVar5 | *(uint *)(uVar10 + 0xb)) + 0xb);
        uVar9 = uVar5 | *(uint *)(uVar8 + 0xf);
        if ((*(short *)(uVar7 + *(uint *)(uVar9 - 1)) == 0x5b) &&
           (*(short *)(uVar7 + *(uint *)((uVar5 | *(uint *)(uVar9 + 0x13)) - 1)) == 0x86)) {
          uVar6 = *(uint *)(uVar9 + 0xf);
        }
        else {
          uVar6 = *(uint *)(uVar8 + 3);
          if (((uVar6 & 1) == 0) || (*(short *)(uVar7 + *(uint *)((uVar5 | uVar6) - 1)) != 0x86)) {
            uVar6 = *(uint *)((uVar5 | *(uint *)(uVar8 + 3)) + 3);
          }
          else {
            uVar6 = *(uint *)(uVar8 + 3);
          }
        }
        v8::internal::HandlerTable::HandlerTable((HandlerTable *)&local_50,uVar5 | uVar6);
        local_24 = 4;
        v8::internal::HandlerTable::LookupRange
                  ((HandlerTable *)&local_50,*(int *)(uVar10 + 0x17) >> 1,(int *)0x0,
                   (CatchPrediction *)&local_24);
        lVar1 = 0xb8;
        if (local_24 != 1) {
          lVar1 = 0xc0;
        }
        uVar4 = *(undefined8 *)(param_3 + lVar1);
      }
      if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
        plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar3 + 0x28))(plVar3,local_98,local_90,local_88);
      }
      if (local_80 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
      }
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSAsyncGeneratorObject()");
}

