
undefined8 FUN_015a8d44(undefined8 param_1,ulong *param_2,long param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  byte **ppbVar5;
  ulong uVar6;
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
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x248);
  }
  if (DAT_01d47658 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47658 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d47658;
  if ((*DAT_01d47658 & 5) == 0) {
    ppbVar5 = (byte **)0x0;
    uVar6 = *param_2;
  }
  else {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.Runtime_Runtime_HasPackedElements",0,0,0,0,0,0,0,
                       &local_50,0);
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
    ppbVar5 = &local_98;
    local_90 = "V8.Runtime_Runtime_HasPackedElements";
    uVar6 = *param_2;
    local_98 = pbVar2;
    local_88 = uVar4;
  }
  if (((uVar6 & 1) != 0) &&
     (0xa9 < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
    lVar1 = 0xb8;
    if ((*(byte *)((uVar6 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar6 - 1)) & 0xf8) != 0x10)
    {
      lVar1 = 0xc0;
    }
    uVar4 = *(undefined8 *)(param_3 + lVar1);
    if ((ppbVar5 != (byte **)0x0) && (*local_98 != 0)) {
      plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar3 + 0x28))(plVar3,local_98,local_90,local_88);
    }
    if (local_80 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSObject()");
}

