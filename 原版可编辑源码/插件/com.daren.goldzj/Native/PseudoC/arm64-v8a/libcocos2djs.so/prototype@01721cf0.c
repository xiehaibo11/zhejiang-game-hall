
/* v8::internal::compiler::MapRef::prototype() const */

undefined1  [16] __thiscall v8::internal::compiler::MapRef::prototype(MapRef *this)

{
  undefined1 auVar1 [16];
  Isolate *pIVar2;
  ulong *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long local_40;
  undefined8 *puStack_38;
  
  puVar5 = *(undefined8 **)(this + 8);
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    pIVar2 = (Isolate *)*puVar5;
    uVar6 = *(ulong *)**(undefined8 **)this;
    uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0xf);
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar6;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar6);
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_40,puVar5,puVar3,0);
  }
  else {
    lVar4 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar4 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar4 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    if (*(char *)(lVar4 + 0x98) != '\x01') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","serialized_prototype_");
    }
    local_40 = *(long *)(lVar4 + 0xa0);
    puStack_38 = puVar5;
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(data_) != nullptr");
    }
  }
  puVar5 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_40);
  if (*(int *)(puVar5 + 1) == 2) {
    if ((*(byte *)*puVar5 & 1) == 0) goto LAB_01721e0c;
  }
  else if (*(int *)(puVar5 + 1) == 0) {
LAB_01721e0c:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsHeapObject()");
  }
  auVar1._8_8_ = puStack_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}

