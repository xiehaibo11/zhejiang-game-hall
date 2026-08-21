
/* cocos2d::ui::PageViewIndicator::setIndexNodesTexture(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

void __thiscall
cocos2d::ui::PageViewIndicator::setIndexNodesTexture
          (PageViewIndicator *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          int param_3)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  this[0x34c] = (PageViewIndicator)0x0;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x350) != param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x350),(char *)pbVar2,uVar1);
  }
  *(int *)(this + 0x368) = param_3;
  if (param_3 == 1) {
    (**(code **)(**(long **)(this + 0x330) + 0x590))(*(long **)(this + 0x330),param_1);
    puVar4 = *(undefined8 **)(this + 800);
    for (puVar3 = *(undefined8 **)(this + 0x318); puVar3 != puVar4; puVar3 = puVar3 + 1) {
      (**(code **)(*(long *)*puVar3 + 0x590))((long *)*puVar3,param_1);
    }
  }
  else if (param_3 == 0) {
    (**(code **)(**(long **)(this + 0x330) + 0x540))(*(long **)(this + 0x330),param_1);
    puVar4 = *(undefined8 **)(this + 800);
    for (puVar3 = *(undefined8 **)(this + 0x318); puVar3 != puVar4; puVar3 = puVar3 + 1) {
      (**(code **)(*(long *)*puVar3 + 0x540))((long *)*puVar3,param_1);
    }
  }
  rearrange(this);
  return;
}

