
/* v8::internal::ValueSerializer::ThrowIfOutOfMemory() */

undefined8 __thiscall v8::internal::ValueSerializer::ThrowIfOutOfMemory(ValueSerializer *this)

{
  if (this[0x29] != (ValueSerializer)0x0) {
    ThrowDataCloneError(this,0x169,*(long *)this + 200);
    return 0;
  }
  return 0x101;
}

