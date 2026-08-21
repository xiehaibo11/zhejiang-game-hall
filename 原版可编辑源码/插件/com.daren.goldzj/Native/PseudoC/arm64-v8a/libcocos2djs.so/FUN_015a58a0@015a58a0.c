
undefined8 FUN_015a58a0(undefined8 param_1,ulong *param_2,long param_3)

{
  uint uVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
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
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x250);
  }
  if (DAT_01d475c0 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d475c0 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d475c0;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d475c0 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.Runtime_Runtime_IsAsmWasmCode",0,0,0,0,0,0,0,&local_50
                       ,0);
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
    local_90 = "V8.Runtime_Runtime_IsAsmWasmCode";
    local_98 = pbVar2;
    local_88 = uVar4;
  }
  uVar5 = *param_2;
  if ((uVar5 & 1) != 0) {
    uVar7 = uVar5 & 0xffffffff00000000;
    if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x439) {
      uVar1 = *(uint *)((uVar7 | *(uint *)(uVar5 + 0xb)) + 3);
      if ((((uVar1 & 1) == 0) ||
          (*(short *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar1) - 1)) != 0x57)) ||
         (((*(uint *)((uVar7 | *(uint *)(uVar5 + 0xb)) + 3) & 1) == 0 &&
          ((*(uint *)((uVar7 | *(uint *)(uVar5 + 0xb)) + 3) & 0xfffffffe) == 0x88)))) {
        puVar6 = (undefined8 *)(param_3 + 0xc0);
      }
      else {
        puVar6 = (undefined8 *)(param_3 + 0xb8);
      }
      uVar4 = *puVar6;
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
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

