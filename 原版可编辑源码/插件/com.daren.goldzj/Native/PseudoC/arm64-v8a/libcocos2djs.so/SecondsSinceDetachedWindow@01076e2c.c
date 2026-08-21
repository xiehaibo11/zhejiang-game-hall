
/* v8::internal::NativeContext::SecondsSinceDetachedWindow() const */

int __thiscall v8::internal::NativeContext::SecondsSinceDetachedWindow(NativeContext *this)

{
  uint uVar1;
  double dVar2;
  
  uVar1 = *(uint *)(this + 4);
  dVar2 = (double)Heap::MonotonicallyIncreasingTimeInMs();
  return (int)((dVar2 - *(double *)((ulong)uVar1 << 0x20 | 0xb6c0)) / 1000.0 -
              (double)(*(int *)(*(long *)this + 0x3d7) >> 1));
}

