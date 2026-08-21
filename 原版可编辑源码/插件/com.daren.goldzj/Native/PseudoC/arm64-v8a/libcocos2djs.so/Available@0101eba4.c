
/* v8::internal::NewLargeObjectSpace::Available() */

long __thiscall v8::internal::NewLargeObjectSpace::Available(NewLargeObjectSpace *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x88);
  lVar1 = (**(code **)(*(long *)this + 0x50))();
  return lVar2 - lVar1;
}

