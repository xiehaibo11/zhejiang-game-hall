
/* v8::internal::SequentialStringKey<unsigned char>::AsHandle(v8::internal::Isolate*) */

long * __thiscall
v8::internal::SequentialStringKey<unsigned_char>::AsHandle
          (SequentialStringKey<unsigned_char> *this,Isolate *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  long *plVar3;
  
  pvVar1 = *(void **)(this + 0x10);
  uVar2 = *(undefined8 *)(this + 0x18);
  plVar3 = (long *)Factory::AllocateRawOneByteInternalizedString
                             ((Factory *)param_1,(int)uVar2,*(uint *)(this + 8));
  MemCopy((void *)(*plVar3 + 0xb),pvVar1,(long)(int)uVar2);
  return plVar3;
}

