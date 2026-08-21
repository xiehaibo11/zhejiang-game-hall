
/* v8::debug::WasmScript::GetFunctionHash(int) */

uint __thiscall v8::debug::WasmScript::GetFunctionHash(WasmScript *this,int param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = **(long **)(*(long *)((*(ulong *)this & 0xffffffff00000000 |
                                (ulong)*(uint *)(*(ulong *)this + 0x27)) + 3) + 0x18);
  lVar1 = *(long *)(*(long *)(lVar3 + 200) + 0x88) + (long)param_1 * 0x20;
  uVar2 = internal::StringHasher::HashSequentialString<unsigned_char>
                    ((uchar *)(**(long **)(lVar3 + 0xe0) + (ulong)*(uint *)(lVar1 + 0x10)),
                     *(int *)(lVar1 + 0x14),0);
  return uVar2;
}

