
/* cocos2d::ui::AbstractCheckButton::loadTextures(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, cocos2d::ui::Widget::TextureResType) */

void __thiscall
cocos2d::ui::AbstractCheckButton::loadTextures
          (AbstractCheckButton *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          undefined8 param_2,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_3,
          undefined8 param_4,undefined8 param_5,int param_7)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long *plVar3;
  code *pcVar4;
  
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x548) != param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x548),(char *)pbVar2,uVar1);
  }
  *(int *)(this + 0x51c) = param_7;
  if (param_7 == 1) {
    plVar3 = *(long **)(this + 0x4f0);
    pcVar4 = *(code **)(*plVar3 + 0x590);
LAB_00dc301c:
    (*pcVar4)(plVar3,param_1);
  }
  else if (param_7 == 0) {
    plVar3 = *(long **)(this + 0x4f0);
    pcVar4 = *(code **)(*plVar3 + 0x540);
    goto LAB_00dc301c;
  }
  (**(code **)(*(long *)this + 0x690))(this);
  loadTextureBackGroundSelected(this,param_2,param_7);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x578) != param_3) {
    uVar1 = *(ulong *)(param_3 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar2 = param_3 + 1;
      uVar1 = (ulong)((byte)*param_3 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x578),(char *)pbVar2,uVar1);
  }
  *(int *)(this + 0x524) = param_7;
  if (param_7 == 1) {
                    /* try { // try from 00dc308c to 00ec313b has its CatchHandler @ 00dc2e28 */
    plVar3 = *(long **)(this + 0x500);
    pcVar4 = *(code **)(*plVar3 + 0x590);
  }
  else {
                    /* try { // try from 00dc3078 to 00ec308b has its CatchHandler @ 00dc30ec */
    if (param_7 != 0) goto LAB_00dc30a0;
    plVar3 = *(long **)(this + 0x500);
    pcVar4 = *(code **)(*plVar3 + 0x540);
  }
  (*pcVar4)(plVar3,param_3);
LAB_00dc30a0:
  (**(code **)(*(long *)this + 0x6a0))(this);
  loadTextureBackGroundDisabled(this,param_4,param_7);
  loadTextureFrontCrossDisabled(this,param_5,param_7);
  return;
}

