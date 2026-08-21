
undefined8 FUN_015500b4(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long lVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  long *plVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
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
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0xbd);
  }
  if (DAT_01d46cb0 == (byte *)0x0) {
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46cb0 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d46cb0;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d46cb0 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))
                      (plVar8,0x58,pbVar4,"V8.Runtime_Runtime_ArrayIsArray",0,0,0,0,0,0,0,&local_50,
                       0);
    plVar8 = local_48;
    local_48 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    plVar8 = local_50;
    local_50 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_ArrayIsArray";
    local_98 = pbVar4;
    local_88 = uVar9;
  }
  uVar9 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  iVar10 = *(int *)(param_3 + 0x95b0) + 1;
  *(int *)(param_3 + 0x95b0) = iVar10;
  uVar11 = *param_2;
  if ((uVar11 & 1) == 0) {
LAB_01550238:
    bVar5 = true;
  }
  else {
    uVar12 = uVar11 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar12 + *(uint *)(uVar11 - 1)) != 0x423) {
      if (*(short *)(uVar12 + *(uint *)(uVar11 - 1)) == 0xa9) {
        uVar7 = v8::internal::JSProxy::IsArray(param_2);
        iVar10 = *(int *)(param_3 + 0x95b0);
        lVar13 = *(long *)(param_3 + 0x95a8);
        bVar6 = (uVar7 & 0xff) == 0;
        bVar5 = uVar7 < 0x100;
        goto LAB_01550244;
      }
      goto LAB_01550238;
    }
    bVar5 = false;
  }
  bVar6 = false;
  lVar13 = lVar3;
LAB_01550244:
  pIVar1 = param_3 + 0xc0;
  if (!bVar5) {
    pIVar1 = param_3 + 0xb8;
  }
  pIVar2 = param_3 + 0x180;
  if (!bVar6) {
    pIVar2 = pIVar1;
  }
  uVar14 = *(undefined8 *)pIVar2;
  *(undefined8 *)(param_3 + 0x95a0) = uVar9;
  *(int *)(param_3 + 0x95b0) = iVar10 + -1;
  if (lVar13 != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x28))(plVar8,local_98,local_90,local_88);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return uVar14;
}

