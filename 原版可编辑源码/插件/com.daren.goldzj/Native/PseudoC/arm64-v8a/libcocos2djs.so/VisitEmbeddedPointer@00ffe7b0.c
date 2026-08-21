
/* v8::internal::FieldStatsCollector::VisitEmbeddedPointer(v8::internal::Code,
   v8::internal::RelocInfo*) */

void v8::internal::FieldStatsCollector::VisitEmbeddedPointer(long param_1)

{
  **(long **)(param_1 + 0x30) = **(long **)(param_1 + 0x30) + 1;
  return;
}

