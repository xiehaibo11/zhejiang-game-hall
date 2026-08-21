
/* std::__ndk1::vector<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,
   std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry> >,
   std::__ndk1::allocator<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,
   std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry> > > >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>,std::__ndk1::allocator<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>>>
::reserve(vector<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>,std::__ndk1::allocator<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>>>
          *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar10 = *(undefined8 **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar10 >> 3) * -0x5555555555555555) < param_1) {
    if (0xaaaaaaaaaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar11 = *(long *)(this + 8);
    pvVar7 = operator_new(param_1 * 0x18);
    lVar4 = lVar11 - (long)puVar10;
    lVar1 = (long)pvVar7 + lVar4;
    pvVar8 = (void *)((long)pvVar7 + param_1 * 0x18);
    if (lVar4 == 0) {
      *(long *)this = lVar1;
      *(long *)(this + 8) = lVar1;
      *(void **)(this + 0x10) = pvVar8;
    }
    else {
      lVar9 = 0;
      do {
        lVar6 = lVar9 + (lVar4 >> 3) * 8;
        lVar2 = lVar11 + lVar9;
        *(undefined8 *)((long)pvVar7 + lVar6 + -0x18) = 0;
        *(undefined8 *)((long)pvVar7 + lVar6 + -0x10) = 0;
        *(undefined8 *)((long)pvVar7 + lVar6 + -8) = 0;
        lVar9 = lVar9 + -0x18;
        *(undefined8 *)((long)pvVar7 + lVar6 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
        *(undefined8 *)((long)pvVar7 + lVar6 + -0x10) = *(undefined8 *)(lVar2 + -0x10);
        *(undefined8 *)((long)pvVar7 + lVar6 + -8) = *(undefined8 *)(lVar2 + -8);
        *(undefined8 *)(lVar2 + -0x18) = 0;
        *(undefined8 *)(lVar2 + -0x10) = 0;
        *(undefined8 *)(lVar2 + -8) = 0;
      } while ((long)puVar10 - lVar11 != lVar9);
      puVar10 = *(undefined8 **)this;
      puVar3 = *(undefined8 **)(this + 8);
      *(long *)this = (long)pvVar7 + lVar9 + (lVar4 >> 3) * 8;
      *(long *)(this + 8) = lVar1;
      *(void **)(this + 0x10) = pvVar8;
      if (puVar3 != puVar10) {
        pvVar8 = (void *)puVar3[-3];
        puVar5 = puVar3 + -3;
        while( true ) {
          if (pvVar8 != (void *)0x0) {
            puVar3[-2] = pvVar8;
            operator_delete(pvVar8);
          }
          if (puVar10 == puVar5) break;
          pvVar8 = (void *)puVar5[-3];
          puVar3 = puVar5;
          puVar5 = puVar5 + -3;
        }
      }
    }
    if (puVar10 != (undefined8 *)0x0) {
      operator_delete(puVar10);
      return;
    }
  }
  return;
}

