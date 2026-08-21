
/* universe::CustomFileManager::setWritablePath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
universe::CustomFileManager::setWritablePath(CustomFileManager *this,basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar1;
  basic_string *pbVar2;
  CustomFileManager CVar3;
  CustomFileManager *pCVar4;
  
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 8);
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
                    /* try { // try from 009f7b44 to 00af7b57 has its CatchHandler @ 009f7c74 */
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar2,uVar1);
  }
  CVar3 = this[8];
  uVar1 = (ulong)((byte)CVar3 >> 1);
  if (((byte)CVar3 & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x10);
  }
  if (uVar1 != 0) {
    pCVar4 = *(CustomFileManager **)(this + 0x18);
                    /* try { // try from 009f7b80 to 00af7c03 has its CatchHandler @ 009f7c88 */
    if (((byte)CVar3 & 1) == 0) {
      pCVar4 = this + 9;
    }
    if (pCVar4[uVar1 - 1] == (CustomFileManager)0x2f) {
      return;
    }
    if (pCVar4[uVar1 - 1] == (CustomFileManager)0x5c) {
      return;
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(this_00,"/",1);
  return;
}

