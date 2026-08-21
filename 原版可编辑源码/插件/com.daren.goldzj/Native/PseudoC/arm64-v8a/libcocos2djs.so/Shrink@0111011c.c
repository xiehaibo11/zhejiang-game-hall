
/* v8::internal::FixedArray::Shrink(v8::internal::Isolate*, int) */

void __thiscall v8::internal::FixedArray::Shrink(FixedArray *this,Isolate *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(long *)this + 3) >> 1;
  iVar2 = iVar1 - param_2;
  if (iVar2 != 0 && param_2 <= iVar1) {
    Heap::RightTrimFixedArray((Heap *)(param_1 + 0x8850),*(long *)this,iVar2);
    return;
  }
  return;
}

