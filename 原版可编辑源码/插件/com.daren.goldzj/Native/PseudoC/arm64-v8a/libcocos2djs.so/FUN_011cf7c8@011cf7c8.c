
undefined8 FUN_011cf7c8(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
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
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x192);
  }
  if (DAT_01d3fb28 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fb28 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d3fb28;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d3fb28 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.Runtime_Runtime_DefineAccessorPropertyUnchecked",0,0,0
                       ,0,0,0,0,&local_50,0);
    plVar5 = local_48;
    local_48 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_50;
    local_50 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_DefineAccessorPropertyUnchecked";
    local_98 = pbVar4;
    local_88 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0xaa)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSObject()");
  }
  iVar3 = *(int *)(param_3 + 0xb0);
  if ((int)uVar8 == iVar3) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!obj->IsNull(isolate)");
  }
  uVar8 = param_2[-1];
  if (((uVar8 & 1) != 0) &&
     (*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0x41)) {
    uVar8 = param_2[-2];
    if (((uVar8 & 1) == 0) ||
       ((((int)uVar8 != iVar3 && ((int)uVar8 != *(int *)(param_3 + 0xa0))) &&
        ((*(byte *)((uVar8 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar8 - 1)) >> 1 & 1) == 0))
       )) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsValidAccessor(isolate, getter)");
    }
    uVar8 = param_2[-3];
    if (((uVar8 & 1) != 0) &&
       ((((int)uVar8 == iVar3 || ((int)uVar8 == *(int *)(param_3 + 0xa0))) ||
        ((*(byte *)((uVar8 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar8 - 1)) >> 1 & 1) != 0))
       )) {
      if ((param_2[-4] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","args[4].IsSmi()");
      }
      if ((uint)((int)param_2[-4] >> 1) < 8) {
        lVar7 = v8::internal::JSObject::DefineAccessor(param_2);
        lVar1 = 0x180;
        if (lVar7 != 0) {
          lVar1 = 0xa0;
        }
        uVar9 = *(undefined8 *)(param_3 + lVar1);
        *(undefined8 *)(param_3 + 0x95a0) = uVar6;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(long *)(param_3 + 0x95a8) != lVar2) {
          *(long *)(param_3 + 0x95a8) = lVar2;
          v8::internal::HandleScope::DeleteExtensions(param_3);
        }
        if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
          plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
          (**(code **)(*plVar5 + 0x28))(plVar5,local_98,local_90,local_88);
        }
        if (local_80 != (RuntimeCallStats *)0x0) {
          v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8))
          ;
        }
        return uVar9;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args.smi_at(4) & ~(READ_ONLY | DONT_ENUM | DONT_DELETE) == 0");
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsValidAccessor(isolate, setter)");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[1].IsName()");
}

