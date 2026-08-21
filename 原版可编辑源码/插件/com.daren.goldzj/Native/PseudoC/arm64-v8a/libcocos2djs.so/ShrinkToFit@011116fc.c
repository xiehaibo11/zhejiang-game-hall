
/* v8::internal::FrameArray::ShrinkToFit(v8::internal::Isolate*) */

void __thiscall v8::internal::FrameArray::ShrinkToFit(FrameArray *this,Isolate *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)this;
  uVar2 = ((*(uint *)(lVar4 + 7) & 0xfffffffe) + ((int)*(uint *)(lVar4 + 7) >> 1)) * 2 | 1;
  iVar1 = *(int *)(lVar4 + 3) >> 1;
  iVar3 = iVar1 - uVar2;
  if (iVar3 != 0 && (int)uVar2 <= iVar1) {
    Heap::RightTrimFixedArray((Heap *)(param_1 + 0x8850),lVar4,iVar3);
    return;
  }
  return;
}

