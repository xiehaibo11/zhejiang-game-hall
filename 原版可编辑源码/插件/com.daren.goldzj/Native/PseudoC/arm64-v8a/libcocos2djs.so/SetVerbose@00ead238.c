
/* v8::TryCatch::SetVerbose(bool) */

void __thiscall v8::TryCatch::SetVerbose(TryCatch *this,bool param_1)

{
  this[0x28] = (TryCatch)((byte)this[0x28] & 0xfe | param_1);
  return;
}

