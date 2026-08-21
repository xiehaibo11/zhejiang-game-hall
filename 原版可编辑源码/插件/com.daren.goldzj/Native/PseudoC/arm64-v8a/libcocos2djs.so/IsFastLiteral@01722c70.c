
/* v8::internal::compiler::AllocationSiteRef::IsFastLiteral() const */

byte __thiscall v8::internal::compiler::AllocationSiteRef::IsFastLiteral(AllocationSiteRef *this)

{
  byte bVar1;
  ulong *puVar2;
  long lVar3;
  Isolate *pIVar4;
  ulong uVar5;
  undefined4 local_24;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar5 = *(ulong *)**(undefined8 **)this;
    pIVar4 = (Isolate *)**(undefined8 **)(this + 8);
    uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 3);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar5;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar5);
    }
    local_24 = 0xfc;
    bVar1 = FUN_0173a914(puVar2,3,&local_24);
  }
  else {
    lVar3 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar3 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar3 + 0x10) + 0x18) != 0x55) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsAllocationSite()");
    }
    bVar1 = *(char *)(lVar3 + 0x28) != '\0';
  }
  return bVar1 & 1;
}

