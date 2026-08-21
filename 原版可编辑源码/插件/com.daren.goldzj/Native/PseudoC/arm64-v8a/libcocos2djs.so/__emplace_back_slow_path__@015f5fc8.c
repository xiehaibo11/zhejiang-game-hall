
/* void std::__ndk1::vector<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,
   std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry> >,
   std::__ndk1::allocator<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,
   std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry> > > >::__emplace_back_slow_path<>()
    */

void __thiscall
std::__ndk1::
vector<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>,std::__ndk1::allocator<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>>>
::__emplace_back_slow_path<>
          (vector<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>,std::__ndk1::allocator<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>>>
           *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)(this + 8);
  lVar4 = (long)puVar2 - (long)puVar8 >> 3;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
LAB_015f6138:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = *(long *)(this + 0x10) - (long)puVar8 >> 3;
  uVar7 = lVar6 * 0x5555555555555556;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
    uVar1 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar1 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar1) goto LAB_015f6138;
    pvVar3 = operator_new(uVar1 * 0x18);
  }
  puVar5 = (undefined8 *)((long)pvVar3 + lVar4 * 8);
  pvVar3 = (void *)((long)pvVar3 + uVar1 * 0x18);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  if (puVar2 == puVar8) {
    *(undefined8 **)this = puVar5;
    *(undefined8 **)(this + 8) = puVar5 + 3;
    *(void **)(this + 0x10) = pvVar3;
  }
  else {
    lVar4 = 0;
    do {
      *(undefined8 *)((long)puVar5 + lVar4 + -0x18) = 0;
      *(undefined8 *)((long)puVar5 + lVar4 + -0x10) = 0;
      *(undefined8 *)((long)puVar5 + lVar4 + -8) = 0;
      lVar6 = lVar4 + -0x18;
      *(undefined8 *)((long)puVar5 + lVar4 + -0x18) = *(undefined8 *)((long)puVar2 + lVar4 + -0x18);
      *(undefined8 *)((long)puVar5 + lVar4 + -0x10) = *(undefined8 *)((long)puVar2 + lVar4 + -0x10);
      *(undefined8 *)((long)puVar5 + lVar4 + -8) = *(undefined8 *)((long)puVar2 + lVar4 + -8);
      *(undefined8 *)((long)puVar2 + lVar4 + -0x18) = 0;
      *(undefined8 *)((long)puVar2 + lVar4 + -0x10) = 0;
      *(undefined8 *)((long)puVar2 + lVar4 + -8) = 0;
      lVar4 = lVar6;
    } while ((long)puVar8 - (long)puVar2 != lVar6);
    puVar8 = *(undefined8 **)this;
    puVar2 = *(undefined8 **)(this + 8);
    *(long *)this = (long)puVar5 + lVar6;
    *(undefined8 **)(this + 8) = puVar5 + 3;
    *(void **)(this + 0x10) = pvVar3;
    if (puVar2 != puVar8) {
      pvVar3 = (void *)puVar2[-3];
      puVar5 = puVar2 + -3;
      while( true ) {
        if (pvVar3 != (void *)0x0) {
          puVar2[-2] = pvVar3;
          operator_delete(pvVar3);
        }
        if (puVar8 == puVar5) break;
        pvVar3 = (void *)puVar5[-3];
        puVar2 = puVar5;
        puVar5 = puVar5 + -3;
      }
    }
  }
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar8);
  return;
}

