
/* v8::internal::HeapObjectsMap::UpdateObjectSize(unsigned long, int) */

void __thiscall
v8::internal::HeapObjectsMap::UpdateObjectSize(HeapObjectsMap *this,ulong param_1,int param_2)

{
  FindOrAddEntry(this,param_1,param_2,false);
  return;
}

