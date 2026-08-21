
/* fairygui::GearColor::addStatus(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, fairygui::ByteBuffer*) */

void __thiscall
fairygui::GearColor::addStatus(GearColor *this,basic_string *param_1,ByteBuffer *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined2 local_60;
  undefined1 local_5e;
  undefined2 local_58;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  basic_string *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00ab0a44 with catch @ 00ab0ad0 */
  cocos2d::Color3B::Color3B((Color3B *)&local_58);
  cocos2d::Color3B::Color3B((Color3B *)((ulong)&local_58 | 3));
  local_50._0_4_ = ByteBuffer::readColor(param_2);
  cocos2d::Color3B::Color3B((Color3B *)&local_60,(Color4B *)&local_50);
  local_58 = local_60;
  uStack_56 = local_5e;
  uVar3 = ByteBuffer::readColor(param_2);
  local_50 = (basic_string *)CONCAT44(local_50._4_4_,uVar3);
  cocos2d::Color3B::Color3B((Color3B *)&local_60,(Color4B *)&local_50);
                    /* try { // try from 00ab0b30 to 00bb0c5b has its CatchHandler @ 00ab0b30
                       catch() { ... } // from try @ 00ab0b30 with catch @ 00ab0b30
                       catch() { ... } // from try @ 00ab0cdc with catch @ 00ab0b30 */
  uStack_55 = (undefined1)local_60;
  uStack_54 = (undefined1)((ushort)local_60 >> 8);
  uStack_53 = local_5e;
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    *(ushort *)(this + 0x4c) = CONCAT11(local_5e,uStack_54);
    *(uint *)(this + 0x48) = CONCAT13(uStack_55,CONCAT12(uStack_56,local_58));
  }
  else {
    local_50 = param_1;
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearColor::GearColorValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearColor::GearColorValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearColor::GearColorValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearColor::GearColorValue>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)(this + 0x20),(piecewise_construct_t *)param_1,
                       (tuple *)&DAT_013cef0b,(tuple *)&local_50);
    *(ushort *)(lVar4 + 0x2c) = CONCAT11(uStack_53,uStack_54);
    *(uint *)(lVar4 + 0x28) = CONCAT13(uStack_55,CONCAT12(uStack_56,local_58));
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

