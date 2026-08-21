
/* v8::internal::wasm::ModuleDecoderImpl::DecodeNameSection() */

void __thiscall v8::internal::wasm::ModuleDecoderImpl::DecodeNameSection(ModuleDecoderImpl *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  char cVar8;
  undefined **local_a8;
  long local_a0;
  char *local_98;
  char *local_90;
  int local_88;
  undefined4 local_80;
  ulong local_78;
  ulong local_70;
  void *local_68;
  
  if ((*(uint *)(this + 0x6c) >> 0xe & 1) == 0) {
    *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x4000;
    local_a0 = *(long *)(this + 8);
    local_98 = *(char **)(this + 0x10);
    local_90 = *(char **)(this + 0x18);
    local_88 = *(int *)(this + 0x20);
    uVar7 = 0;
    local_78 = 0;
    local_70 = 0;
    local_80 = 0;
    local_68 = (void *)0x0;
    local_a8 = &PTR__Decoder_01cbc3a8;
    if (local_98 < local_90) {
      while( true ) {
        if ((int)local_90 == (int)local_98) {
          Decoder::errorf((uchar *)&local_a8,local_98,"expected %u bytes, fell off end",1);
          cVar8 = '\0';
          local_98 = local_90;
        }
        else {
          pcVar6 = local_98 + 1;
          cVar8 = *local_98;
          local_98 = pcVar6;
          if (cVar8 < '\0') {
            Decoder::error((Decoder *)&local_a8,"name type if not varuint7");
          }
        }
        uVar4 = Decoder::consume_u32v((Decoder *)&local_a8,"name payload length");
        if ((uint)((int)local_90 - (int)local_98) < uVar4) break;
        if (cVar8 == '\0') {
          uVar4 = Decoder::consume_u32v((Decoder *)&local_a8,"string length");
          iVar3 = local_88;
          iVar2 = (int)local_98 - (int)local_a0;
          if (uVar4 != 0) {
            if ((uint)((int)local_90 - (int)local_98) < uVar4) {
              Decoder::errorf((uchar *)&local_a8,local_98,"expected %u bytes, fell off end",
                              (ulong)uVar4);
              local_98 = local_90;
            }
            else {
              local_98 = local_98 + uVar4;
            }
          }
          uVar1 = iVar3 + iVar2;
          if ((local_78 & 1) == 0) {
            uVar7 = (ulong)uVar4 << 0x20;
            if (1 < (byte)local_78) {
              uVar7 = 0;
            }
            uVar7 = uVar7 | uVar1;
            if ((byte)local_78 >> 1 == 0) {
LAB_015f1ff0:
              uVar5 = unibrow::Utf8::ValidateEncoding
                                ((uchar *)(local_a0 + (ulong)(uint)((int)uVar7 - local_88)),
                                 uVar7 >> 0x20);
              if ((uVar5 & 1) != 0) {
                *(ulong *)(*(long *)(this + 0x50) + 0x50) = uVar7;
              }
            }
          }
          else {
            uVar7 = (ulong)uVar4 << 0x20;
            if (local_70 != 0) {
              uVar7 = 0;
            }
            uVar7 = uVar7 | uVar1;
            if (local_70 == 0) goto LAB_015f1ff0;
          }
        }
        else {
          local_98 = local_98 + uVar4;
        }
        uVar7 = local_78 & 0xff;
        uVar5 = local_78 >> 1 & 0x7f;
        if ((local_78 & 1) != 0) {
          uVar5 = local_70;
        }
        if ((uVar5 != 0) || (local_90 <= local_98)) goto LAB_015f2088;
      }
      Decoder::errorf((uchar *)&local_a8,local_98,"expected %u bytes, fell off end");
      uVar7 = local_78 & 0xff;
    }
LAB_015f2088:
    local_a8 = &PTR__Decoder_01cbc3a8;
    if ((uVar7 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  pcVar6 = *(char **)(this + 0x10);
  uVar7 = *(long *)(this + 0x18) - *(long *)(this + 8);
  if ((uint)((int)*(long *)(this + 0x18) - (int)pcVar6) < (uint)uVar7) {
    Decoder::errorf((uchar *)this,pcVar6,"expected %u bytes, fell off end");
    pcVar6 = *(char **)(this + 0x18);
  }
  else {
    pcVar6 = pcVar6 + (uVar7 & 0xffffffff);
  }
  *(char **)(this + 0x10) = pcVar6;
  return;
}

