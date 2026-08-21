
/* v8::internal::wasm::BytecodeIterator::BytecodeIterator(unsigned char const*, unsigned char
   const*, v8::internal::wasm::BodyLocalDecls*) */

void __thiscall
v8::internal::wasm::BytecodeIterator::BytecodeIterator
          (BytecodeIterator *this,uchar *param_1,uchar *param_2,BodyLocalDecls *param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined4 local_80 [2];
  undefined **local_78;
  uchar *local_70;
  uchar *local_68;
  uchar *puStack_60;
  int local_58;
  undefined4 local_50;
  ulong local_48;
  undefined8 uStack_40;
  void *local_38;
  
  *(uchar **)(this + 0x10) = param_1;
  *(uchar **)(this + 0x18) = param_2;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__Decoder_01cc9530;
  *(uchar **)(this + 8) = param_1;
  if (param_3 != (BodyLocalDecls *)0x0) {
    local_50 = 0;
    local_58 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = (void *)0x0;
    local_80[0] = 0xfff;
    local_78 = &PTR__Decoder_01cbc3a8;
    local_70 = param_1;
    local_68 = param_1;
    puStack_60 = param_2;
    uVar2 = WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1>::DecodeLocals
                      ((WasmFeatures *)local_80,(Decoder *)&local_78,(Signature *)0x0,
                       (ZoneVector *)(param_3 + 8));
    bVar1 = (uVar2 & 1) != 0;
    if (bVar1) {
      *(int *)param_3 = local_58 + ((int)local_68 - (int)local_70);
    }
    if ((local_48 & 1) != 0) {
      local_78 = &PTR__Decoder_01cbc3a8;
      operator_delete(local_38);
    }
    if (bVar1) {
      uVar2 = *(ulong *)(this + 0x18);
      if (*(long *)(this + 0x10) + (ulong)*(uint *)param_3 <= *(ulong *)(this + 0x18)) {
        uVar2 = *(long *)(this + 0x10) + (ulong)*(uint *)param_3;
      }
      *(ulong *)(this + 0x10) = uVar2;
    }
  }
  return;
}

