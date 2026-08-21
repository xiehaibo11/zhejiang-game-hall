
/* v8::internal::HashTable<v8::internal::CompilationCacheTable,
   v8::internal::CompilationCacheShape>::set_key(int, v8::internal::Object,
   v8::internal::WriteBarrierMode) */

void __thiscall
v8::internal::HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>::
set_key(HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape> *this,
       int param_1,ulong param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  
  lVar1 = (long)(param_1 << 2) + 7;
  *(int *)(*(long *)this + lVar1) = (int)param_3;
  if (param_4 != 0) {
    if (param_4 == 4) {
      if ((param_3 & 1) == 0) {
        return;
      }
      pbVar3 = (byte *)(param_3 & 0xfffffffffffc0000 | 8);
      if ((*(byte *)((param_3 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
        Heap_MarkingBarrierSlow(*(long *)this,*(long *)this + lVar1,param_3);
      }
    }
    else {
      if ((param_3 & 1) == 0) {
        return;
      }
      pbVar3 = (byte *)(param_3 & 0xfffffffffffc0000 | 8);
    }
    if (((*pbVar3 & 0x18) != 0) &&
       (uVar2 = *(ulong *)this, (*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar2,uVar2 + lVar1,param_3);
      return;
    }
  }
  return;
}

