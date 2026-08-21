
/* v8::internal::compiler::FixedArrayRef::get(int) const */

undefined1  [16] __thiscall
v8::internal::compiler::FixedArrayRef::get(FixedArrayRef *this,int param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  long local_40;
  undefined8 *puStack_38;
  
  puVar5 = *(undefined8 **)(this + 8);
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar4 = *(ulong *)**(undefined8 **)this;
    pIVar1 = (Isolate *)*puVar5;
    uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + (long)(param_1 << 2) + 7);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar4;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_40,puVar5,puVar2,0);
    puVar5 = puStack_38;
  }
  else {
    lVar3 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar3 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (0xe < *(ushort *)(*(long *)(lVar3 + 0x10) + 0x18) - 0x76) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsFixedArray()");
    }
    if ((int)((ulong)(*(long *)(lVar3 + 0x28) - *(long *)(lVar3 + 0x20)) >> 3) <= param_1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","i < static_cast<int>(contents_.size())");
    }
    local_40 = *(long *)(*(long *)(lVar3 + 0x20) + (long)param_1 * 8);
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(contents_[i]) != nullptr");
    }
  }
  auVar6._8_8_ = puVar5;
  auVar6._0_8_ = local_40;
  return auVar6;
}

