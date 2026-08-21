
/* v8::internal::Snapshot::NewContextFromSnapshot(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSGlobalProxy>, unsigned long,
   v8::DeserializeInternalFieldsCallback) */

long __thiscall
v8::internal::Snapshot::NewContextFromSnapshot
          (Snapshot *this,undefined8 param_1,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  uint uVar1;
  undefined **ppuVar2;
  long lVar3;
  StartupData *pSVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined **local_a8;
  void *local_a0;
  undefined4 local_98;
  char local_94;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_48;
  
  if ((*(long *)(this + 0xb7e8) == 0) || (*(int *)(*(long *)(this + 0xb7e8) + 8) == 0)) {
    lVar5 = 0;
  }
  else {
    local_70 = 0;
    uStack_88 = 0;
    local_90 = (RuntimeCallStats *)0x0;
    uStack_78 = 0;
    uStack_80 = 0;
    if (TracingFlags::runtime_stats != 0) {
      local_90 = (RuntimeCallStats *)(*(long *)(this + 0x9520) + 0x58a0);
      RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x80);
    }
    if (FLAG_profile_deserialization == '\0') {
      lVar3 = 0;
    }
    else {
      lVar3 = base::TimeTicks::HighResolutionNow();
    }
    pSVar4 = *(StartupData **)(this + 0xb7e8);
    if (*(uint *)(pSVar4 + 8) < 5) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kRehashabilityOffset < static_cast<uint32_t>(data->raw_size)");
    }
    uVar1 = *(uint *)(*(long *)pSVar4 + 4);
    if (1 < uVar1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","rehashability != 0 implies rehashability == 1");
    }
    auVar6 = ExtractContextData(pSVar4,(uint)param_3);
    local_a0 = auVar6._0_8_;
    local_98 = auVar6._8_4_;
    local_94 = '\0';
    local_a8 = &PTR__SerializedData_01cbbb60;
    lVar5 = PartialDeserializer::DeserializeContext
                      ((PartialDeserializer *)this,&local_a8,uVar1 != 0,param_1,param_4,param_5);
    if ((lVar5 != 0) && (FLAG_profile_deserialization != '\0')) {
      local_48 = base::TimeTicks::HighResolutionNow();
      local_48 = local_48 - lVar3;
      base::TimeDelta::InMillisecondsF((TimeDelta *)&local_48);
      PrintF("[Deserializing context #%zu (%d bytes) took %0.3f ms]\n",param_3,
             auVar6._8_8_ & 0xffffffff);
    }
    local_a8 = &PTR__SerializedData_01c983e8;
    ppuVar2 = &PTR__SerializedData_01c983e8;
    if ((local_94 != '\0') && (ppuVar2 = local_a8, local_a0 != (void *)0x0)) {
      local_a8 = &PTR__SerializedData_01c983e8;
      operator_delete__(local_a0);
      ppuVar2 = local_a8;
    }
    local_a8 = ppuVar2;
    if (local_90 != (RuntimeCallStats *)0x0) {
      RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
    }
  }
  return lVar5;
}

