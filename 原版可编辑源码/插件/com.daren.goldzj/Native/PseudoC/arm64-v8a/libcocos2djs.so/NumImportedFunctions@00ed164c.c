
/* v8::debug::WasmScript::NumImportedFunctions() const */

undefined4 __thiscall v8::debug::WasmScript::NumImportedFunctions(WasmScript *this)

{
  return *(undefined4 *)
          (*(long *)(**(long **)(*(long *)((*(ulong *)this & 0xffffffff00000000 |
                                           (ulong)*(uint *)(*(ulong *)this + 0x27)) + 3) + 0x18) +
                    200) + 0x3c);
}

