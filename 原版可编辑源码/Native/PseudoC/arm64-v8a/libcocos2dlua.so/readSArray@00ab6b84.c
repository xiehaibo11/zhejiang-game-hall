
/* fairygui::ByteBuffer::readSArray(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > >&, int) */

void __thiscall fairygui::ByteBuffer::readSArray(ByteBuffer *this,vector *param_1,int param_2)

{
  undefined1 *puVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  int iVar2;
  ushort uVar3;
  basic_string *pbVar4;
  
  if (0 < param_2) {
    do {
      while( true ) {
        iVar2 = *(int *)(this + 0x1c);
        *(int *)(this + 0x1c) = iVar2 + 2;
        puVar1 = (undefined1 *)(*(long *)(this + 8) + (long)iVar2 + (long)*(int *)(this + 0x10));
        if (this[0x18] == (ByteBuffer)0x0) {
          uVar3 = CONCAT11(*puVar1,puVar1[1]);
        }
        else {
          uVar3 = CONCAT11(puVar1[1],*puVar1);
        }
        pbVar4 = (basic_string *)&cocos2d::STD_STRING_EMPTY;
        if (1 < (uVar3 + 3 & 0xffff)) {
          pbVar4 = (basic_string *)(**(long **)(this + 0x20) + (ulong)(uint)uVar3 * 0x18);
        }
        this_00 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    **)(param_1 + 8);
        if (this_00 ==
            *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (param_1 + 0x10)) break;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(this_00,pbVar4);
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (param_1 + 8) = this_00 + 0x18;
        param_2 = param_2 + -1;
        if (param_2 == 0) {
          return;
        }
      }
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)param_1,pbVar4);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

