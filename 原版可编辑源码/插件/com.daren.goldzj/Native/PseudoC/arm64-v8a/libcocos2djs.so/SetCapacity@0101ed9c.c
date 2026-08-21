
/* v8::internal::NewLargeObjectSpace::SetCapacity(unsigned long) */

void __thiscall
v8::internal::NewLargeObjectSpace::SetCapacity(NewLargeObjectSpace *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x50))();
  if (uVar1 <= param_1) {
    uVar1 = param_1;
  }
  *(ulong *)(this + 0x88) = uVar1;
  return;
}

