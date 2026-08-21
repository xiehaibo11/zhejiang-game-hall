
/* v8::internal::InterceptorInfo
   v8::internal::LookupIterator::GetInterceptor<true>(v8::internal::JSObject) const */

ulong __thiscall
v8::internal::LookupIterator::GetInterceptor<true>(LookupIterator *this,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(this + 0x18);
  uVar3 = *(uint *)((uVar2 | 0x13) + (ulong)*(uint *)(param_2 + -1)) + uVar2;
  if (*(ulong *)(this + 0x48) < 0xffffffff) {
    if ((uVar3 & 1) != 0) {
      do {
        if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0xa2) {
          if (((uVar3 & 1) != 0) && (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x439)
             ) {
            uVar3 = uVar3 & 0xffffffff00000000 |
                    (ulong)*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xb)) +
                                    3);
          }
          break;
        }
        uVar3 = *(uint *)(uVar3 + 0x13) + uVar2;
      } while ((uVar3 & 1) != 0);
    }
    uVar3 = *(uint *)(uVar3 + 0x23) + uVar2;
    if ((int)uVar3 == (int)*(ulong *)(uVar2 + 0xa0)) {
      return *(ulong *)(uVar2 + 0xa0);
    }
    uVar1 = *(uint *)(uVar3 + 0x13);
  }
  else {
    if ((uVar3 & 1) != 0) {
      do {
        if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0xa2) {
          if (((uVar3 & 1) != 0) && (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x439)
             ) {
            uVar3 = uVar3 & 0xffffffff00000000 |
                    (ulong)*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xb)) +
                                    3);
          }
          break;
        }
        uVar3 = *(uint *)(uVar3 + 0x13) + uVar2;
      } while ((uVar3 & 1) != 0);
    }
    uVar3 = *(uint *)(uVar3 + 0x23) + uVar2;
    if ((int)uVar3 == (int)*(ulong *)(uVar2 + 0xa0)) {
      return *(ulong *)(uVar2 + 0xa0);
    }
    uVar1 = *(uint *)(uVar3 + 0xf);
  }
  return uVar3 & 0xffffffff00000000 | (ulong)uVar1;
}

