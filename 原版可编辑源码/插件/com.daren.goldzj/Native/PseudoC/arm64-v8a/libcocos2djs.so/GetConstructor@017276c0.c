
/* v8::internal::compiler::MapRef::GetConstructor() const */

undefined1  [16] __thiscall v8::internal::compiler::MapRef::GetConstructor(MapRef *this)

{
  uint *puVar1;
  uint uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  long local_40;
  undefined8 *puStack_38;
  
  puVar7 = *(undefined8 **)(this + 8);
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar6 = *(ulong *)**(undefined8 **)this;
    uVar2 = *(uint *)(uVar6 + 0x13);
    uVar6 = uVar6 & 0xffffffff00000000;
    uVar8 = uVar6 | uVar2;
    if ((uVar2 & 1) != 0) {
      do {
        if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2) break;
        puVar1 = (uint *)(uVar8 + 0x13);
        uVar8 = uVar6 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
    pIVar3 = (Isolate *)*puVar7;
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
    ObjectRef::ObjectRef((ObjectRef *)&local_40,puVar7,puVar4,0);
    puVar7 = puStack_38;
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
    if (*(char *)(lVar5 + 0x78) != '\x01') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","serialized_constructor_");
    }
    local_40 = *(long *)(lVar5 + 0x80);
    if (local_40 == 0) {
      puStack_38 = puVar7;
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(data_) != nullptr");
    }
  }
  auVar9._8_8_ = puVar7;
  auVar9._0_8_ = local_40;
  return auVar9;
}

