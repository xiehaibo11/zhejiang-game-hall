
/* cocos2d::FileUtils::getValueMapFromFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::FileUtils::getValueMapFromFile(FileUtils *this,basic_string *param_1)

{
  ulong uVar1;
  long lVar2;
  unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
  *in_x8;
  long lVar3;
  basic_string local_180 [8];
  ulong local_178;
  void *local_170;
  SAXParser aSStack_168 [8];
  undefined **local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)this + 0x40))(local_180);
  uVar1 = (ulong)((byte)local_180[0] >> 1);
  if (((byte)local_180[0] & 1) != 0) {
    uVar1 = local_178;
  }
  if (uVar1 == 0) {
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)in_x8 = 0;
    *(undefined8 *)(in_x8 + 0x18) = 0;
    *(undefined8 *)(in_x8 + 0x10) = 0;
    *(undefined4 *)(in_x8 + 0x20) = 0x3f800000;
  }
  else {
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    local_160 = &PTR__DictMaker_01c66d90;
    local_130 = 0x3f800000;
    uStack_e4 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    local_ec = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    local_108 = 0;
    uStack_110 = 0;
    local_118 = 0;
    uStack_120 = 0;
    local_128 = 0;
    uStack_40 = 0;
    local_48 = 0;
    uStack_50 = 0;
    local_58 = 0;
    uStack_60 = 0;
    local_68 = 0;
    uStack_70 = 0;
    local_78 = 0;
    uStack_80 = 0;
    local_88 = 0;
    uStack_90 = 0;
    local_98 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    uStack_c0 = 0;
    local_c8 = 0;
    local_158 = 1;
    SAXParser::SAXParser(aSStack_168);
    SAXParser::setDelegator(aSStack_168,(SAXDelegator *)&local_160);
    SAXParser::parse(aSStack_168,local_180);
    std::__ndk1::
    unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
    ::unordered_map(in_x8,(unordered_map *)&local_150);
    SAXParser::~SAXParser(aSStack_168);
    DictMaker::~DictMaker((DictMaker *)&local_160);
  }
  if (((byte)local_180[0] & 1) != 0) {
    operator_delete(local_170);
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

