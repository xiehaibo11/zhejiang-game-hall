
/* v8::internal::wasm::ModuleDecoderImpl::DecodeCompilationHintsSection() */

void __thiscall
v8::internal::wasm::ModuleDecoderImpl::DecodeCompilationHintsSection(ModuleDecoderImpl *this)

{
  ushort *puVar1;
  ModuleDecoderImpl MVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ushort local_28;
  undefined1 local_26;
  
  if (6 < (byte)this[0x68] - 4) {
    return;
  }
  if ((*(uint *)(this + 0x6c) >> 0x11 & 1) != 0) {
    return;
  }
  *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x20000;
  uVar4 = Decoder::consume_u32v((Decoder *)this,"compilation hint count");
  if (uVar4 != *(uint *)(*(long *)(this + 0x50) + 0x44)) {
    Decoder::errorf((uchar *)this,*(char **)(this + 0x10),"Expected %u compilation hints (%u found)"
                    ,(ulong)*(uint *)(*(long *)(this + 0x50) + 0x44),(ulong)uVar4);
  }
  if (((byte)this[0x30] & 1) == 0) {
    if ((byte)this[0x30] >> 1 != 0) goto LAB_015f2338;
  }
  else if (*(long *)(this + 0x38) != 0) goto LAB_015f2338;
  std::__ndk1::
  vector<v8::internal::wasm::WasmCompilationHint,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationHint>>
  ::reserve((vector<v8::internal::wasm::WasmCompilationHint,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationHint>>
             *)(*(long *)(this + 0x50) + 0x130),(ulong)uVar4);
LAB_015f2338:
  uVar12 = 0;
  uVar9 = (ulong)(byte)this[0x30];
  if (((byte)this[0x30] & 1) == 0) goto LAB_015f2370;
LAB_015f2458:
  uVar11 = *(ulong *)(this + 0x38);
  do {
    if ((uVar4 <= uVar12) || (uVar11 != 0)) goto LAB_015f2464;
    pbVar5 = *(byte **)(this + 0x10);
    if (*(int *)(this + 0x18) == (int)pbVar5) {
      Decoder::errorf((uchar *)this,(char *)pbVar5,"expected %u bytes, fell off end",1);
      pbVar6 = *(byte **)(this + 0x18);
      uVar9 = (ulong)(byte)this[0x30];
      uVar8 = 0;
      uVar7 = 0;
      *(byte **)(this + 0x10) = pbVar6;
      if (((byte)this[0x30] & 1) == 0) goto LAB_015f239c;
LAB_015f23cc:
      uVar11 = *(ulong *)(this + 0x38);
      uVar7 = uVar8;
    }
    else {
      pbVar6 = pbVar5 + 1;
      uVar7 = (uint)*pbVar5;
      *(byte **)(this + 0x10) = pbVar6;
      uVar8 = uVar7;
      if ((uVar9 & 1) != 0) goto LAB_015f23cc;
LAB_015f239c:
      uVar11 = uVar9 >> 1;
    }
    if (uVar11 != 0) {
LAB_015f2464:
      if ((uVar9 & 1) == 0) {
        if ((uint)uVar9 >> 1 == 0) {
          return;
        }
      }
      else if (*(long *)(this + 0x38) == 0) {
        return;
      }
      *(undefined8 *)(*(long *)(this + 0x50) + 0x138) =
           *(undefined8 *)(*(long *)(this + 0x50) + 0x130);
      return;
    }
    uVar8 = uVar7 >> 2 & 3;
    uVar3 = uVar7 >> 4 & 3;
    local_28 = CONCAT11((char)uVar8,(char)uVar7) & 0xff03;
    local_26 = (undefined1)uVar3;
    if ((uVar3 < uVar8) && (uVar3 != 0)) {
      Decoder::errorf((uchar *)this,(char *)pbVar6,
                      "Invalid compilation hint %#x (forbidden downgrade)");
      uVar9 = (ulong)(byte)this[0x30];
    }
    if ((uVar9 & 1) == 0) {
      if ((uint)uVar9 >> 1 != 0) goto LAB_015f2364;
LAB_015f2420:
      lVar10 = *(long *)(this + 0x50);
      puVar1 = *(ushort **)(lVar10 + 0x138);
      if (*(ushort **)(lVar10 + 0x140) <= puVar1) {
        std::__ndk1::
        vector<v8::internal::wasm::WasmCompilationHint,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationHint>>
        ::__push_back_slow_path<v8::internal::wasm::WasmCompilationHint>
                  ((vector<v8::internal::wasm::WasmCompilationHint,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationHint>>
                    *)(lVar10 + 0x130),(WasmCompilationHint *)&local_28);
        goto LAB_015f2364;
      }
      *(undefined1 *)(puVar1 + 1) = local_26;
      *puVar1 = local_28;
      *(long *)(lVar10 + 0x138) = *(long *)(lVar10 + 0x138) + 3;
      MVar2 = this[0x30];
    }
    else {
      if (*(long *)(this + 0x38) == 0) goto LAB_015f2420;
LAB_015f2364:
      MVar2 = this[0x30];
    }
    uVar9 = (ulong)(byte)MVar2;
    uVar12 = uVar12 + 1;
    if (((byte)MVar2 & 1) != 0) goto LAB_015f2458;
LAB_015f2370:
    uVar11 = uVar9 >> 1;
  } while( true );
}

