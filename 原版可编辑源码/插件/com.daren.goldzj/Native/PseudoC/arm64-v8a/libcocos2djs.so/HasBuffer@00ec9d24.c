
/* v8::ArrayBufferView::HasBuffer() const */

bool __thiscall v8::ArrayBufferView::HasBuffer(ArrayBufferView *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x41b) {
    return *(int *)(uVar1 + 0x2f) != *(int *)(uVar1 + 7);
  }
  return true;
}

