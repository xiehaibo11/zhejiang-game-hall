
/* v8::internal::LookupIterator::Next() */

void __thiscall v8::internal::LookupIterator::Next(LookupIterator *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  this[8] = (LookupIterator)0x0;
  lVar3 = **(long **)(this + 0x38);
  lVar1 = *(long *)(this + 0x18) + (ulong)*(uint *)(lVar3 + -1);
  if (*(ushort *)(lVar1 + 7) < 0x411) {
    if (*(long *)(this + 0x48) == -1) {
      iVar2 = LookupInSpecialHolder<false>(this,lVar1,lVar3);
    }
    else {
      iVar2 = LookupInSpecialHolder<true>();
    }
    *(int *)(this + 4) = iVar2;
    if (iVar2 != 4) {
      return;
    }
  }
  if (*(long *)(this + 0x48) != -1) {
    NextInternal<true>();
    return;
  }
  NextInternal<false>(this,lVar1,lVar3);
  return;
}

