
/* v8::internal::PreparseDataBuilder::ByteData::CopyToHeap(v8::internal::Isolate*, int) */

long * __thiscall
v8::internal::PreparseDataBuilder::ByteData::CopyToHeap(ByteData *this,Isolate *param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 8);
  plVar1 = (long *)Factory::NewPreparseData((Factory *)param_1,(int)uVar2,param_2);
  memcpy((void *)(*plVar1 + 0xb),*(void **)this,(long)(int)uVar2);
  return plVar1;
}

