
/* v8::internal::LargeObjectSpace::ContainsSlow(unsigned long) */

undefined8 __thiscall
v8::internal::LargeObjectSpace::ContainsSlow(LargeObjectSpace *this,ulong param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x20);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if ((*(ulong *)(lVar1 + 0x20) <= param_1) && (param_1 < *(ulong *)(lVar1 + 0x28))) break;
    lVar1 = *(long *)(lVar1 + 0xe0);
  }
  return 1;
}

