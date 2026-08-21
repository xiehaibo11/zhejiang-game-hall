
/* v8::internal::MarkCompactCollector::RecordObjectStats() */

void __thiscall v8::internal::MarkCompactCollector::RecordObjectStats(MarkCompactCollector *this)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  byte local_320 [16];
  void *local_310;
  byte local_308 [16];
  void *local_2f8;
  long local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  void *local_2d8;
  void *pvStack_2d0;
  undefined2 local_2c4 [2];
  char *local_2c0;
  char *pcStack_2b8;
  long *local_2b0;
  long *local_2a8;
  undefined **local_2a0;
  undefined8 local_298;
  undefined **local_290;
  undefined **local_288;
  locale alStack_280 [8];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  ulong local_248;
  undefined8 uStack_240;
  void *local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined **local_220 [17];
  undefined8 local_198;
  undefined4 local_190;
  undefined **local_188;
  undefined8 uStack_180;
  undefined **local_178;
  undefined **local_170;
  locale alStack_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (TracingFlags::gc_stats != 0) {
    Heap::CreateObjectStats(*(Heap **)(this + 8));
    local_2f0 = *(long *)(this + 8);
    uStack_2e0 = *(undefined8 *)(local_2f0 + 0x858);
    local_2e8 = *(undefined8 *)(local_2f0 + 0x850);
    ObjectStatsCollector::Collect((ObjectStatsCollector *)&local_2f0);
    if ((TracingFlags::gc_stats >> 1 & 1) != 0) {
      uStack_180 = 0;
      local_188 = (undefined **)0x1c670a0;
      local_178 = &PTR__basic_stringstream_01c66fb0;
      local_108[0] = (undefined **)0x1c670c8;
      std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
      local_78 = 0xffffffff;
      local_80 = 0;
      local_188 = &PTR__basic_stringstream_01c66f88;
      local_178 = &PTR__basic_stringstream_01c66fb0;
      local_170 = &PTR__basic_streambuf_01c671a8;
      local_108[0] = &PTR__basic_stringstream_01c66fd8;
      std::__ndk1::locale::locale(alStack_168);
      local_298 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_148 = 0;
      local_150 = 0;
      uStack_158 = 0;
      local_160 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      local_120 = (void *)0x0;
      local_110 = 0x18;
      local_2a0 = (undefined **)0x1c670a0;
      local_290 = &PTR__basic_stringstream_01c66fb0;
      local_220[0] = (undefined **)0x1c670c8;
      local_170 = &PTR__basic_stringbuf_01c67100;
      std::__ndk1::ios_base::init((ios_base *)local_220,&local_288);
      local_190 = 0xffffffff;
      local_198 = 0;
      local_2a0 = &PTR__basic_stringstream_01c66f88;
      local_290 = &PTR__basic_stringstream_01c66fb0;
      local_288 = &PTR__basic_streambuf_01c671a8;
      local_220[0] = &PTR__basic_stringstream_01c66fd8;
      std::__ndk1::locale::locale(alStack_280);
      uStack_250 = 0;
      local_258 = 0;
      uStack_260 = 0;
      local_268 = 0;
      uStack_270 = 0;
      local_278 = 0;
      uStack_240 = 0;
      local_248 = 0;
      uStack_230 = 0;
      local_238 = (void *)0x0;
      local_228 = 0x18;
      local_288 = &PTR__basic_stringbuf_01c67100;
      ObjectStats::Dump(*(ObjectStats **)(*(long *)(this + 8) + 0x850),
                        (basic_stringstream *)&local_188);
      ObjectStats::Dump(*(ObjectStats **)(*(long *)(this + 8) + 0x858),
                        (basic_stringstream *)&local_2a0);
      if (DAT_01d3f198 == (byte *)0x0) {
        plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
        DAT_01d3f198 = (byte *)(**(code **)(*plVar3 + 0x10))
                                         (plVar3,"disabled-by-default-v8.gc_stats");
      }
      pbVar2 = DAT_01d3f198;
      if ((*DAT_01d3f198 & 5) != 0) {
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        local_2d8 = (void *)((ulong)local_308 | 1);
        if ((local_308[0] & 1) != 0) {
          local_2d8 = local_2f8;
        }
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        local_2c0 = "live";
        pcStack_2b8 = "dead";
        local_2c4[0] = 0x707;
        pvStack_2d0 = (void *)((ulong)local_320 | 1);
        if ((local_320[0] & 1) != 0) {
          pvStack_2d0 = local_310;
        }
        local_2b0 = (long *)0x0;
        local_2a8 = (long *)0x0;
        plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar3 + 0x18))
                  (plVar3,0x49,pbVar2,"V8.GC_Objects_Stats",0,0,0,2,&local_2c0,local_2c4,&local_2d8,
                   &local_2b0,0x10);
        plVar3 = local_2a8;
        local_2a8 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        plVar3 = local_2b0;
        local_2b0 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        if ((local_320[0] & 1) != 0) {
          operator_delete(local_310);
        }
        if ((local_308[0] & 1) != 0) {
          operator_delete(local_2f8);
        }
      }
      local_2a0 = &PTR__basic_stringstream_01c66f88;
      local_290 = &PTR__basic_stringstream_01c66fb0;
      local_220[0] = &PTR__basic_stringstream_01c66fd8;
      if ((local_248 & 1) != 0) {
        local_288 = &PTR__basic_stringbuf_01c67100;
        operator_delete(local_238);
      }
      local_288 = &PTR__basic_streambuf_01c671a8;
      std::__ndk1::locale::~locale(alStack_280);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_220);
      local_188 = &PTR__basic_stringstream_01c66f88;
      local_178 = &PTR__basic_stringstream_01c66fb0;
      local_108[0] = &PTR__basic_stringstream_01c66fd8;
      if ((local_130 & 1) != 0) {
        local_170 = &PTR__basic_stringbuf_01c67100;
        operator_delete(local_120);
      }
      local_170 = &PTR__basic_streambuf_01c671a8;
      std::__ndk1::locale::~locale(alStack_168);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
    }
    if (FLAG_trace_gc_object_stats != '\0') {
      ObjectStats::PrintJSON(*(ObjectStats **)(*(long *)(this + 8) + 0x850),"live");
      ObjectStats::PrintJSON(*(ObjectStats **)(*(long *)(this + 8) + 0x858),"dead");
    }
    ObjectStats::CheckpointObjectStats(*(ObjectStats **)(*(long *)(this + 8) + 0x850));
    ObjectStats::ClearObjectStats(*(ObjectStats **)(*(long *)(this + 8) + 0x858),false);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

