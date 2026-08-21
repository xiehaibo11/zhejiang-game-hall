
/* se::ScriptEngine::enableDebugger(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned int, bool) */

void __thiscall
se::ScriptEngine::enableDebugger(ScriptEngine *this,basic_string *param_1,uint param_2,bool param_3)

{
  ulong uVar1;
  basic_string *pbVar2;
  
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x1e8) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x1e8),(char *)pbVar2,uVar1);
  }
  *(uint *)(this + 0x200) = param_2;
  this[0x204] = (ScriptEngine)param_3;
  return;
}

