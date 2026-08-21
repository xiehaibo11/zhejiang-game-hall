
/* v8::internal::Isolate::RegisterTryCatchHandler(v8::TryCatch*) */

void __thiscall v8::internal::Isolate::RegisterTryCatchHandler(Isolate *this,TryCatch *param_1)

{
  *(TryCatch **)(this + 0x2bb8) = param_1;
  return;
}

