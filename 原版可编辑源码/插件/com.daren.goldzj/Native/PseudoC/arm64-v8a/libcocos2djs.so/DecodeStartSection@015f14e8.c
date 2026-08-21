
/* v8::internal::wasm::ModuleDecoderImpl::DecodeStartSection() */

void __thiscall v8::internal::wasm::ModuleDecoderImpl::DecodeStartSection(ModuleDecoderImpl *this)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  uchar *puVar6;
  long lVar7;
  
  puVar6 = *(uchar **)(this + 0x10);
  lVar7 = *(long *)(this + 0x50);
  uVar3 = Decoder::consume_u32v((Decoder *)this,"start function index");
  lVar2 = *(long *)(lVar7 + 0x88);
  uVar5 = *(long *)(lVar7 + 0x90) - lVar2;
  if ((ulong)uVar3 < (ulong)((long)uVar5 >> 5)) {
    *(uint *)(*(long *)(this + 0x50) + 0x14) = uVar3;
    if ((lVar2 != 0) &&
       ((plVar4 = *(long **)(lVar2 + (ulong)uVar3 * 0x20), plVar4[1] != 0 || (*plVar4 != 0)))) {
      Decoder::error((Decoder *)this,puVar6,
                     "invalid start function: non-zero parameter or return count");
      return;
    }
  }
  else {
    pcVar1 = "y";
    if (uVar5 != 0x20) {
      pcVar1 = "ies";
    }
    Decoder::errorf((uchar *)this,(char *)puVar6,"%s %u out of bounds (%d entr%s)",
                    "start function index",(ulong)uVar3,uVar5 >> 5,pcVar1);
    *(undefined4 *)(*(long *)(this + 0x50) + 0x14) = 0;
  }
  return;
}

