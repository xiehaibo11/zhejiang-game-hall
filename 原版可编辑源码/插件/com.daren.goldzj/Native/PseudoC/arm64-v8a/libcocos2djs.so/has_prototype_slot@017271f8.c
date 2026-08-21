
/* v8::internal::compiler::MapRef::has_prototype_slot() const */

bool __thiscall v8::internal::compiler::MapRef::has_prototype_slot(MapRef *this)

{
  long lVar1;
  char cVar2;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    cVar2 = *(char *)(*(long *)**(undefined8 **)this + 9);
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
    cVar2 = *(char *)(lVar1 + 0x20);
  }
  return cVar2 < '\0';
}

