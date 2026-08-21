
/* v8::internal::WasmJSFunction::GetSignature(v8::internal::Zone*) */

void __thiscall v8::internal::WasmJSFunction::GetSignature(WasmJSFunction *this,Zone *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  size_t __n;
  ulong uVar4;
  void *__dest;
  long *plVar5;
  ulong uVar6;
  ulong local_48;
  
  local_48 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  uVar4 = SharedFunctionInfo::wasm_js_function_data((SharedFunctionInfo *)&local_48);
  uVar1 = *(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0x13)) + 3);
  __dest = *(void **)(param_1 + 0x10);
  __n = (long)((ulong)uVar1 << 0x20) >> 0x21;
  uVar6 = __n + 7 & 0xfffffffffffffff8;
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)__dest) < uVar6) {
    __dest = (void *)Zone::NewExpand(param_1,uVar6);
  }
  else {
    *(ulong *)(param_1 + 0x10) = uVar6 + (long)__dest;
  }
  if (1 < (int)uVar1) {
    memcpy(__dest,(void *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0x13)) + 7),__n);
  }
  iVar2 = *(int *)(uVar4 + 0xb);
  plVar5 = *(long **)(param_1 + 0x10);
  iVar3 = *(int *)(uVar4 + 0xf);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)plVar5) < 0x18) {
    plVar5 = (long *)Zone::NewExpand(param_1,0x18);
  }
  else {
    *(long **)(param_1 + 0x10) = plVar5 + 3;
  }
  *plVar5 = (long)(iVar2 >> 1);
  plVar5[1] = (long)(iVar3 >> 1);
  plVar5[2] = (long)__dest;
  return;
}

