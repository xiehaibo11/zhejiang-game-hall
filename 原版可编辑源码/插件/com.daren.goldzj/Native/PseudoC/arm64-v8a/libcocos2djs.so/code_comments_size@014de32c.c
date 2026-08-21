
/* v8::internal::CodeReference::code_comments_size() const */

ulong __thiscall v8::internal::CodeReference::code_comments_size(CodeReference *this)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_18;
  
  iVar1 = *(int *)this;
  if (iVar1 == 3) {
    uVar2 = (ulong)*(uint *)(*(long *)(this + 8) + 0x2c);
  }
  else {
    if (iVar1 == 2) {
      uVar2 = wasm::WasmCode::code_comments_size(*(WasmCode **)(this + 8));
      return uVar2;
    }
    if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    local_18 = **(undefined8 **)(this + 8);
    uVar2 = Code::code_comments_size((Code *)&local_18);
  }
  return uVar2;
}

