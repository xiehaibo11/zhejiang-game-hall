
/* fairygui::GearColor::updateState() */

void __thiscall fairygui::GearColor::updateState(GearColor *this)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined2 local_80;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 local_7b;
  piecewise_construct_t *local_70;
  Value aVStack_68 [16];
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00ab1138 to 00bb11e3 has its CatchHandler @ 00ab1138
                       catch() { ... } // from try @ 00ab1138 with catch @ 00ab1138
                       catch() { ... } // from try @ 00ab11f0 with catch @ 00ab1138 */
  (**(code **)(**(long **)(this + 8) + 0x30))(aVStack_58,*(long **)(this + 8),2);
  uVar2 = cocos2d::Value::asUnsignedInt(aVStack_58);
  uVar3 = ToolSet::intToColor(uVar2);
  (**(code **)(**(long **)(this + 8) + 0x30))(aVStack_68,*(long **)(this + 8),3);
  uVar2 = cocos2d::Value::asUnsignedInt(aVStack_68);
  uVar4 = ToolSet::intToColor(uVar2);
  cocos2d::Color3B::Color3B((Color3B *)&local_80);
  cocos2d::Color3B::Color3B((Color3B *)((ulong)&local_80 | 3));
  uStack_7e = (undefined1)((ulong)uVar3 >> 0x10);
  local_7b = (undefined1)((ulong)uVar4 >> 0x10);
  local_80 = (undefined2)uVar3;
  uStack_7d = (undefined1)uVar4;
  uStack_7c = (undefined1)((ulong)uVar4 >> 8);
  local_70 = (piecewise_construct_t *)GController::getSelectedPageId(*(GController **)(this + 0x10))
  ;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearColor::GearColorValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearColor::GearColorValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearColor::GearColorValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearColor::GearColorValue>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x20),local_70,(tuple *)&DAT_013cef0b,
                     (tuple *)&local_70);
  *(ushort *)(lVar5 + 0x2c) = CONCAT11(local_7b,uStack_7c);
                    /* try { // try from 00ab11e4 to 00bb11ef has its CatchHandler @ 00ab1248 */
  *(uint *)(lVar5 + 0x28) = CONCAT13(uStack_7d,CONCAT12(uStack_7e,local_80));
  cocos2d::Value::~Value(aVStack_68);
                    /* try { // try from 00ab11f0 to 00bb1283 has its CatchHandler @ 00ab1138 */
  cocos2d::Value::~Value(aVStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

