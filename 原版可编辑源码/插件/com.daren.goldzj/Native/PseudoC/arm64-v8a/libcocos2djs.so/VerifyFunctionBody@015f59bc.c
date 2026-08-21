
/* WARNING: Removing unreachable block (ram,0x015f5ca0) */
/* v8::internal::wasm::ModuleDecoderImpl::VerifyFunctionBody(v8::internal::AccountingAllocator*,
   unsigned int, v8::internal::wasm::ModuleWireBytes const&, v8::internal::wasm::WasmModule const*,
   v8::internal::wasm::WasmFunction*) */

void __thiscall
v8::internal::wasm::ModuleDecoderImpl::VerifyFunctionBody
          (ModuleDecoderImpl *this,AccountingAllocator *param_1,uint param_2,
          ModuleWireBytes *param_3,WasmModule *param_4,WasmFunction *param_5)

{
  TimedHistogram *this_00;
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  basic_ostream *pbVar6;
  WasmFunction *pWVar7;
  ModuleDecoderImpl local_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 local_200;
  undefined4 local_1f8 [2];
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  ulong uStack_1d8;
  char *local_1d0;
  undefined8 local_1c8;
  int local_1c0;
  long local_1b8;
  long lStack_1b0;
  WasmFunction *local_1a8;
  undefined1 auStack_1a0 [16];
  undefined **local_190;
  undefined **local_188;
  ulong local_180;
  ulong uStack_178;
  char *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  ulong local_148;
  undefined8 uStack_140;
  void *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined **local_120 [17];
  undefined8 local_98;
  undefined4 local_90;
  undefined7 local_88;
  undefined1 uStack_81;
  undefined7 local_80;
  undefined1 uStack_79;
  Isolate *local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pWVar7 = param_5;
  auStack_1a0 = ModuleWireBytes::GetNameOrNull(param_3,param_5,param_4);
  local_1c0 = *(int *)(param_5 + 0x10);
  local_1c8 = *(undefined8 *)param_5;
  uStack_1d8 = 0;
  local_1d0 = (char *)0x0;
  local_1b8 = *(long *)(this + 8) + (ulong)(uint)(local_1c0 - *(int *)(this + 0x20));
  lStack_1b0 = *(long *)(this + 8) +
               (ulong)(uint)((local_1c0 - *(int *)(this + 0x20)) + *(int *)(param_5 + 0x14));
  local_1e0 = 0;
  this_00 = (TimedHistogram *)(*(long *)(this + 0x60) + 0x1120);
  if (this[0x90] != (ModuleDecoderImpl)0x0) {
    this_00 = (TimedHistogram *)(*(long *)(this + 0x60) + 0x10f0);
  }
  local_78 = (Isolate *)0x0;
  local_88 = 0;
  uStack_81 = 0;
  local_80 = SUB87(this_00,0);
  uStack_79 = (undefined1)((ulong)this_00 >> 0x38);
  local_1a8 = param_5;
  TimedHistogram::Start(this_00,(ElapsedTimer *)&local_88,(Isolate *)0x0);
  local_1f8[0] = 0;
  VerifyWasmCode((wasm *)param_1,(AccountingAllocator *)(this + 0x48),(WasmFeatures *)param_4,
                 (WasmModule *)local_1f8,(WasmFeatures *)&local_1c8,pWVar7);
  uVar5 = uStack_178;
  uStack_1d8 = uStack_178;
  local_1e0 = local_180;
  local_1f0 = 0;
  local_1e8 = local_188._0_4_;
  local_1d0 = local_170;
  TimedHistogram::Stop
            ((TimedHistogram *)CONCAT17(uStack_79,local_80),(ElapsedTimer *)&local_88,local_78);
  uVar1 = local_180 >> 1 & 0x7f;
  if ((local_180 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 != 0) {
    if (((byte)this[0x78] & 1) == 0) {
      if ((byte)this[0x78] >> 1 != 0) goto joined_r0x015f5aec;
    }
    else if (*(long *)(this + 0x80) != 0) goto joined_r0x015f5aec;
    local_190 = (undefined **)0x1c6c8a8;
    local_120[0] = (undefined **)0x1c6c8d0;
    std::__ndk1::ios_base::init((ios_base *)local_120,&local_188);
    local_90 = 0xffffffff;
    local_190 = &PTR__basic_ostringstream_01c6c858;
    local_120[0] = &PTR__basic_ostringstream_01c6c880;
    local_188 = &PTR__basic_streambuf_01c671a8;
    local_98 = 0;
    std::__ndk1::locale::locale((locale *)&local_180);
    local_188 = &PTR__basic_stringbuf_01c67100;
    uStack_150 = 0;
    local_158 = 0;
    uStack_160 = 0;
    local_168 = 0;
    local_170 = (char *)0x0;
    uStack_178 = 0;
    uStack_140 = 0;
    local_148 = 0;
    uStack_130 = 0;
    local_138 = (void *)0x0;
    local_128 = 0x10;
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_190,"in function ",0xc);
    pbVar6 = (basic_ostream *)wasm::operator<<(pbVar6,(WasmFunctionName *)&local_1a8);
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar6,": ",2);
    pcVar2 = local_1d0;
    if ((local_180 & 1) == 0) {
      pcVar2 = (char *)((long)&local_1e0 + 1);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,pcVar2,uVar1);
    uVar4 = local_1e8;
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    local_88 = uStack_20f;
    uStack_81 = uStack_208;
    local_80 = uStack_207;
    *(undefined4 *)(this + 0x70) = uVar4;
    if (((byte)this[0x78] & 1) == 0) {
      *(undefined2 *)(this + 0x78) = 0;
    }
    else {
      **(undefined1 **)(this + 0x88) = 0;
      *(undefined8 *)(this + 0x80) = 0;
      if (((byte)this[0x78] & 1) != 0) {
        operator_delete(*(void **)(this + 0x88));
        *(undefined8 *)(this + 0x78) = 0;
      }
    }
    this[0x78] = local_210;
    *(ulong *)(this + 0x80) = CONCAT71(local_80,uStack_81);
    *(undefined8 *)(this + 0x88) = local_200;
    *(ulong *)(this + 0x79) = CONCAT17(uStack_81,local_88);
    local_80 = 0;
    uStack_81 = 0;
    local_88 = 0;
    local_190 = &PTR__basic_ostringstream_01c6c858;
    local_120[0] = &PTR__basic_ostringstream_01c6c880;
    local_188 = &PTR__basic_stringbuf_01c67100;
    if ((local_148 & 1) != 0) {
      operator_delete(local_138);
    }
    local_188 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale((locale *)&local_180);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_120);
    local_180 = local_1e0;
  }
joined_r0x015f5aec:
  if ((local_180 & 1) != 0) {
    operator_delete(local_1d0);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

