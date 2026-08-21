
/* v8::internal::NativeContext::SetOptimizedCodeListHead(v8::internal::Object) */

void __thiscall
v8::internal::NativeContext::SetOptimizedCodeListHead(NativeContext *this,ulong param_2)

{
  ulong uVar1;
  
  *(int *)(*(long *)this + 0x417) = (int)param_2;
  if (((param_2 & 1) != 0) && ((*(byte *)((param_2 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) {
    uVar1 = *(ulong *)this;
    if ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
      Heap_GenerationalBarrierSlow(uVar1,uVar1 + 0x417);
      return;
    }
  }
  return;
}

