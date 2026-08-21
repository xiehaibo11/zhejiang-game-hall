
/* v8::internal::ReadOnlyHeap::CreateAndAttachToIsolate(v8::internal::Isolate*) */

ReadOnlyHeap * v8::internal::ReadOnlyHeap::CreateAndAttachToIsolate(Isolate *param_1)

{
  ReadOnlyHeap *pRVar1;
  ReadOnlySpace *this;
  ulong extraout_x1;
  
  pRVar1 = operator_new(0x28);
  this = Malloced::operator_new((Malloced *)0xf0,extraout_x1);
  ReadOnlySpace::ReadOnlySpace(this,(Heap *)(param_1 + 0x8850));
  *pRVar1 = (ReadOnlyHeap)0x0;
  *(ReadOnlySpace **)(pRVar1 + 8) = this;
  *(undefined8 *)(pRVar1 + 0x10) = 0;
  *(undefined8 *)(pRVar1 + 0x18) = 0;
  *(undefined8 *)(pRVar1 + 0x20) = 0;
  Isolate::SetUpFromReadOnlyHeap(param_1,pRVar1);
  return pRVar1;
}

