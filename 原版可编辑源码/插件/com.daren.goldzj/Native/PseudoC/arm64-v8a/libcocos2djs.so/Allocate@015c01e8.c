
/* v8::internal::DeserializerAllocator::Allocate(v8::internal::SnapshotSpace, int) */

long __thiscall
v8::internal::DeserializerAllocator::Allocate
          (DeserializerAllocator *this,undefined4 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(this + 0xc0) != 0) {
    iVar1 = Heap::GetMaximumFillToAlign();
    lVar2 = AllocateRaw(this,param_2,iVar1 + param_3);
    lVar2 = Heap::AlignWithFiller
                      (*(Heap **)(this + 0x100),lVar2 + 1,param_3,iVar1 + param_3,
                       *(undefined4 *)(this + 0xc0));
    *(undefined4 *)(this + 0xc0) = 0;
    return lVar2 + -1;
  }
  lVar2 = AllocateRaw(this,param_2,param_3);
  return lVar2;
}

