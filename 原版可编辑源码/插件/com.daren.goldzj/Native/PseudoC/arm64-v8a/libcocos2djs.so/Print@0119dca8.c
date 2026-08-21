
/* v8::internal::HeapSnapshot::Print(int) */

void __thiscall v8::internal::HeapSnapshot::Print(HeapSnapshot *this,int param_1)

{
  HeapEntry::Print(*(HeapEntry **)(this + 8),"","",param_1,0);
  return;
}

