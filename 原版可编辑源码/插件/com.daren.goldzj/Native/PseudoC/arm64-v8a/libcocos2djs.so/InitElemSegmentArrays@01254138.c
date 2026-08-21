
/* v8::internal::WasmInstanceObject::InitElemSegmentArrays(v8::internal::Handle<v8::internal::WasmInstanceObject>,
   v8::internal::Handle<v8::internal::WasmModuleObject>) */

void v8::internal::WasmInstanceObject::InitElemSegmentArrays(long *param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(**(long **)(*(long *)((*param_2 & 0xffffffff00000000 |
                                          (ulong)*(uint *)(*param_2 + 0xb)) + 3) + 0x18) + 200);
  lVar1 = *(long *)(lVar1 + 0x120) - *(long *)(lVar1 + 0x118);
  if (lVar1 != 0) {
    uVar2 = 0;
    do {
      *(undefined1 *)(*(long *)(*param_1 + 0xbb) + uVar2) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulong)((lVar1 >> 3) * 0x6db6db6db6db6db7));
  }
  return;
}

