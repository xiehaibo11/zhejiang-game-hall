
/* v8::debug::WasmScript::GetContainingFunction(int) const */

void __thiscall v8::debug::WasmScript::GetContainingFunction(WasmScript *this,int param_1)

{
  internal::wasm::GetContainingWasmFunction
            (*(WasmModule **)
              (**(long **)(*(long *)((*(ulong *)this & 0xffffffff00000000 |
                                     (ulong)*(uint *)(*(ulong *)this + 0x27)) + 3) + 0x18) + 200),
             param_1);
  return;
}

