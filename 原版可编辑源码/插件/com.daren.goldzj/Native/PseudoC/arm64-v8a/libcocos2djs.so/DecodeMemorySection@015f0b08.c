
/* v8::internal::wasm::ModuleDecoderImpl::DecodeMemorySection() */

void __thiscall v8::internal::wasm::ModuleDecoderImpl::DecodeMemorySection(ModuleDecoderImpl *this)

{
  ModuleDecoderImpl MVar1;
  uchar uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  uint uVar7;
  
  pcVar6 = *(char **)(this + 0x10);
  uVar3 = Decoder::consume_u32v((Decoder *)this,"memory count");
  if (1 < uVar3) {
    Decoder::errorf((uchar *)this,pcVar6,"%s of %u exceeds internal limit of %zu","memory count",
                    (ulong)uVar3,1);
    uVar3 = 1;
  }
  uVar7 = 0;
  MVar1 = this[0x30];
  if (((byte)MVar1 & 1) != 0) goto LAB_015f0bf0;
  do {
    uVar4 = (ulong)((byte)MVar1 >> 1);
    if (uVar3 <= uVar7) {
      return;
    }
    while( true ) {
      if (uVar4 != 0) {
        return;
      }
      if (*(char *)(*(long *)(this + 0x50) + 0x12) != '\0') {
        Decoder::error((Decoder *)this,"At most one memory is supported");
        return;
      }
      *(undefined1 *)(*(long *)(this + 0x50) + 0x12) = 1;
      uVar2 = validate_memory_flags(this,(bool *)(*(long *)(this + 0x50) + 0x10));
      lVar5 = *(long *)(this + 0x50);
      consume_resizable_limits
                (this,"memory","pages",0x10000,(uint *)(lVar5 + 8),(bool *)(lVar5 + 0x11),0x10000,
                 (uint *)(lVar5 + 0xc),uVar2);
      uVar7 = uVar7 + 1;
      MVar1 = this[0x30];
      if (((byte)MVar1 & 1) == 0) break;
LAB_015f0bf0:
      uVar4 = *(ulong *)(this + 0x38);
      if (uVar3 <= uVar7) {
        return;
      }
    }
  } while( true );
}

