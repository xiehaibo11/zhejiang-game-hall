
/* v8::internal::WasmExportedFunction::sig() */

undefined8 __thiscall v8::internal::WasmExportedFunction::sig(WasmExportedFunction *this)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong local_8;
  
  local_8 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  uVar2 = SharedFunctionInfo::wasm_exported_function_data((SharedFunctionInfo *)&local_8);
  uVar4 = uVar2 & 0xffffffff00000000;
  lVar5 = *(long *)(**(long **)(*(long *)((uVar4 | *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(
                                                  uVar2 + 7)) + 0x6f)) + 0xb)) + 3) + 0x18) + 200);
  local_8 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  lVar3 = SharedFunctionInfo::wasm_exported_function_data((SharedFunctionInfo *)&local_8);
  uVar1 = *(int *)(lVar3 + 0xf) >> 1;
  return *(undefined8 *)
          (*(long *)(lVar5 + 0x88) +
          (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5));
}

