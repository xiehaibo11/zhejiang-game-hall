
ulong FUN_015989cc(undefined8 param_1,ulong *param_2,Factory *param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  int iVar14;
  ulong uVar15;
  int *piVar16;
  byte **local_100;
  byte *local_f8;
  char *local_f0;
  undefined8 local_e8;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *local_b0;
  long *local_a8 [3];
  int local_90;
  int *local_88;
  int *local_80;
  int *local_78;
  int local_6c [3];
  
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x204);
  }
  if (DAT_01d473f8 == (byte *)0x0) {
    plVar9 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d473f8 = (byte *)(**(code **)(*plVar9 + 0x10))(plVar9,"disabled-by-default-v8.runtime");
  }
  pbVar6 = DAT_01d473f8;
  local_100 = (byte **)0x0;
  if ((*DAT_01d473f8 & 5) != 0) {
    local_b0 = (long *)0x0;
    local_a8[0] = (long *)0x0;
    plVar9 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar10 = (**(code **)(*plVar9 + 0x18))
                       (plVar9,0x58,pbVar6,"V8.Runtime_Runtime_StringEscapeQuotes",0,0,0,0,0,0,0,
                        &local_b0,0);
    plVar9 = local_a8[0];
    local_a8[0] = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    plVar9 = local_b0;
    local_b0 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    local_100 = &local_f8;
    local_f0 = "V8.Runtime_Runtime_StringEscapeQuotes";
    local_f8 = pbVar6;
    local_e8 = uVar10;
  }
  uVar10 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar15 = *param_2;
  if (((uVar15 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  iVar4 = *(int *)(uVar15 + 7);
  uVar11 = v8::internal::Factory::LookupSingleCharacterStringFromCode(param_3,0x22);
  iVar8 = v8::internal::String::IndexOf(param_3,param_2,uVar11,0);
  local_6c[0] = iVar8;
  if (iVar8 == -1) {
    uVar15 = *param_2;
  }
  else {
    local_88 = operator_new(4);
    local_80 = local_88 + 1;
    *local_88 = iVar8;
    local_78 = local_80;
    while ((iVar8 + 1 < iVar4 &&
           (local_6c[0] = v8::internal::String::IndexOf(param_3,param_2,uVar11), local_6c[0] != -1))
          ) {
      if (local_80 < local_78) {
        *local_80 = local_6c[0];
        local_80 = local_80 + 1;
        iVar8 = local_6c[0];
      }
      else {
        std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__emplace_back_slow_path<int&>
                  ((vector<int,std::__ndk1::allocator<int>> *)&local_88,local_6c);
        iVar8 = local_6c[0];
      }
    }
    local_a8[0] = (long *)__strlen_chk("&quot;",7);
    local_b0 = (long *)0x1a4e972;
    lVar12 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_b0,0);
    if (lVar12 == 0) {
LAB_01598e54:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    v8::internal::ReplacementStringBuilder::ReplacementStringBuilder
              ((ReplacementStringBuilder *)&local_b0,param_3 + 0x8850,param_2,
               (uint)((ulong)((long)local_80 - (long)local_88) >> 1) | 1);
    piVar7 = local_80;
    if (local_88 == local_80) {
      iVar8 = -1;
    }
    else {
      piVar16 = local_88;
      iVar14 = -1;
      do {
        iVar8 = *piVar16;
        uVar2 = iVar14 + 1;
        uVar5 = iVar8 - uVar2;
        if (uVar5 != 0 && (int)uVar2 <= iVar8) {
          v8::internal::ReplacementStringBuilder::EnsureCapacity
                    ((ReplacementStringBuilder *)&local_b0,2);
          if ((uVar2 >> 0x13 == 0) && (uVar5 < 0x800)) {
            uVar2 = uVar5 | uVar2 * 0x800;
          }
          else {
            v8::internal::FixedArrayBuilder::Add
                      ((FixedArrayBuilder *)local_a8,
                       -(ulong)(-uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar5 << 1);
          }
          v8::internal::FixedArrayBuilder::Add
                    ((FixedArrayBuilder *)local_a8,
                     -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1);
          iVar14 = local_90 + uVar5;
          bVar1 = local_90 <= (int)(0xffffff0 - uVar5);
          local_90 = 0x7fffffff;
          if (bVar1) {
            local_90 = iVar14;
          }
        }
        v8::internal::ReplacementStringBuilder::AddString
                  ((ReplacementStringBuilder *)&local_b0,lVar12);
        piVar16 = piVar16 + 1;
        iVar14 = iVar8;
      } while (piVar7 != piVar16);
    }
    if (iVar8 < iVar4 + -1) {
      uVar2 = iVar8 + 1;
      v8::internal::ReplacementStringBuilder::EnsureCapacity
                ((ReplacementStringBuilder *)&local_b0,2);
      uVar5 = iVar4 - uVar2;
      if ((uVar2 >> 0x13 == 0) && (uVar5 < 0x800)) {
        uVar2 = uVar5 | uVar2 * 0x800;
      }
      else {
        v8::internal::FixedArrayBuilder::Add
                  ((FixedArrayBuilder *)local_a8,
                   -(ulong)(-uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar5 << 1);
      }
      v8::internal::FixedArrayBuilder::Add
                ((FixedArrayBuilder *)local_a8,
                 -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1);
      iVar4 = local_90 + uVar5;
      bVar1 = local_90 <= (int)(0xffffff0 - uVar5);
      local_90 = 0x7fffffff;
      if (bVar1) {
        local_90 = iVar4;
      }
    }
    puVar13 = (ulong *)v8::internal::ReplacementStringBuilder::ToString
                                 ((ReplacementStringBuilder *)&local_b0);
    if (puVar13 == (ulong *)0x0) goto LAB_01598e54;
    uVar15 = *puVar13;
    if (local_88 != (int *)0x0) {
      local_80 = local_88;
      operator_delete(local_88);
    }
    if (param_3 == (Factory *)0x0) goto LAB_01598db0;
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar10;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
LAB_01598db0:
  if ((local_100 != (byte **)0x0) && (*local_f8 != 0)) {
    plVar9 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar9 + 0x28))(plVar9,local_f8,local_f0,local_e8);
  }
  if (local_e0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  return uVar15;
}

