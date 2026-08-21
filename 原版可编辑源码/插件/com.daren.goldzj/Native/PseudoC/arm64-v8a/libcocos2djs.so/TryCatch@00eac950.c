
/* v8::TryCatch::TryCatch(v8::Isolate*) */

void __thiscall v8::TryCatch::TryCatch(TryCatch *this,Isolate *param_1)

{
  undefined8 uVar1;
  
  *(Isolate **)this = param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x2bb8);
  this[0x28] = (TryCatch)((byte)this[0x28] & 0xe0 | 6);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = internal::GetCurrentStackPosition();
  *(undefined8 *)(this + 0x20) = uVar1;
  internal::Isolate::RegisterTryCatchHandler(*(Isolate **)this,this);
  return;
}

