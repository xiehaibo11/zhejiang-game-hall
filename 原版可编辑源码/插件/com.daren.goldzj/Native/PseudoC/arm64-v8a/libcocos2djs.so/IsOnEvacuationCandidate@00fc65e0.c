
/* v8::internal::MarkCompactCollector::IsOnEvacuationCandidate(v8::internal::MaybeObject) */

byte v8::internal::MarkCompactCollector::IsOnEvacuationCandidate(ulong param_1)

{
  return *(byte *)((param_1 & 0xfffffffffffc0000) + 8) >> 6 & 1;
}

