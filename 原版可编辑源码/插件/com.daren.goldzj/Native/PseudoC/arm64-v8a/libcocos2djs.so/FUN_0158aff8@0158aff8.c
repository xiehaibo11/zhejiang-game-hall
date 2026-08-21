
ulong FUN_0158aff8(undefined8 param_1,ulong *param_2,Factory *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  byte *pbVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  byte **local_d0;
  byte *local_c8;
  char *local_c0;
  undefined8 local_b8;
  RuntimeCallStats *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  int local_7c;
  long *local_78;
  long *local_70;
  
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = (RuntimeCallStats *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_b0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_b0,(ulong)&local_b0 | 8,0x1ef);
  }
  if (DAT_01d472b8 == (byte *)0x0) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d472b8 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.runtime");
  }
  pbVar6 = DAT_01d472b8;
  local_d0 = (byte **)0x0;
  if ((*DAT_01d472b8 & 5) != 0) {
    local_78 = (long *)0x0;
    local_70 = (long *)0x0;
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,0x58,pbVar6,"V8.Runtime_Runtime_NewRestParameter",0,0,0,0,0,0,0,
                       &local_78,0);
    plVar7 = local_70;
    local_70 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = local_78;
    local_78 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    local_d0 = &local_c8;
    local_c0 = "V8.Runtime_Runtime_NewRestParameter";
    local_c8 = pbVar6;
    local_b8 = uVar8;
  }
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar10 = *param_2;
  uVar8 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  if (((uVar10 & 1) != 0) &&
     (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x439)) {
    uVar4 = *(ushort *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb)) + 0x15);
    local_7c = 0;
    FUN_01591ac0(&local_78,param_3,&local_7c);
    uVar5 = local_7c - (uint)uVar4;
    uVar2 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
    puVar9 = (ulong *)v8::internal::Factory::NewJSArray(param_3,2,uVar2,uVar2,0,0);
    uVar10 = *puVar9;
    if (0 < (int)uVar5) {
      iVar15 = 0;
      uVar16 = 0;
      uVar13 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 7);
      uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 7) & 0xfffffffffffc0000;
      uVar12 = *(ulong *)(uVar10 + 8);
      do {
        puVar1 = (undefined4 *)(uVar13 + 7 + (long)iVar15);
        uVar14 = *(ulong *)local_78[uVar4 + uVar16];
        *puVar1 = (int)uVar14;
        if (((uVar12 & 0x40000) != 0 || (uVar12 & 0x18) == 0) && (uVar14 & 1) != 0) {
          uVar11 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar11 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar13,puVar1,uVar14);
            uVar11 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar11 & 0x18) != 0) && ((*(byte *)(uVar10 | 8) & 0x18) == 0)) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar13,puVar1,uVar14);
          }
        }
        uVar16 = uVar16 + 1;
        iVar15 = iVar15 + 4;
      } while (uVar16 < uVar2);
      uVar10 = *puVar9;
    }
    plVar7 = local_78;
    local_78 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      operator_delete__(plVar7);
    }
    if (param_3 != (Factory *)0x0) {
      *(undefined8 *)(param_3 + 0x95a0) = uVar8;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar3) {
        *(long *)(param_3 + 0x95a8) = lVar3;
        v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
      }
    }
    if ((local_d0 != (byte **)0x0) && (*local_c8 != 0)) {
      plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar7 + 0x28))(plVar7,local_c8,local_c0,local_b8);
    }
    if (local_b0 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_b0,(RuntimeCallTimer *)((ulong)&local_b0 | 8));
    }
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

