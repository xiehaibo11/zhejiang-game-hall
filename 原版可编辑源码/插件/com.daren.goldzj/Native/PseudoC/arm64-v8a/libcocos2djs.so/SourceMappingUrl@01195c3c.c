
/* v8::internal::Scanner::SourceMappingUrl(v8::internal::Isolate*) const */

undefined8 __thiscall v8::internal::Scanner::SourceMappingUrl(Scanner *this,Isolate *param_1)

{
  undefined8 uVar1;
  
  if (0 < *(int *)(this + 0x148) >> (((byte)this[0x14c] ^ 1) & 0x1f)) {
    uVar1 = LiteralBuffer::Internalize((LiteralBuffer *)(this + 0x138),param_1);
    return uVar1;
  }
  return 0;
}

