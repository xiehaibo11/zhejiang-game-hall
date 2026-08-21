
/* cocos2d::TextFieldTTF::initWithPlaceHolder(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float) */

undefined8 __thiscall
cocos2d::TextFieldTTF::initWithPlaceHolder
          (TextFieldTTF *this,basic_string *param_1,basic_string *param_2,float param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string *pbVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 in_register_00005004;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  float local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_54;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x6d0);
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar4 = *(ulong *)(param_1 + 8);
    pbVar1 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar1 = param_1 + 1;
      uVar4 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar1,uVar4);
  }
  plVar3 = (long *)FileUtils::getInstance();
  uVar4 = (**(code **)(*plVar3 + 0x128))(plVar3,param_2);
  if ((uVar4 & 1) != 0) {
                    /* try { // try from 00f55a08 to 01055a53 has its CatchHandler @ 00f55bf4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_80,param_2);
    local_64 = 0;
    local_60 = 0;
    local_58 = 0;
    local_54 = 0;
    local_68 = param_3;
    uVar4 = (**(code **)(*(long *)this + 0x530))(this,local_80);
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if ((uVar4 & 1) != 0) goto LAB_00f55a7c;
  }
                    /* try { // try from 00f55a5c to 01055acf has its CatchHandler @ 00f55bf0 */
  (**(code **)(*(long *)this + 0x560))(this,param_2);
  (**(code **)(*(long *)this + 0x570))(CONCAT44(in_register_00005004,param_3),this);
LAB_00f55a7c:
  if (*(int *)(this + 0x308) == 1) {
    Color3B::Color3B((Color3B *)local_80,(Color4B *)(this + 0x6e8));
    Node::setColor((Node *)this,(Color3B *)local_80);
  }
  else {
    Label::setTextColor((Label *)this,(Color4B *)(this + 0x6e8));
  }
  Label::setString((Label *)this,(basic_string *)this_00);
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 00f55ae0 to 01055aef has its CatchHandler @ 00f55bc8 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

