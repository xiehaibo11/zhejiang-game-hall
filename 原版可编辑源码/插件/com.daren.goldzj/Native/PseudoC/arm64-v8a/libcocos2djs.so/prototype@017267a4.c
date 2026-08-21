
/* v8::internal::compiler::JSFunctionRef::prototype() const */

undefined1  [16] __thiscall v8::internal::compiler::JSFunctionRef::prototype(JSFunctionRef *this)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  long local_40;
  undefined8 *puStack_38;
  
  puVar8 = *(undefined8 **)(this + 8);
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar7 = *(ulong *)**(undefined8 **)this;
    uVar6 = uVar7 & 0xffffffff00000000;
    if ((*(byte *)((uVar6 | 9) + (ulong)*(uint *)(uVar7 - 1)) & 1) == 0) {
      uVar7 = uVar6 | *(uint *)(uVar7 + 0x1b);
      if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0xa2) {
        uVar7 = uVar6 | *(uint *)(uVar7 + 0xf);
      }
    }
    else {
      uVar2 = *(uint *)((uVar6 | 0x13) + (ulong)*(uint *)(uVar7 - 1));
      uVar7 = uVar6 | uVar2;
      if ((uVar2 & 1) != 0) {
        do {
          if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0xa2) break;
          puVar1 = (uint *)(uVar7 + 0x13);
          uVar7 = uVar6 | *puVar1;
        } while ((*puVar1 & 1) != 0);
      }
    }
    pIVar4 = (Isolate *)*puVar8;
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar7;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar7);
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_40,puVar8,puVar5,0);
    puVar8 = puStack_38;
  }
  else {
    lVar3 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar3 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar3 + 0x10) + 0x18) != 0x439) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSFunction()");
    }
    local_40 = *(long *)(lVar3 + 0xd0);
    if (local_40 == 0) {
      puStack_38 = puVar8;
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(data_) != nullptr");
    }
  }
  auVar9._8_8_ = puVar8;
  auVar9._0_8_ = local_40;
  return auVar9;
}

