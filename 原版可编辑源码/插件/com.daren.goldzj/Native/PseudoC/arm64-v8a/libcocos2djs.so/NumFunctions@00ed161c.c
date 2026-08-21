
/* v8::debug::WasmScript::NumFunctions() const */

ulong __thiscall v8::debug::WasmScript::NumFunctions(WasmScript *this)

{
  long lVar1;
  
  lVar1 = *(long *)(**(long **)(*(long *)((*(ulong *)this & 0xffffffff00000000 |
                                          (ulong)*(uint *)(*(ulong *)this + 0x27)) + 3) + 0x18) +
                   200);
  return (ulong)(*(long *)(lVar1 + 0x90) - *(long *)(lVar1 + 0x88)) >> 5;
}

