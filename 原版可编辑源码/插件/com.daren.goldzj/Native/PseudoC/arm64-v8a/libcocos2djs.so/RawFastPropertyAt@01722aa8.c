
/* v8::internal::compiler::JSObjectRef::RawFastPropertyAt(v8::internal::FieldIndex) const */

undefined1  [16] __thiscall
v8::internal::compiler::JSObjectRef::RawFastPropertyAt(JSObjectRef *this,ulong param_2)

{
  long lVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  long local_40;
  undefined8 uStack_38;
  
  uVar6 = (uint)param_2;
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    puVar7 = *(undefined8 **)(this + 8);
    uVar4 = *(ulong *)**(undefined8 **)this;
    uVar5 = uVar4 & 0xffffffff00000000;
    if ((uVar6 >> 0xd & 1) == 0) {
      uVar6 = *(uint *)(uVar4 + 3);
      if (((uVar6 & 1) == 0) || (uVar6 == *(uint *)(uVar5 + 0x168))) {
        uVar4 = *(ulong *)(uVar5 + 0x3b8);
      }
      else {
        uVar4 = uVar5 | uVar6;
      }
      uVar6 = *(uint *)(((param_2 & 0x1ffc) - (param_2 >> 0x1a & 0x7c)) + uVar4 + 7);
    }
    else {
      uVar6 = *(uint *)((param_2 & 0x1fff) + uVar4 + -1);
    }
    pIVar2 = (Isolate *)*puVar7;
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar5 | uVar6;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar5 | uVar6);
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_40,puVar7,puVar3,0);
  }
  else {
    lVar1 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(ushort *)(*(long *)(lVar1 + 0x10) + 0x18) < 0xaa) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSObject()");
    }
    if ((uVar6 >> 0xd & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","index.is_inobject()");
    }
    uVar4 = (ulong)(int)((uVar6 >> 2 & 0x7ff) - ((uint)(param_2 >> 0x1c) & 0x1f));
    if ((ulong)(*(long *)(lVar1 + 0x30) - *(long *)(lVar1 + 0x28) >> 4) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","static_cast<size_t>(property_index) < inobject_fields_.size()");
    }
    local_40 = *(long *)(*(long *)(lVar1 + 0x28) + uVar4 * 0x10);
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsObject()");
    }
    uStack_38 = *(undefined8 *)(this + 8);
  }
  auVar8._8_8_ = uStack_38;
  auVar8._0_8_ = local_40;
  return auVar8;
}

