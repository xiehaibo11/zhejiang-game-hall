
/* v8::internal::compiler::MapRef::GetBackPointer() const */

undefined1  [16] __thiscall v8::internal::compiler::MapRef::GetBackPointer(MapRef *this)

{
  uint uVar1;
  undefined1 auVar2 [16];
  Isolate *pIVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long local_40;
  undefined8 *puStack_38;
  
  puVar6 = *(undefined8 **)(this + 8);
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar7 = *(ulong *)**(undefined8 **)this;
    uVar1 = *(uint *)(uVar7 + 0x13);
    uVar7 = uVar7 & 0xffffffff00000000;
    if (((uVar1 & 1) == 0) ||
       (uVar8 = uVar7 | uVar1, *(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2)) {
      uVar8 = *(ulong *)(uVar7 + 0xa0);
    }
    pIVar3 = (Isolate *)*puVar6;
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar8;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar8);
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_40,puVar6,puVar4,0);
  }
  else {
    lVar5 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar5 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar5 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    if (*(char *)(lVar5 + 0x88) != '\x01') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","serialized_backpointer_");
    }
    local_40 = *(long *)(lVar5 + 0x90);
    puStack_38 = puVar6;
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(data_) != nullptr");
    }
  }
  puVar6 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_40);
  if (*(int *)(puVar6 + 1) == 2) {
    if ((*(byte *)*puVar6 & 1) == 0) goto LAB_01727954;
  }
  else if (*(int *)(puVar6 + 1) == 0) {
LAB_01727954:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsHeapObject()");
  }
  auVar2._8_8_ = puStack_38;
  auVar2._0_8_ = local_40;
  return auVar2;
}

