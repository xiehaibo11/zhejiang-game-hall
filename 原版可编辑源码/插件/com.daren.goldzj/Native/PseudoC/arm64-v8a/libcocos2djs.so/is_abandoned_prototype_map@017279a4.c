
/* v8::internal::compiler::MapRef::is_abandoned_prototype_map() const */

bool __thiscall v8::internal::compiler::MapRef::is_abandoned_prototype_map(MapRef *this)

{
  long lVar1;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    lVar1 = *(long *)**(undefined8 **)this;
    if ((*(uint *)(lVar1 + 0xb) >> 0x14 & 1) == 0) {
      return false;
    }
    return (*(uint *)(lVar1 + 0xb) & 0x400000) == 0;
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0xa2) {
    return *(char *)(lVar1 + 0x42) != '\0';
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

