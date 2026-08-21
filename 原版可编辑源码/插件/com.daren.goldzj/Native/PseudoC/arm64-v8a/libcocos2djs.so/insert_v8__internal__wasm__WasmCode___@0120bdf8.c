
/* std::__ndk1::enable_if<__is_forward_iterator<v8::internal::wasm::WasmCode**>::value&&is_constructible<v8::internal::wasm::WasmCode*,
   std::__ndk1::iterator_traits<v8::internal::wasm::WasmCode**>::reference>::value,
   std::__ndk1::__wrap_iter<v8::internal::wasm::WasmCode**> >::type
   std::__ndk1::vector<v8::internal::wasm::WasmCode*,
   std::__ndk1::allocator<v8::internal::wasm::WasmCode*>
   >::insert<v8::internal::wasm::WasmCode**>(std::__ndk1::__wrap_iter<v8::internal::wasm::WasmCode*
   const*>, v8::internal::wasm::WasmCode**, v8::internal::wasm::WasmCode**) */

undefined8 * __thiscall
std::__ndk1::
vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>::
insert<v8::internal::wasm::WasmCode**>
          (vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
           *this,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  size_t sVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  size_t __n;
  long lVar12;
  void *pvVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar12 = (long)param_4 - (long)param_3;
  if (lVar12 < 1) {
    return param_2;
  }
  puVar2 = *(undefined8 **)(this + 8);
  lVar14 = lVar12 >> 3;
  if (lVar14 <= *(long *)(this + 0x10) - (long)puVar2 >> 3) {
    lVar12 = (long)puVar2 - (long)param_2 >> 3;
    puVar6 = puVar2;
    if (lVar12 < lVar14) {
      puVar11 = param_3 + lVar12;
      sVar5 = (long)param_4 - (long)puVar11;
      if (0 < (long)sVar5) {
        memcpy(puVar2,puVar11,sVar5);
        lVar12 = *(long *)(this + 8);
        *(undefined8 **)(this + 8) = (undefined8 *)(lVar12 + sVar5);
        puVar6 = (undefined8 *)(lVar12 + sVar5);
      }
      param_4 = puVar11;
      if ((long)puVar2 - (long)param_2 < 1) {
        return param_2;
      }
    }
    sVar5 = (long)puVar6 - (long)(param_2 + lVar14);
    puVar11 = puVar6;
    for (puVar9 = puVar6 + -lVar14; puVar9 < puVar2; puVar9 = puVar9 + 1) {
      *puVar11 = *puVar9;
      puVar11 = (undefined8 *)(*(long *)(this + 8) + 8);
      *(undefined8 **)(this + 8) = puVar11;
    }
    if (sVar5 != 0) {
      memmove(puVar6 + -((long)sVar5 >> 3),param_2,sVar5);
    }
    if ((long)param_4 - (long)param_3 == 0) {
      return param_2;
    }
    memmove(param_2,param_3,(long)param_4 - (long)param_3);
    return param_2;
  }
  pvVar13 = *(void **)this;
  uVar1 = lVar14 + ((long)puVar2 - (long)pvVar13 >> 3);
  if (uVar1 >> 0x3d != 0) {
LAB_0120c090:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar14 = *(long *)(this + 0x10) - (long)pvVar13;
  uVar10 = lVar14 >> 2;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0xffffffffffffffe < (ulong)(lVar14 >> 3)) {
    uVar1 = 0x1fffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3d != 0) goto LAB_0120c090;
    pvVar4 = operator_new(uVar1 << 3);
  }
  lVar14 = (long)param_2 - (long)pvVar13 >> 3;
  puVar2 = (undefined8 *)((long)pvVar4 + lVar14 * 8);
  puVar6 = puVar2;
  if (param_3 == param_4) goto LAB_0120c014;
  uVar7 = lVar12 - 8U >> 3;
  uVar10 = uVar7 + 1;
  puVar11 = puVar2;
  if ((uVar10 < 4) ||
     ((puVar2 < param_3 + uVar7 + 1 &&
      (param_3 < (undefined8 *)((long)pvVar4 + (lVar14 + uVar7) * 8 + 8))))) {
LAB_0120c000:
    do {
      puVar9 = param_3 + 1;
      puVar6 = puVar11 + 1;
      *puVar11 = *param_3;
      param_3 = puVar9;
      puVar11 = puVar6;
    } while (param_4 != puVar9);
  }
  else {
    uVar8 = uVar10 & 0x3ffffffffffffffc;
    puVar11 = param_3 + 2;
    puVar6 = puVar2 + uVar8;
    param_3 = param_3 + uVar8;
    puVar9 = (undefined8 *)((long)pvVar4 + lVar14 * 8 + 0x10);
    uVar7 = uVar8;
    do {
      puVar3 = puVar11 + -1;
      uVar15 = puVar11[-2];
      uVar17 = puVar11[1];
      uVar16 = *puVar11;
      puVar11 = puVar11 + 4;
      uVar7 = uVar7 - 4;
      puVar9[-1] = *puVar3;
      puVar9[-2] = uVar15;
      puVar9[1] = uVar17;
      *puVar9 = uVar16;
      puVar9 = puVar9 + 4;
    } while (uVar7 != 0);
    puVar11 = puVar6;
    if (uVar10 != uVar8) goto LAB_0120c000;
  }
  pvVar13 = *(void **)this;
LAB_0120c014:
  sVar5 = (long)param_2 - (long)pvVar13;
  if (0 < (long)sVar5) {
    memcpy((void *)((long)puVar2 - sVar5),pvVar13,sVar5);
  }
  __n = *(long *)(this + 8) - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar6,param_2,__n);
    puVar6 = (undefined8 *)((long)puVar6 + __n);
  }
  pvVar13 = *(void **)this;
  *(void **)this = (void *)((long)puVar2 - sVar5);
  *(undefined8 **)(this + 8) = puVar6;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 8);
  if (pvVar13 != (void *)0x0) {
    operator_delete(pvVar13);
  }
  return puVar2;
}

