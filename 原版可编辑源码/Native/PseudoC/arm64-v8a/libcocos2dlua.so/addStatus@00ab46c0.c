
/* fairygui::GearSize::addStatus(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, fairygui::ByteBuffer*) */

void __thiscall
fairygui::GearSize::addStatus(GearSize *this,basic_string *param_1,ByteBuffer *param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float local_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  basic_string *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  cocos2d::Vec4::Vec4((Vec4 *)&local_58);
  iVar3 = ByteBuffer::readInt(param_2);
  local_58 = (float)iVar3;
  iVar3 = ByteBuffer::readInt(param_2);
  fStack_54 = (float)iVar3;
  uStack_50 = ByteBuffer::readFloat(param_2);
  uStack_4c = ByteBuffer::readFloat(param_2);
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    *(ulong *)(this + 0x50) = CONCAT44(uStack_4c,uStack_50);
    *(ulong *)(this + 0x48) = CONCAT44(fStack_54,local_58);
  }
  else {
    local_40 = param_1;
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)(this + 0x20),(piecewise_construct_t *)param_1,
                       (tuple *)&DAT_013cf4b3,(tuple *)&local_40);
    *(ulong *)(lVar4 + 0x30) = CONCAT44(uStack_4c,uStack_50);
    *(ulong *)(lVar4 + 0x28) = CONCAT44(fStack_54,local_58);
  }
  cocos2d::Vec4::~Vec4((Vec4 *)&local_58);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

