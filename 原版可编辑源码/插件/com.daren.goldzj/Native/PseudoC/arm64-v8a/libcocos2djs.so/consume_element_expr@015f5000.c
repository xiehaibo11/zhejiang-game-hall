
/* v8::internal::wasm::ModuleDecoderImpl::consume_element_expr() */

ulong __thiscall
v8::internal::wasm::ModuleDecoderImpl::consume_element_expr(ModuleDecoderImpl *this)

{
  byte bVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  byte *pbVar8;
  long lVar9;
  
  pcVar6 = *(char **)(this + 0x10);
  if (*(int *)(this + 0x18) == (int)pcVar6) {
    Decoder::errorf((uchar *)this,pcVar6,"expected %u bytes, fell off end",1);
    pcVar7 = *(char **)(this + 0x18);
    cVar3 = '\0';
  }
  else {
    pcVar7 = pcVar6 + 1;
    cVar3 = *pcVar6;
  }
  *(char **)(this + 0x10) = pcVar7;
  if (((byte)this[0x30] & 1) == 0) {
    if ((byte)this[0x30] >> 1 != 0) {
      return 0xffffffff;
    }
  }
  else if (*(long *)(this + 0x38) != 0) {
    return 0xffffffff;
  }
  if (cVar3 != -0x30) {
    if (cVar3 == -0x2e) {
      lVar9 = *(long *)(this + 0x50);
      uVar2 = Decoder::consume_u32v((Decoder *)this,"element function index");
      uVar5 = uVar2 & 0xffffffff;
      uVar4 = *(long *)(lVar9 + 0x90) - *(long *)(lVar9 + 0x88);
      if ((ulong)((long)uVar4 >> 5) <= (uVar2 & 0xffffffff)) {
        pcVar6 = "y";
        if (uVar4 != 0x20) {
          pcVar6 = "ies";
        }
        Decoder::errorf((uchar *)this,pcVar7,"%s %u out of bounds (%d entr%s)",
                        "element function index",uVar5,uVar4 >> 5,pcVar6);
        uVar5 = 0;
      }
      if (((byte)this[0x30] & 1) == 0) {
        if ((byte)this[0x30] >> 1 != 0) {
          return uVar5;
        }
      }
      else if (*(long *)(this + 0x38) != 0) {
        return uVar5;
      }
      goto LAB_015f5100;
    }
    Decoder::error((Decoder *)this,"invalid opcode in element");
  }
  uVar5 = 0xffffffff;
LAB_015f5100:
  pbVar8 = *(byte **)(this + 0x10);
  if (*(int *)(this + 0x18) == (int)pbVar8) {
    Decoder::errorf((uchar *)this,(char *)pbVar8,"expected %u bytes, fell off end",1);
    uVar2 = 0;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x18);
  }
  else {
    bVar1 = *pbVar8;
    uVar2 = (ulong)bVar1;
    *(byte **)(this + 0x10) = pbVar8 + 1;
    if (bVar1 == 0xb) {
      return uVar5;
    }
  }
  Decoder::errorf((uchar *)this,(char *)pbVar8,"expected %s 0x%02x, got 0x%02x","end opcode",0xb,
                  uVar2);
  return uVar5;
}

