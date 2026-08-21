
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011d697c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::CodeSerializer::Serialize(v8::internal::Handle<v8::internal::SharedFunctionInfo>)
    */

CachedData * v8::internal::CodeSerializer::Serialize(ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  byte *pbVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  CanonicalHandleScope *pCVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  TemplateHashMapEntry *pTVar13;
  ScriptData *this;
  long lVar14;
  ulong uVar15;
  CachedData *pCVar16;
  Isolate *pIVar17;
  ulong uVar18;
  long lVar19;
  long local_2d8;
  byte **local_2d0;
  byte *local_2c8;
  char *local_2c0;
  undefined8 local_2b8;
  RuntimeCallStats *local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  CallStatsScopedTracer aCStack_288 [8];
  long local_280;
  char *local_278;
  ulong local_260;
  uchar *local_258;
  int local_250;
  undefined1 auStack_248 [8];
  undefined **local_240;
  long *local_238;
  vector avStack_1f0 [52];
  uint local_1bc;
  SerializerAllocator aSStack_168 [240];
  uint local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pIVar17 = (Isolate *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  if (DAT_01d3fc10 == (byte *)0x0) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fc10 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,&DAT_019c38f7);
  }
  local_280 = 0;
  if ((*DAT_01d3fc10 & 5) != 0) {
    tracing::CallStatsScopedTracer::Initialize(aCStack_288,pIVar17,DAT_01d3fc10,"V8.Execute");
  }
  lVar19 = *(long *)(pIVar17 + 0x9520);
  TimedHistogram::Start
            ((TimedHistogram *)(lVar19 + 0xac0),(ElapsedTimer *)(lVar19 + 0xaf0),
             *(Isolate **)(*(long *)(lVar19 + 0xae0) + 0x10));
  local_290 = 0;
  uStack_2a8 = 0;
  local_2b0 = (RuntimeCallStats *)0x0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_2b0 = (RuntimeCallStats *)(*(long *)(pIVar17 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_2b0,(ulong)&local_2b0 | 8,0x7d);
  }
  if (DAT_01d3fc18 == (byte *)0x0) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fc18 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.compile");
  }
  pbVar5 = DAT_01d3fc18;
  local_2d0 = (byte **)0x0;
  if ((*DAT_01d3fc18 & 5) != 0) {
    local_240 = (undefined **)0x0;
    local_238 = (long *)0x0;
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))(plVar7,0x58,pbVar5,"V8.CompileSerialize",0,0,0,0);
    plVar7 = local_238;
    local_238 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    ppuVar6 = local_240;
    local_240 = (undefined **)0x0;
    if (ppuVar6 != (undefined **)0x0) {
      (**(code **)(*ppuVar6 + 8))();
    }
    local_2d0 = &local_2c8;
    local_2c0 = "V8.CompileSerialize";
    local_2c8 = pbVar5;
    local_2b8 = uVar8;
  }
  if (FLAG_profile_deserialization == '\0') {
    local_2d8 = 0;
  }
  else {
    local_2d8 = base::TimeTicks::HighResolutionNow();
  }
  uVar15 = *param_1 & 0xffffffff00000000;
  uVar18 = uVar15 | *(uint *)(*param_1 + 0xf);
  if (*(short *)((uVar15 | 7) + (ulong)*(uint *)(uVar18 - 1)) == 0x5b) {
    uVar18 = uVar15 | *(uint *)(uVar18 + 0xb);
  }
  pCVar9 = *(CanonicalHandleScope **)(pIVar17 + 0x95b8);
  if (pCVar9 == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)(pIVar17 + 0x95a0);
    if (puVar10 == *(ulong **)(pIVar17 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(pIVar17);
    }
    *(ulong **)(pIVar17 + 0x95a0) = puVar10 + 1;
    *puVar10 = uVar18;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup(pCVar9,uVar18);
  }
  if (FLAG_trace_serializer != '\0') {
    PrintF("[Serializing from");
    local_240 = (undefined **)(*puVar10 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar10 + 7));
    Object::ShortPrint((Object *)&local_240,(__sFILE *)waitpid);
    PrintF("]\n");
  }
  local_240 = (undefined **)*puVar10;
  uVar15 = Script::ContainsAsmModule((Script *)&local_240);
  if ((uVar15 & 1) == 0) {
    pCVar9 = *(CanonicalHandleScope **)(pIVar17 + 0x95b8);
    uVar15 = *puVar10 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar10 + 3);
    if (pCVar9 == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)(pIVar17 + 0x95a0);
      puVar12 = (ulong *)0x0;
      if (puVar11 == *(ulong **)(pIVar17 + 0x95a8)) {
        puVar11 = (ulong *)HandleScope::Extend(pIVar17);
        puVar12 = puVar11;
      }
      *(ulong **)(pIVar17 + 0x95a0) = puVar11 + 1;
      *puVar11 = uVar15;
    }
    else {
      puVar11 = (ulong *)CanonicalHandleScope::Lookup(pCVar9,uVar15);
      uVar15 = *puVar11;
      puVar12 = puVar11;
    }
    uVar1 = *(uint *)(uVar15 + 7);
    uVar2 = *(uint *)(*puVar10 + 0x2f);
    Serializer::Serializer((Serializer *)&local_240,pIVar17);
    local_240 = &PTR__CodeSerializer_01cbb850;
    local_78 = uVar1 | (uVar2 & 0x80) << 0x18;
    SerializerAllocator::UseCustomChunkSize(aSStack_168,FLAG_serialization_chunk_size);
    uVar15 = (ulong)local_1bc;
    local_260 = *puVar11;
    local_1bc = local_1bc + 1;
    pTVar13 = base::
              TemplateHashMapImpl<unsigned_long,v8::internal::SerializerReference,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>
              ::
              LookupOrInsert<v8::base::TemplateHashMapImpl<unsigned_long,v8::internal::SerializerReference,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(unsigned_long_const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                        (puVar12,&local_260,local_260,auStack_248);
    *(ulong *)(pTVar13 + 8) = uVar15 << 0x20 | 0x16;
    (*(code *)local_240[3])(&local_240,10,0,param_1);
    Serializer::SerializeDeferredObjects((Serializer *)&local_240);
    Serializer::Pad((Serializer *)&local_240,0);
    SerializedCodeData::SerializedCodeData
              ((SerializedCodeData *)&local_260,avStack_1f0,(CodeSerializer *)&local_240);
    this = operator_new(0x18);
    ScriptData::ScriptData(this,local_258,local_250);
    cVar4 = FLAG_profile_deserialization;
    *this = (ScriptData)((byte)*this | 1);
    if (cVar4 != '\0') {
      lVar14 = base::TimeTicks::HighResolutionNow();
      local_260 = lVar14 - local_2d8;
      base::TimeDelta::InMillisecondsF((TimeDelta *)&local_260);
      PrintF("[Serializing to %d bytes took %0.3f ms]\n",(ulong)*(uint *)(this + 0x10));
    }
    pCVar16 = operator_new(0x18);
    ScriptCompiler::CachedData::CachedData
              (pCVar16,*(undefined8 *)(this + 8),*(undefined4 *)(this + 0x10),1);
    operator_delete(this);
    local_240 = &PTR__CodeSerializer_01cbb850;
    Serializer::OutputStatistics((char *)&local_240);
    Serializer::~Serializer((Serializer *)&local_240);
  }
  else {
    pCVar16 = (CachedData *)0x0;
  }
  if ((local_2d0 != (byte **)0x0) && (*local_2c8 != 0)) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_2c8,local_2c0,local_2b8);
  }
  if (local_2b0 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_2b0,(RuntimeCallTimer *)((ulong)&local_2b0 | 8));
  }
  TimedHistogram::Stop
            ((TimedHistogram *)(lVar19 + 0xac0),(ElapsedTimer *)(lVar19 + 0xaf0),
             *(Isolate **)(*(long *)(lVar19 + 0xae0) + 0x10));
  if ((local_280 != 0) && (*local_278 != '\0')) {
    tracing::CallStatsScopedTracer::AddEndTraceEvent(aCStack_288);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return pCVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

