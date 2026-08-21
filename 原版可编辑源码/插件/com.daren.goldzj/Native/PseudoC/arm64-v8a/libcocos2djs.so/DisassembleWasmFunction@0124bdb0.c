
/* v8::internal::wasm::DisassembleWasmFunction(v8::internal::wasm::WasmModule const*,
   v8::internal::wasm::ModuleWireBytes const&, int) */

void __thiscall
v8::internal::wasm::DisassembleWasmFunction
          (wasm *this,WasmModule *param_1,ModuleWireBytes *param_2,int param_3)

{
  long lVar1;
  undefined8 *in_x8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined **local_178;
  undefined **local_170;
  locale alStack_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (((int)(uint)param_2 < 0) ||
     ((ulong)(*(long *)(this + 0x90) - *(long *)(this + 0x88) >> 5) <= ((ulong)param_2 & 0xffffffff)
     )) {
    in_x8[3] = 0;
    in_x8[2] = 0;
    in_x8[5] = 0;
    in_x8[4] = 0;
    in_x8[1] = 0;
    *in_x8 = 0;
  }
  else {
    local_178 = (undefined **)0x1c6c8a8;
    local_108[0] = (undefined **)0x1c6c8d0;
    std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
    local_78 = 0xffffffff;
    local_170 = &PTR__basic_streambuf_01c671a8;
    local_80 = 0;
    local_178 = &PTR__basic_ostringstream_01c6c858;
    local_108[0] = &PTR__basic_ostringstream_01c6c880;
    std::__ndk1::locale::locale(alStack_168);
    uStack_188 = 0;
    local_180 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (void *)0x0;
    local_110 = 0x10;
    local_190 = 0;
    local_170 = &PTR__basic_stringbuf_01c67100;
    PrintWasmText((WasmModule *)this,(ModuleWireBytes *)param_1,(uint)param_2,
                  (basic_ostream *)&local_178,(vector *)&local_190);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    in_x8[2] = local_198;
    in_x8[1] = uStack_1a0;
    *in_x8 = local_1a8;
    in_x8[4] = uStack_188;
    in_x8[3] = local_190;
    in_x8[5] = local_180;
    local_178 = &PTR__basic_ostringstream_01c6c858;
    local_108[0] = &PTR__basic_ostringstream_01c6c880;
    if ((local_130 & 1) != 0) {
      local_170 = &PTR__basic_stringbuf_01c67100;
      operator_delete(local_120);
    }
    local_170 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_168);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

