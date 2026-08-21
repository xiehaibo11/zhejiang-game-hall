
/* v8::TryCatch::IsVerbose() const */

byte __thiscall v8::TryCatch::IsVerbose(TryCatch *this)

{
  return (byte)this[0x28] & 1;
}

