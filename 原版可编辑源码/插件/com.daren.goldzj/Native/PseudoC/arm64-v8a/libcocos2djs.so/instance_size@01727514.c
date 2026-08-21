
/* v8::internal::compiler::MapRef::instance_size() const */

int __thiscall v8::internal::compiler::MapRef::instance_size(MapRef *this)

{
  long lVar1;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    return (uint)*(byte *)(*(long *)**(undefined8 **)this + 3) << 2;
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) == 1) {
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0xa2) {
      return *(int *)(lVar1 + 0x1c);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsMap()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

