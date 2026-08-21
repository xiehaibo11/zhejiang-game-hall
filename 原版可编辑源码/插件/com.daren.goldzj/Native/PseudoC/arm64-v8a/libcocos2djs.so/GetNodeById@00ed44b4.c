
/* v8::HeapSnapshot::GetNodeById(unsigned int) const */

void v8::HeapSnapshot::GetNodeById(uint param_1)

{
  uint in_w1;
  
  internal::HeapSnapshot::GetEntryById((HeapSnapshot *)(ulong)param_1,in_w1);
  return;
}

