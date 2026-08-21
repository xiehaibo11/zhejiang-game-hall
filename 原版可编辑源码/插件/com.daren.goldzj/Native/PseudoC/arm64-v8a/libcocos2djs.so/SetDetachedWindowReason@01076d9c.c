
/* v8::internal::NativeContext::SetDetachedWindowReason(v8::Context::DetachedWindowReason) */

void __thiscall
v8::internal::NativeContext::SetDetachedWindowReason(NativeContext *this,int param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  double dVar4;
  
  *(int *)(*(long *)this + 0x3d3) = param_2 << 1;
  uVar1 = *(ulong *)this;
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = uVar1 & 0xffffffff00000000;
    dVar4 = (double)Heap::MonotonicallyIncreasingTimeInMs();
    uVar1 = *(ulong *)this;
    iVar2 = (int)((dVar4 - *(double *)(uVar3 + 0xb6c0)) / 1000.0) << 1;
  }
  *(int *)(uVar1 + 0x3d7) = iVar2;
  return;
}

