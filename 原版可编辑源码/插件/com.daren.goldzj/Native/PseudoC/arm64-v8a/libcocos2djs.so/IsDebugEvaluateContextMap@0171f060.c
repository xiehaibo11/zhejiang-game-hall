
/* v8::internal::compiler::MapRef::IsDebugEvaluateContextMap() const */

bool __thiscall v8::internal::compiler::MapRef::IsDebugEvaluateContextMap(MapRef *this)

{
  long lVar1;
  short *psVar2;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    psVar2 = (short *)(*(long *)**(undefined8 **)this + 7);
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
    psVar2 = (short *)(lVar1 + 0x18);
  }
  return *psVar2 == 0x8b;
}

