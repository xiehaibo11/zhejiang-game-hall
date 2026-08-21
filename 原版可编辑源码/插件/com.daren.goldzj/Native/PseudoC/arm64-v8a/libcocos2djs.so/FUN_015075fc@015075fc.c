
ulong FUN_015075fc(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong *local_70;
  long *local_68;
  int local_60;
  undefined4 local_5c;
  ulong local_58;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x13e);
  }
  if (DAT_01d46c50 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46c50 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d46c50;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d46c50 & 5) != 0) {
    local_70 = (ulong *)0x0;
    local_68 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"V8.Runtime_Runtime_CloneObjectIC_Miss",0,0,0,0,0,0,0,
                       &local_70,0);
    plVar5 = local_68;
    local_68 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    puVar7 = local_70;
    local_70 = (ulong *)0x0;
    if (puVar7 != (ulong *)0x0) {
      (**(code **)(*puVar7 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_CloneObjectIC_Miss";
    local_b8 = pbVar3;
    local_a8 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar11 = *param_2;
  uVar12 = param_2[-1];
  if ((((uVar11 & 1) == 0) ||
      (*(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) < 0xaa)) ||
     ((*(uint *)((uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 - 1)) + 0xb) >> 0x18 & 1) ==
      0)) {
    puVar7 = param_2 + -3;
    if (*(short *)((*puVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar7 - 1)) != 0x9f)
    goto joined_r0x01507ae8;
    local_60 = (int)param_2[-2] >> 1;
    local_68 = (long *)0x0;
    local_70 = puVar7;
    if (puVar7 == (ulong *)0x0) {
      local_5c = 0;
    }
    else {
      local_58 = param_2[-3];
      local_5c = v8::internal::FeedbackVector::GetKind((FeedbackVector *)&local_58);
      uVar11 = *param_2;
    }
    if (((uVar11 & 1) == 0) ||
       (iVar4 = v8::internal::FeedbackNexus::ic_state((FeedbackNexus *)&local_70), iVar4 == 5))
    goto joined_r0x01507ae8;
    uVar11 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(param_3 + 0x95a0);
      if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
        puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar11;
    }
    else {
      puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
      uVar11 = *puVar7;
    }
    if (((int)uVar11 != *(int *)((uVar11 & 0xffffffff00000000) + 0x368)) &&
       ((int)uVar11 != *(int *)((uVar11 & 0xffffffff00000000) + 0x358))) {
      if ((*(ushort *)(uVar11 + 7) < 0xaa) ||
         ((0x1f < *(byte *)(uVar11 + 10) ||
          (local_58 = uVar11, uVar11 = v8::internal::Map::OnlyHasSimpleProperties((Map *)&local_58),
          (uVar11 & 1) == 0)))) {
LAB_01507ae0:
        v8::internal::FeedbackNexus::ConfigureMegamorphic((FeedbackNexus *)&local_70);
        goto joined_r0x01507ae8;
      }
      uVar14 = *puVar7;
      uVar11 = (ulong)(*(uint *)(uVar14 + 0xb) >> 10) & 0x3ff;
      if ((int)uVar11 != 0) {
        uVar15 = uVar14 & 0xffffffff00000000;
        uVar16 = uVar15 | *(uint *)(uVar14 + 0x17);
        uVar14 = 0x1000000000;
        do {
          if (((*(uint *)((uVar14 >> 0x20 | 3) + uVar16) & 0x22) != 0) ||
             ((uVar17 = uVar15 | *(uint *)((uVar16 - 1) + (uVar14 >> 0x20)),
              *(short *)((uVar15 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0x40 &&
              ((*(byte *)(uVar17 + 7) >> 4 & 1) != 0)))) goto LAB_01507ae0;
          uVar11 = uVar11 - 1;
          uVar14 = uVar14 + 0xc00000000;
        } while (uVar11 != 0);
      }
    }
    uVar11 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
    uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13);
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
      uVar11 = *puVar8;
    }
    uVar11 = uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 499);
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
      uVar11 = *puVar8;
    }
    uVar11 = uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0x1b);
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
    uVar11 = *puVar7;
    puVar9 = puVar8;
    if ((0xa9 < *(ushort *)(uVar11 + 7)) &&
       ((uint)*(byte *)(uVar11 + 3) - (uint)*(byte *)(uVar11 + 4) !=
        (uint)*(byte *)(*puVar8 + 3) - (uint)*(byte *)(*puVar8 + 4))) {
      iVar4 = (uint)*(byte *)(uVar11 + 3) - (uint)*(byte *)(uVar11 + 4);
      if (*(byte *)(uVar11 + 5) < 3) {
        iVar10 = 0;
      }
      else {
        iVar10 = (uint)*(byte *)(uVar11 + 3) - (uint)*(byte *)(uVar11 + 5);
      }
      puVar9 = (ulong *)v8::internal::Map::CopyInitialMap
                                  (param_3,puVar8,iVar4 * 4 + 0xc,iVar4,iVar10);
    }
    if (((uint)uVar12 >> 5 & 1) != 0) {
      if ((puVar8 == puVar9) ||
         (((puVar8 != (ulong *)0x0 && (puVar9 != (ulong *)0x0)) && (*puVar9 == *puVar8)))) {
        puVar9 = (ulong *)v8::internal::Map::Copy(param_3,puVar9,"ObjectWithNullProto");
      }
      v8::internal::Map::SetPrototype(param_3,puVar9,param_3 + 0xb0,1);
    }
    uVar12 = *puVar7;
    if ((*(uint *)(uVar12 + 0xb) & 0xffc00) != 0) {
      if ((puVar8 == puVar9) ||
         (((puVar8 != (ulong *)0x0 && (puVar9 != (ulong *)0x0)) && (*puVar9 == *puVar8)))) {
        puVar9 = (ulong *)v8::internal::Map::Copy(param_3,puVar9,"InitializeClonedDescriptors");
        uVar12 = *puVar7;
      }
      uVar12 = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 0x17);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)(param_3 + 0x95a0);
        if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
          puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar8 + 1;
        *puVar8 = uVar12;
      }
      else {
        puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
      }
      uVar13 = *(uint *)(*puVar7 + 0xb) >> 10 & 0x3ff;
      plVar5 = (long *)v8::internal::DescriptorArray::CopyForFastObjectClone
                                 (param_3,puVar8,uVar13,0);
      v8::internal::LayoutDescriptor::New(param_3,puVar9,plVar5,uVar13);
      local_58 = *puVar9;
      v8::internal::Map::SetInstanceDescriptors
                ((Map *)&local_58,param_3,*plVar5,(int)*(short *)(*plVar5 + 5));
      bVar2 = *(byte *)(*puVar7 + 5);
      uVar13 = (uint)bVar2;
      if ((2 < bVar2) &&
         (uVar13 = ((uint)*(byte *)(*puVar9 + 3) - (uint)*(byte *)(*puVar7 + 3)) + (uint)bVar2,
         0xff < uVar13)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","static_cast<unsigned>(value) <= 255");
      }
      *(char *)(*puVar9 + 5) = (char)uVar13;
      uVar13 = *(uint *)(*puVar9 + 0xb);
      *(uint *)(*puVar9 + 0xb) =
           uVar13 & 0xe0000000 | uVar13 & 0xfffffff | (*(uint *)(*puVar7 + 0xb) >> 0x1c & 1) << 0x1c
      ;
    }
    v8::internal::FeedbackNexus::ConfigureCloneObject((FeedbackNexus *)&local_70,puVar7,puVar9);
    uVar12 = *puVar9;
  }
  else {
    v8::internal::JSObject::MigrateInstance(param_3,param_2);
joined_r0x01507ae8:
    if (((uint)uVar12 >> 5 & 1) == 0) {
      uVar12 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
      uVar12 = uVar12 | *(uint *)((uVar12 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(param_3 + 0x95a0);
        if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
          puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar12;
      }
      else {
        puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
        uVar12 = *puVar7;
      }
      uVar12 = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 499);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(param_3 + 0x95a0);
        if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
          puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar12;
      }
      else {
        puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
      }
      puVar7 = (ulong *)v8::internal::Factory::NewJSObject((Factory *)param_3,puVar7,0);
    }
    else {
      puVar7 = (ulong *)v8::internal::Factory::NewJSObjectWithNullProto((Factory *)param_3);
    }
    uVar12 = *param_2;
    if (((uVar12 & 1) == 0) ||
       ((puVar8 = puVar7, (int)uVar12 != *(int *)((uVar12 & 0xffffffff00000000) + 0xb0) &&
        ((int)uVar12 != *(int *)((uVar12 & 0xffffffff00000000) + 0xa0))))) {
      uVar12 = v8::internal::JSReceiver::SetOrCopyDataProperties(param_3,puVar7,param_2,0,0);
      if (puVar7 != (ulong *)0x0) {
        puVar8 = (ulong *)(uVar12 & 0xff);
        goto joined_r0x01507b4c;
      }
    }
    else {
joined_r0x01507b4c:
      if (puVar8 != (ulong *)0x0) {
        uVar12 = *puVar7;
        if (param_3 == (Isolate *)0x0) goto LAB_01507d34;
        goto LAB_01507d0c;
      }
    }
    uVar12 = *(ulong *)(param_3 + 0x180);
  }
LAB_01507d0c:
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
LAB_01507d34:
  if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_b8,local_b0,local_a8);
  }
  if (local_a0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  return uVar12;
}

