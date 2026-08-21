
/* v8::TryCatch::Reset() */

void __thiscall v8::TryCatch::Reset(TryCatch *this)

{
  Isolate *this_00;
  undefined8 uVar1;
  
  if (((byte)this[0x28] >> 3 & 1) == 0) {
    this_00 = *(Isolate **)this;
    if ((((*(ulong *)(this + 0x10) & 1) == 0) ||
        ((int)*(ulong *)(this + 0x10) != (int)*(undefined8 *)(this_00 + 0xa8))) &&
       ((int)*(undefined8 *)(this_00 + 0xa8) != *(int *)(this_00 + 0x2c20))) {
      internal::Isolate::CancelScheduledExceptionFromTryCatch(this_00,this);
    }
  }
  uVar1 = *(undefined8 *)(*(long *)this + 0xa8);
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}

