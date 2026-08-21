
/* v8::TryCatch::CanContinue() const */

byte __thiscall v8::TryCatch::CanContinue(TryCatch *this)

{
  return (byte)this[0x28] >> 1 & 1;
}

