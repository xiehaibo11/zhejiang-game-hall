
/* v8::internal::SequentialStringKey<unsigned short>::AsHandle(v8::internal::Isolate*) */

long * __thiscall
v8::internal::SequentialStringKey<unsigned_short>::AsHandle
          (SequentialStringKey<unsigned_short> *this,Isolate *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  iVar1 = *(int *)(this + 0x18);
  pvVar3 = *(void **)(this + 0x10);
  plVar2 = (long *)Factory::AllocateRawTwoByteInternalizedString
                             ((Factory *)param_1,iVar1,*(uint *)(this + 8));
  MemCopy((void *)(*plVar2 + 0xb),pvVar3,(long)(iVar1 << 1));
  return plVar2;
}

