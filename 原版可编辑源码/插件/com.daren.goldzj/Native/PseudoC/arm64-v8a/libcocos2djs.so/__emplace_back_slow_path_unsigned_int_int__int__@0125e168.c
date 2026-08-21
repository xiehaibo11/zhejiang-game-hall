
/* void std::__ndk1::vector<v8::debug::WasmDisassemblyOffsetTableEntry,
   std::__ndk1::allocator<v8::debug::WasmDisassemblyOffsetTableEntry>
   >::__emplace_back_slow_path<unsigned int, int&, int&>(unsigned int&&, int&, int&) */

void __thiscall
std::__ndk1::
vector<v8::debug::WasmDisassemblyOffsetTableEntry,std::__ndk1::allocator<v8::debug::WasmDisassemblyOffsetTableEntry>>
::__emplace_back_slow_path<unsigned_int,int&,int&>
          (vector<v8::debug::WasmDisassemblyOffsetTableEntry,std::__ndk1::allocator<v8::debug::WasmDisassemblyOffsetTableEntry>>
           *this,uint *param_1,int *param_2,int *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 2) * -0x5555555555555555 + 1;
  if (uVar1 < 0x1555555555555556) {
    lVar5 = *(long *)(this + 0x10) - (long)__src >> 2;
    uVar6 = lVar5 * 0x5555555555555556;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar1 = 0x1555555555555555;
    }
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x1555555555555555 < uVar1) goto LAB_0125e28c;
      pvVar4 = operator_new(uVar1 * 0xc);
    }
    uVar2 = *param_2;
    uVar3 = *param_3;
    puVar7 = (uint *)((long)pvVar4 + ((long)__n >> 2) * 4);
    *puVar7 = *param_1;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar7 - __n),__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)puVar7 - __n);
    *(uint **)(this + 8) = puVar7 + 3;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0xc);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_0125e28c:
                    /* WARNING: Subroutine does not return */
  abort();
}

