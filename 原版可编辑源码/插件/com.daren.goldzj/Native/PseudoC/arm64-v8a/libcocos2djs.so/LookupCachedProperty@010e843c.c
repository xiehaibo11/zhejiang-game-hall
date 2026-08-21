
/* v8::internal::LookupIterator::LookupCachedProperty() */

undefined8 __thiscall v8::internal::LookupIterator::LookupCachedProperty(LookupIterator *this)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  
  plVar3 = (long *)FetchValue(this);
  pIVar4 = *(Isolate **)(this + 0x18);
  uVar1 = *(uint *)(*plVar3 + 3);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = (ulong)(pIVar4 + uVar1);
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),(ulong)(pIVar4 + uVar1)
                                );
  }
  lVar6 = FunctionTemplateInfo::TryGetCachedPropertyName(*(undefined8 *)(this + 0x18),puVar5);
  if (lVar6 == 0) {
    return 0;
  }
  *(long *)(this + 0x20) = lVar6;
  this[8] = (LookupIterator)0x0;
  *(undefined8 *)(this + 0x50) = 0xffffffffffffffff;
  *(undefined4 *)(this + 4) = 4;
  *(undefined8 *)(this + 0xc) = 0xc000000000;
  *(long **)(this + 0x38) = *(long **)(this + 0x40);
  lVar7 = **(long **)(this + 0x40);
  lVar6 = *(long *)(this + 0x18) + (ulong)*(uint *)(lVar7 + -1);
  if (*(long *)(this + 0x48) == -1) {
    if (*(ushort *)(lVar6 + 7) < 0x411) {
      iVar2 = LookupInSpecialHolder<false>();
    }
    else {
      iVar2 = LookupInRegularHolder<false>(this,lVar6,lVar7);
    }
    *(int *)(this + 4) = iVar2;
    if (iVar2 != 4) goto LAB_010e8574;
    NextInternal<false>(this,lVar6,lVar7);
  }
  else {
    if (*(ushort *)(lVar6 + 7) < 0x411) {
      iVar2 = LookupInSpecialHolder<true>();
    }
    else {
      iVar2 = LookupInRegularHolder<true>();
    }
    *(int *)(this + 4) = iVar2;
    if (iVar2 != 4) goto LAB_010e8574;
    NextInternal<true>(this,lVar6,lVar7);
  }
  iVar2 = *(int *)(this + 4);
LAB_010e8574:
  if (iVar2 == 6) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","state() == LookupIterator::DATA");
}

