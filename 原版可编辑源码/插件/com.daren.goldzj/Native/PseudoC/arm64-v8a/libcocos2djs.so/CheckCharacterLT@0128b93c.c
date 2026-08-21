
/* v8::internal::RegExpMacroAssemblerARM64::CheckCharacterLT(unsigned short, v8::internal::Label*)
    */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::CheckCharacterLT
          (RegExpMacroAssemblerARM64 *this,ushort param_1,Label *param_2)

{
  CompareAndBranchOrBacktrack(this,0x2000000016,0,param_1,3,param_2);
  return;
}

