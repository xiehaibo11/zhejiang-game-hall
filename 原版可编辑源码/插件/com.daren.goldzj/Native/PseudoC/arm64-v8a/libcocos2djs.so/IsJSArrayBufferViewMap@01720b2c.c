
/* v8::internal::compiler::MapRef::IsJSArrayBufferViewMap() const */

bool __thiscall v8::internal::compiler::MapRef::IsJSArrayBufferViewMap(MapRef *this)

{
  long lVar1;
  ushort *puVar2;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    puVar2 = (ushort *)(*(long *)**(undefined8 **)this + 7);
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
    puVar2 = (ushort *)(lVar1 + 0x18);
  }
  return (*puVar2 & 0xfffe) == 0x41a;
}

