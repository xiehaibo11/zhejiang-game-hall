
/* cocos2d::ui::Layout::setBackGroundImage(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

void __thiscall
cocos2d::ui::Layout::setBackGroundImage
          (Layout *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          int param_3)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  Scale9Sprite *pSVar3;
  long *plVar4;
  Size *pSVar5;
  code *pcVar6;
  
                    /* try { // try from 00dafa60 to 00eafb1f has its CatchHandler @ 00daf9d8 */
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    return;
  }
  if (*(long *)(this + 0x538) == 0) {
    pSVar3 = (Scale9Sprite *)Scale9Sprite::create();
    *(Scale9Sprite **)(this + 0x538) = pSVar3;
    Scale9Sprite::setRenderingType(pSVar3,0);
    (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x538),0xffffffff,0xffffffff);
    (**(code **)(**(long **)(this + 0x538) + 200))
              (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
    Scale9Sprite::setRenderingType(*(Scale9Sprite **)(this + 0x538),this[0x530]);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x540) != param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
                    /* catch() { ... } // from try @ 00dafa54 with catch @ 00dafb04 */
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x540),(char *)pbVar2,uVar1);
  }
  *(int *)(this + 0x56c) = param_3;
                    /* try { // try from 00dafb20 to 00eafbeb has its CatchHandler @ 00dafb20
                       catch() { ... } // from try @ 00dafb20 with catch @ 00dafb20
                       catch() { ... } // from try @ 00dafbf4 with catch @ 00dafb20
                       catch() { ... } // from try @ 00dafd88 with catch @ 00dafb20 */
  if (param_3 == 1) {
    plVar4 = *(long **)(this + 0x538);
    pcVar6 = *(code **)(*plVar4 + 0x618);
  }
  else {
    if (param_3 != 0) goto LAB_00dafb4c;
    plVar4 = *(long **)(this + 0x538);
    pcVar6 = *(code **)(*plVar4 + 0x620);
  }
  (*pcVar6)(plVar4,param_1);
LAB_00dafb4c:
  pSVar5 = (Size *)(**(code **)(**(long **)(this + 0x538) + 0x168))();
  Size::operator=((Size *)(this + 0x570),pSVar5);
  (**(code **)(**(long **)(this + 0x538) + 200))
            (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
  Scale9Sprite::setPreferredSize(*(Size **)(this + 0x538));
  plVar4 = *(long **)(this + 0x538);
  if (plVar4 == (long *)0x0) {
                    /* try { // try from 00dafbec to 00eafbf3 has its CatchHandler @ 00dafdac */
    return;
  }
  (**(code **)(*plVar4 + 0x4c0))(plVar4,this + 0x578);
                    /* WARNING: Could not recover jumptable at 0x00dafbdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x538) + 0x490))(*(long **)(this + 0x538),this[0x57b]);
  return;
}

