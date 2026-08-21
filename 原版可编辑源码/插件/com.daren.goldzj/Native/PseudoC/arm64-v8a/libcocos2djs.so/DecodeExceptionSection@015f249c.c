
/* v8::internal::wasm::ModuleDecoderImpl::DecodeExceptionSection() */

void __thiscall
v8::internal::wasm::ModuleDecoderImpl::DecodeExceptionSection(ModuleDecoderImpl *this)

{
  ModuleDecoderImpl MVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  uint uVar8;
  long lVar9;
  Signature *local_68;
  
  pcVar7 = *(char **)(this + 0x10);
  uVar2 = Decoder::consume_u32v((Decoder *)this,"exception count");
  if (1000000 < uVar2) {
    Decoder::errorf((uchar *)this,pcVar7,"%s of %u exceeds internal limit of %zu","exception count",
                    (ulong)uVar2,1000000);
    uVar2 = 1000000;
  }
  uVar8 = 0;
  MVar1 = this[0x30];
  if (((byte)MVar1 & 1) == 0) goto LAB_015f2638;
LAB_015f2568:
  uVar4 = *(ulong *)(this + 0x38);
  do {
    if ((uVar2 <= uVar8) || (uVar4 != 0)) {
      return;
    }
    local_68 = (Signature *)0x0;
    pcVar7 = *(char **)(this + 0x10);
    uVar3 = Decoder::consume_u32v((Decoder *)this,"exception attribute");
    if (uVar3 != 0) {
      Decoder::errorf((uchar *)this,pcVar7,"exception attribute %u not supported",(ulong)uVar3);
    }
    lVar9 = *(long *)(this + 0x50);
    pcVar7 = *(char **)(this + 0x10);
    uVar4 = Decoder::consume_u32v((Decoder *)this,"signature index");
    lVar6 = *(long *)(lVar9 + 0x58);
    uVar4 = uVar4 & 0xffffffff;
    uVar5 = *(long *)(lVar9 + 0x60) - lVar6;
    if (uVar4 < (ulong)((long)uVar5 >> 3)) {
      local_68 = *(Signature **)(lVar6 + uVar4 * 8);
      if ((local_68 != (Signature *)0x0) && (*(long *)local_68 != 0)) {
        Decoder::errorf((uchar *)this,pcVar7,"exception signature %u has non-void return");
        goto LAB_015f2608;
      }
    }
    else {
      Decoder::errorf((uchar *)this,pcVar7,"signature index %u out of bounds (%d signatures)",uVar4,
                      uVar5 >> 3);
LAB_015f2608:
      local_68 = (Signature *)0x0;
    }
    lVar6 = *(long *)(this + 0x50);
    if (*(long **)(lVar6 + 0x108) < *(long **)(lVar6 + 0x110)) {
      **(long **)(lVar6 + 0x108) = (long)local_68;
      *(long *)(lVar6 + 0x108) = *(long *)(lVar6 + 0x108) + 8;
      MVar1 = this[0x30];
    }
    else {
      std::__ndk1::
      vector<v8::internal::wasm::WasmException,std::__ndk1::allocator<v8::internal::wasm::WasmException>>
      ::__emplace_back_slow_path<v8::internal::Signature<v8::internal::wasm::ValueType>*&>
                ((vector<v8::internal::wasm::WasmException,std::__ndk1::allocator<v8::internal::wasm::WasmException>>
                  *)(lVar6 + 0x100),&local_68);
      MVar1 = this[0x30];
    }
    uVar8 = uVar8 + 1;
    if (((byte)MVar1 & 1) != 0) goto LAB_015f2568;
LAB_015f2638:
    uVar4 = (ulong)((byte)MVar1 >> 1);
  } while( true );
}

