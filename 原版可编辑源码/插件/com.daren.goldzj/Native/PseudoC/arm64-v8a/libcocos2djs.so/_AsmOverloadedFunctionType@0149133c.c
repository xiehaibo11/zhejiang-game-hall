
/* v8::internal::wasm::AsmOverloadedFunctionType::~AsmOverloadedFunctionType() */

void __thiscall
v8::internal::wasm::AsmOverloadedFunctionType::~AsmOverloadedFunctionType
          (AsmOverloadedFunctionType *this)

{
  *(undefined ***)this = &PTR_Name_01cc41d8;
  if (*(long *)(this + 8) != 0) {
    *(long *)(this + 0x10) = *(long *)(this + 8);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

