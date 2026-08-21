
/* v8::internal::wasm::AsyncCompileJob::DecodeFail::~DecodeFail() */

void __thiscall v8::internal::wasm::AsyncCompileJob::DecodeFail::~DecodeFail(DecodeFail *this)

{
  *(undefined ***)this = &PTR__DecodeFail_01cc9bb8;
  if (((byte)this[0x10] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}

