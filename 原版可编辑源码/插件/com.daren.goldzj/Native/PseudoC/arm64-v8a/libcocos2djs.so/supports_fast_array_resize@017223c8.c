
/* v8::internal::compiler::MapRef::supports_fast_array_resize() const */

ulong __thiscall v8::internal::compiler::MapRef::supports_fast_array_resize(MapRef *this)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar1 = FUN_0170e21c(**(undefined8 **)(this + 8),**(undefined8 **)this);
    return uVar1;
  }
  lVar2 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar2 + 8) == 1) {
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) == 0xa2) {
      return (ulong)*(byte *)(lVar2 + 0x41);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsMap()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

