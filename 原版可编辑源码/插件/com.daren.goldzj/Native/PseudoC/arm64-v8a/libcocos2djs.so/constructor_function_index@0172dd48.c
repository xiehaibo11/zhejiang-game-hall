
/* v8::internal::compiler::MapRef::constructor_function_index() const */

uint __thiscall v8::internal::compiler::MapRef::constructor_function_index(MapRef *this)

{
  long lVar1;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    return (uint)*(byte *)(*(long *)**(undefined8 **)this + 4);
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) != 1) {
LAB_0172dddc:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0xa2) {
    if (0x43 < *(ushort *)(lVar1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsPrimitiveMap()");
    }
    lVar1 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar1 + 8) != 1) goto LAB_0172dddc;
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0xa2) {
      return *(uint *)(lVar1 + 0x34);
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

