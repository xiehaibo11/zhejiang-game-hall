
/* v8::internal::ScopeIterator::CollectLocalsFromCurrentScope() */

void __thiscall v8::internal::ScopeIterator::CollectLocalsFromCurrentScope(ScopeIterator *this)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(*(long *)(this + 0x50) + 0x40);
  plVar1 = (long *)(*(long *)(this + 0x50) + 0x38);
  while (plVar1 != plVar4) {
    lVar3 = *plVar1;
    if (((*(ushort *)(lVar3 + 0x28) >> 7 & 7) - 1 & 0xff) < 2) {
      uVar2 = StringSet::Add(*(undefined8 *)this,*(undefined8 *)(this + 0x38),
                             **(undefined8 **)(lVar3 + 8));
      *(undefined8 *)(this + 0x38) = uVar2;
      lVar3 = *plVar1;
    }
    plVar1 = (long *)(lVar3 + 0x18);
  }
  return;
}

