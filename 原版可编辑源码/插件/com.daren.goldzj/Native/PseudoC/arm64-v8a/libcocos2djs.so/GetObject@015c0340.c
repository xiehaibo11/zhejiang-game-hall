
/* v8::internal::DeserializerAllocator::GetObject(v8::internal::SnapshotSpace, unsigned int,
   unsigned int) */

long __thiscall
v8::internal::DeserializerAllocator::GetObject
          (DeserializerAllocator *this,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(this + (long)param_2 * 0x18) + (ulong)param_3 * 0x18 + 8) +
          (ulong)param_4;
  if (*(int *)(this + 0xc0) != 0) {
    iVar1 = Heap::GetFillToAlign(lVar2);
    lVar2 = lVar2 + iVar1;
    *(undefined4 *)(this + 0xc0) = 0;
  }
  return lVar2 + 1;
}

