
/* v8::internal::CodeReference::code_comments() const */

long __thiscall v8::internal::CodeReference::code_comments(CodeReference *this)

{
  int iVar1;
  long lVar2;
  long local_18;
  
  iVar1 = *(int *)this;
  if (iVar1 == 3) {
    lVar2 = **(long **)(this + 8) + (long)(int)(*(long **)(this + 8))[5];
  }
  else {
    if (iVar1 == 2) {
      lVar2 = wasm::WasmCode::code_comments(*(WasmCode **)(this + 8));
      return lVar2;
    }
    if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    local_18 = **(long **)(this + 8);
    if (*(int *)(local_18 + 0x17) < 0) {
      lVar2 = Code::OffHeapInstructionStart((Code *)&local_18);
    }
    else {
      lVar2 = local_18 + 0x3f;
    }
    lVar2 = lVar2 + *(int *)(local_18 + 0x23);
  }
  return lVar2;
}

