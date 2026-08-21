
/* void v8::internal::LookupIterator::Start<true>() */

void __thiscall v8::internal::LookupIterator::Start<true>(LookupIterator *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  this[8] = (LookupIterator)0x0;
  *(undefined4 *)(this + 4) = 4;
  *(long **)(this + 0x38) = *(long **)(this + 0x40);
  lVar3 = **(long **)(this + 0x40);
  lVar1 = *(long *)(this + 0x18) + (ulong)*(uint *)(lVar3 + -1);
  if (*(ushort *)(lVar1 + 7) < 0x411) {
    iVar2 = LookupInSpecialHolder<true>();
  }
  else {
    iVar2 = LookupInRegularHolder<true>(this,lVar1,lVar3);
  }
  *(int *)(this + 4) = iVar2;
  if (iVar2 == 4) {
    NextInternal<true>(this,lVar1,lVar3);
    return;
  }
  return;
}

