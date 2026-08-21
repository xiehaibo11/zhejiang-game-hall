
/* bool v8::internal::LookupIterator::SkipInterceptor<false>(v8::internal::JSObject) */

bool __thiscall
v8::internal::LookupIterator::SkipInterceptor<false>(LookupIterator *this,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(this + 0x18);
  uVar3 = *(uint *)((uVar2 | 0x13) + (ulong)*(uint *)(param_2 + -1)) + uVar2;
  if ((uVar3 & 1) != 0) {
    do {
      if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0xa2) {
        if (((uVar3 & 1) != 0) && (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x439))
        {
          uVar3 = uVar3 & 0xffffffff00000000 |
                  (ulong)*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xb)) + 3)
          ;
        }
        break;
      }
      uVar3 = *(uint *)(uVar3 + 0x13) + uVar2;
    } while ((uVar3 & 1) != 0);
  }
  uVar4 = *(ulong *)(uVar2 + 0xa0);
  uVar2 = *(uint *)(uVar3 + 0x23) + uVar2;
  if ((int)uVar2 != (int)uVar4) {
    uVar4 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xf);
  }
  if ((*(short *)((*(ulong *)(this + 0x18) | 7) + (ulong)*(uint *)(**(long **)(this + 0x20) + -1))
       == 0x40) && ((*(byte *)(uVar4 + 0x23) >> 1 & 1) == 0)) {
    return true;
  }
  if ((*(byte *)(uVar4 + 0x23) >> 3 & 1) != 0) {
    iVar1 = *(int *)(this + 0xc);
    if (iVar1 == 2) {
      return false;
    }
    if (iVar1 == 1) {
      return true;
    }
    if (iVar1 == 0) {
      *(undefined4 *)(this + 0xc) = 1;
      return true;
    }
  }
  return *(int *)(this + 0xc) == 2;
}

