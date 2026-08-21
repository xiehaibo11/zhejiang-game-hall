
/* v8::internal::CodeReference::constant_pool() const */

long __thiscall v8::internal::CodeReference::constant_pool(CodeReference *this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long local_18;
  
  iVar1 = *(int *)this;
  if (iVar1 == 3) {
    lVar3 = **(long **)(this + 8) + (long)(int)(*(long **)(this + 8))[4];
  }
  else {
    if (iVar1 == 2) {
      lVar3 = wasm::WasmCode::constant_pool();
      return lVar3;
    }
    if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    local_18 = **(long **)(this + 8);
    uVar2 = Code::has_constant_pool();
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      if (*(int *)(local_18 + 0x17) < 0) {
        lVar3 = Code::OffHeapInstructionStart((Code *)&local_18);
      }
      else {
        lVar3 = local_18 + 0x3f;
      }
      lVar3 = lVar3 + *(int *)(local_18 + 0x23);
    }
  }
  return lVar3;
}

