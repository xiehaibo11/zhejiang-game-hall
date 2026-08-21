
/* v8::ValueDeserializer::GetWireFormatVersion() const */

undefined4 __thiscall v8::ValueDeserializer::GetWireFormatVersion(ValueDeserializer *this)

{
  if (*(char *)(*(long *)this + 0x48) == '\0') {
    return *(undefined4 *)(*(long *)this + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!private_->has_aborted");
}

