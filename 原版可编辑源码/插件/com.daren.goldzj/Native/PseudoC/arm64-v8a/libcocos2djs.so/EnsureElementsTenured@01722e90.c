
/* v8::internal::compiler::JSObjectRef::EnsureElementsTenured() */

void __thiscall v8::internal::compiler::JSObjectRef::EnsureElementsTenured(JSObjectRef *this)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*(int *)(*(long *)this + 8) == 2) {
    puVar1 = (undefined8 *)elements(this);
    if (((*(ulong *)*puVar1 & 1) != 0) &&
       ((*(byte *)((*(ulong *)*puVar1 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) {
      puVar2 = (ulong *)Factory::CopyAndTenureFixedCOWArray((Factory *)**(undefined8 **)(this + 8));
      uVar5 = *puVar2;
      uVar6 = *(ulong *)**(undefined8 **)this;
      *(int *)(uVar6 + 7) = (int)uVar5;
      if ((uVar5 & 1) != 0) {
        uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar4 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar6,uVar6 + 7,uVar5);
          uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar6,uVar6 + 7,uVar5);
          return;
        }
      }
    }
  }
  else {
    lVar3 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar3 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(ushort *)(*(long *)(lVar3 + 0x10) + 0x18) < 0xaa) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSObject()");
    }
    if (*(char *)(lVar3 + 0x20) == '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","data()->AsJSObject()->cow_or_empty_elements_tenured()");
    }
  }
  return;
}

