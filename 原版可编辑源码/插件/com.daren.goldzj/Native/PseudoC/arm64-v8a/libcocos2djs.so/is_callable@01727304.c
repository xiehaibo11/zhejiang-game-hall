
/* v8::internal::compiler::MapRef::is_callable() const */

byte __thiscall v8::internal::compiler::MapRef::is_callable(MapRef *this)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    pbVar2 = (byte *)(*(long *)**(undefined8 **)this + 9);
  }
  else {
    lVar1 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    pbVar2 = (byte *)(lVar1 + 0x20);
  }
  return *pbVar2 >> 1 & 1;
}

