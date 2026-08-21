
/* void std::__ndk1::vector<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,
   std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry> >,
   std::__ndk1::allocator<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,
   std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry> > >
   >::__push_back_slow_path<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,
   std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry> >
   >(std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,
   std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry> >&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>,std::__ndk1::allocator<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>>>
::
__push_back_slow_path<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>>
          (vector<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>,std::__ndk1::allocator<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>>>
           *this,vector *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar8 * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    lVar6 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar7 = lVar6 * 0x5555555555555556;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar1) goto LAB_015f63d0;
      pvVar4 = operator_new(uVar1 * 0x18);
    }
    puVar5 = (undefined8 *)((long)pvVar4 + lVar8 * 8);
    puVar5[1] = 0;
    puVar5[2] = 0;
    uVar11 = *(undefined8 *)param_1;
    puVar5[1] = *(undefined8 *)(param_1 + 8);
    *puVar5 = uVar11;
    puVar5[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar9 = *(undefined8 **)this;
    puVar2 = *(undefined8 **)(this + 8);
    puVar3 = puVar5 + 3;
    puVar10 = puVar9;
    if (puVar2 != puVar9) {
      lVar8 = 0;
      do {
        *(undefined8 *)((long)puVar5 + lVar8 + -0x18) = 0;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x10) = 0;
        *(undefined8 *)((long)puVar5 + lVar8 + -8) = 0;
        lVar6 = lVar8 + -0x18;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x18) =
             *(undefined8 *)((long)puVar2 + lVar8 + -0x18);
        *(undefined8 *)((long)puVar5 + lVar8 + -0x10) =
             *(undefined8 *)((long)puVar2 + lVar8 + -0x10);
        *(undefined8 *)((long)puVar5 + lVar8 + -8) = *(undefined8 *)((long)puVar2 + lVar8 + -8);
        *(undefined8 *)((long)puVar2 + lVar8 + -0x18) = 0;
        *(undefined8 *)((long)puVar2 + lVar8 + -0x10) = 0;
        *(undefined8 *)((long)puVar2 + lVar8 + -8) = 0;
        lVar8 = lVar6;
      } while ((long)puVar9 - (long)puVar2 != lVar6);
      puVar9 = *(undefined8 **)(this + 8);
      puVar5 = (undefined8 *)((long)puVar5 + lVar6);
      puVar10 = *(undefined8 **)this;
    }
    *(undefined8 **)this = puVar5;
    *(undefined8 **)(this + 8) = puVar3;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x18);
    if (puVar9 != puVar10) {
      pvVar4 = (void *)puVar9[-3];
      puVar3 = puVar9 + -3;
      while( true ) {
        puVar5 = puVar3;
        if (pvVar4 != (void *)0x0) {
          puVar9[-2] = pvVar4;
          operator_delete(pvVar4);
        }
        if (puVar10 == puVar5) break;
        pvVar4 = (void *)puVar5[-3];
        puVar3 = puVar5 + -3;
        puVar9 = puVar5;
      }
    }
    if (puVar10 != (undefined8 *)0x0) {
      operator_delete(puVar10);
      return;
    }
    return;
  }
LAB_015f63d0:
                    /* WARNING: Subroutine does not return */
  abort();
}

