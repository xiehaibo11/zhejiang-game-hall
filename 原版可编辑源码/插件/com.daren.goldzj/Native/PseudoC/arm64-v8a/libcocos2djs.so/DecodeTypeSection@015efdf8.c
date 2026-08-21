
/* v8::internal::wasm::ModuleDecoderImpl::DecodeTypeSection() */

void __thiscall v8::internal::wasm::ModuleDecoderImpl::DecodeTypeSection(ModuleDecoderImpl *this)

{
  ModuleDecoderImpl MVar1;
  uint uVar2;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  void *__src;
  size_t __n;
  long lVar6;
  uint local_5c;
  Signature *local_58;
  
  pcVar5 = *(char **)(this + 0x10);
  uVar2 = Decoder::consume_u32v((Decoder *)this,"types count");
  uVar3 = (ulong)uVar2;
  if (1000000 < uVar2) {
    Decoder::errorf((uchar *)this,pcVar5,"%s of %u exceeds internal limit of %zu","types count",
                    uVar3,1000000);
    uVar3 = 1000000;
  }
  lVar6 = *(long *)(this + 0x50);
  __src = *(void **)(lVar6 + 0x58);
  if ((ulong)(*(long *)(lVar6 + 0x68) - (long)__src >> 3) < uVar3) {
    __n = *(long *)(lVar6 + 0x60) - (long)__src;
    __dest = operator_new(uVar3 * 8);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = *(void **)(lVar6 + 0x58);
    }
    *(void **)(lVar6 + 0x58) = __dest;
    *(size_t *)(lVar6 + 0x60) = (long)__dest + __n;
    *(void **)(lVar6 + 0x68) = (void *)((long)__dest + uVar3 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  uVar2 = 0;
  MVar1 = this[0x30];
  if (((byte)MVar1 & 1) == 0) goto LAB_015eff00;
LAB_015effa0:
  uVar4 = *(ulong *)(this + 0x38);
  do {
    if (((uint)uVar3 <= uVar2) || (uVar4 != 0)) {
      *(undefined1 *)(*(long *)(this + 0x50) + 0x148) = 1;
      return;
    }
    local_58 = (Signature *)consume_sig(this,(Zone *)**(undefined8 **)(this + 0x50));
    lVar6 = *(long *)(this + 0x50);
    if (*(long **)(lVar6 + 0x60) == *(long **)(lVar6 + 0x68)) {
      std::__ndk1::
      vector<v8::internal::Signature<v8::internal::wasm::ValueType>*,std::__ndk1::allocator<v8::internal::Signature<v8::internal::wasm::ValueType>*>>
      ::__push_back_slow_path<v8::internal::Signature<v8::internal::wasm::ValueType>*const&>
                ((vector<v8::internal::Signature<v8::internal::wasm::ValueType>*,std::__ndk1::allocator<v8::internal::Signature<v8::internal::wasm::ValueType>*>>
                  *)(lVar6 + 0x58),&local_58);
      if (local_58 == (Signature *)0x0) goto LAB_015eff70;
LAB_015eff4c:
      local_5c = SignatureMap::FindOrInsert
                           ((SignatureMap *)(*(long *)(this + 0x50) + 0x148),local_58);
    }
    else {
      **(long **)(lVar6 + 0x60) = (long)local_58;
      *(long *)(lVar6 + 0x60) = *(long *)(lVar6 + 0x60) + 8;
      if (local_58 != (Signature *)0x0) goto LAB_015eff4c;
LAB_015eff70:
      local_5c = 0;
    }
    lVar6 = *(long *)(this + 0x50);
    if (*(uint **)(lVar6 + 0x78) == *(uint **)(lVar6 + 0x80)) {
      std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
      __push_back_slow_path<unsigned_int_const&>
                ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(lVar6 + 0x70),
                 &local_5c);
      MVar1 = this[0x30];
    }
    else {
      **(uint **)(lVar6 + 0x78) = local_5c;
      *(long *)(lVar6 + 0x78) = *(long *)(lVar6 + 0x78) + 4;
      MVar1 = this[0x30];
    }
    uVar2 = uVar2 + 1;
    if (((byte)MVar1 & 1) != 0) goto LAB_015effa0;
LAB_015eff00:
    uVar4 = (ulong)((byte)MVar1 >> 1);
  } while( true );
}

