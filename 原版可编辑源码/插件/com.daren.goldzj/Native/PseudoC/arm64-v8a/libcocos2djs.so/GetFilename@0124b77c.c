
/* v8::internal::wasm::WasmModuleSourceMap::GetFilename(unsigned long) const */

void v8::internal::wasm::WasmModuleSourceMap::GetFilename(ulong param_1)

{
  ulong in_x1;
  ulong *in_x8;
  ulong *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  void *__dest;
  void *__src;
  ulong uVar7;
  
  puVar5 = *(ulong **)param_1;
  lVar2 = *(long *)(param_1 + 8) - (long)puVar5;
  if (lVar2 == 0) {
LAB_0124b884:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","offsets.begin() != up");
  }
  uVar4 = lVar2 >> 3;
  puVar1 = puVar5;
  do {
    uVar6 = uVar4 >> 1;
    uVar7 = uVar4 + ~uVar6;
    uVar4 = uVar6;
    if (puVar1[uVar6] <= in_x1) {
      puVar1 = puVar1 + uVar6 + 1;
      uVar4 = uVar7;
    }
  } while (uVar4 != 0);
  if ((long)puVar1 - (long)puVar5 == 0) goto LAB_0124b884;
  lVar2 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(((long)puVar1 - (long)puVar5) + *(long *)(param_1 + 0x30) + -8);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  puVar5 = (ulong *)(lVar2 + lVar3 * 0x18);
  if ((*puVar5 & 1) == 0) {
    uVar7 = puVar5[1];
    uVar4 = *puVar5;
    in_x8[2] = puVar5[2];
    in_x8[1] = uVar7;
    *in_x8 = uVar4;
    return;
  }
  lVar2 = lVar2 + lVar3 * 0x18;
  uVar4 = *(ulong *)(lVar2 + 8);
  if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __src = *(void **)(lVar2 + 0x10);
  if (uVar4 < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar4 << 1);
    if (uVar4 == 0) goto LAB_0124b870;
  }
  else {
    uVar7 = uVar4 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar7);
    in_x8[1] = uVar4;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar7 | 1;
  }
  memcpy(__dest,__src,uVar4);
LAB_0124b870:
  *(undefined1 *)((long)__dest + uVar4) = 0;
  return;
}

