
/* v8::TryCatch::HasTerminated() const */

byte __thiscall v8::TryCatch::HasTerminated(TryCatch *this)

{
  return (byte)this[0x28] >> 4 & 1;
}

