
/* v8::internal::compiler::WasmGraphBuilder::GetTrapIdForTrap(v8::internal::wasm::TrapReason) */

uint __thiscall
v8::internal::compiler::WasmGraphBuilder::GetTrapIdForTrap(WasmGraphBuilder *this,uint param_2)

{
  if ((*(long *)(this + 0x10) != 0) && (*(char *)(*(long *)(this + 0x10) + 9) != '\0')) {
    if (param_2 < 0xc) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return 0xc;
}

