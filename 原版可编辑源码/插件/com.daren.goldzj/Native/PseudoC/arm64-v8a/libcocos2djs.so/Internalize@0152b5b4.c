
/* v8::internal::LiteralBuffer::Internalize(v8::internal::Isolate*) const */

void __thiscall v8::internal::LiteralBuffer::Internalize(LiteralBuffer *this,Isolate *param_1)

{
  undefined8 local_20;
  long lStack_18;
  
  if (this[0x14] == (LiteralBuffer)0x0) {
    local_20 = *(undefined8 *)this;
    lStack_18 = (long)((ulong)*(uint *)(this + 0x10) << 0x20) >> 0x21;
    Factory::InternalizeString<unsigned_short>((Factory *)param_1,(Vector *)&local_20,false);
  }
  else {
    lStack_18 = (long)*(int *)(this + 0x10);
    local_20 = *(undefined8 *)this;
    Factory::InternalizeString<unsigned_char>((Factory *)param_1,(Vector *)&local_20,false);
  }
  return;
}

