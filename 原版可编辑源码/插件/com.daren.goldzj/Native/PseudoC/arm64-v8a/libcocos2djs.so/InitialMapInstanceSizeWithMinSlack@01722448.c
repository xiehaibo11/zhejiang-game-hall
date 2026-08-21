
/* v8::internal::compiler::JSFunctionRef::InitialMapInstanceSizeWithMinSlack() const */

ulong __thiscall
v8::internal::compiler::JSFunctionRef::InitialMapInstanceSizeWithMinSlack(JSFunctionRef *this)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_18;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    local_18 = *(undefined8 *)**(undefined8 **)this;
    uVar1 = JSFunction::ComputeInstanceSizeWithMinSlack
                      ((JSFunction *)&local_18,(Isolate *)**(undefined8 **)(this + 8));
  }
  else {
    lVar2 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0x439) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSFunction()");
    }
    if (*(char *)(lVar2 + 0xb4) != '\x01') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","serialized_");
    }
    uVar1 = (ulong)*(uint *)(lVar2 + 0xe8);
  }
  return uVar1;
}

