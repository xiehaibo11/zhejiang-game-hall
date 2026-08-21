
/* v8::internal::CompilationStatistics::RecordTotalStats(unsigned long,
   v8::internal::CompilationStatistics::BasicStats const&) */

void __thiscall
v8::internal::CompilationStatistics::RecordTotalStats
          (CompilationStatistics *this,ulong param_1,BasicStats *param_2)

{
  base::Mutex::Lock((Mutex *)(this + 0x70));
  BasicStats::Accumulate((BasicStats *)this,param_2);
  base::Mutex::Unlock((Mutex *)(this + 0x70));
  return;
}

