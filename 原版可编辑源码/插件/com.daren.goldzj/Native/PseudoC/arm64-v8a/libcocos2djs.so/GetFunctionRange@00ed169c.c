
/* v8::debug::WasmScript::GetFunctionRange(int) const */

undefined8 __thiscall v8::debug::WasmScript::GetFunctionRange(WasmScript *this,int param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(*(long *)(**(long **)(*(long *)((*(ulong *)this & 0xffffffff00000000 |
                                                    (ulong)*(uint *)(*(ulong *)this + 0x27)) + 3) +
                                         0x18) + 200) + 0x88) + (long)param_1 * 0x20;
  iVar2 = *(int *)(lVar1 + 0x10);
  return CONCAT44(*(int *)(lVar1 + 0x14) + iVar2,iVar2);
}

