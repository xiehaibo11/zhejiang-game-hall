
/* v8::internal::Isolate::RestorePendingMessageFromTryCatch(v8::TryCatch*) */

void __thiscall
v8::internal::Isolate::RestorePendingMessageFromTryCatch(Isolate *this,TryCatch *param_1)

{
  *(undefined8 *)(this + 0x2c10) = *(undefined8 *)(param_1 + 0x18);
  return;
}

