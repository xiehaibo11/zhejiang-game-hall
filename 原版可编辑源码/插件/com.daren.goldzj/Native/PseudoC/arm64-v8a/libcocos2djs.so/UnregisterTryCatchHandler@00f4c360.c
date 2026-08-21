
/* v8::internal::Isolate::UnregisterTryCatchHandler(v8::TryCatch*) */

void __thiscall v8::internal::Isolate::UnregisterTryCatchHandler(Isolate *this,TryCatch *param_1)

{
  *(undefined8 *)(this + 0x2bb8) = *(undefined8 *)(param_1 + 8);
  return;
}

