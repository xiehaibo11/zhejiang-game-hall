
/* v8::internal::Code::OptimizedCodeIterator::OptimizedCodeIterator(v8::internal::Isolate*) */

void __thiscall
v8::internal::Code::OptimizedCodeIterator::OptimizedCodeIterator
          (OptimizedCodeIterator *this,Isolate *param_1)

{
  ulong uVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(Isolate **)(this + 0x10) = param_1;
  uVar1 = *(ulong *)(param_1 + 0x8e38);
  if (((uVar1 & 1) != 0) && ((int)uVar1 == *(int *)(param_1 + 0xa0))) {
    uVar1 = 0;
  }
  *(ulong *)this = uVar1;
  return;
}

