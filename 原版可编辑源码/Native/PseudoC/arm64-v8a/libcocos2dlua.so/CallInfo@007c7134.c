
/* LuaJavaBridge::CallInfo::CallInfo(char const*, char const*, char const*) */

void __thiscall
LuaJavaBridge::CallInfo::CallInfo(CallInfo *this,char *param_1,char *param_2,char *param_3)

{
  byte bVar1;
  ulong uVar2;
  CallInfo CVar3;
  
  *this = (CallInfo)0x0;
  *(undefined4 *)(this + 4) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 8),param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x20),param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x38),param_3);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  uVar2 = validateMethodSig(this);
  CVar3 = (CallInfo)0x0;
  if ((uVar2 & 1) != 0) {
    bVar1 = getMethodInfo(this);
    CVar3 = (CallInfo)(bVar1 & 1);
  }
  *this = CVar3;
  return;
}

