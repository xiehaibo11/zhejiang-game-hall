
undefined8 FUN_015667e0(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_60;
  long *local_58;
  undefined1 auStack_34 [4];
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x163);
  }
  if (DAT_01d46f90 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46f90 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d46f90;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d46f90 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.Runtime_Runtime_ThrowInvalidTypedArrayAlignment",0,0,0
                       ,0,0,0,0,&local_60,0);
    plVar5 = local_58;
    local_58 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_60;
    local_60 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_ThrowInvalidTypedArrayAlignment";
    local_a8 = pbVar4;
    local_98 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar11 = *param_2;
  if (((uVar11 & 1) == 0) ||
     (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0xa2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsMap()");
  }
  uVar12 = param_2[-1];
  if (((uVar12 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  uVar3 = (uint)(*(byte *)(uVar11 + 10) >> 3);
  uVar1 = uVar3 + 0xf;
  if (10 < (uVar1 & 0x1f)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  plVar5 = (long *)(&PTR_s_Uint8Array_01999dd5_0x15_01cc90f0)[(long)((ulong)uVar1 << 0x3b) >> 0x3b];
  local_58 = (long *)strlen((char *)plVar5);
  local_60 = plVar5;
  lVar7 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_60,0);
  if (lVar7 != 0) {
    v8::internal::Factory::TypeAndSizeForElementsKind(uVar3,auStack_34,&local_60);
    uVar11 = -((ulong)local_60 >> 0x1f & 1) & 0xfffffffe00000000 |
             ((ulong)local_60 & 0xffffffff) << 1;
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(param_3 + 0x95a0);
      if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
        puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar11;
    }
    else {
      puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
    }
    puVar9 = (undefined8 *)
             v8::internal::Factory::NewRangeError((Factory *)param_3,0xcd,param_2 + -1,lVar7,puVar8)
    ;
    uVar10 = v8::internal::Isolate::Throw(param_3,*puVar9,0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar6;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
      plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar5 + 0x28))(plVar5,local_a8,local_a0,local_98);
    }
    if (local_90 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
    }
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

