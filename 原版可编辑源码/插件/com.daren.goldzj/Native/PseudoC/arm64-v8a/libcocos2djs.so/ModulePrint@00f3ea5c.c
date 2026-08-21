
/* v8::internal::Module::ModulePrint(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >&) */

void __thiscall v8::internal::Module::ModulePrint(Module *this,basic_ostream *param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = *(ulong *)this;
  uVar1 = local_18 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar1 + *(uint *)(local_18 - 1)) == 0x44) {
    SourceTextModule::SourceTextModulePrint((SourceTextModule *)&local_18,param_1);
  }
  else {
    if (*(short *)(uVar1 + *(uint *)(local_18 - 1)) != 0x45) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    SyntheticModule::SyntheticModulePrint((SyntheticModule *)&local_18,param_1);
  }
  return;
}

