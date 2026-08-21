
/* v8::internal::compiler::MapRef::CanTransition() const */

bool __thiscall v8::internal::compiler::MapRef::CanTransition(MapRef *this)

{
  long lVar1;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    return 0xa9 < *(ushort *)(*(long *)**(undefined8 **)this + 7);
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) == 1) {
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0xa2) {
      return *(char *)(lVar1 + 0x29) != '\0';
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsMap()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

