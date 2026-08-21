
/* v8::internal::RegExpMacroAssemblerARM64::~RegExpMacroAssemblerARM64() */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::~RegExpMacroAssemblerARM64(RegExpMacroAssemblerARM64 *this)

{
  *(undefined ***)this = &PTR__RegExpMacroAssemblerARM64_01cbe620;
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  NativeRegExpMacroAssembler::~NativeRegExpMacroAssembler((NativeRegExpMacroAssembler *)this);
  return;
}

