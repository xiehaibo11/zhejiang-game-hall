
undefined8 FUN_015925bc(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  Isolate *pIVar2;
  long lVar3;
  byte *pbVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong *puVar8;
  Isolate *pIVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  byte **local_d0;
  byte *local_c8;
  char *local_c0;
  undefined8 local_b8;
  RuntimeCallStats *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined **local_80;
  ulong *local_78;
  ulong *local_70;
  ulong *puStack_68;
  
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = (RuntimeCallStats *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_b0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_b0,(ulong)&local_b0 | 8,0x1fe);
  }
  if (DAT_01d47350 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47350 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d47350;
  local_d0 = (byte **)0x0;
  if ((*DAT_01d47350 & 5) != 0) {
    local_80 = (undefined **)0x0;
    local_78 = (ulong *)0x0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar4,"V8.Runtime_Runtime_GetSubstitution",0,0,0,0,0,0,0,
                       &local_80,0);
    puVar8 = local_78;
    local_78 = (ulong *)0x0;
    if (puVar8 != (ulong *)0x0) {
      (**(code **)(*puVar8 + 8))();
    }
    ppuVar5 = local_80;
    local_80 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      (**(code **)(*ppuVar5 + 8))();
    }
    local_d0 = &local_c8;
    local_c0 = "V8.Runtime_Runtime_GetSubstitution";
    local_c8 = pbVar4;
    local_b8 = uVar7;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar10 = *param_2;
  if (((uVar10 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  puVar8 = param_2 + -1;
  uVar11 = *puVar8;
  if (((uVar11 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  if ((param_2[-2] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsSmi()");
  }
  uVar12 = param_2[-3];
  if (((uVar12 & 1) != 0) &&
     (*(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) < 0x40)) {
    uVar12 = param_2[-4];
    if ((uVar12 & 1) == 0) {
      iVar1 = (int)param_2[-2] >> 1;
      local_70 = puVar8;
      if (*(int *)(uVar11 + 7) != iVar1) {
        local_70 = (ulong *)v8::internal::Factory::NewProperSubString
                                      ((Factory *)param_3,puVar8,0,iVar1);
        uVar10 = *param_2;
      }
      iVar1 = *(int *)(uVar10 + 7) + iVar1;
      if (iVar1 != 0) {
        puVar8 = (ulong *)v8::internal::Factory::NewProperSubString
                                    ((Factory *)param_3,puVar8,iVar1,*(undefined4 *)(*puVar8 + 7));
      }
      local_80 = &PTR_FUN_01cc9398;
      local_78 = param_2;
      puStack_68 = puVar8;
      pIVar9 = (Isolate *)
               v8::internal::String::GetSubstitution
                         (param_3,&local_80,param_2 + -3,(int)uVar12 >> 1);
      pIVar2 = param_3 + 0x180;
      if (pIVar9 != (Isolate *)0x0) {
        pIVar2 = pIVar9;
      }
      uVar13 = *(undefined8 *)pIVar2;
      *(undefined8 *)(param_3 + 0x95a0) = uVar7;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar3) {
        *(long *)(param_3 + 0x95a8) = lVar3;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
      if ((local_d0 != (byte **)0x0) && (*local_c8 != 0)) {
        plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar6 + 0x28))(plVar6,local_c8,local_c0,local_b8);
      }
      if (local_b0 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_b0,(RuntimeCallTimer *)((ulong)&local_b0 | 8));
      }
      return uVar13;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[4].IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[3].IsString()");
}

