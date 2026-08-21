
/* v8::internal::RegExpMacroAssemblerARM64::CheckStackGuardState(unsigned long*, unsigned long,
   unsigned long, int, unsigned char const**, unsigned char const**) */

void v8::internal::RegExpMacroAssemblerARM64::CheckStackGuardState
               (ulong *param_1,ulong param_2,ulong param_3,int param_4,uchar **param_5,
               uchar **param_6)

{
  NativeRegExpMacroAssembler::CheckStackGuardState
            (*(undefined8 *)(param_3 + 0x60),param_4,*(undefined4 *)(param_3 - 8),param_1,param_2,
             param_3 - 0x20,param_5,param_6);
  return;
}

