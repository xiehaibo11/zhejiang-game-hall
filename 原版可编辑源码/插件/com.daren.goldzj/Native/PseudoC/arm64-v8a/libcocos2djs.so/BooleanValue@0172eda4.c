
/* v8::internal::compiler::ObjectRef::BooleanValue() const */

byte __thiscall v8::internal::compiler::ObjectRef::BooleanValue(ObjectRef *this)

{
  byte bVar1;
  long lVar2;
  undefined8 local_8;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    local_8 = *(undefined8 *)**(undefined8 **)this;
    bVar1 = Object::BooleanValue((Object *)&local_8,(Isolate *)**(undefined8 **)(this + 8));
  }
  else {
    lVar2 = data(this);
    if (*(int *)(lVar2 + 8) == 0) {
      bVar1 = 1 < *(uint *)**(undefined8 **)this;
    }
    else {
      lVar2 = data(this);
      if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
      }
      bVar1 = *(char *)(lVar2 + 0xc) != '\0';
    }
  }
  return bVar1 & 1;
}

