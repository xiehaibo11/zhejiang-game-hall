
/* v8::internal::FixedArray::ShrinkOrEmpty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::FixedArray>, int) */

ulong * v8::internal::FixedArray::ShrinkOrEmpty(long param_1,ulong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  if (param_3 == 0) {
    param_2 = (ulong *)(uVar3 & 0xffffffff00000000 | 0x168);
  }
  else {
    iVar1 = *(int *)(uVar3 + 3) >> 1;
    iVar2 = iVar1 - param_3;
    if (iVar2 != 0 && param_3 <= iVar1) {
      Heap::RightTrimFixedArray((Heap *)(param_1 + 0x8850),uVar3,iVar2);
    }
  }
  return param_2;
}

