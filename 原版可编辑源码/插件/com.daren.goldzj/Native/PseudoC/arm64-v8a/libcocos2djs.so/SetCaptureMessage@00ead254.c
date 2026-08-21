
/* v8::TryCatch::SetCaptureMessage(bool) */

void __thiscall v8::TryCatch::SetCaptureMessage(TryCatch *this,bool param_1)

{
  byte bVar1;
  
  bVar1 = 4;
  if (!param_1) {
    bVar1 = 0;
  }
  this[0x28] = (TryCatch)((byte)this[0x28] & 0xfb | bVar1);
  return;
}

