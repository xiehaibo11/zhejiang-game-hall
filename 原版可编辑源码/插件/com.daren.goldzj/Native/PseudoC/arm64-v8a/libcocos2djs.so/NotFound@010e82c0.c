
/* v8::internal::LookupIterator::NotFound(v8::internal::JSReceiver) const */

undefined4 __thiscall v8::internal::LookupIterator::NotFound(LookupIterator *this,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if (*(short *)((*(ulong *)(this + 0x18) | 7) + (ulong)*(uint *)(param_2 + -1)) == 0x41b) {
    if (*(long *)(this + 0x48) == -1) {
      uVar2 = 4;
      if (*(ushort *)
           ((*(ulong *)(this + 0x18) | 7) + (ulong)*(uint *)(**(long **)(this + 0x20) + -1)) < 0x40)
      {
        uVar1 = IsSpecialIndex();
        uVar2 = 4;
        if ((uVar1 & 1) != 0) {
          uVar2 = 1;
        }
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}

