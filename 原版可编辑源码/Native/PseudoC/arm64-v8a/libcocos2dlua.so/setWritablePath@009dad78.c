
/* universe::TanGaoXiong::setWritablePath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall universe::TanGaoXiong::setWritablePath(TanGaoXiong *this,basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar1;
  basic_string *pbVar2;
  TanGaoXiong TVar3;
  TanGaoXiong *pTVar4;
  
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 8);
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar2,uVar1);
  }
  TVar3 = this[8];
  uVar1 = (ulong)((byte)TVar3 >> 1);
  if (((byte)TVar3 & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x10);
  }
  if (uVar1 != 0) {
    pTVar4 = *(TanGaoXiong **)(this + 0x18);
    if (((byte)TVar3 & 1) == 0) {
      pTVar4 = this + 9;
    }
    if (pTVar4[uVar1 - 1] == (TanGaoXiong)0x2f) {
      return;
    }
    if (pTVar4[uVar1 - 1] == (TanGaoXiong)0x5c) {
      return;
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(this_00,"/",1);
  return;
}

