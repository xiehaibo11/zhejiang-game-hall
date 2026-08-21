
/* cocos2d::ui::EditBox::loadTexturePressed(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

void __thiscall
cocos2d::ui::EditBox::loadTexturePressed
          (EditBox *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          int param_3)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long *plVar3;
  Size *pSVar4;
  code *pcVar5;
  EditBox EVar6;
  
                    /* try { // try from 00dea2f4 to 00eea313 has its CatchHandler @ 00dea368 */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x578) != param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
                    /* try { // try from 00dea314 to 00eea38b has its CatchHandler @ 00de9dac */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x578),(char *)pbVar2,uVar1);
  }
  *(int *)(this + 0x5ac) = param_3;
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    Scale9Sprite::resetRender();
    EVar6 = (EditBox)0x0;
    goto LAB_00dea37c;
  }
  if (param_3 == 1) {
    plVar3 = *(long **)(this + 0x500);
                    /* catch() { ... } // from try @ 00dea2f4 with catch @ 00dea368 */
                    /* catch() { ... } // from try @ 00de9e70 with catch @ 00dea36c */
    pcVar5 = *(code **)(*plVar3 + 0x618);
LAB_00dea370:
                    /* catch() { ... } // from try @ 00de9e50 with catch @ 00dea370 */
    (*pcVar5)(plVar3,param_1);
  }
  else if (param_3 == 0) {
    plVar3 = *(long **)(this + 0x500);
    pcVar5 = *(code **)(*plVar3 + 0x620);
    goto LAB_00dea370;
  }
  EVar6 = (EditBox)0x1;
LAB_00dea37c:
  pSVar4 = (Size *)(**(code **)(**(long **)(this + 0x500) + 0x168))();
  Size::operator=((Size *)(this + 0x548),pSVar4);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  this[0x559] = EVar6;
  this[0x55c] = (EditBox)0x1;
  return;
}

