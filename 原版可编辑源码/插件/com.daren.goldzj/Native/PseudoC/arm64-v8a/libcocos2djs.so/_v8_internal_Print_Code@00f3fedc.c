
/* _v8_internal_Print_Code(void*) */

void _v8_internal_Print_Code(void *param_1)

{
  long lVar1;
  Isolate *this;
  WasmCode *this_00;
  ulong uVar2;
  char *pcVar3;
  undefined **local_190;
  undefined **local_188;
  locale alStack_180 [8];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined **local_130 [17];
  undefined8 local_a8;
  undefined4 local_a0;
  ulong local_98 [6];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = (Isolate *)v8::base::Thread::GetThreadLocal(v8::internal::Isolate::isolate_key_);
  v8::internal::wasm::WasmCodeRefScope::WasmCodeRefScope((WasmCodeRefScope *)local_98);
  this_00 = (WasmCode *)
            v8::internal::wasm::WasmCodeManager::LookupCode
                      (*(WasmCodeManager **)(this + 0xc770),(ulong)param_1);
  if (this_00 == (WasmCode *)0x0) {
    v8::internal::wasm::WasmCodeRefScope::~WasmCodeRefScope((WasmCodeRefScope *)local_98);
    uVar2 = v8::internal::Heap::InSpaceSlow((Heap *)(this + 0x8850),param_1,3);
    if (((((uVar2 & 1) == 0) &&
         (uVar2 = v8::internal::Heap::InSpaceSlow((Heap *)(this + 0x8850),param_1,5),
         (uVar2 & 1) == 0)) &&
        (uVar2 = v8::internal::InstructionStream::PcIsOffHeap(this,(ulong)param_1), (uVar2 & 1) == 0
        )) && (uVar2 = v8::internal::ReadOnlyHeap::Contains((ulong)param_1), (uVar2 & 1) == 0)) {
      pcVar3 = 
      "%p is not within the current isolate\'s large object, code, read_only or embedded spaces\n";
    }
    else {
      local_98[0] = v8::internal::Isolate::FindCodeObject(this,(ulong)param_1);
      if (*(short *)((local_98[0] & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_98[0] - 1)) ==
          0x9a) {
        local_190 = (undefined **)0x1ca1178;
        local_130[0] = (undefined **)0x1ca11a0;
        std::__ndk1::ios_base::init((ios_base *)local_130,(AndroidLogStream *)&local_188);
        local_a0 = 0xffffffff;
        local_188 = &PTR__basic_streambuf_01c671a8;
        local_a8 = 0;
        local_190 = &PTR__StdoutStream_01ca1128;
        local_130[0] = &PTR__StdoutStream_01ca1150;
        std::__ndk1::locale::locale(alStack_180);
        local_188 = &PTR__AndroidLogStream_01cbc008;
        local_148 = 0;
        uStack_140 = 0;
        uStack_150 = 0;
        local_158 = 0;
        uStack_160 = 0;
        local_168 = 0;
        uStack_170 = 0;
        local_178 = 0;
        local_138 = 0;
        v8::internal::Code::Disassemble
                  ((Code *)local_98,(char *)0x0,(basic_ostream *)&local_190,this,(ulong)param_1);
        local_190 = &PTR__StdoutStream_01ca1128;
        local_130[0] = &PTR__StdoutStream_01ca1150;
        v8::internal::AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_188);
        std::__ndk1::ios_base::~ios_base((ios_base *)local_130);
        goto LAB_00f4015c;
      }
      pcVar3 = "No code object found containing %p\n";
    }
    v8::internal::PrintF(pcVar3,param_1);
  }
  else {
    local_190 = (undefined **)0x1ca1178;
    local_130[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_130,(AndroidLogStream *)&local_188);
    local_a0 = 0xffffffff;
    local_188 = &PTR__basic_streambuf_01c671a8;
    local_a8 = 0;
    local_190 = &PTR__StdoutStream_01ca1128;
    local_130[0] = &PTR__StdoutStream_01ca1150;
    std::__ndk1::locale::locale(alStack_180);
    local_188 = &PTR__AndroidLogStream_01cbc008;
    local_148 = 0;
    uStack_140 = 0;
    uStack_150 = 0;
    local_158 = 0;
    uStack_160 = 0;
    local_168 = 0;
    uStack_170 = 0;
    local_178 = 0;
    local_138 = 0;
    v8::internal::wasm::WasmCode::Disassemble
              (this_00,(char *)0x0,(basic_ostream *)&local_190,(ulong)param_1);
    local_190 = &PTR__StdoutStream_01ca1128;
    local_130[0] = &PTR__StdoutStream_01ca1150;
    v8::internal::AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_188);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_130);
    v8::internal::wasm::WasmCodeRefScope::~WasmCodeRefScope((WasmCodeRefScope *)local_98);
  }
LAB_00f4015c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

