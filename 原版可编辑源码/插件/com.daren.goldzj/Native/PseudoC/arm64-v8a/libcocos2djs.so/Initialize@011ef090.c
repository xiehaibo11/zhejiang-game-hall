
/* v8::internal::Snapshot::Initialize(v8::internal::Isolate*) */

uint v8::internal::Snapshot::Initialize(Isolate *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined **ppuVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  StartupData *pSVar12;
  long local_5a8;
  undefined **local_5a0;
  void *local_598;
  int local_590;
  char local_58c;
  undefined **local_588;
  void *local_580;
  uint local_578;
  char local_574;
  RuntimeCallStats *local_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined **local_548 [74];
  undefined1 local_2f7;
  undefined **local_2d8 [74];
  undefined1 local_87;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((*(long *)(param_1 + 0xb7e8) == 0) || (*(int *)(*(long *)(param_1 + 0xb7e8) + 8) == 0)) {
    uVar7 = 0;
LAB_011ef340:
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return uVar7 & 1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_550 = 0;
  uStack_568 = 0;
  local_570 = (RuntimeCallStats *)0x0;
  uStack_558 = 0;
  uStack_560 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_570 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_570,(ulong)&local_570 | 8,0x81);
  }
  if (FLAG_profile_deserialization == '\0') {
    lVar8 = 0;
  }
  else {
    lVar8 = base::TimeTicks::HighResolutionNow();
  }
  pSVar12 = *(StartupData **)(param_1 + 0xb7e8);
  CheckVersion(pSVar12);
  if (FLAG_profile_deserialization == '\0') {
    lVar9 = 0;
  }
  else {
    lVar9 = base::TimeTicks::HighResolutionNow();
  }
  iVar1 = *(int *)(*(long *)pSVar12 + 8);
  iVar6 = Checksum((internal *)(*(long *)pSVar12 + 0xc),*(int *)(pSVar12 + 8) + -0xc);
  if (FLAG_profile_deserialization != '\0') {
    lVar10 = base::TimeTicks::HighResolutionNow();
    local_2d8[0] = (undefined **)(lVar10 - lVar9);
    base::TimeDelta::InMillisecondsF((TimeDelta *)local_2d8);
    PrintF("[Verifying snapshot checksum took %0.3f ms]\n");
  }
  if (iVar6 != iVar1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","VerifyChecksum(blob)");
  }
  if ((int)*(uint *)(pSVar12 + 8) < 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kNumberOfContextsOffset < data->raw_size");
  }
  piVar11 = *(int **)pSVar12;
  uVar2 = piVar11[0x13];
  uVar7 = *piVar11 * 4 + 0x57U & 0xfffffff8;
  uVar3 = uVar2 - uVar7;
  ppuVar5 = local_588;
  if (uVar7 <= uVar2 && uVar3 != 0) {
    if (uVar2 < *(uint *)(pSVar12 + 8)) {
      local_574 = '\0';
      local_580 = (void *)((long)piVar11 + (ulong)uVar7);
      local_588 = &PTR__SerializedData_01cbbb60;
      lVar9 = *(long *)pSVar12;
      uVar7 = *(uint *)(lVar9 + 0x4c);
      uVar2 = *(uint *)(lVar9 + 0x50);
      ppuVar5 = &PTR__SerializedData_01cbbb60;
      local_578 = uVar3;
      if (uVar2 <= uVar7) goto LAB_011ef3c0;
      if ((0 < (int)*(uint *)(pSVar12 + 8)) && (ppuVar5 = local_588, uVar2 < *(uint *)(pSVar12 + 8))
         ) {
        local_590 = uVar2 - uVar7;
        local_598 = (void *)(lVar9 + (ulong)uVar7);
        local_5a0 = &PTR__SerializedData_01cbbb60;
        local_58c = '\0';
        local_588 = &PTR__SerializedData_01cbbb60;
        Deserializer::Deserializer<v8::internal::SnapshotData_const>
                  ((Deserializer *)local_2d8,(SnapshotData *)&local_588,false);
        local_2d8[0] = &PTR__Deserializer_01cbbb88;
        Deserializer::Deserializer<v8::internal::SnapshotData_const>
                  ((Deserializer *)local_548,(SnapshotData *)&local_5a0,false);
        local_548[0] = &PTR__Deserializer_01cbbbc0;
        if (4 < *(uint *)(pSVar12 + 8)) {
          if (*(uint *)(*(long *)pSVar12 + 4) < 2) {
            local_87 = *(uint *)(*(long *)pSVar12 + 4) != 0;
            if (*(uint *)(pSVar12 + 8) < 5) goto LAB_011ef3d4;
            if (*(uint *)(*(long *)pSVar12 + 4) < 2) {
              local_2f7 = *(uint *)(*(long *)pSVar12 + 4) != 0;
              uVar7 = Isolate::InitWithSnapshot
                                (param_1,(ReadOnlyDeserializer *)local_548,
                                 (StartupDeserializer *)local_2d8);
              if (FLAG_profile_deserialization != '\0') {
                local_5a8 = base::TimeTicks::HighResolutionNow();
                local_5a8 = local_5a8 - lVar8;
                base::TimeDelta::InMillisecondsF((TimeDelta *)&local_5a8);
                PrintF("[Deserializing isolate (%d bytes) took %0.3f ms]\n",(ulong)uVar3);
              }
              Deserializer::~Deserializer((Deserializer *)local_548);
              Deserializer::~Deserializer((Deserializer *)local_2d8);
              local_5a0 = &PTR__SerializedData_01c983e8;
              ppuVar5 = &PTR__SerializedData_01c983e8;
              if ((local_58c != '\0') && (ppuVar5 = local_5a0, local_598 != (void *)0x0)) {
                local_5a0 = &PTR__SerializedData_01c983e8;
                operator_delete__(local_598);
                ppuVar5 = local_5a0;
              }
              local_5a0 = ppuVar5;
              local_588 = &PTR__SerializedData_01c983e8;
              ppuVar5 = &PTR__SerializedData_01c983e8;
              if ((local_574 != '\0') && (ppuVar5 = local_588, local_580 != (void *)0x0)) {
                local_588 = &PTR__SerializedData_01c983e8;
                operator_delete__(local_580);
                ppuVar5 = local_588;
              }
              local_588 = ppuVar5;
              if (local_570 != (RuntimeCallStats *)0x0) {
                RuntimeCallStats::Leave(local_570,(RuntimeCallTimer *)((ulong)&local_570 | 8));
              }
              goto LAB_011ef340;
            }
          }
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","rehashability != 0 implies rehashability == 1");
        }
LAB_011ef3d4:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","kRehashabilityOffset < static_cast<uint32_t>(data->raw_size)")
        ;
      }
    }
    local_588 = ppuVar5;
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","end_offset < snapshot->raw_size");
  }
LAB_011ef3c0:
  local_588 = ppuVar5;
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","start_offset < end_offset");
}

