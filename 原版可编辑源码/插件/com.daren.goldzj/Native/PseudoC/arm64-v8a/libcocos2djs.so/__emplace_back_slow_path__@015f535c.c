
/* void std::__ndk1::vector<v8::internal::wasm::WasmElemSegment,
   std::__ndk1::allocator<v8::internal::wasm::WasmElemSegment> >::__emplace_back_slow_path<>() */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::WasmElemSegment,std::__ndk1::allocator<v8::internal::wasm::WasmElemSegment>>
::__emplace_back_slow_path<>
          (vector<v8::internal::wasm::WasmElemSegment,std::__ndk1::allocator<v8::internal::wasm::WasmElemSegment>>
           *this)

{
  ulong uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  pvVar11 = *(void **)this;
  pvVar10 = *(void **)(this + 8);
  lVar6 = (long)pvVar10 - (long)pvVar11 >> 3;
  uVar1 = lVar6 * 0x6db6db6db6db6db7 + 1;
  if (uVar1 < 0x492492492492493) {
    lVar7 = *(long *)(this + 0x10) - (long)pvVar11 >> 3;
    uVar8 = lVar7 * -0x2492492492492492;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0x249249249249248 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
      uVar1 = 0x492492492492492;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x492492492492492 < uVar1) goto LAB_015f54f4;
      pvVar3 = operator_new(uVar1 * 0x38);
    }
    puVar5 = (undefined4 *)((long)pvVar3 + lVar6 * 8);
    puVar2 = puVar5 + 0xe;
    *puVar5 = 0;
    puVar5[2] = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined8 *)(puVar5 + 10) = 0;
    *(undefined8 *)(puVar5 + 6) = 0;
    *(undefined1 *)(puVar5 + 0xc) = 0;
    if (pvVar10 != pvVar11) {
      lVar6 = 0;
      do {
        uVar13 = *(undefined8 *)((long)pvVar10 + lVar6 + -0x30);
        uVar12 = *(undefined8 *)((long)pvVar10 + lVar6 + -0x38);
        uVar9 = *(undefined8 *)((long)pvVar10 + lVar6 + -0x28);
        *(undefined8 *)((long)puVar5 + lVar6 + -0x18) = 0;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x10) = 0;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x30) = uVar13;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x38) = uVar12;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x28) = uVar9;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x20) = 0;
        lVar7 = lVar6 + -0x38;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x20) =
             *(undefined8 *)((long)pvVar10 + lVar6 + -0x20);
        *(undefined8 *)((long)puVar5 + lVar6 + -0x18) =
             *(undefined8 *)((long)pvVar10 + lVar6 + -0x18);
        *(undefined8 *)((long)puVar5 + lVar6 + -0x10) =
             *(undefined8 *)((long)pvVar10 + lVar6 + -0x10);
        *(undefined8 *)((long)pvVar10 + lVar6 + -0x20) = 0;
        *(undefined8 *)((long)pvVar10 + lVar6 + -0x18) = 0;
        *(undefined8 *)((long)pvVar10 + lVar6 + -0x10) = 0;
        *(undefined1 *)((long)puVar5 + lVar6 + -8) = *(undefined1 *)((long)pvVar10 + lVar6 + -8);
        lVar6 = lVar7;
      } while ((long)pvVar11 - (long)pvVar10 != lVar7);
      pvVar10 = *(void **)this;
      pvVar11 = *(void **)(this + 8);
      puVar5 = (undefined4 *)((long)puVar5 + lVar7);
    }
    *(undefined4 **)this = puVar5;
    *(undefined4 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x38);
    while (pvVar3 = pvVar11, pvVar3 != pvVar10) {
      pvVar4 = *(void **)((long)pvVar3 + -0x20);
      pvVar11 = (void *)((long)pvVar3 + -0x38);
      if (pvVar4 != (void *)0x0) {
        *(void **)((long)pvVar3 + -0x18) = pvVar4;
        operator_delete(pvVar4);
      }
    }
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
      return;
    }
    return;
  }
LAB_015f54f4:
                    /* WARNING: Subroutine does not return */
  abort();
}

