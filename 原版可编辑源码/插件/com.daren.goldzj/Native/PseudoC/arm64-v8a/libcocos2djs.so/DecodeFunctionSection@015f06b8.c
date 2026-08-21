
/* v8::internal::wasm::ModuleDecoderImpl::DecodeFunctionSection() */

void __thiscall
v8::internal::wasm::ModuleDecoderImpl::DecodeFunctionSection(ModuleDecoderImpl *this)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  void *__dest;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  void *__src;
  size_t __n;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined2 uStack_70;
  uint6 uStack_6e;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pcVar9 = *(char **)(this + 0x10);
  uVar5 = Decoder::consume_u32v((Decoder *)this,"functions count");
  if (1000000 < uVar5) {
    Decoder::errorf((uchar *)this,pcVar9,"%s of %u exceeds internal limit of %zu","functions count",
                    (ulong)uVar5,1000000);
    uVar5 = 1000000;
  }
  iVar1 = (int)*(undefined8 *)(this + 0x60) + 0x3f0;
  if (this[0x90] != (ModuleDecoderImpl)0x0) {
    iVar1 = (int)*(undefined8 *)(this + 0x60) + 0x3c8;
  }
  Histogram::AddSample(iVar1);
  lVar11 = *(long *)(this + 0x50);
  __src = *(void **)(lVar11 + 0x88);
  uVar7 = (ulong)(*(int *)(lVar11 + 0x3c) + uVar5);
  if ((ulong)(*(long *)(lVar11 + 0x98) - (long)__src >> 5) < uVar7) {
    uVar7 = uVar7 * 0x20;
    __n = *(long *)(lVar11 + 0x90) - (long)__src;
    __dest = operator_new(uVar7);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = *(void **)(lVar11 + 0x88);
    }
    *(void **)(lVar11 + 0x88) = __dest;
    *(size_t *)(lVar11 + 0x90) = (long)__dest + __n;
    *(void **)(lVar11 + 0x98) = (void *)((long)__dest + uVar7);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  *(uint *)(*(long *)(this + 0x50) + 0x44) = uVar5;
  if (uVar5 != 0) {
    uVar10 = 1;
    do {
      lVar11 = *(long *)(this + 0x50);
      local_88 = 0;
      uVar7 = (ulong)(*(long *)(lVar11 + 0x90) - *(long *)(lVar11 + 0x88)) >> 5;
      uStack_80 = (undefined4)uVar7;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_76 = 0;
      puVar2 = *(undefined8 **)(lVar11 + 0x90);
      if (puVar2 < *(undefined8 **)(lVar11 + 0x98)) {
        puVar2[1] = uVar7 & 0xffffffff;
        *puVar2 = 0;
        puVar2[3] = (ulong)uStack_6e << 0x10;
        puVar2[2] = 0;
        *(long *)(lVar11 + 0x90) = *(long *)(lVar11 + 0x90) + 0x20;
      }
      else {
        std::__ndk1::
        vector<v8::internal::wasm::WasmFunction,std::__ndk1::allocator<v8::internal::wasm::WasmFunction>>
        ::__push_back_slow_path<v8::internal::wasm::WasmFunction>
                  ((vector<v8::internal::wasm::WasmFunction,std::__ndk1::allocator<v8::internal::wasm::WasmFunction>>
                    *)(lVar11 + 0x88),(WasmFunction *)&local_88);
      }
      lVar12 = *(long *)(this + 0x50);
      pcVar9 = *(char **)(this + 0x10);
      lVar11 = *(long *)(lVar12 + 0x90);
      uVar7 = Decoder::consume_u32v((Decoder *)this,"signature index");
      uVar6 = uVar7 & 0xffffffff;
      uVar8 = *(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58);
      if ((uVar7 & 0xffffffff) < (ulong)((long)uVar8 >> 3)) {
        *(undefined8 *)(lVar11 + -0x20) =
             *(undefined8 *)(*(long *)(lVar12 + 0x58) + (uVar7 & 0xffffffff) * 8);
      }
      else {
        Decoder::errorf((uchar *)this,pcVar9,"signature index %u out of bounds (%d signatures)",
                        uVar6,uVar8 >> 3);
        uVar6 = 0;
        *(undefined8 *)(lVar11 + -0x20) = 0;
      }
      *(int *)(lVar11 + -0x14) = (int)uVar6;
      if (((byte)this[0x30] & 1) == 0) {
        if ((byte)this[0x30] >> 1 != 0) break;
      }
      else if (*(long *)(this + 0x38) != 0) break;
      bVar4 = uVar10 < uVar5;
      uVar10 = uVar10 + 1;
    } while (bVar4);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

