
/* v8::internal::Deserializer::Initialize(v8::internal::Isolate*) */

void __thiscall v8::internal::Deserializer::Initialize(Deserializer *this,Isolate *param_1)

{
  *(Isolate **)(this + 0x50) = param_1;
  *(Isolate **)(this + 0x248) = param_1 + 0x8850;
  if (*(int *)(this + 0x80) == -0x3f21fc8c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","magic_number_ == SerializedData::kMagicNumber");
}

