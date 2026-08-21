
/* v8::internal::compiler::HeapNumberRef::value() const */

undefined1  [16] __thiscall v8::internal::compiler::HeapNumberRef::value(HeapNumberRef *this)

{
  long lVar1;
  ulong *puVar2;
  undefined1 auVar3 [16];
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    puVar2 = (ulong *)(*(long *)**(undefined8 **)this + 3);
  }
  else {
    lVar1 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapNumber()");
    }
    puVar2 = (ulong *)(lVar1 + 0x18);
  }
  auVar3._0_8_ = *puVar2;
  auVar3._8_8_ = 0;
  return auVar3;
}

