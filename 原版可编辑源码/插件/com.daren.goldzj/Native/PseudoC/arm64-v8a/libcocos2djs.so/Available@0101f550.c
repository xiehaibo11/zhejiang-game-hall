
/* v8::internal::NewSpace::Available() */

long __thiscall v8::internal::NewSpace::Available(NewSpace *this)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 0x138);
  lVar1 = (**(code **)(*(long *)this + 0x48))();
  return (uVar2 >> 0x12) * 0x3fee8 - lVar1;
}

