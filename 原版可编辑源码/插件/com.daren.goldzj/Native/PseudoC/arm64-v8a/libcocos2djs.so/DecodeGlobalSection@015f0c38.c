
/* v8::internal::wasm::ModuleDecoderImpl::DecodeGlobalSection() */

void __thiscall v8::internal::wasm::ModuleDecoderImpl::DecodeGlobalSection(ModuleDecoderImpl *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  char *pcVar7;
  void *__src;
  size_t __n;
  int iVar8;
  long lVar9;
  undefined2 local_88;
  uint6 uStack_86;
  undefined4 uStack_80;
  uint uStack_7c;
  long local_78;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  ushort uStack_6a;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pcVar7 = *(char **)(this + 0x10);
  uVar3 = Decoder::consume_u32v((Decoder *)this,"globals count");
  if (1000000 < uVar3) {
    Decoder::errorf((uchar *)this,pcVar7,"%s of %u exceeds internal limit of %zu","globals count",
                    (ulong)uVar3,1000000);
    uVar3 = 1000000;
  }
  lVar9 = *(long *)(this + 0x50);
  __src = *(void **)(lVar9 + 0x18);
  __n = *(long *)(lVar9 + 0x20) - (long)__src;
  iVar8 = (int)((long)__n >> 5);
  uVar4 = (ulong)(uVar3 + iVar8);
  if ((ulong)(*(long *)(lVar9 + 0x28) - (long)__src >> 5) < uVar4) {
    uVar4 = uVar4 * 0x20;
    __dest = operator_new(uVar4);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = *(void **)(lVar9 + 0x18);
    }
    *(void **)(lVar9 + 0x18) = __dest;
    *(void **)(lVar9 + 0x20) = (void *)((long)__dest + ((long)__n >> 5) * 0x20);
    *(void **)(lVar9 + 0x28) = (void *)((long)__dest + uVar4);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  uVar6 = 0;
  uVar4 = (ulong)(byte)this[0x30];
  if (((byte)this[0x30] & 1) == 0) goto LAB_015f0d68;
  while (uVar5 = *(ulong *)(this + 0x38), uVar6 < uVar3) {
    while( true ) {
      if (uVar5 != 0) goto LAB_015f0dc0;
      lVar9 = *(long *)(this + 0x50);
      local_88 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      uStack_6c = 0;
      plVar1 = *(long **)(lVar9 + 0x20);
      if (plVar1 < *(long **)(lVar9 + 0x28)) {
        plVar1[1] = (ulong)uStack_7c << 0x20;
        *plVar1 = (ulong)uStack_86 << 0x10;
        plVar1[3] = (ulong)uStack_6a << 0x30;
        plVar1[2] = local_78;
        *(long *)(lVar9 + 0x20) = *(long *)(lVar9 + 0x20) + 0x20;
      }
      else {
        std::__ndk1::
        vector<v8::internal::wasm::WasmGlobal,std::__ndk1::allocator<v8::internal::wasm::WasmGlobal>>
        ::__push_back_slow_path<v8::internal::wasm::WasmGlobal>
                  ((vector<v8::internal::wasm::WasmGlobal,std::__ndk1::allocator<v8::internal::wasm::WasmGlobal>>
                    *)(lVar9 + 0x18),(WasmGlobal *)&local_88);
      }
      DecodeGlobalInModule
                (this,*(WasmModule **)(this + 0x50),iVar8 + uVar6,
                 (WasmGlobal *)(*(long *)(*(WasmModule **)(this + 0x50) + 0x20) + -0x20));
      uVar6 = uVar6 + 1;
      uVar4 = (ulong)(byte)this[0x30];
      if (((byte)this[0x30] & 1) != 0) break;
LAB_015f0d68:
      uVar5 = uVar4 >> 1;
      if (uVar3 <= uVar6) goto LAB_015f0dc0;
    }
  }
LAB_015f0dc0:
  if ((uVar4 & 1) == 0) {
    uVar4 = uVar4 >> 1;
  }
  else {
    uVar4 = *(ulong *)(this + 0x38);
  }
  if (uVar4 == 0) {
    CalculateGlobalOffsets(this,*(WasmModule **)(this + 0x50));
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

