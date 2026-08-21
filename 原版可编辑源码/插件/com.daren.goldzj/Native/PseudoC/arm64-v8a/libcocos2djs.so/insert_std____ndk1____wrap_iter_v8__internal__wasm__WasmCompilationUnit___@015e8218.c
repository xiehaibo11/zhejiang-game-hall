
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::__wrap_iter<v8::internal::wasm::WasmCompilationUnit*>
   >::value&&is_constructible<v8::internal::wasm::WasmCompilationUnit,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::wasm::WasmCompilationUnit*>
   >::reference>::value, std::__ndk1::__wrap_iter<v8::internal::wasm::WasmCompilationUnit*> >::type
   std::__ndk1::vector<v8::internal::wasm::WasmCompilationUnit,
   std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>
   >::insert<std::__ndk1::__wrap_iter<v8::internal::wasm::WasmCompilationUnit*>
   >(std::__ndk1::__wrap_iter<v8::internal::wasm::WasmCompilationUnit const*>,
   std::__ndk1::__wrap_iter<v8::internal::wasm::WasmCompilationUnit*>,
   std::__ndk1::__wrap_iter<v8::internal::wasm::WasmCompilationUnit*>) */

undefined8 * __thiscall
std::__ndk1::
vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
::insert<std::__ndk1::__wrap_iter<v8::internal::wasm::WasmCompilationUnit*>>
          (vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
           *this,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  size_t sVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  size_t __n;
  long lVar13;
  void *pvVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar13 = (long)param_4 - (long)param_3;
  if (lVar13 < 1) {
    return param_2;
  }
  puVar2 = *(undefined8 **)(this + 8);
  lVar6 = lVar13 >> 3;
  if (lVar6 <= *(long *)(this + 0x10) - (long)puVar2 >> 3) {
    lVar13 = (long)puVar2 - (long)param_2 >> 3;
    puVar5 = puVar2;
    puVar12 = param_4;
    if (lVar13 < lVar6) {
      puVar12 = param_3 + lVar13;
      for (puVar8 = puVar12; puVar8 != param_4; puVar8 = puVar8 + 1) {
        *puVar5 = *puVar8;
        puVar5 = (undefined8 *)(*(long *)(this + 8) + 8);
        *(undefined8 **)(this + 8) = puVar5;
      }
      if ((long)puVar2 - (long)param_2 < 1) {
        return param_2;
      }
    }
    sVar4 = (long)puVar5 - (long)(param_2 + lVar6);
    puVar8 = puVar5;
    for (puVar7 = puVar5 + -lVar6; puVar7 < puVar2; puVar7 = puVar7 + 1) {
      *puVar8 = *puVar7;
      puVar8 = (undefined8 *)(*(long *)(this + 8) + 8);
      *(undefined8 **)(this + 8) = puVar8;
    }
    if (sVar4 != 0) {
      memmove(puVar5 + -((long)sVar4 >> 3),param_2,sVar4);
    }
    if ((long)puVar12 - (long)param_3 == 0) {
      return param_2;
    }
    memmove(param_2,param_3,(long)puVar12 - (long)param_3);
    return param_2;
  }
  pvVar14 = *(void **)this;
  uVar1 = lVar6 + ((long)puVar2 - (long)pvVar14 >> 3);
  if (uVar1 >> 0x3d != 0) {
LAB_015e84a4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = *(long *)(this + 0x10) - (long)pvVar14;
  uVar9 = lVar6 >> 2;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0xffffffffffffffe < (ulong)(lVar6 >> 3)) {
    uVar1 = 0x1fffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3d != 0) goto LAB_015e84a4;
    pvVar3 = operator_new(uVar1 << 3);
  }
  lVar6 = (long)param_2 - (long)pvVar14 >> 3;
  puVar2 = (undefined8 *)((long)pvVar3 + lVar6 * 8);
  puVar5 = puVar2;
  if (param_3 == param_4) goto LAB_015e8428;
  uVar10 = lVar13 - 8U >> 3;
  uVar9 = uVar10 + 1;
  puVar12 = puVar2;
  if ((uVar9 < 4) ||
     ((puVar2 < param_3 + uVar10 + 1 &&
      (param_3 < (undefined8 *)((long)pvVar3 + (lVar6 + uVar10) * 8 + 8))))) {
LAB_015e840c:
    do {
      puVar8 = param_3 + 1;
      puVar5 = puVar12 + 1;
      *puVar12 = *param_3;
      param_3 = puVar8;
      puVar12 = puVar5;
    } while (param_4 != puVar8);
  }
  else {
    uVar11 = uVar9 & 0x3ffffffffffffffc;
    puVar12 = param_3 + 2;
    puVar5 = puVar2 + uVar11;
    puVar8 = (undefined8 *)((long)pvVar3 + lVar6 * 8 + 0x10);
    uVar10 = uVar11;
    do {
      puVar7 = puVar12 + -1;
      uVar15 = puVar12[-2];
      uVar17 = puVar12[1];
      uVar16 = *puVar12;
      puVar12 = puVar12 + 4;
      uVar10 = uVar10 - 4;
      puVar8[-1] = *puVar7;
      puVar8[-2] = uVar15;
      puVar8[1] = uVar17;
      *puVar8 = uVar16;
      puVar8 = puVar8 + 4;
    } while (uVar10 != 0);
    param_3 = param_3 + uVar11;
    puVar12 = puVar5;
    if (uVar9 != uVar11) goto LAB_015e840c;
  }
  pvVar14 = *(void **)this;
LAB_015e8428:
  sVar4 = (long)param_2 - (long)pvVar14;
  if (0 < (long)sVar4) {
    memcpy((void *)((long)puVar2 - sVar4),pvVar14,sVar4);
  }
  __n = *(long *)(this + 8) - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar5,param_2,__n);
    puVar5 = (undefined8 *)((long)puVar5 + __n);
  }
  pvVar14 = *(void **)this;
  *(void **)this = (void *)((long)puVar2 - sVar4);
  *(undefined8 **)(this + 8) = puVar5;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 8);
  if (pvVar14 != (void *)0x0) {
    operator_delete(pvVar14);
  }
  return puVar2;
}

